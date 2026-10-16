# Chapter 6 · Assembly, subroutines and data structures

The 128-page Fall25 chapter combines several lecture units. Use the page ranges below to separate the assembly process from calling conventions and abstract data structures.

**Before you begin:** [Chapter 5+](chapter-05.md), especially labels and pseudo-operations.

## Reading order

- [Assembly, subroutines and abstract data structures](../assets/materials/f25-ch06.pdf) (128 pages · PDF · 3.8 MiB). [Download PDF](../assets/materials/f25-ch06.pdf){: download="" }. Main chapter, organized into the smaller reading blocks below.
- [Assembly format and symbol tables](../assets/materials/f24-assembly.pdf) (17 pages · PDF · 585 KiB). [Download PDF](../assets/materials/f24-assembly.pdf){: download="" }. A shorter companion for assembly format, pseudo-operations and symbol tables.

!!! warning "Read the stack/queue correction first"
    The source reverses the ordering labels on pages 90 and 108. A stack is LIFO; a queue is FIFO. See [the correction record](errata.md#stack-and-queue-order).

## Reading blocks

| Pages | Topic | Connection |
| --- | --- | --- |
| 3–29 | Assembly and symbol tables | Explains how Chapter 5+ notation becomes machine code |
| 32–59 | TRAP, subroutines, register saving and arguments | Prepares reusable operations for projects |
| 63–81 | Object files, linking and loading | Conceptual bridge to the C build process; tool support for `.EXTERNAL` must be checked |
| 82–106 | Abstract data structures and stacks | Preparation for the LC-3 calculator |
| 107–121 | Queues and wrap-around | Compare the operation contracts of stacks and queues |
| 122–128 | Virtual machines and JVM | Optional connection to higher-level execution models |

## Across the two languages

First use Assignment 2 to represent arrays and linked lists directly in LC-3 memory. After C pointers, return to the same structures in [the C extension](c-extensions.md). Compare the representation and traversal, rather than treating these as two unrelated topics.

## Practice and projects

- [Assignment 2: arrays and linked lists in LC-3](../assets/materials/f25-a2.pdf) (4 pages · PDF · 25 KiB). [Download PDF](../assets/materials/f25-a2.pdf){: download="" }. Arrays and linked lists at ISA level.
- [Project: stack-based LC-3 calculator](../assets/materials/f25-lc3-project.pdf) (6 pages · PDF · 36 KiB). [Download PDF](../assets/materials/f25-lc3-project.pdf){: download="" }. Stack-based integer calculator: subroutines, I/O, conversions and stack operations.
- [Project: Caesar cipher in LC-3](../assets/materials/f24-lc3-project.pdf) (2 pages · PDF · 82 KiB). [Download PDF](../assets/materials/f24-lc3-project.pdf){: download="" }. Alternative project: Caesar cipher in LC-3. Use as an I/O and control-flow exercise; the historical security claims in its introduction need revision.

Original files retain historical dates and course instructions. Use them as archived learning materials; see [source notes](sources.md) and [known corrections](errata.md).

**Continue:** [Chapter 7: high-level languages and building C](chapter-07.md)
