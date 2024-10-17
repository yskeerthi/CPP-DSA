 **Data types & Variables in C++**

### **1. Data Types in C++**

Data types specify the type of data that a variable can hold. In C++, data types are categorized into several types:

#### **Primitive Data Types:**
1. **int**: Represents integer values (whole numbers).
   - Example: `int age = 25;`
2. **float**: Represents floating-point numbers (single precision).
   - Example: `float price = 12.99;`
3. **double**: Represents floating-point numbers (double precision).
   - Example: `double pi = 3.14159;`
4. **char**: Represents a single character.
   - Example: `char grade = 'A';`
5. **bool**: Represents boolean values (`true` or `false`).
   - Example: `bool isPassed = true;`
6. **void**: Represents an absence of value (commonly used with functions).

#### **Derived Data Types:**
1. **Arrays**: A collection of elements of the same type.
2. **Pointers**: Variables that store the address of another variable.
3. **Functions**: Blocks of code that perform a specific task.

#### **User-defined Data Types:**
1. **struct**: Used to define a structure to group variables.
2. **enum**: Used to define a set of named integer constants.
3. **class**: Used in Object-Oriented Programming (OOP) to create objects.

---

### **2. Variables in C++**

A variable is a named memory location used to store a value. Variables must be declared with a specific data type before they can be used.

#### **Variable Declaration:**
```cpp
int number;       // Declaration of an integer variable
double salary;    // Declaration of a double variable
char letter;      // Declaration of a char variable
```

#### **Variable Initialization:**
You can also assign an initial value when declaring a variable.
```cpp
int age = 30;
float temperature = 98.6;
char grade = 'B';
```

---

### **3. Constant Variables:**
Variables declared as constants cannot have their values changed.
```cpp
const int MAX = 100;
```

---

### **4. Type Modifiers:**
C++ offers various type modifiers to alter the size or range of data:
1. **signed**: Positive and negative numbers (default for `int`).
2. **unsigned**: Positive numbers only.
3. **short**: Uses less memory.
4. **long**: Uses more memory.

Example:
```cpp
unsigned int score = 250;  // Can store only positive values
long int population = 1000000;  // Stores larger values
```

---

### **5. Type Casting:**
Type casting is converting one data type into another.
- **Implicit casting**: Automatic conversion by the compiler.
  ```cpp
  int a = 10;
  double b = a;  // Implicit conversion from int to double
  ```
- **Explicit casting**: Manual conversion.
  ```cpp
  double num = 7.56;
  int result = (int)num;  // Explicit conversion from double to int
  ```

---

### **Example Problem:**

**Problem 1**: Declare variables of different types and assign values to them.

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 21;
    double height = 5.9;
    char initial = 'A';
    bool isStudent = true;

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Initial: " << initial << endl;
    cout << "Is a student: " << isStudent << endl;

    return 0;
}
```

### **Example Problem 2 (Type Casting)**:
Convert an `int` to `double` and perform division.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 2;
    double result = (double)a / b;  // Explicit type casting

    cout << "Result of division: " << result << endl;

    return 0;
}
```

---

### **Tips and Tricks**:

1. **Choosing Data Types**: 
   - Use `int` for whole numbers and `float/double` for numbers with decimal points.
   - For small-range integers, use `short int`, and for larger-range values, use `long int`.
   - Use `unsigned` for variables that will always store non-negative values.

2. **Always initialize variables**: Uninitialized variables can contain garbage values, which may lead to unexpected results.

3. **Use `const` for constants**: If a value is not supposed to change throughout the program, use `const` to protect it from modification.

4. **Casting carefully**: Always be cautious when casting between data types to avoid precision loss, especially when casting `double` to `int`.

---

Let me know if you want more in-depth examples or if you're ready to move on to the next topic! Feel free to ask questions.
```markdown
# C++ MCQs on Data Types and Variables

### 1. Which of the following is a **primitive** data type in C++?
- [x] `int`
- [ ] `string`
- [ ] `vector`
- [ ] `map`

### 2. Which header file must be included to use the **string** class in C++?
- [ ] `<iostream>`
- [x] `<string>`
- [ ] `<cstring>`
- [ ] `<stdio.h>`

### 3. Which of the following data types is used to store a single character in C++?
- [x] `char`
- [ ] `string`
- [ ] `int`
- [ ] `bool`

### 4. What is the size of an `int` data type in C++ on most systems?
- [ ] 1 byte
- [ ] 2 bytes
- [x] 4 bytes
- [ ] 8 bytes

### 5. What will be the output of the following C++ code?

```cpp
int a = 5;
int b = 10;
cout << a + b;
```

- [x] `15`
- [ ] `5`
- [ ] `10`
- [ ] `510`

### 6. Which of the following statements is **false** about C++ data types?
- [ ] The `double` data type is used for floating-point numbers with higher precision.
- [ ] The `bool` data type can store only `true` or `false`.
- [x] The `string` data type is a primitive data type in C++.
- [ ] The `char` data type is used to store a single character.

### 7. Which of the following is the correct way to declare a **reference variable** in C++?
- [x] `int &ref = var;`
- [ ] `int ref = &var;`
- [ ] `int ref = *var;`
- [ ] `int &var = ref;`

### 8. What is the correct way to declare a **constant** integer in C++?
- [ ] `constant int a = 10;`
- [x] `const int a = 10;`
- [ ] `int a = constant 10;`
- [ ] `int a = const 10;`

### 9. Which of the following is **not** a valid data type in C++?
- [ ] `double`
- [ ] `char`
- [x] `text`
- [ ] `bool`

### 10. What is the output of the following code?

```cpp
int x = 10;
int y = 3;
cout << x / y;
```

- [ ] `3.33`
- [ ] `3.0`
- [x] `3`
- [ ] `0.3`

### 11. Which of the following types can hold the largest value in C++?
- [ ] `int`
- [x] `long long`
- [ ] `float`
- [ ] `char`

### 12. How is a C-style string represented in C++?
- [ ] As a vector of characters
- [x] As an array of characters terminated by `\0`
- [ ] As an object of the `string` class
- [ ] As a reference variable of type `char`

### 13. Which of the following correctly assigns the value `20` to a **pointer** variable in C++?
- [ ] `int* ptr = 20;`
- [ ] `int ptr = 20;`
- [x] `int* ptr = &value;`
- [ ] `int &ptr = 20;`

### 14. Which of the following correctly allocates memory for an **array** dynamically in C++?
- [ ] `int arr[5];`
- [ ] `int arr = new int[5];`
- [x] `int* arr = new int[5];`
- [ ] `int* arr = malloc(5 * sizeof(int));`

### 15. Which of the following is the correct way to declare a **pointer** to an integer in C++?
- [x] `int* ptr;`
- [ ] `int ptr*;`
- [ ] `*int ptr;`
- [ ] `ptr int*;`
```

---

You can copy this markdown format for your notes and practice with these MCQs related to C++ data types and variables!

```markdown
# Advanced C++ MCQs on Data Types and Variables

### **MCQ 1:**
What will be the output of the following C++ code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 2;
    float result = x / y;
    cout << result << endl;
    return 0;
}
```

**A)** 2  
**B)** 2.5  
**C)** 2.0  
**D)** 0.5  

**Answer:** A) 2  
**Explanation:** In this case, `x / y` performs integer division since both `x` and `y` are integers, which results in `2`. The result is then stored in a float variable, but the value remains `2` because the division was integer-based.

---

### **MCQ 2:**
Which of the following is NOT a valid primitive data type in C++?

**A)** int  
**B)** float  
**C)** char  
**D)** String  

**Answer:** D) String  
**Explanation:** C++ does not have a primitive `String` data type. Instead, it uses the `string` class from the `<string>` header for handling strings.

---

### **MCQ 3:**
What will be the size (in bytes) of the following array in a 64-bit system?

```cpp
int arr[10];
```

**A)** 10  
**B)** 20  
**C)** 40  
**D)** 80  

**Answer:** C) 40  
**Explanation:** Each `int` typically occupies 4 bytes in a 64-bit system. Therefore, the size of the array is `4 bytes * 10 = 40 bytes`.

---

### **MCQ 4:**
What is the output of the following C++ code?

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int a = 5;
    int b = -10;
    cout << a + b << endl;
    return 0;
}
```

**A)** -5  
**B)** 4294967291  
**C)** 5  
**D)** Undefined behavior  

**Answer:** B) 4294967291  
**Explanation:** When performing arithmetic between `unsigned int` and `int`, C++ will cast `b` to an unsigned value, resulting in an overflow. The exact output depends on the system architecture, but for a 32-bit system, `-10` is treated as `4294967286`, and adding `5` results in `4294967291`.

---

### **MCQ 5:**
Which of the following statements about **reference variables** in C++ is **false**?

**A)** A reference must be initialized when declared.  
**B)** Once initialized, a reference cannot be made to refer to another variable.  
**C)** References can be reassigned to point to other objects after initialization.  
**D)** A reference is essentially an alias for another variable.  

**Answer:** C) References can be reassigned to point to other objects after initialization.  
**Explanation:** Once a reference is initialized to refer to a variable, it cannot be reassigned to refer to a different variable.

---

### **MCQ 6:**
What will the following code print?

```cpp
#include <iostream>
using namespace std;

int main() {
    const int x = 10;
    int *p = (int *)&x;
    *p = 20;
    cout << x << " " << *p << endl;
    return 0;
}
```

**A)** 10 10  
**B)** 20 20  
**C)** 10 20  
**D)** Compiler error  

**Answer:** C) 10 20  
**Explanation:** The `const` keyword tells the compiler that `x` should not be modified, but by casting the address of `x` to a non-constant pointer, you can change its value in memory. However, the original constant variable `x` will still print its original value (`10`) because of optimizations made by the compiler.

---

### **MCQ 7:**
Which of the following is a correct statement about **type modifiers**?

**A)** A `signed` variable can store only positive values.  
**B)** An `unsigned` variable can store both positive and negative values.  
**C)** A `long` variable increases the precision of a float.  
**D)** An `unsigned` variable can only store positive values.  

**Answer:** D) An `unsigned` variable can only store positive values.  
**Explanation:** `unsigned` variables are restricted to non-negative values, allowing them to represent a larger positive range.

---

### **MCQ 8:**
What will happen if we assign a float value to an integer variable?

```cpp
float x = 3.14;
int y = x;
```

**A)** A compilation error will occur.  
**B)** The integer part of the float will be stored in `y`.  
**C)** The float value will be rounded before storing in `y`.  
**D)** The float value will be stored as it is.  

**Answer:** B) The integer part of the float will be stored in `y`.  
**Explanation:** When assigning a `float` to an `int`, the fractional part is truncated, and only the integer part is stored in the variable `y`.

---

### **MCQ 9:**
What is the **size** of a `bool` type variable in C++?

**A)** 1 byte  
**B)** 2 bytes  
**C)** 4 bytes  
**D)** 8 bytes  

**Answer:** A) 1 byte  
**Explanation:** A `bool` variable typically occupies 1 byte in memory.

---

### **MCQ 10:**
What does the following C++ code snippet output?

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << sizeof(num) << " " << sizeof(double) << endl;
    return 0;
}
```

**A)** 2 8  
**B)** 4 8  
**C)** 8 4  
**D)** 4 4  

**Answer:** B) 4 8  
**Explanation:** On most systems, an `int` typically takes 4 bytes, while a `double` takes 8 bytes. This can vary depending on the system architecture, but it is a common configuration.
Here are some more advanced C++ multiple-choice questions (MCQs) focusing on various aspects of the language, including data types, pointers, memory management, and more:

```markdown
# Advanced C++ MCQs

### **MCQ 1:**
What will be the output of the following code snippet?

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    return 0;
}
```

**A)** 5  
**B)** 10  
**C)** 4  
**D)** 20  

**Answer:** A) 5  
**Explanation:** The expression `sizeof(arr)` gives the total size of the array in bytes, while `sizeof(arr[0])` gives the size of one element. The division yields the number of elements in the array.

---

### **MCQ 2:**
Which of the following correctly describes the behavior of the `delete` operator in C++?

**A)** It can be used to free memory allocated by `malloc`.  
**B)** It can be used on pointers that point to stack memory.  
**C)** It should always be paired with `new`.  
**D)** It automatically sets the pointer to `nullptr`.  

**Answer:** C) It should always be paired with `new`.  
**Explanation:** The `delete` operator is used to free memory allocated with `new`. Using it on pointers not allocated with `new` (like those from stack memory) results in undefined behavior.

---

### **MCQ 3:**
What is the result of the following code?

```cpp
#include <iostream>
using namespace std;

void func(int& a) {
    a += 10;
}

int main() {
    int x = 5;
    func(x);
    cout << x << endl;
    return 0;
}
```

**A)** 5  
**B)** 10  
**C)** 15  
**D)** Compilation error  

**Answer:** C) 15  
**Explanation:** The function `func` takes an integer reference, so when it modifies `a`, it modifies `x` directly.

---

### **MCQ 4:**
What is the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int* p = &a;
    *p += b;
    cout << a << " " << b << endl;
    return 0;
}
```

**A)** 10 20  
**B)** 20 20  
**C)** 30 20  
**D)** 10 30  

**Answer:** C) 30 20  
**Explanation:** The pointer `p` points to `a`, and the expression `*p += b` adds the value of `b` (20) to `a`, resulting in `a` being updated to 30.

---

### **MCQ 5:**
Which of the following statements about `const` variables in C++ is **false**?

**A)** A `const` variable must be initialized at the time of declaration.  
**B)** A `const` pointer can point to a non-const variable.  
**C)** A `const` variable can be modified after its declaration.  
**D)** A `const` reference can bind to a temporary object.  

**Answer:** C) A `const` variable can be modified after its declaration.  
**Explanation:** Once a variable is declared as `const`, it cannot be modified.

---

### **MCQ 6:**
What will be the output of the following code snippet?

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* b = new Derived();
    b->display();
    delete b;
    return 0;
}
```

**A)** Base class  
**B)** Derived class  
**C)** Compilation error  
**D)** Undefined behavior  

**Answer:** B) Derived class  
**Explanation:** The `display()` function is virtual, so the derived class's version is called, demonstrating polymorphism.

---

### **MCQ 7:**
What does the following code output?

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;
    *p = 20;
    cout << x << endl;
    return 0;
}
```

**A)** 10  
**B)** 20  
**C)** 30  
**D)** Undefined behavior  

**Answer:** B) 20  
**Explanation:** The pointer `p` is pointing to `x`, and dereferencing it to assign `20` changes the value of `x`.

---

### **MCQ 8:**
Which of the following statements about `static` variables is **false**?

**A)** A `static` variable retains its value between function calls.  
**B)** A `static` variable is initialized only once.  
**C)** A `static` variable can be defined in a function.  
**D)** A `static` variable is local to the function in which it is defined.  

**Answer:** D) A `static` variable is local to the function in which it is defined.  
**Explanation:** A `static` variable retains its value between function calls, but it is still local to the function. The option is somewhat misleading as it implies a global scope.

---

### **MCQ 9:**
What is the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    const int a = 5;
    int* p = (int*)&a;
    *p = 10;
    cout << a << endl;
    return 0;
}
```

**A)** 5  
**B)** 10  
**C)** Compilation error  
**D)** Undefined behavior  

**Answer:** A) 5  
**Explanation:** Even though the code attempts to modify a `const` variable, the output will still be `5` due to compiler optimizations, and it may lead to undefined behavior.

---

### **MCQ 10:**
What will be the output of the following code snippet?

```cpp
#include <iostream>
using namespace std;

int main() {
    int* p = nullptr;
    cout << (p ? "Not null" : "Null") << endl;
    return 0;
}
```

**A)** Not null  
**B)** Null  
**C)** Compilation error  
**D)** Undefined behavior  

**Answer:** B) Null  
**Explanation:** Since `p` is initialized to `nullptr`, the output will be "Null".
```
