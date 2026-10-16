# Chapter 7 · High-level languages and building C

Use the LC-3 experience to understand what a higher-level language adds. Bring in the older Linux and C-basics materials where the Fall25 lecture assumes tool familiarity.

**Before you begin:** [Chapter 6](chapter-06.md), especially assembly, object files and linking.

## Reading order

- [Introduction to high-level languages](../assets/materials/f25-ch07.pdf) (56 pages · PDF · 9.0 MiB). [Download PDF](../assets/materials/f25-ch07.pdf){: download="" }. Main lecture: language comparisons, a character-counting program and the C build process.
- [Linux command-line lecture](../assets/materials/f24-linux.pdf) (30 pages · PDF · 173 KiB). [Download PDF](../assets/materials/f24-linux.pdf){: download="" }. Read before trying command-line examples if the shell is unfamiliar.
- [Linux command reference sheet](../assets/materials/f24-linux-sheet.pdf) (1 pages · PDF · 88 KiB). [Download PDF](../assets/materials/f24-linux-sheet.pdf){: download="" }. Keep nearby as a compact command reference.
- [C basics](../assets/materials/f24-c-basics.pptx) (16 pages · PPTX · 246 KiB). PPTX only: variables and operations.
- [Control structures in C](../assets/materials/f24-c-controls.pptx) (15 pages · PPTX · 90 KiB). PPTX only: conditions and iteration.
- [C functions and runtime stack](../assets/materials/f24-c-functions.pptx) (11 pages · PPTX · 199 KiB). PPTX only: functions and the runtime stack.
- [IDE and debugging](../assets/materials/f24-c-debugging.pptx) (10 pages · PPTX · 258 KiB). PPTX only: a historical IDE walkthrough; focus on breakpoints and stepping concepts.

!!! warning "Linking command correction"
    On page 49, omit `-S`: use `gcc charcount.o -o charcount`. Use ordinary ASCII hyphens. See [the correction and GCC reference](errata.md#c-linking-command).

## How the older slides help

The four PPTX decks come from the old `didn_t use` directory. They fill practical C-language steps between the Fall25 overview and pointers. Their presence in the library does not imply they were taught in Fall25.

## Original small examples

These are experiments to inspect, not a validated portable C89 starter kit. In particular, the data-type experiment includes signed-overflow and binary-literal issues.

- [Original character arithmetic example](../assets/materials/f24-c-bitwise.c) (C · 1 KiB).
- [Original division and conversion example](../assets/materials/f24-c-divs.c) (C · 1 KiB).
- [Original data-type experiment](../assets/materials/f24-c-test.c) (C · 1 KiB).

## Practice and projects

- [C warm-up classroom exercises](../assets/materials/f24-practice4.pdf) (1 pages · PDF · 96 KiB). [Download PDF](../assets/materials/f24-practice4.pdf){: download="" }. Preferred archived warm-up set: loops, Fibonacci, matrix transpose and primes.
- [Earlier C warm-up exercise variant](../assets/materials/f24-c-warmup-legacy.pdf) (1 pages · PDF · 95 KiB). [Download PDF](../assets/materials/f24-c-warmup-legacy.pdf){: download="" }. Earlier warm-up variant, retained separately rather than assumed identical.

Original files retain historical dates and course instructions. Use them as archived learning materials; see [source notes](sources.md) and [known corrections](errata.md).

**Continue:** [Chapter 8: C, indirection and pointers](chapter-08.md)
