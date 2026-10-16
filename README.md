# Computer Architecture L0

A MkDocs Material course library connecting the Fall25 chapter sequence with earlier lectures, exercises and projects. The first audience is self-learners who have some programming experience.

## Preview locally

```sh
python3 -m venv .venv
.venv/bin/python -m pip install -r requirements.txt
.venv/bin/mkdocs serve
```

Open the local address printed by MkDocs. Build the static website with:

```sh
.venv/bin/mkdocs build --strict
```

The tested top-level dependencies are pinned in `requirements.txt`; transitive dependencies are not fully locked. The initial library was built with Python 3.14.3. Generated `site/` output and the virtual environment are ignored by Git.

## Content

- [Reading map](docs/library/index.md): Fall25 Chapters 0–8, a foundations bridge and C extensions.
- [Assignment index](docs/library/assignments.md): practice and projects connected to their prerequisites.
- [Known corrections](docs/library/errata.md): notes accompanying unchanged historical files.
- [Source coverage](docs/library/sources.md): attribution, downloads and remaining source reconciliation.
- [Maintainer record](materials/README.md): source selection, provenance and import boundaries.

Original downloads live in `docs/assets/materials/`. The library currently includes about 107 MiB of teaching documents. `materials/catalog.json` maps each downloaded file to its original relative path and SHA-256. Keep those records current when replacing files.

Chapter guide pages are searchable. PDF/PPTX contents are not automatically included in MkDocs search. The source PDFs retain historical classroom dates and logistics; they are not current self-study requirements.

## Publishing

No deployment is configured by this import. Set `site_url` to the actual public website URL before publishing. The previous value pointed to a university course-catalog page and has been removed. Review source notices and the unresolved versions in the maintainer record before preparing a public release.

The repository's MIT license does not override authorship or notices in imported teaching documents. See the individual source files and the source-coverage page.
