# Foundations · Bits, logic and machine state

This bridge joins Fall25 Chapters 2 and 3. It uses the older course materials to make the prerequisites for LC-3 explicit, without changing the Fall25 chapter numbering.

**Before you begin:** [Chapter 2](chapter-02.md). If you already know binary arithmetic, two’s complement, gates and registers, use the exercises to check what you can skip.

## Reading order

- [Data representation I: binary and signed values](../assets/materials/f24-representation-1.pdf#page=14) (41 pages · PDF · 738 KiB). [Download PDF](../assets/materials/f24-representation-1.pdf){: download="" }. Start at page 14 for binary integers; continue through signed representations and two’s complement. The opening pages overlap with the course introduction.
- [Data representation II: operations, overflow and floating point](../assets/materials/f24-representation-2.pdf) (24 pages · PDF · 329 KiB). [Download PDF](../assets/materials/f24-representation-2.pdf){: download="" }. Read operations, sign extension, overflow and bitwise logic first. Fixed/floating-point material on pages 19–23 is an extension.
- [Data representation III: ASCII and hexadecimal](../assets/materials/f24-representation-3.pdf) (14 pages · PDF · 545 KiB). [Download PDF](../assets/materials/f24-representation-3.pdf){: download="" }. Use pages 2–10 for characters and hexadecimal. Pages 11–13 describe historical course software.
- [Digital logic I: gates, circuits and registers](../assets/materials/f24-digital-logic-1.pdf) (30 pages · PDF · 1.6 MiB). [Download PDF](../assets/materials/f24-digital-logic-1.pdf){: download="" }. Read gates, combinational circuits, latches and registers in that order.
- [Digital logic II: memory and state machines](../assets/materials/f24-digital-logic-2.pdf) (17 pages · PDF · 1.1 MiB). [Download PDF](../assets/materials/f24-digital-logic-2.pdf){: download="" }. Continue from registers to memory and state machines. This prepares the LC-3 datapath discussion.

## How the two collections fit

Fall25 supplies the motivation and performance context. These older lectures supply the representation and logic details. Then [the von Neumann reading in Chapter 3](chapter-03.md) connects those components into a machine that fetches and executes instructions.

## Practice and projects

- [Data representation classroom exercises](../assets/materials/f24-practice1.pdf) (2 pages · PDF · 64 KiB). [Download PDF](../assets/materials/f24-practice1.pdf){: download="" }. Check representations, conversions, bitwise operations and overflow.
- [HW1: Data representation](../assets/materials/f24-hw1.pdf) (1 pages · PDF · 61 KiB). [Download PDF](../assets/materials/f24-hw1.pdf){: download="" }. Follow with the longer data-representation assignment.
- [Digital logic classroom exercises](../assets/materials/f24-practice2.pdf) (3 pages · PDF · 121 KiB). [Download PDF](../assets/materials/f24-practice2.pdf){: download="" }. Practice truth tables, gates, latches and multiplexers.
- [HW2: Digital logic](../assets/materials/f24-hw2.pdf) (1 pages · PDF · 83 KiB). [Download PDF](../assets/materials/f24-hw2.pdf){: download="" }. Apply digital logic and memory-size reasoning.

??? note "Original solutions and examples"

    Try the exercises first. These are archived teaching files; their code and answers have not all been revalidated.

    - [Data representation original solutions](../assets/materials/f24-practice1-solution.pdf) (2 pages · PDF · 81 KiB). [Download PDF](../assets/materials/f24-practice1-solution.pdf){: download="" }.
    - [HW1: original solution](../assets/materials/f24-hw1-solution.pdf) (2 pages · PDF · 74 KiB). [Download PDF](../assets/materials/f24-hw1-solution.pdf){: download="" }.
    - [Digital logic original solutions](../assets/materials/f24-practice2-solution.pdf) (4 pages · PDF · 6.8 MiB). [Download PDF](../assets/materials/f24-practice2-solution.pdf){: download="" }.
    - [HW2: original solution](../assets/materials/f24-hw2-solution.pdf) (3 pages · PDF · 219 KiB). [Download PDF](../assets/materials/f24-hw2-solution.pdf){: download="" }.


Original files retain historical dates and course instructions. Use them as archived learning materials; see [source notes](sources.md) and [known corrections](errata.md).

**Continue:** [Chapter 3: LC-3 components and ISA](chapter-03.md)
