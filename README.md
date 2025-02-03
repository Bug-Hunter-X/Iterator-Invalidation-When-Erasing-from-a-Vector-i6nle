# Iterator Invalidation in C++ Vectors
This repository demonstrates a common error in C++ when removing elements from a `std::vector` while iterating using an index-based loop.  The issue arises because `vec.erase()` invalidates iterators pointing to elements beyond the erased element.

The `bug.cpp` file contains the erroneous code, which leads to undefined behavior. The `bugSolution.cpp` file provides a correct and efficient solution using iterators or `std::remove`.

**How to reproduce:**
1. Clone this repository.
2. Compile `bug.cpp`.
3. Run the executable. Observe that the results are unexpected and possibly inconsistent.
4. Compile `bugSolution.cpp`. The solution properly removes the desired element(s).