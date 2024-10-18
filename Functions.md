### C++ Functions: From Basics to Advanced

#### **1. Basic Concepts**

##### **1.1. Function Definition**
A function in C++ is a block of code that performs a specific task and can be reused. A function typically has the following structure:
```cpp
return_type function_name(parameters) {
    // code to be executed
}
```

- **Return type**: The type of value returned by the function (e.g., `int`, `void`).
- **Function name**: Identifier used to call the function.
- **Parameters**: Values passed into the function.
- **Function body**: The code executed when the function is called.
  
Example:
```cpp
int add(int a, int b) {
    return a + b;
}
```

##### **1.2. Function Declaration**
A function can be declared before being defined to tell the compiler its name, return type, and parameters:
```cpp
int add(int, int);
```

##### **1.3. Function Call**
You call a function by using its name followed by parentheses containing any required arguments:
```cpp
int result = add(5, 3);
```

##### **1.4. Return Statements**
A function returns a value using the `return` keyword. If the return type is `void`, no value is returned.
  
#### **2. Function Parameters**

##### **2.1. Pass by Value**
The function gets a copy of the argument. Changes to the parameter do not affect the original argument.
```cpp
void changeValue(int x) {
    x = 10;
}
```

##### **2.2. Pass by Reference**
The function receives the actual memory address of the argument, allowing the original value to be modified.
```cpp
void changeValue(int &x) {
    x = 10;
}
```

##### **2.3. Pass by Pointer**
A function can accept pointers, which are the addresses of variables.
```cpp
void changeValue(int *x) {
    *x = 10;
}
```

#### **3. Function Overloading**
Function overloading allows you to have multiple functions with the same name but different parameter lists. The compiler distinguishes between them by the number or type of parameters.

Example:
```cpp
int multiply(int a, int b) {
    return a * b;
}
double multiply(double a, double b) {
    return a * b;
}
```

#### **4. Inline Functions**
Inline functions are expanded at the point of invocation, eliminating the function call overhead.
```cpp
inline int add(int a, int b) {
    return a + b;
}
```

#### **5. Recursive Functions**
A recursive function is one that calls itself to solve smaller instances of a problem.

Example: Calculating factorial
```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

#### **6. Default Arguments**
A function can have default values for some parameters, allowing you to omit them when calling the function.

Example:
```cpp
void display(int a = 5, int b = 10) {
    std::cout << a << " " << b;
}
```

#### **7. Function Templates**
Templates allow functions to operate on generic types. This enables writing a single function that works with different data types.

Example:
```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

#### **8. Lambda Expressions**
Lambda expressions are anonymous functions used for short tasks, especially in functional programming contexts.

Example:
```cpp
auto add = [](int a, int b) { return a + b; };
std::cout << add(3, 4);
```

#### **9. Function Pointers**
A function pointer stores the address of a function and can be used to invoke the function indirectly.

Example:
```cpp
int (*funcPtr)(int, int) = &add;
std::cout << funcPtr(2, 3);
```
### 30 Multiple-Choice Questions on C++ Functions (with Answers and Explanations)

#### **1. What is the return type of a function that does not return a value?**
- a) int
- **b) void**
- c) char
- d) bool

**Explanation**: The `void` type specifies that the function does not return any value.

---

#### **2. Which of the following is a correct function declaration?**
- a) void function(int);
- b) void function();
- c) void function(int a);
- **d) All of the above**

**Explanation**: All options are valid function declarations, with or without specifying parameter names.

---

#### **3. What does the keyword `inline` do in a function?**
- **a) Forces the function to be expanded inline**
- b) Forces the function to be defined inside the class
- c) Makes the function static
- d) Prevents recursion

**Explanation**: `inline` functions are expanded directly where they are called to avoid function call overhead.

---

#### **4. What will happen if you declare a function with the same name but different return types?**
- **a) Compilation error**
- b) Function overloading
- c) Undefined behavior
- d) Executes the latest version

**Explanation**: Function overloading in C++ is determined by parameters, not return types. Two functions differing only in return type will cause a compilation error.

---

#### **5. In C++, function overloading is based on:**
- a) The number of parameters
- b) The types of parameters
- **c) Both a and b**
- d) The return type

**Explanation**: Function overloading is based on the number and types of parameters.

---

#### **6. When a function argument is passed by value, the function:**
- a) Modifies the original argument
- **b) Works with a copy of the argument**
- c) Creates a new variable
- d) Returns a reference to the argument

**Explanation**: Pass-by-value means a copy of the argument is passed to the function, so changes inside the function don't affect the original variable.

---

#### **7. In pass-by-reference, changes made to the parameter:**
- **a) Reflect in the original argument**
- b) Affect only the copy of the variable
- c) Are discarded
- d) Cause a runtime error

**Explanation**: In pass-by-reference, the actual memory address of the argument is passed, so changes affect the original variable.

---

#### **8. What is the result of the following function call `add(3.0, 4.0)` if the `add` function is overloaded for both integers and doubles?**
- a) Calls the integer version
- **b) Calls the double version**
- c) Compilation error
- d) Undefined behavior

**Explanation**: Since the arguments are `double`, the version of `add` that accepts `double` will be called.

---

#### **9. A recursive function must have:**
- a) A return statement
- **b) A base condition**
- c) An argument
- d) A global variable

**Explanation**: Recursive functions must have a base condition to prevent infinite recursion and provide termination.

---

#### **10. The default return type of a function in C++ is:**
- **a) int**
- b) void
- c) float
- d) char

**Explanation**: If no return type is specified, C++ assumes the function returns an `int`.

---

#### **11. What is the correct syntax for declaring a function template?**
- **a) template <class T> T function(T a);**
- b) template function<class T>(T a);
- c) function template(T a);
- d) class template function(T a);

**Explanation**: Templates are declared using the `template <class T>` syntax.

---

#### **12. Which of the following is a correct use of a lambda function?**
- **a) `auto f = [](int x) { return x * x; };`**
- b) `auto f = lambda(x) => x * x;`
- c) `auto f = (int x) => { x * x; };`
- d) `lambda auto(int x) { return x * x; };`

**Explanation**: Option a is the correct syntax for a lambda expression in C++.

---

#### **13. Which statement about function pointers is true?**
- **a) They store the address of a function**
- b) They store the value returned by the function
- c) They can point to any variable
- d) They store the arguments passed to the function

**Explanation**: A function pointer stores the memory address of a function, allowing it to be invoked indirectly.

---

#### **14. What happens when a function is called recursively without a base condition?**
- a) Infinite loop
- **b) Stack overflow**
- c) Compilation error
- d) Correct output

**Explanation**: Recursion without a base condition leads to infinite recursion, eventually causing a stack overflow.

---

#### **15. Which keyword is used to create a constant function parameter?**
- **a) const**
- b) static
- c) final
- d) volatile

**Explanation**: The `const` keyword prevents modification of a parameter's value inside the function.

---

#### **16. Which of the following is a legal function overloading?**
- **a) `void func(int);` and `void func(float);`**
- b) `void func(int);` and `int func(int);`
- c) `void func();` and `int func(int);`
- d) None of the above

**Explanation**: Option a uses different parameter types, which is valid for overloading.

---

#### **17. How many values can a function return in C++?**
- **a) 1**
- b) 2
- c) 3
- d) As many as needed

**Explanation**: A function in C++ can only return one value, although you can return multiple values using structures or references.

---

#### **18. The `return` keyword in a function:**
- **a) Immediately exits the function**
- b) Exits the function after executing the next statement
- c) Does nothing
- d) Only exits void functions

**Explanation**: `return` immediately transfers control back to the calling function.

---

#### **19. In a function, if you omit the return type:**
- **a) It's considered as `int`**
- b) It's considered as `void`
- c) It causes a syntax error
- d) The function will never return

**Explanation**: Historically in C++, omitting the return type defaults to `int`. However, modern C++ will likely flag this as an error.

---

#### **20. What is the output of the following code?**
```cpp
void func(int a = 5) { std::cout << a; }
func();
```
- a) 0
- **b) 5**
- c) Compilation error
- d) Undefined behavior

**Explanation**: Since no argument is passed to the function, the default value `5` is used.

---

#### **21. What is an inline function used for?**
- **a) Improving performance by avoiding function call overhead**
- b) Improving readability
- c) Reducing code size
- d) Allowing recursion

**Explanation**: Inline functions are used to reduce the overhead of a function call by embedding the code directly at the call site.

---

#### **22. When is function overloading resolved?**
- **a) At compile time**
- b) At runtime
- c) During linking
- d) After program execution

**Explanation**: Function overloading is resolved at compile time based on the function signature.

---

#### **23. Can a function in C++ have a variable number of arguments?**
- **a) Yes, using ellipsis `...`**
- b) No
- c) Yes, using default arguments
- d) Only for integer types

**Explanation**: In C++, functions can accept a variable number of arguments using ellipsis `...` and `va_list` macros.

---

#### **24. Which of the following is true about function templates?**
- a) They can work only with built-in types
- **b) They can work with user-defined types**
- c) They cannot be overloaded
- d) They must return `void`

**Explanation**: Function templates can work with user-defined types like classes, making them very flexible.

---

#### **25. What is a lambda expression?**
- a) A named function
- **b) An anonymous function**
- c) A type of loop
- d) A macro

**Explanation**: Lambda expressions are unnamed (anonymous) functions used primarily for short tasks in C++.

---

#### **26. What is the purpose of a recursive function?**
- a) To repeat the same code multiple times
- **b) To solve a problem by breaking it into smaller sub-problems**
- c) To enhance performance
- d) To reduce memory usage

**Explanation**: Recursive functions solve problems by repeatedly calling themselves with smaller inputs until a base condition is met.

---

#### **27. How does passing a pointer to a function differ from passing a value?**
- a) Passing a pointer creates a copy of the pointer
- b) Passing a pointer prevents modification of the value
- **c) Passing a pointer allows the function to modify the value pointed to**
- d) It’s the same as passing by value



**Explanation**: Passing a pointer allows the function to modify the value the pointer points to because the memory address is shared.

---

#### **28. Which of the following will compile successfully?**
```cpp
int add(int a, int b = 2);
int add(int a, int b) { return a + b; }
```
- a) It won't compile
- **b) It will compile successfully**
- c) Compilation depends on compiler settings
- d) Only if b is a global variable

**Explanation**: Providing default values in function declarations is allowed in C++.

---

#### **29. Which feature of C++ allows a function to be used with different data types without rewriting the function?**
- **a) Function templates**
- b) Function overloading
- c) Function pointers
- d) Inline functions

**Explanation**: Function templates allow functions to be written in a generic way, so they work with any data type.

---

#### **30. Can you define a recursive lambda function in C++?**
- a) No
- **b) Yes, using std::function**
- c) Only with templates
- d) Only with pointers

**Explanation**: Recursive lambdas require `std::function` to define the lambda’s type, allowing it to call itself.

---

 
