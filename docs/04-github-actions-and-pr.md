# Lesson 4 — GitHub Actions and Pull Requests

The workflow is `.github/workflows/build-test-release.yml`.

It demonstrates:
- push to `main`;
- pull requests targeting `main`;
- manual runs using `workflow_dispatch`;
- path filters;
- least-privilege `contents: read`;
- concurrency cancellation;
- a build matrix for multiple operating systems, compilers and configurations;
- configure, build and test stages;
- uploading CMake cache diagnostics after a failure;
- a summary job that depends on the matrix result.

## PR exercise

1. Create `feature/workflow-practice`.
2. Change a harmless string in `src/main.cpp`.
3. Commit and push the branch.
4. Open a PR into `main`.
5. Open the Actions tab.
6. Compare the jobs and record which OS/compiler/configuration each job uses.
7. Merge only after reviewing the checks and changes.
