# Lesson 1 — Git foundations

Run these from the repository folder:

```powershell
git status
git branch
git switch -c feature/first-task
```

Make a small change, inspect it, and commit:

```powershell
git diff
git add src/main.cpp
git diff --cached
git commit -m "Complete first practice task"
```

Push the branch and open a PR:

```powershell
git push -u origin feature/first-task
```

Remember:
- `main` is the integration branch.
- `feature/*` branches hold individual changes.
- A PR proposes merging a feature branch into `main`.
- A successful push does not automatically mean a PR has been merged.
