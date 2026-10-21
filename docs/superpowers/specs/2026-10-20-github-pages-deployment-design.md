# GitHub Pages deployment design

## Goal

Publish the MkDocs course archive automatically whenever a verified change reaches `master`. The first public address will be `https://iorioikawa.github.io/ComputerArchitecture-L0/`; a custom domain can be added later without changing the deployment architecture.

## Chosen approach

Use a GitHub Pages custom workflow. GitHub Actions will build the static site from the repository and hand the generated `site/` directory to GitHub Pages.

This is preferable to a VPS at this stage because the archive has no database or server-side behavior. It also keeps deployment next to the source history and avoids operating a web server, TLS certificates, system updates, and deployment credentials.

## Components and data flow

1. A push to `master`, or a manual workflow dispatch, starts the workflow.
2. The build job checks out the repository, installs the pinned top-level Python dependencies from `requirements.txt`, and runs `mkdocs build --strict`.
3. A successful build uploads `site/` as a GitHub Pages artifact.
4. A deployment job publishes that artifact to the `github-pages` environment.
5. GitHub Pages serves the archive at the project URL.

The workflow will use the official GitHub Pages actions and minimal permissions: repository contents are read-only during the build; only the deployment job receives `pages: write` and `id-token: write`.

## Configuration

- Set `site_url` in `mkdocs.yml` to the GitHub Pages project URL.
- Add `.github/workflows/deploy-pages.yml`.
- Use deployment concurrency so a newer deployment replaces an older in-progress deployment.
- Keep the generated `site/` directory out of Git; it remains a build artifact.
- Configure the repository's Pages source as **GitHub Actions**.

## Failure behavior

If dependency installation or the strict MkDocs build fails, no deployment occurs and the existing published site remains available. The failure is visible in the Actions log. Deployment permissions are isolated from the build job.

## Verification

- Run `mkdocs build --strict` locally before committing the workflow.
- Check the workflow syntax and committed diff.
- Push to `master` and confirm that the Pages workflow succeeds.
- Open the published URL and verify the homepage, cover image, navigation, and one downloadable course asset.

## Acceptance criteria

- A push to `master` automatically publishes the site.
- The public site loads at the GitHub Pages project URL over HTTPS.
- Internal navigation and static course downloads work under the `/ComputerArchitecture-L0/` path.
- A failed build cannot replace the last successful deployment.
