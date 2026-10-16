# Chapter 3 · LC-3 components and ISA

Build a machine model before memorizing instruction encodings. The older von Neumann lecture supplies the component-by-component bridge; Fall25 then develops the LC-3 view.

**Before you begin:** [Data representation and digital logic](foundations.md).

## Reading order

- [The von Neumann model and instruction cycle](../assets/materials/f24-von-neumann.pdf#page=4) (24 pages · PDF · 694 KiB). [Download PDF](../assets/materials/f24-von-neumann.pdf){: download="" }. Read pages 4–20 for the machine components and instruction cycle.
- [LC-3 components and ISA](../assets/materials/f25-ch03.pdf) (50 pages · PDF · 9.1 MiB). [Download PDF](../assets/materials/f25-ch03.pdf){: download="" }. Main lecture. Pages 7–20 introduce LC-3; 23–40 develop instruction examples. Pages 43–50 are architecture comparisons.
- [LC-3 instruction and addressing examples](../assets/materials/f24-lc3-instructions.pdf) (30 pages · PDF · 666 KiB). [Download PDF](../assets/materials/f24-lc3-instructions.pdf){: download="" }. Use as a second explanation of load/store addressing, NOT, branches and jumps; revisit specific instructions as needed.

## Learning connection

The same 16-bit memory contents can be interpreted as data, an address or an instruction. Connect each operation to the registers or memory locations it reads and writes. Carry that habit into the programming examples.

## Practice and projects

- [HW3: von Neumann model and LC-3](../assets/materials/f24-hw3.pdf) (2 pages · PDF · 85 KiB). [Download PDF](../assets/materials/f24-hw3.pdf){: download="" }. Instruction fields, memory interpretation and LC-3 concepts.
- [Assignment 0: LC-3 Survival Kit](../assets/materials/f25-a0.pdf) (2 pages · PDF · 5 KiB). [Download PDF](../assets/materials/f25-a0.pdf){: download="" }. Build the Survival Kit as a reference while progressing through Chapters 3–6.

??? note "Original solutions and examples"

    Try the exercises first. These are archived teaching files; their code and answers have not all been revalidated.

    - [HW3: original solution](../assets/materials/f24-hw3-solution.pdf) (2 pages · PDF · 104 KiB). [Download PDF](../assets/materials/f24-hw3-solution.pdf){: download="" }.


Original files retain historical dates and course instructions. Use them as archived learning materials; see [source notes](sources.md) and [known corrections](errata.md).

**Continue:** [Chapter 4: programming in LC-3](chapter-04.md)
