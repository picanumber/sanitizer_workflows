# sanitizer_workflows

[![Memory](https://github.com/picanumber/sanitizer_workflows/actions/workflows/asan.yml/badge.svg)](https://github.com/picanumber/sanitizer_workflows/actions/workflows/asan.yml)
[![Threading](https://github.com/picanumber/sanitizer_workflows/actions/workflows/tsan.yml/badge.svg)](https://github.com/picanumber/sanitizer_workflows/actions/workflows/tsan.yml)
[![UB](https://github.com/picanumber/sanitizer_workflows/actions/workflows/usan.yml/badge.svg)](https://github.com/picanumber/sanitizer_workflows/actions/workflows/usan.yml)

Github workflows adding sanitizer checks to your repository.

These workflows run your testing suite instrumented with various sanitizer checks. This means that your tests will not only check your predefined conditions, but also verify that no violations of thread safety, memory operations or well-defined behavior occured at runtime.

Sanitizers are part of the clang and gcc compilers. Usage of specific workflows is described below.

## [Address sanitizer](https://clang.llvm.org/docs/AddressSanitizer.html)

AddressSanitizer is a fast memory error detector. It consists of a compiler instrumentation module and a run-time library. The tool can detect the following types of bugs:

* Out-of-bounds accesses to heap, stack and globals
* Use-after-free
* Use-after-return
* Use-after-scope
* Double-free, invalid free
* Memory leaks

To use the address sanitizer workflow:

```yaml
```

[Example address sanitizer failure](https://github.com/picanumber/sanitizer_workflows/runs/7161397146?check_suite_focus=true#step:7:37)

## [Thread sanitizer](https://clang.llvm.org/docs/ThreadSanitizer.html)

ThreadSanitizer is a tool that detects data races. It consists of a compiler instrumentation module and a run-time library.

To use the thread sanitizer workflow:

```yaml
```

[Example thread sanitizer failure](https://github.com/picanumber/sanitizer_workflows/runs/7161765319?check_suite_focus=true#step:7:48)

## [Undefined behavior sanitizer](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html)

UndefinedBehaviorSanitizer (UBSan) is a fast undefined behavior detector. UBSan modifies the program at compile-time to catch various kinds of undefined behavior during program execution, for example:

* Array subscript out of bounds, where the bounds can be statically determined
* Bitwise shifts that are out of bounds for their data type
* Dereferencing misaligned or null pointers
* Signed integer overflow
* Conversion to, from, or between floating-point types which would overflow the destination

To use the undefined behavior workflow:

```yaml
```

[Example UB sanitizer failure]()
