# GitHub Pages Deployment Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Automatically build and publish the MkDocs course archive from `master` to GitHub Pages.

**Architecture:** A GitHub Actions build job installs the repository's pinned Python dependencies, runs a strict MkDocs build, and uploads the generated `site/` directory as a Pages artifact. A separate deployment job receives only the permissions needed to publish that artifact to the `github-pages` environment.

**Tech Stack:** MkDocs 1.6.1, Material for MkDocs 9.7.7, Python 3.14, GitHub Actions, GitHub Pages

---

## File structure

- Modify `mkdocs.yml`: declare the canonical GitHub Pages project URL.
- Create `.github/workflows/deploy-pages.yml`: build, package, and deploy the static site.
- Modify `docs/superpowers/plans/2026-10-20-github-pages-deployment.md`: mark completed steps while executing the plan.

### Task 1: Configure the canonical site URL

**Files:**
- Modify: `mkdocs.yml:1-4`

- [ ] **Step 1: Replace the placeholder comment with the public URL**

```yaml
site_name: ComputerArchitectureL0
site_url: https://iorioikawa.github.io/ComputerArchitecture-L0/
site_description: Computer architecture lecture notes, assignments and a connected LC-3 to C reading path.
```

- [ ] **Step 2: Build locally with the production URL**

Run:

```bash
.venv/bin/mkdocs build --strict
```

Expected: exit status 0 and `Documentation built` in the output. The existing informational Material for MkDocs banner may still appear.

- [ ] **Step 3: Verify generated canonical metadata and project-prefixed links**

Run:

```bash
rg -n 'https://iorioikawa.github.io/ComputerArchitecture-L0/' site/index.html
test -f site/assets/images/course-cover.png
```

Expected: the canonical project URL appears in `site/index.html`, and the cover image exists in the built site.

- [ ] **Step 4: Commit the URL configuration**

```bash
git add mkdocs.yml docs/superpowers/plans/2026-10-20-github-pages-deployment.md
git commit -m "docs: configure public site URL"
```

### Task 2: Add the GitHub Pages workflow

**Files:**
- Create: `.github/workflows/deploy-pages.yml`

- [ ] **Step 1: Create the deployment workflow**

```yaml
name: Deploy course archive to Pages

on:
  push:
    branches:
      - master
  workflow_dispatch:

permissions:
  contents: read

concurrency:
  group: pages
  cancel-in-progress: false

jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - name: Check out repository
        uses: actions/checkout@v4

      - name: Set up Python
        uses: actions/setup-python@v6
        with:
          python-version: "3.14"
          cache: pip

      - name: Install dependencies
        run: python -m pip install -r requirements.txt

      - name: Configure Pages
        uses: actions/configure-pages@v5

      - name: Build site
        run: python -m mkdocs build --strict

      - name: Upload Pages artifact
        uses: actions/upload-pages-artifact@v3
        with:
          path: site

  deploy:
    needs: build
    runs-on: ubuntu-latest
    permissions:
      pages: write
      id-token: write
    environment:
      name: github-pages
      url: ${{ steps.deployment.outputs.page_url }}
    steps:
      - name: Deploy to GitHub Pages
        id: deployment
        uses: actions/deploy-pages@v5
```

- [ ] **Step 2: Parse the workflow as YAML**

Run:

```bash
.venv/bin/python -c 'import yaml, pathlib; yaml.safe_load(pathlib.Path(".github/workflows/deploy-pages.yml").read_text())'
```

Expected: exit status 0 with no output. If `yaml` is unavailable, use Ruby's bundled parser instead:

```bash
ruby -e 'require "yaml"; YAML.load_file(".github/workflows/deploy-pages.yml", aliases: true)'
```

- [ ] **Step 3: Re-run the production build and inspect the diff**

Run:

```bash
.venv/bin/mkdocs build --strict
git diff --check
git diff -- .github/workflows/deploy-pages.yml mkdocs.yml
```

Expected: the build exits successfully, `git diff --check` produces no output, and the diff contains only the intended deployment configuration plus plan progress.

- [ ] **Step 4: Commit the deployment workflow**

```bash
git add .github/workflows/deploy-pages.yml docs/superpowers/plans/2026-10-20-github-pages-deployment.md
git commit -m "ci: deploy course archive to GitHub Pages"
```

### Task 3: Enable and verify the production deployment

**Files:**
- No repository files are created or modified.

- [ ] **Step 1: Configure the repository's Pages build source**

In `https://github.com/IoriOikawa/ComputerArchitecture-L0/settings/pages`, set **Build and deployment → Source** to **GitHub Actions**.

Expected: GitHub records GitHub Actions as the Pages source. If the repository already has this source selected, leave it unchanged.

- [ ] **Step 2: Push the verified commits**

Run:

```bash
git push origin master
```

Expected: the local `master` commits are accepted by `origin/master` and the deployment workflow starts.

- [ ] **Step 3: Verify the workflow result**

Open the repository's Actions page and inspect **Deploy course archive to Pages**.

Expected: both `build` and `deploy` complete successfully, and the deployment reports a public page URL.

- [ ] **Step 4: Verify the published site**

Open `https://iorioikawa.github.io/ComputerArchitecture-L0/` and check:

1. The homepage and course cover load.
2. The Materials Library navigation opens `/ComputerArchitecture-L0/library/`.
3. A course PDF opens or downloads successfully.
4. The page is served over HTTPS.

Expected: all four checks pass.

- [ ] **Step 5: Verify repository synchronization**

Run:

```bash
git status --short --branch
git rev-parse HEAD
git rev-parse origin/master
```

Expected: the worktree is clean, no ahead/behind marker is shown, and both commit hashes match.
