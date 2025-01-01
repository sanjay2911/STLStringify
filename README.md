Here’s the updated README with compilation and execution steps included:

---

# stringify

**A lightweight C++ library for converting STL containers into human-readable strings.**

---

### What is `stringify`?

`stringify` is a simple, header-only C++ library that enables you to convert STL containers, such as `vector`, `map`, `queue`, and others, into easy-to-read strings. It is particularly useful for debugging, logging, or any scenario in which you need quick insights into the contents of your containers.

---

### Key Features

- Supports **sequence containers**: `vector`, `deque`, `list`, `forward_list`.
- Works with **associative containers**: `set`, `unordered_set`, `map`, `unordered_map`.
- Handles **container adapters**: `stack`, `queue`, `priority_queue`.
- Header-only: Simply include `stringify.h`—no additional setup or dependencies required.
- Fast, lightweight, and efficient.

---

### Installation

To use `stringify`, just download `stringify.h` and include it in your project as shown:

```cpp
#include "stringify.h"
```

No additional installation steps are needed.

---

### How to Use

Here is a simple example showing how to use the library:

```cpp
#include "stringify.h"
#include <vector>
#include <map>
#include <stack>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3};
    std::map<std::string, int> mp = { {"A", 42}, {"B", 84} };
    std::stack<int> stk;
    stk.push(100);
    stk.push(200);

    std::cout << "Vector: " << stringifySeq(vec) << std::endl;
    std::cout << "Map: " << stringifyAssoc(mp) << std::endl;
    std::cout << "Stack: " << stringifyStack(stk) << std::endl;

    return 0;
}
```

**Output:**

```
Vector: [1, 2, 3]
Map: {A: 42, B: 84}
Stack: [200, 100]
```

---

### Supported Containers

#### Sequence Containers:
- `std::vector`
- `std::deque`
- `std::list`
- `std::forward_list`

#### Associative Containers:
- `std::set`
- `std::unordered_set`
- `std::map`
- `std::unordered_map`

#### Container Adapters:
- `std::stack`
- `std::queue`
- `std::priority_queue`

---

### Why Choose `stringify`?

- **Improved debugging**: Quickly visualize the content of your containers during debugging.
- **Clean logs**: Make logs more understandable with cleanly formatted container data.
- **Test-friendly**: Easily compare the string output of containers in test cases to validate results.

---

### Compilation & Execution

To compile and run a program that uses `stringify`, follow these steps:

1. **Download** `stringify.h` and place it in the same directory as your source code, or in a path where your compiler can access it.

2. **Create your source file** (e.g., `main.cpp`) and include `stringify.h`.

3. **Compile the program**. You can use any C++ compiler, like `g++` (for Linux/Mac) or any:

   **For Linux/Mac:**
   ```bash
   g++ main.cpp -o program
   ```

4. **Run the executable**:

   **For Linux/Mac:**
   ```bash
   ./program
   ```

---

### Contributing

We welcome contributions to improve the `stringify` library. You can help by:
- Submitting pull requests
- Reporting bugs
- Suggesting new features or improvements

Your contributions make `stringify` better!

---

### License

This project is licensed under the [GNU General Public License (GPL) v3.0](https://www.gnu.org/licenses/gpl-3.0.html). Please refer to the `LICENSE` file for further details.