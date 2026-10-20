_This project has been created as part of the 42 curriculum by syee._

_AI was heavily used to rewrite my notes written in this README file, the original unedite version can be found on my github : https://github.com/shun2727/42-CPP-Modules.git CPP00->oldREADME.md_

# C++ Learning Notes — CPP00

Notes and references for learning C++ fundamentals, with a focus on namespaces, compilation, classes, constructors, strings, and the CPP00 exercises.

---

# 1\. Namespaces

**Reference:** [GeeksforGeeks — Namespace in C++](<https://www.geeksforgeeks.org/cpp/namespace-in-c/>)

A namespace groups related identifiers, such as functions, classes, and variables, under a named scope. It helps prevent naming conflicts when different parts of a program use the same names.

## 1.1 Declaring and using a namespace

```
#include <iostream>

namespace Room1 {
    void greet() {
        std::cout << "Hello from Room 1!" << std::endl;
    }
}

int main() {
    Room1::greet();
    return 0;
}
```

The scope resolution operator `::` specifies which namespace contains the function.

## 1.2 Multiple namespaces

Different namespaces can contain functions with identical names.

```
#include <iostream>

namespace Room1 {
    void greet() {
        std::cout << "Hello from Room 1!" << std::endl;
    }
}

namespace Room2 {
    void greet() {
        std::cout << "Hello from Room 2!" << std::endl;
    }
}

int main() {
    Room1::greet();
    Room2::greet();

    return 0;
}
```

Output:

```
Hello from Room 1!
Hello from Room 2!
```

## 1.3 Using a namespace directive

```
using namespace Room1;

int main() {
    greet();
    return 0;
}
```

`using namespace Room1;` allows names from `Room1` to be used without writing `Room1::` each time.

**Best practice:** Prefer explicitly qualifying names, especially in header files, to avoid naming conflicts.

For example, use `std::cout` instead of introducing `using namespace std;` globally.

---

# 2\. Template Implementation Files (`.tpp`)

A `.tpp` file is commonly used to contain the implementation of C++ templates.

Unlike `.cpp` files, `.tpp` files are not a special file type defined by the C++ standard. The extension is a convention.

## Why use a `.tpp` file?

Templates often need their definitions to be visible wherever they are instantiated. Separating declarations and implementations can improve code organization, but the implementation file is usually included by the header.

Example:

**Array.hpp**

```
#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
public:
    void print() const;
};

#include "Array.tpp"

#endif
```

**Array.tpp**

```
template <typename T>
void Array<T>::print() const {
    // Implementation
}
```

The `.tpp` file is included at the end of the header so the compiler can see the template definition when needed.

---

# 3\. Include Guards

**Reference:** [GeeksforGeeks — Include Guards in C](<https://www.geeksforgeeks.org/cpp/include-guards-in-c/>)

Include guards prevent the same header's contents from being processed multiple times within a single translation unit.

They help prevent problems such as class redefinition errors.

## Example

```
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
public:
    void makeSound();
};

#endif
```

### How it works

- `#ifndef ANIMAL_HPP`: Checks whether `ANIMAL_HPP` has not been defined.
- `#define ANIMAL_HPP`: Defines the macro so subsequent inclusions skip the contents.
- `#endif`: Ends the conditional block.

The macro name can be chosen by the programmer, but it should be unique enough to avoid conflicts.

Another option is `#pragma once`, which is widely supported by modern compilers but is not part of the C++ standard.

---

# 4\. Compilation

GCC stands for **GNU Compiler Collection**. It includes compilers for C, C++, and other languages.

## 4.1 Common commands

| Command | Purpose | Automatically links the C++ standard library? |
| --- | --- | --- |
| `gcc file.c -o program` | Compiles C | Not applicable to ordinary C++ library linking |
| `g++ file.cpp -o program` | Compiles C++ | Yes |
| `gcc file.cpp -o program` | Compiles C++ source by file extension | Generally no; additional linking may be required |
| `cc file.c -o program` | Compiles C using the system's C compiler driver | Depends on the compiler and environment |

For C++ programs, **use****`g++`** unless you have a specific reason to use another compiler driver.

Example:

```
g++ -Wall -Wextra -Werror main.cpp -o program
./program
```

These options enable common compiler warnings and treat warnings as errors.

Note that the C++ standard library is distinct from the C standard library. A C++ program can use both.

---

# 5\. CPP00 — Exercise 00

## 5.1 Input and output

**Reference:** [W3Schools — C++ User Input](<https://www.w3schools.com/cpp/cpp_user_input.asp>)

```
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;

    int number;
    std::cin >> number;

    return 0;
}
```

- `std::cout`: Writes output.
- `std::cin`: Reads input.
- `std::endl`: Inserts a newline and flushes the output buffer.
- `'\n'`: Inserts a newline without explicitly flushing the buffer.

## 5.2 `toupper()`

**Reference:** [GeeksforGeeks —](<https://www.geeksforgeeks.org/cpp/toupper-in-cpp/>)[`toupper()`](<https://www.geeksforgeeks.org/cpp/toupper-in-cpp/>)[in C++](<https://www.geeksforgeeks.org/cpp/toupper-in-cpp/>)

`std::toupper()` converts a lowercase character to its uppercase equivalent when one exists.

Header:

```
#include <cctype>
```

Example:

```
char c = 'a';
char upper = static_cast<char>(std::toupper(
    static_cast<unsigned char>(c)
));
```

The cast to `unsigned char` ensures the argument is valid for `std::toupper()` when working with potentially negative `char` values.

## 5.3 C++ standards

**Reference:** [GeeksforGeeks — C++ Standards and Implementations](<https://www.geeksforgeeks.org/cpp/cpp-standards-and-implementations/>)

C++ has several standardized versions, including:

- C++98
- C++03
- C++11
- C++14
- C++17
- C++20
- C++23

The compiler's default standard depends on the compiler version and configuration. You can select a standard explicitly:

```
g++ -std=c++98 main.cpp -o program
```

Replace `c++98` with the required version, such as `c++11` or `c++17`.

For 42 projects, always follow the standard specified by the subject.

## 5.4 Types of `for` loops

### Traditional `for` loop

Useful when you need an index or control over the iteration.

```
for (int i = 0; i < 5; i++) {
    std::cout << i << '\n';
}
```

### Range-based `for` loop

Iterates through elements without manually managing an index.

```
int numbers[] = {1, 2, 3, 4, 5};

for (int number : numbers) {
    std::cout << number << '\n';
}
```

This reduces the chance of index-related errors. It is available from C++11 onward.


---

# 6\. CPP00 — Exercise 01

## 6.1 Classes and objects

**Reference:** [W3Schools — C++ Classes](<https://www.w3schools.com/cpp/cpp_classes.asp>)

A class defines a type containing data members and member functions.

```
#include <string>

class MyClass {
public:
    int my_num;
    std::string my_string;
};
```

- **Data members:** Variables belonging to a class.
- **Member functions:** Functions belonging to a class, also commonly called methods.
- **Access specifiers:** `public`, `private`, and `protected` control access to members.

## 6.2 Strings

**Reference:** [cplusplus.com —](<https://cplusplus.com/reference/string/string/>)[`std::string`](<https://cplusplus.com/reference/string/string/>)

C++ provides `std::string` for working with strings.

```
#include <string>

std::string name = "Alice";
```

Useful operations include:

- `name.length()` or `name.size()`: Returns the number of characters.
- `name.substr()`: Extracts a substring.
- `name.compare()`: Compares strings.
- `name[0]`: Accesses a character by index.

Unlike C-style string literals, characters in a modifiable `std::string` can be changed:

```
std::string s = "Hello";
s[0] = 'Y';  // s becomes "Yello"
```

However, modifying a string literal directly is not allowed:

```
// Undefined behavior if you attempt to modify a string literal:
char *s = (char *)"Hello";
s[0] = 'Y';
```

## 6.3 Formatting output

**Reference:** [cplusplus.com —](<https://cplusplus.com/reference/iomanip/>)[`<iomanip>`](<https://cplusplus.com/reference/iomanip/>)

The `<iomanip>` header provides stream manipulators for formatting output.

```
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(5) << 42 << '\n';
    std::cout << std::setfill('0') << std::setw(5) << 42 << '\n';
}
```

Output:

```
   42
00042
```

- `std::setw(n)`: Sets the minimum field width for the next formatted output field.
- `std::setfill(c)`: Sets the character used to fill padding.

## 6.4 Switch statements

**Reference:** [W3Schools — C++ Switch](<https://www.w3schools.com/cpp/cpp_switch.asp>)

A `switch` statement selects a branch based on an integral, enumeration, or suitable converted expression.

```
switch (choice) {
    case 1:
        std::cout << "Option 1";
        break;
    case 2:
        std::cout << "Option 2";
        break;
    default:
        std::cout << "Unknown option";
        break;
}
```

The `break` statement prevents execution from falling through to the next case.

## 6.5 Constructors

**References:**

- [W3Schools — C++ Constructors](<https://www.w3schools.com/cpp/cpp_constructors.asp>)
- [GeeksforGeeks — Default Constructors](<https://www.geeksforgeeks.org/cpp/default-constructors-in-cpp/>)
- [cppreference — Constructors](<https://en.cppreference.com/w/cpp/language/constructor>)

A constructor is a special member function called when an object is initialized.

### Default constructor

A constructor that can be called without arguments is a default constructor.

```
class PhoneBook {
public:
    int size = 0;

    PhoneBook() = default;
};
```

If no constructor is declared, the compiler may implicitly declare a default constructor, provided the relevant conditions are met.

A default constructor does not automatically set every built-in type member to zero. For example, an uninitialized `int` data member may have an indeterminate value.

### Parameterized constructor

A parameterized constructor accepts arguments to initialize an object with specific values.

```
class PhoneBook {
public:
    int size;

    PhoneBook(int initial_size) : size(initial_size) {}
};
```

Usage:

```
PhoneBook pb(3);
```

Here, `size` is initialized to `3`.

Use a parameterized constructor when the caller needs to provide initial values or when an object must be initialized according to specific rules.

### Member initializer lists

A member initializer list initializes members before the constructor body executes.

```
class Example {
public:
    int x;
    const int y;

    Example() : x(0), y(5) {}
};
```

Member initializer lists are required for certain members, such as reference members and `const` members, which cannot be assigned a value after their initialization.

They are also generally preferred for initializing class-type members directly.

### Initializing arrays of primitive types

```
class Example {
public:
    int numbers[5];

    Example() : numbers{} {}
};
```

`numbers{}` value-initializes all array elements to zero.

Alternatively, a default member initializer can be used:

```
class Example {
public:
    int numbers[5] = {};
};
```

## 6.6 Comparing strings

**Reference:** [DigitalOcean — Compare Strings in C++](<https://www.digitalocean.com/community/tutorials/compare-strings-in-c-plus-plus>)

`std::string` overloads comparison operators, allowing strings to be compared naturally.

```
std::string a = "apple";
std::string b = "banana";

if (a == b) {
    // Strings are equal
}

if (a < b) {
    // Lexicographical comparison
}
```

This avoids needing `strcmp()` for ordinary `std::string` comparisons.

## 6.7 Member functions

A **member function** is a function associated with a class.

```
class Animal {
public:
    void makeSound() {
        std::cout << "Sound!";
    }
};
```

It can be called through an object:

```
Animal animal;
animal.makeSound();
```

## 6.8 Copy constructors

A copy constructor initializes a new object from an existing object of the same type.

```
std::string a = "Hello";
std::string b(a);
```

Here, `b` is initialized by copying `a`.

Similarly:

```
std::string b = a;
```

Both forms initialize a new string from `a`; they do not mean that the copy constructor is invoked every time you assign to an already-existing string.

For example:

```
std::string a = "Hello";
std::string b;

b = a;  // Copy assignment, not copy construction
```

## 6.9 Initializing objects inside functions

Local objects normally have automatic storage duration:

```
void example() {
    PhoneBook pb;
}
```

`pb` is destroyed when the function exits.

Dynamic allocation creates an object whose lifetime is managed separately:

```
PhoneBook *pb = new PhoneBook();

// Use pb

delete pb;
```

The dynamically allocated object remains alive until it is deleted. Forgetting to delete it can cause a memory leak.

In modern C++, prefer automatic storage duration or smart pointers such as `std::unique_ptr` when dynamic allocation is needed.

---

# 7\. Naming Conventions

Different projects use different naming styles. One example is the Google C++ Style Guide.

| Element | Example |
| --- | --- |
| Class | `PhoneBook` |
| Function | `calculateArea()` |
| Local variable | `student_count` |
| Class data member in Google style | `student_count_` |
| Constant in Google style | `kMaxStudents` |

Naming conventions are guidelines, not language requirements. Follow the convention required by your project or school.

---

# 8\. Standard Library Headers

The following headers are part of the C++ Standard Library:

| Header | Examples |
| --- | --- |
| `<iostream>` | `std::cout`, `std::cin` |
| `<string>` | `std::string`, `std::to_string()`, `std::string::substr()` |
| `<cctype>` | `std::isdigit()`, `std::toupper()` |
| `<iomanip>` | `std::setw()`, `std::setfill()` |
| `<cstdio>` | `std::printf()`, `std::scanf()` |
| `<sstream>` | `std::stringstream`, `std::istringstream` |

A standard header is an official part of the language's library. A function working in your compiler does not necessarily mean it is standard.

---

# 9\. Further Reading

- [W3Schools — C++ User Input](<https://www.w3schools.com/cpp/cpp_user_input.asp>)
- [GeeksforGeeks —](<https://www.geeksforgeeks.org/cpp/toupper-in-cpp/>)[`toupper()`](<https://www.geeksforgeeks.org/cpp/toupper-in-cpp/>)
- [GeeksforGeeks — C++ Standards](<https://www.geeksforgeeks.org/cpp/cpp-standards-and-implementations/>)
- [W3Schools — C++ Classes](<https://www.w3schools.com/cpp/cpp_classes.asp>)
- [cplusplus.com —](<https://cplusplus.com/reference/string/string/>)[`std::string`](<https://cplusplus.com/reference/string/string/>)
- [cplusplus.com —](<https://cplusplus.com/reference/iomanip/>)[`<iomanip>`](<https://cplusplus.com/reference/iomanip/>)
- [W3Schools — C++ Switch](<https://www.w3schools.com/cpp/cpp_switch.asp>)
- [W3Schools — C++ Constructors](<https://www.w3schools.com/cpp/cpp_constructors.asp>)
- [GeeksforGeeks — Default Constructors](<https://www.geeksforgeeks.org/cpp/default-constructors-in-cpp/>)
- [cppreference — Constructors](<https://en.cppreference.com/w/cpp/language/constructor>)
- [GeeksforGeeks — Types of Constructors](<https://www.geeksforgeeks.org/cpp/types-of-constructors-in-cpp/>)
- [GeeksforGeeks —](<https://www.geeksforgeeks.org/cpp/isdigit-in-cpp/>)[`isdigit()`](<https://www.geeksforgeeks.org/cpp/isdigit-in-cpp/>)
- [DigitalOcean — Comparing Strings](<https://www.digitalocean.com/community/tutorials/compare-strings-in-c-plus-plus>)
- [Google C++ Style Guide](<https://google.github.io/styleguide/cppguide.html>)