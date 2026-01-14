# Computational Paths: A Lean 4 Formalization

A Lean 4 formalization of weak ω-groupoid structure on types via computational paths.

> **For Reviewers**: This artifact accompanies the ITP 2026 submission  
> *"Types are Weak ω-Groupoids: A Lean 4 Formalization via Computational Paths"*

## Quick Start for Reviewers

```bash
# 1. Clone and enter directory
cd computational-paths

# 2. Build (takes ~3 minutes)
lake build

# 3. Verify main theorem
lake build ComputationalPaths.Path.OmegaGroupoid
```

**Key files to examine** (in order of importance):

| File | Description | Paper Section |
|------|-------------|---------------|
| `Path/OmegaGroupoid.lean` | Main theorem: `compPathOmegaGroupoid` | §6 |
| `Path/Rewrite/Step.lean` | 152 rewrite rules | §3.2 |
| `Path/OmegaGroupoid/Derived.lean` | Derived contractibility | §5.4 |
| `Path/Bicategory.lean` | Pentagon & triangle coherences | §6 |
| `Path/Basic/Core.lean` | Path structure definition | §3.1 |

## Overview

This formalization proves that types in Martin-Löf type theory carry a weak ω-groupoid structure, following the seminal constructions of Lumsdaine and van den Berg–Garner. The approach uses **computational paths** with an explicit term rewriting system.

### Key Features

- **Computational Paths**: Explicit syntactic witnesses for propositional equality
- **Term Rewriting System**: 152 reduction rules capturing path algebra
- **ω-Groupoid Tower**: Derivations at all levels (2-cells, 3-cells, 4-cells, ...)
- **Contractibility**: Derived at level 3 via canonical derivations
- **Coherences**: Pentagon, triangle, and interchange as explicit 3-cells

## Building

### Prerequisites

- **Lean 4** (version specified in `lean-toolchain`)
- **Lake** build system (included with Lean)
- **elan** (recommended): https://github.com/leanprover/elan

### Installation

```bash
# Install elan (manages Lean versions automatically)
curl https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh -sSf | sh

# Build the project (elan will install correct Lean version)
lake build
```

### Build Commands

```bash
# Full build (~3 minutes)
lake build

# Check specific module
lake build ComputationalPaths.Path.OmegaGroupoid

# Run all checks
lake build ComputationalPaths
```

## Project Structure

```
ComputationalPaths/
├── Path.lean                    # Main path module (imports all)
├── Path/
│   ├── Basic.lean               # Basic operations (refl, symm, trans)
│   ├── Basic/                   # Core definitions
│   │   ├── Core.lean            # Path structure           [§3.1]
│   │   ├── Congruence.lean      # congrArg, congrFun
│   │   ├── Context.lean         # Path contexts
│   │   ├── Globular.lean        # Globular cell structure
│   │   └── ...
│   ├── Rewrite/                 # Term rewriting system    [§3.2]
│   │   ├── Step.lean            # 152 single-step reductions ⭐
│   │   ├── Rw.lean              # Reflexive-transitive closure
│   │   ├── RwEq.lean            # Symmetric closure (path equivalence)
│   │   ├── Confluence.lean      # Confluence properties
│   │   └── ...
│   ├── OmegaGroupoid.lean       # Main ω-groupoid structure ⭐ [§4,§6]
│   ├── OmegaGroupoid/           # Extended developments
│   │   ├── Derived.lean         # Derived contractibility  ⭐ [§5]
│   │   ├── StepToCanonical.lean # Canonical derivations
│   │   └── ...
│   ├── Bicategory.lean          # Bicategorical 2-cells    [§6]
│   ├── Groupoid.lean            # Groupoid laws
│   ├── HIT/                     # Higher Inductive Types (43 files)
│   │   ├── Circle.lean          # S¹ and π₁(S¹) ≅ ℤ
│   │   ├── Torus.lean           # T² and π₁(T²) ≅ ℤ × ℤ
│   │   ├── KleinBottle.lean     # Klein bottle
│   │   └── ...                  # Spheres, projective spaces, etc.
│   └── Homotopy/                # Homotopy theory (30 files)
│       ├── FundamentalGroup.lean
│       ├── Loops.lean
│       └── ...
```

**Legend**: ⭐ = Key files for the main theorem | [§n] = Paper section reference

## Main Theorem

The main result is `compPathOmegaGroupoid` in `Path/OmegaGroupoid.lean`:

```lean
structure WeakOmegaGroupoid (A : Type u) where
  cells     : (n : Nat) → Type u := CellType A
  contract₃ : ∀ {a b : A} {p q : Path a b} (d₁ d₂ : Derivation₂ p q),
              Derivation₃ d₁ d₂
  contract₄ : ∀ ... (m₁ m₂ : Derivation₃ d₁ d₂), Derivation₄ m₁ m₂
  pentagon  : ∀ (f g h k), Derivation₃ (pentagonLeft f g h k) (pentagonRight ...)
  triangle  : ∀ (f g), Derivation₃ (triangleLeft f g) (triangleRight f g)

-- Main theorem: every type forms a weak ω-groupoid
def compPathOmegaGroupoid (A : Type u) : WeakOmegaGroupoid A := ...
```

### Paper Claims Verified

| Claim | Location in Code |
|-------|------------------|
| 152 rewrite rules | `Path/Rewrite/Step.lean` — count constructors |
| Level-3 contractibility | `Path/OmegaGroupoid/Derived.lean` — `contractibility₃` |
| Pentagon coherence | `Path/OmegaGroupoid.lean` — `pentagonCoherence` |
| Triangle coherence | `Path/OmegaGroupoid.lean` — `triangleCoherence` |
| π₁(S¹) ≅ ℤ | `Path/HIT/Circle.lean` |
| π₁(T²) ≅ ℤ × ℤ | `Path/HIT/Torus.lean` |

## Axioms

The formalization uses three axioms (discussed in §5.3 of the paper):

| Axiom | Level | Justification |
|-------|-------|---------------|
| `to_canonical` | 3 | Semantically justified by normalization + confluence |
| `contract₄` | 4 | Postulated; justified by derived level-3 contractibility |
| `contract_high` | 5+ | Postulated; justified by level-4 contractibility |

All groupoid laws and coherences (pentagon, triangle, interchange) are **proved**, not axiomatized.

To inspect axioms used:

```bash
# Check axioms in main theorem
lake env lean --run ComputationalPaths/Path/OmegaGroupoid.lean
```

## Statistics

| Component | Lines | Files |
|-----------|-------|-------|
| Core path operations (`Basic/`) | 1,200 | 6 |
| Rewrite rules (`Rewrite/Step.lean`) | 1,020 | 1 |
| Rewrite closures (`Rewrite/`) | 1,700 | 16 |
| ω-groupoid tower (`OmegaGroupoid/`) | 790 | 9 |
| Bicategorical structure | 330 | 1 |
| Groupoid structure | 370 | 1 |
| HIT examples | — | 43 |
| Homotopy theory | — | 30 |
| **Total** | **~37,500** | **115** |

## Verifying Specific Claims

```bash
# Verify the 152 rewrite rules exist
grep -c "| " ComputationalPaths/Path/Rewrite/Step.lean

# Build and check main theorem
lake build ComputationalPaths.Path.OmegaGroupoid

# Check π₁ calculations
lake build ComputationalPaths.Path.HIT.Circle
lake build ComputationalPaths.Path.HIT.Torus
```

## License

This formalization is provided for review purposes.
