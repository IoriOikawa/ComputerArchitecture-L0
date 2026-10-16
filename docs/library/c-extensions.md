# C extensions · Files, structures, linked lists and recursion

Continue after Fall25 Chapter 8 with the older topics that extend the course. These are labeled extensions rather than invented Fall25 chapter numbers.

**Before you begin:** [Chapter 8](chapter-08.md), functions, pointers and arrays.

## Reading order

- [Standard I/O and files in C](../assets/materials/f24-io-files.pdf) (22 pages · PDF · 148 KiB). [Download PDF](../assets/materials/f24-io-files.pdf){: download="" }. Standard I/O, file handles and formatted/unformatted reads and writes.
- [Structures and dynamic allocation](../assets/materials/f24-structs.pdf) (14 pages · PDF · 97 KiB). [Download PDF](../assets/materials/f24-structs.pdf){: download="" }. User-defined structures and dynamic allocation.
- [Linked lists in C](../assets/materials/f24-linked-lists.pdf) (16 pages · PDF · 185 KiB). [Download PDF](../assets/materials/f24-linked-lists.pdf){: download="" }. Traversal and list operations using C structures.

## Cross-language projects

| Earlier work | Extension | What to compare |
| --- | --- | --- |
| LC-3 character I/O and loops | C file-based Caesar cipher | Character processing, input boundaries and control flow |
| LC-3 arrays and linked lists | C linked-list borrowing system | Data layout, indirection and updates |
| LC-3 calculator | C expression calculator | Representation and evaluation strategy; the two projects have different input languages |
| Subroutines and register saving | Recursion exercise | How repeated calls preserve state |

## Additional source material

- [Structure example](../assets/materials/f24-struct-example.c) (C · 1 KiB). Original structure demonstration.
- [Linked-list project starter](../assets/materials/f24-c-template.c) (C · 4 KiB). Project starter. It does not yet contain every field required by the borrowing-system specification; see the source note below.

!!! note "Starter/specification mismatch"
    The borrowing-system specification includes a reserved flag. The archived `LibRec` starter and completed example contain title, deadline and next fields, so they are useful starting points rather than complete implementations of that specification.

## Recursion as a next topic

- [Recursion and palindrome exercise (LaTeX source)](../assets/materials/f24-recursion-source.tex) (TEX · 3 KiB). Only a LaTeX source was found in the HW8 folder. It contains recursive counting and a palindrome task, but its internal heading says HW6 and the sample has a duplicated opening brace. Treat it as an editorial draft, not a ready worksheet.

The inspected older lecture set does not include a matching recursion deck. This is a specific gap for a future explanation linking C calls to Chapter 6's stack model.

## Practice and projects

- [HW7: C: Caesar cipher with file I/O](../assets/materials/f24-hw7.pdf) (1 pages · PDF · 70 KiB). [Download PDF](../assets/materials/f24-hw7.pdf){: download="" }. Caesar cipher with string processing and file I/O.
- [Project: library borrowing system in C](../assets/materials/f24-c-project.pdf) (2 pages · PDF · 95 KiB). [Download PDF](../assets/materials/f24-c-project.pdf){: download="" }. Linked-list library borrowing system.
- [Project: expression calculator in C](../assets/materials/f25-c-project.pdf) (6 pages · PDF · 33 KiB). [Download PDF](../assets/materials/f25-c-project.pdf){: download="" }. String-based expression calculator with precedence.
- [C calculator assignment source](../assets/materials/f25-c-project-source.md.txt) (TXT · 9 KiB). Editable assignment text, provided as a text download.

??? note "Original solutions and examples"

    Try the exercises first. These are archived teaching files; their code and answers have not all been revalidated.

    - [Caesar cipher original solution](../assets/materials/f24-caesar.c) (C · 4 KiB).
    - [Linked-list project original completed example](../assets/materials/f24-c-template-complete.c) (C · 3 KiB).


Original files retain historical dates and course instructions. Use them as archived learning materials; see [source notes](sources.md) and [known corrections](errata.md).

**Continue:** [Browse all assignments](assignments.md)
