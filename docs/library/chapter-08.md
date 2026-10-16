# Chapter 8 · C, indirection and pointers

Follow Fall25 from C language conventions to indirection, strings, pointers and arrays. The older pointer lectures deepen argument passing and the relationship between arrays and pointers.

**Before you begin:** [Chapter 7](chapter-07.md), basic C control flow and functions.

## Reading order

- [C programming, indirection and pointers](../assets/materials/f25-ch08.pdf) (69 pages · PDF · 9.5 MiB). [Download PDF](../assets/materials/f25-ch08.pdf){: download="" }. Read pages 2–22 for setup and C89 conventions, then 39–69 for indirection, strings, pointers and arrays. Pages 23–38 are an optional historical incident discussion.
- [Pointers I: addresses and function arguments](../assets/materials/f24-pointers-1.pdf) (16 pages · PDF · 501 KiB). [Download PDF](../assets/materials/f24-pointers-1.pdf){: download="" }. Addresses, values and pointers as function arguments.
- [Pointers II: arrays and lifetime](../assets/materials/f24-pointers-2.pdf) (17 pages · PDF · 512 KiB). [Download PDF](../assets/materials/f24-pointers-2.pdf){: download="" }. Arrays, pointer relationships and lifetime; skip the historical schedule on page 17.

## Scope of the C-language statements

Fall25 explicitly discusses C89 conventions. Do not read its statement about the absence of a Boolean type as a statement about every version of C. The imported examples span multiple language conventions and have not been normalized to one compiler standard.

## A useful connection back to foundations

Use the two’s-complement conversion assignment to revisit representation through a C program. Then use pointer tracing to connect C expressions to the memory reasoning used in LC-3.

!!! note "Pointer exercise clarification"
    In the old pointer exercise, question 4 returns a pointer to a local array. Its lifetime is the key issue; the original explanation that the return type is not `char*` is misleading. See [known corrections](errata.md#returning-a-local-array).

## Practice and projects

- [HW6: C: decimal to two’s complement](../assets/materials/f24-hw6.pdf) (1 pages · PDF · 83 KiB). [Download PDF](../assets/materials/f24-hw6.pdf){: download="" }. Implement decimal-to-two’s-complement conversion using a character array.
- [C pointers classroom exercises](../assets/materials/f24-practice5.pdf) (2 pages · PDF · 80 KiB). [Download PDF](../assets/materials/f24-practice5.pdf){: download="" }. Trace pointer updates, arguments and string operations.

??? note "Original solutions and examples"

    Try the exercises first. These are archived teaching files; their code and answers have not all been revalidated.

    - [Two’s-complement converter original solution](../assets/materials/f24-twos-complement.c) (C · 2 KiB).
    - [C pointers original solutions](../assets/materials/f24-practice5-solution.pdf) (2 pages · PDF · 82 KiB). [Download PDF](../assets/materials/f24-practice5-solution.pdf){: download="" }.


Original files retain historical dates and course instructions. Use them as archived learning materials; see [source notes](sources.md) and [known corrections](errata.md).

**Continue:** [C extensions: files, structures, linked lists and recursion](c-extensions.md)
