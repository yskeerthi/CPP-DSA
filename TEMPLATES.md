### Templates in C++

Templates in C++ are a powerful feature that allows you to write generic and reusable code. They enable functions and classes to operate with any data type without being rewritten for each one. This is especially useful for implementing data structures and algorithms that can work with any type of data. Here's a detailed explanation from basic to advanced concepts.

#### **Basic Concepts**

1. **Function Templates**

Function templates allow you to create a single function that can operate on different data types. The syntax for declaring a function template is as follows:

```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;         // Works with integers
    cout << add(3.5, 4.5) << endl;     // Works with doubles
    return 0;
}
```

In the example above, `T` is a placeholder for any data type. The compiler generates the appropriate function based on the arguments passed.

2. **Class Templates**

Class templates are similar to function templates but are used to define a blueprint for a class that can handle any data type. The syntax for declaring a class template is:

```cpp
template <typename T>
class Box {
private:
    T data;

public:
    Box(T data) : data(data) {}

    void display() {
        cout << data << endl;
    }
};

int main() {
    Box<int> intBox(123);
    Box<string> strBox("Hello");

    intBox.display();     // Displays 123
    strBox.display();     // Displays Hello

    return 0;
}
```

In this example, `Box<int>` and `Box<string>` are instances of the `Box` template class for `int` and `string` types, respectively.

#### **Intermediate Concepts**

1. **Non-Type Template Parameters**

Templates can also accept non-type parameters, which are constant values passed to the template. This can be useful for creating classes or functions with fixed sizes or values.

```cpp
template <typename T, int size>
class Array {
private:
    T arr[size];

public:
    void fill(T value) {
        for (int i = 0; i < size; ++i) {
            arr[i] = value;
        }
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array<int, 5> intArray;
    intArray.fill(10);
    intArray.display();    // Displays: 10 10 10 10 10 

    return 0;
}
```

In this example, `Array<int, 5>` creates an array of 5 integers, all initialized to the value 10.

2. **Template Specialization**

Template specialization allows you to define a specific implementation of a template for a particular data type. This is useful when the general template needs to be customized for specific types.

```cpp
template <typename T>
class Printer {
public:
    void print(T data) {
        cout << data << endl;
    }
};

// Specialization for char*
template <>
class Printer<char*> {
public:
    void print(char* data) {
        cout << "String: " << data << endl;
    }
};

int main() {
    Printer<int> intPrinter;
    intPrinter.print(123);        // Prints: 123

    Printer<char*> strPrinter;
    strPrinter.print("Hello");    // Prints: String: Hello

    return 0;
}
```

In this example, the `Printer<char*>` specialization provides a custom implementation for `char*` type.

#### **Advanced Concepts**

1. **Variadic Templates**

Variadic templates allow you to create functions and classes that take an arbitrary number of template parameters. This is useful for creating functions like `printf` that can accept a variable number of arguments.

```cpp
#include <iostream>
using namespace std;

template <typename... Args>
void print(Args... args) {
    (cout << ... << args) << endl;
}

int main() {
    print(1, 2, 3);                // Prints: 123
    print("Hello", " ", "World");  // Prints: Hello World
    print(1, " + ", 2, " = ", 3);  // Prints: 1 + 2 = 3

    return 0;
}
```

In this example, the `print` function can accept any number of arguments and prints them all.

2. **Template Metaprogramming**

Template metaprogramming is a technique where templates are used to perform computations at compile time. This can be used for various purposes, such as generating optimized code or performing complex type manipulations.

```cpp
template <int N>
struct Factorial {
    static const int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
    static const int value = 1;
};

int main() {
    cout << "Factorial of 5: " << Factorial<5>::value << endl; // Prints: Factorial of 5: 120
    return 0;
}
```

In this example, the `Factorial` template computes the factorial of a number at compile time.

3. **SFINAE (Substitution Failure Is Not An Error)**

SFINAE is a principle in C++ that allows you to write templates that can fail to compile in certain contexts without causing a compilation error. This is useful for writing templates that can selectively enable or disable certain features based on the properties of the types they are instantiated with.

```cpp
#include <type_traits>

template <typename T>
typename enable_if<is_integral<T>::value, T>::type
foo(T t) {
    return t;
}

template <typename T>
typename enable_if<!is_integral<T>::value, T>::type
foo(T t) {
    return t * 2;
}

int main() {
    cout << foo(10) << endl;        // Prints: 10 (integral)
    cout << foo(10.5) << endl;      // Prints: 21 (non-integral)

    return 0;
}
```

In this example, `foo` is enabled or disabled based on whether `T` is an integral type using SFINAE.

### Conclusion

Templates in C++ provide a powerful mechanism for writing generic and reusable code. From basic function and class templates to advanced features like variadic templates, template metaprogramming, and SFINAE, templates enable developers to write flexible and efficient code. By mastering these concepts, you can leverage the full power of C++ templates in your programming projects.
