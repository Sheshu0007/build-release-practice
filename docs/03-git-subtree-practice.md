# Lesson 3 — Git subtree practical

The ZIP has two sibling folders after extraction:

- `build-release-practice` — your main project repository.
- `shared-logging-component` — a separate component repository to create.

Keep both folders together in the same parent directory.

## A. Initialise the component repository

Open Git Bash or a terminal in `shared-logging-component`:

```bash
git init -b main
git add .
git commit -m "Initial shared logging component"
```

If Git asks for your name/email, configure `git config user.name` and
`git config user.email`, then repeat the commit.

## B. Add the component as a subtree

Open a terminal in `build-release-practice`:

```bash
git subtree add --prefix=vendor/shared-logging ../shared-logging-component main --squash
```

The `--prefix` value is the folder where the component is imported.
`--squash` compresses the component history into one import commit.

## C. Update the component source and pull

Edit `logger.cpp` in the sibling `shared-logging-component` folder. Then:

```bash
cd ../shared-logging-component
git add .
git commit -m "Add warning log function"
cd ../build-release-practice
git subtree pull --prefix=vendor/shared-logging ../shared-logging-component main --squash
```

## D. Export a change from the main repository

Make a change inside `vendor/shared-logging` in the main project, then commit it
in the main repository. Run:

```bash
git subtree split --prefix=vendor/shared-logging -b subtree-export
git push ../shared-logging-component subtree-export:main
```

## E. Inspect

```bash
git log --oneline --graph --decorate --all
git branch --all
git status
```

If `git subtree` is unavailable, use Git Bash and check `git subtree --help`.
Subtree is different from submodule; do not substitute one for the other.
