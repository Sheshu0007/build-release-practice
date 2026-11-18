# Lesson 5 — Build failure diagnosis

Practise distinguishing these failure classes:

| Failure stage | Typical evidence |
|---|---|
| Checkout | Repository/submodule download or authentication error |
| Configure | CMake cannot find compiler, generator or dependency |
| Compile | C++ compiler reports syntax/type/link errors |
| Test | CTest runs but one or more tests fail |
| Workflow logic | YAML syntax, condition, path filter or permission problem |

For each failure, record:
1. Workflow run URL and commit SHA.
2. Failed job and runner OS.
3. First meaningful error message.
4. Failed step: checkout, configure, build or test.
5. File and line, if reported.
6. Whether it reproduces locally.
7. Fix commit and rerun result.


