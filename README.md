# Build & Release Practice Repository

A fresh, standalone repository for learning Git, GitHub Actions, CMake, testing,
Git subtree workflows, feature branches, and pull requests.

## 1. Create this as a new GitHub repository

Extract this ZIP. Open a terminal inside `build-release-practice`:

```powershell
git init -b main
git add .
git commit -m "Initial build release practice project"
```

Create an empty repository on your GitHub account (do not initialise it with a
README), then connect and push:

```powershell
git remote add origin https://github.com/YOUR-USERNAME/YOUR-NEW-REPO.git
git push -u origin main
```

Replace the URL with your actual new repository URL.

## 2. Run the project locally

```powershell
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug --parallel
ctest --test-dir build -C Debug --output-on-failure
```

If CMake selects a generator whose build tool is missing, choose an installed
generator/toolchain. For example, use a Visual Studio Developer PowerShell for
MSVC, or use Ninja only if Ninja is installed.

## 3. Practise a feature branch and PR

```powershell
git switch -c feature/update-greeting
```

Change `src/main.cpp`, then:

```powershell
git status
git diff
git add src/main.cpp
git diff --cached
git commit -m "Update demo greeting"
git push -u origin feature/update-greeting
```

Create a Pull Request with base `main` and compare `feature/update-greeting`.
The GitHub Actions workflow runs on the PR.

## 4. Practise Git subtree

The ZIP contains a sibling folder named `shared-logging-component`.
Keep it beside `build-release-practice` after extraction. Follow
`docs/03-git-subtree-practice.md`.

## 5. Learning order

1. `docs/01-git-basics.md`
2. `docs/02-build-and-test.md`
3. `docs/03-git-subtree-practice.md`
4. `docs/04-github-actions-and-pr.md`
5. `docs/05-failure-diagnosis.md`

This repository is intentionally separate from any existing project.
