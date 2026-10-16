# Chapter 5 · Control flow, hazards and assembly notation

This chapter has three distinct Fall25 files. Read them by topic: control flow first, the fuller hazard treatment second, and the machine-code-to-assembly transition last.

**Before you begin:** [Chapter 4](chapter-04.md). For quantitative hazard examples, revisit [performance measurement](chapter-02.md).

## Reading order

- [Control flow and hazards](../assets/materials/f25-ch05.pdf) (36 pages · PDF · 2.4 MiB). [Download PDF](../assets/materials/f25-ch05.pdf){: download="" }. Main 36-page chapter: loops and systematic decomposition on pages 3–25, then an introduction to hazards.
- [Chapter 5 alternate: worked example and pipeline hazards](../assets/materials/f25-ch05-hazards.pdf#page=30) (62 pages · PDF · 2.6 MiB). [Download PDF](../assets/materials/f25-ch05-hazards.pdf){: download="" }. The source filename contains “拷貝”, but this is a distinct 62-page version. Pages 12–29 develop character counting; 30–62 expand pipeline hazards and speedup examples.
- [Chapter 5+: From machine code to assembly](../assets/materials/f25-ch05-assembly.pdf) (25 pages · PDF · 706 KiB). [Download PDF](../assets/materials/f25-ch05-assembly.pdf){: download="" }. Chapter 5+ introduces labels, comments and pseudo-operations, then revisits character counting in assembly notation.

## Two complementary paths

For a first programming pass, follow control flow and Chapter 5+ into Chapter 6. For a performance pass, read the 62-page hazard version alongside Chapters 1–2. The hazard slides discuss broader processor concepts; do not assume every mechanism describes the LC-3 simulator you use.

## Worked-example files

- [Character-counting example](../assets/materials/f24-count-occurrences.txt) (TXT · 1 KiB). Archived example to compare with the character-counting slides; not newly executed.
- [Character-counting input data](../assets/materials/f24-count-input.txt) (TXT · 1 KiB). Companion input data.

## Practice and projects

- [Assignment 1: Fibonacci](../assets/materials/f25-a1.pdf) (1 pages · PDF · 3 KiB). [Download PDF](../assets/materials/f25-a1.pdf){: download="" }. Fibonacci in LC-3. State your indexing convention before comparing results.
- [HW4: LC-3 assembly: bit counting and tracing](../assets/materials/f24-hw4.pdf) (1 pages · PDF · 63 KiB). [Download PDF](../assets/materials/f24-hw4.pdf){: download="" }. Bit counting, instruction tracing and machine-code reasoning.
- [HW5: LC-3 assembly: division and GCD](../assets/materials/f24-hw5.pdf) (1 pages · PDF · 82 KiB). [Download PDF](../assets/materials/f24-hw5.pdf){: download="" }. Division and Euclidean GCD.
- [LC-3 bit operations classroom exercises](../assets/materials/f24-practice3.pdf) (1 pages · PDF · 63 KiB). [Download PDF](../assets/materials/f24-practice3.pdf){: download="" }. Further bit-rotation and bit-reversal practice.

??? note "Original solutions and examples"

    Try the exercises first. These are archived teaching files; their code and answers have not all been revalidated.

    - [HW4: original solution](../assets/materials/f24-hw4-solution.pdf) (2 pages · PDF · 63 KiB). [Download PDF](../assets/materials/f24-hw4-solution.pdf){: download="" }.
    - [HW5: original solution](../assets/materials/f24-hw5-solution.pdf) (1 pages · PDF · 23 KiB). [Download PDF](../assets/materials/f24-hw5-solution.pdf){: download="" }.
    - [Bit rotation original example](../assets/materials/f24-rotate.txt) (TXT · 2 KiB).
    - [Bit reversal original example](../assets/materials/f24-reverse.txt) (TXT · 1 KiB).


Original files retain historical dates and course instructions. Use them as archived learning materials; see [source notes](sources.md) and [known corrections](errata.md).

**Continue:** [Chapter 6: assembly, subroutines and data structures](chapter-06.md)
