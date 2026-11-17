# Lesson 2 — CMake configure, build and test

```powershell
cmake -S . -B build-debug -DCMAKE_BUILD_TYPE=Debug
cmake --build build-debug --config Debug --parallel
ctest --test-dir build-debug -C Debug --output-on-failure
```

Release build:

```powershell
cmake -S . -B build-release -DCMAKE_BUILD_TYPE=Release
cmake --build build-release --config Release --parallel
ctest --test-dir build-release -C Release --output-on-failure
```

Keep separate build directories when comparing configurations. CMake stores
generator and compiler choices in its cache.

Exercise: temporarily make `add()` return `left + right + 1`, rebuild and run
CTest. Identify the failing test. Restore the correct code afterwards.
