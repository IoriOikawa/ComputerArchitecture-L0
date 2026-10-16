# Course Materials Library Implementation Plan

> For agentic workers: use superpowers:executing-plans for inline execution. The user selected the materials-library direction on 2026-10-16.

**Goal:** Combine the Fall25 chapter sequence with relevant older lectures and assignments in a browsable MkDocs library.

**Architecture:** Preserve original teaching documents as downloads. Write chapter landing pages that explain reading order and connect exercises to their prerequisites. Keep import provenance and unresolved versions in a repository-only maintenance catalog.

**Tech Stack:** Existing MkDocs Material, Markdown, PDF/PPTX/source downloads, JSON provenance.

## Tasks

- [x] Read chapter PDFs and older lecture/assignment contents; inspect reported errors visually.
- [x] Identify identical files by SHA-256, distinguish nonidentical alternate versions, and identify materials mixed with student submissions.
- [x] Copy the selected chapter PDFs, older lecture PDFs, four slide-only PPTX decks, teaching exercises, original solutions and teaching examples into `docs/assets/materials/` without modifying their bytes.
- [x] Create `docs/library/index.md`, chapter pages 00–08, a foundations bridge, C extensions, an assignment index, source notes and errata. Preserve the Fall25 chapter numbering.
- [x] Write `materials/catalog.json` with source-relative paths, download paths, page counts and hashes. Write `materials/source-inventory.json` for lecture/source variants and explicit disposition. Omit personal student submission paths from tracked records.
- [x] Add explicit navigation and a homepage library link; exclude this plan from the built site. Update `ROADMAP.md` to reflect the user's selected direction.
- [x] Run `.venv/bin/mkdocs build --strict`. Check every imported hash against its source and every generated local link against the built site, including fragments in HTML pages.
- [x] Inspect the library overview and a representative chapter in the browser; verify a PDF link and a narrow viewport when available.
- [x] Commit the reviewed materials and metadata on `codex/course-library`, leaving the original course folders untouched.

## Editorial decisions

- Fall25 Chapters 0–8 remain the main sequence. Chapter 5+ and the 62-page Chapter 5 alternate remain distinct supplements.
- Insert data representation and digital logic before Chapter 3; use the old von Neumann material as its bridge. Extend Chapter 8 with old pointers, file I/O, structs, linked lists and the recursion assignment source.
- Keep English reader-facing text to match the existing website, with Chinese maintenance notes where useful for the owner.
- Historical deadlines and submission portals in original files are archival, not current requirements.
- Original answers and examples are labeled as archival, not newly verified implementations. Known mistakes receive specific errata.
- PDF copies do not imply that matching Keynote/PPTX sources are identical or fully reconciled. Unexported Keynote drafts remain recorded for later comparison.
- Course assessments and submissions are outside this teaching-library import. Reference excerpts with unresolved provenance are recorded separately rather than treated as authored lecture decks.

## Verification scope

This task verifies file integrity, navigation, topic mapping and the identified errata. It does not certify every historical slide, execute every example, export every Keynote draft, or deploy the website.

## Review result

Independent read-only review found no material issues in chapter mappings, assignment descriptions, provenance, privacy boundaries or coverage claims. The browser check confirmed the guide pages; the in-app PDF viewer was blank, so explicit download links were added and HTTP file delivery was checked separately.
