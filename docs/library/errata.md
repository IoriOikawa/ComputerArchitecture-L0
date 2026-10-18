# Known corrections and reading notes

These notes track resolved corrections and remaining reading issues in the collection; they are not a comprehensive technical review. Page numbers below are PDF page numbers. The Chapter 6 and Chapter 7 corrections were verified and their website PDFs updated on **October 18, 2026**. The other notes remain open.

## Stack and queue order

**Fixed in the current chapter PDF.** In [Assembly, subroutines and abstract data structures](../assets/materials/f25-ch06.pdf), page 90 now labels a stack “First In, Last Out”, and page 108 labels a queue “First In, First Out”. These are correct:

- **Stack:** last in, first out (LIFO).
- **Queue:** first in, first out (FIFO).

The earlier version reversed these labels. Both corrected slides were visually checked, and the website now serves the corrected chapter PDF. Definitions: [NIST stack](https://xlinux.nist.gov/dads/HTML/stack.html) and [NIST queue](https://xlinux.nist.gov/dads/HTML/queue.html).

## C linking command

**Fixed in the current chapter PDF.** In [Introduction to high-level languages](../assets/materials/f25-ch07.pdf), page 49 now shows the correct linking command:

```sh
gcc charcount.o -o charcount
```

The earlier version included `-S`, which stops before assembly and linking. The corrected slide uses ASCII hyphens and was visually checked. The website now serves the corrected chapter PDF. See [GCC output-stage options](https://gcc.gnu.org/onlinedocs/gcc/Overall-Options.html).

## Returning a local array

In [C pointers classroom exercises](../assets/materials/f24-practice5.pdf), question 4's `toLowerCase` function already declares a `char*` return type. The function returns the address of a local array whose lifetime ends when the function returns. The original explanation focuses on the wrong cause. Review object lifetime before using this exercise and its original solution.

## C versions and archived examples

The Fall25 Chapter 8 discussion of Boolean values and declaration placement is explicitly about C89. Other archived examples use later conventions, and some contain intentional or uncorrected pitfalls. A single compiler-language setting has not yet been validated across the collection. In the C calculator task, the specified division and 32-bit range are project requirements, not properties to assume for every historical C environment.

## Assignment and source caveats

- The Fibonacci task does not fix an indexing convention. Record your starting values and indexing before comparing a result.
- The LC-3 calculator introduction mentions subtraction, while its command list specifies unary negation. Follow the explicit command list for this archived version; clarify binary subtraction in a future revision.
- The original C borrowing-system starter and completed example omit the reserved field required by the project specification.
- The recursion task is a LaTeX draft without a matching PDF in the inspected folder. Its heading and sample brace structure need editing.
- The Survival Kit describes a provided worksheet template, but no separate template was found in this import.
- The LC-3 Caesar-cipher project is useful programming practice. Its introductory claims about secrecy and detecting altered ciphertext should not be used as security guarantees.

## Version notes

The 62-page Chapter 5 alternate and 25-page Chapter 5+ contain distinct teaching material. Both remain linked alongside the main 36-page Chapter 5. Files with “copy” in their names were not discarded without comparison.

Several Fall25 Assignment 0 exports contain RTF control text. The library uses the readable `Assignment0_Survival_Kit.pdf`. Alternate exports remain in the original course folder and are recorded in the maintenance inventory.
