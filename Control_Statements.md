 **Control Structures** 

## 1. **Conditional Statements**
Conditional statements allow you to execute different blocks of code based on certain conditions.

### a. **if Statement**
The simplest form of a conditional statement.

**Syntax:**
```cpp
if (condition) {
    // code to execute if condition is true
}
```

**Example:**
```cpp
int age = 18;
if (age >= 18) {
    cout << "You are eligible to vote." << endl;
}
```

### b. **if-else Statement**
Provides an alternative path of execution if the condition is false.

**Syntax:**
```cpp
if (condition) {
    // code if condition is true
} else {
    // code if condition is false
}
```

**Example:**
```cpp
int age = 16;
if (age >= 18) {
    cout << "You are eligible to vote." << endl;
} else {
    cout << "You are not eligible to vote." << endl;
}
```

### c. **else if Statement**
Used when you have multiple conditions to evaluate.

**Syntax:**
```cpp
if (condition1) {
    // code if condition1 is true
} else if (condition2) {
    // code if condition2 is true
} else {
    // code if none of the conditions are true
}
```

**Example:**
```cpp
int score = 85;
if (score >= 90) {
    cout << "Grade: A" << endl;
} else if (score >= 80) {
    cout << "Grade: B" << endl;
} else {
    cout << "Grade: C" << endl;
}
```

### d. **switch Statement**
A cleaner way to handle multiple conditions based on the value of a variable.

**Syntax:**
```cpp
switch (variable) {
    case value1:
        // code for value1
        break;
    case value2:
        // code for value2
        break;
    default:
        // code if no cases match
}
```

**Example:**
```cpp
char grade = 'B';
switch (grade) {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Well done!" << endl;
        break;
    case 'C':
        cout << "Good job!" << endl;
        break;
    default:
        cout << "Grade not recognized." << endl;
}
```

## 2. **Looping Structures**
Loops allow you to execute a block of code multiple times.

### a. **for Loop**
Ideal for iterating a known number of times.

**Syntax:**
```cpp
for (initialization; condition; increment) {
    // code to execute
}
```

**Example:**
```cpp
for (int i = 0; i < 5; i++) {
    cout << "Iteration: " << i << endl;
}
```

### b. **while Loop**
Executes a block of code as long as the condition is true.

**Syntax:**
```cpp
while (condition) {
    // code to execute
}
```

**Example:**
```cpp
int i = 0;
while (i < 5) {
    cout << "Iteration: " << i << endl;
    i++;
}
```

### c. **do-while Loop**
Similar to the `while` loop, but guarantees at least one execution of the loop body.

**Syntax:**
```cpp
do {
    // code to execute
} while (condition);
```

**Example:**
```cpp
int i = 0;
do {
    cout << "Iteration: " << i << endl;
    i++;
} while (i < 5);
```

## 3. **Break and Continue Statements**
These statements control the flow of loops.

### a. **break Statement**
Exits a loop or switch statement prematurely.

**Example:**
```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // exits the loop when i is 5
    }
    cout << "Iteration: " << i << endl;
}
```

### b. **continue Statement**
Skips the current iteration and continues with the next iteration of the loop.

**Example:**
```cpp
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue; // skips even numbers
    }
    cout << "Odd number: " << i << endl;
}
```

## 4. **Nested Control Structures**
You can nest control structures inside each other to create complex logic.

**Example:**
```cpp
int score = 85;
if (score >= 60) {
    cout << "Pass" << endl;
    if (score >= 80) {
        cout << "Good job!" << endl;
    }
} else {
    cout << "Fail" << endl;
}
```
Here are **30 advanced multiple-choice questions (MCQs)** on **Control Structures** in C++ to help you assess your understanding of the topic:

---

### **MCQ 1:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    if (x > 5)
        if (x < 15)
            cout << "x is between 5 and 15." << endl;
    return 0;
}
```

**A)** x is between 5 and 15.  
**B)** No output  
**C)** Compilation error  
**D)** Undefined behavior  

**Answer:** A) x is between 5 and 15.

---

### **MCQ 2:**
Which of the following will terminate the loop when `i` is equal to `5`?

```cpp
for (int i = 0; i < 10; i++) {
    // code
}
```

**A)** break;  
**B)** continue;  
**C)** return;  
**D)** exit(0);  

**Answer:** A) break;

---

### **MCQ 3:**
What is the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << i << " ";
        i++;
        if (i == 3)
            break;
    }
    return 0;
}
```

**A)** 0 1 2 3 4  
**B)** 0 1 2  
**C)** 0 1 2 3 4 5  
**D)** 0 1 2 3  

**Answer:** B) 0 1 2

---

### **MCQ 4:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << i + j << " ";
        }
    }
    return 0;
}
```

**A)** 0 1 1 2 2 3  
**B)** 0 1 1 2 2 3 3 4  
**C)** 0 1 2 3 4  
**D)** 0 1 1 2  

**Answer:** A) 0 1 1 2 2 3

---

### **MCQ 5:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        i++;
        cout << i << " ";
    } while (i < 5);
    return 0;
}
```

**A)** 0 1 2 3 4  
**B)** 1 2 3 4 5  
**C)** 1 2 3 4  
**D)** 0 1 2 3 4 5  

**Answer:** B) 1 2 3 4 5

---

### **MCQ 6:**
Which statement will correctly skip the current iteration of the loop when `i` is even?

```cpp
for (int i = 0; i < 10; i++) {
    // code
}
```

**A)** continue;  
**B)** break;  
**C)** return;  
**D)** exit(0);  

**Answer:** A) continue;

---

### **MCQ 7:**
What is the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 2;
    switch (x) {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        default:
            cout << "Default";
    }
    return 0;
}
```

**A)** One  
**B)** Two  
**C)** Default  
**D)** No output  

**Answer:** B) Two

---

### **MCQ 8:**
What will the following code print?

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 3) {
        i++;
        if (i == 2) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}
```

**A)** 1 2 3  
**B)** 1 3  
**C)** 1  
**D)** 1 2  

**Answer:** B) 1 3

---

### **MCQ 9:**
Which of the following control structures allows a variable to take multiple values in a single statement?

**A)** if-else  
**B)** switch  
**C)** for loop  
**D)** while loop  

**Answer:** B) switch

---

### **MCQ 10:**
What is the output of the following code snippet?

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    if (a > b) 
        cout << "A is greater";
    else if (a == b) 
        cout << "A is equal to B";
    else 
        cout << "B is greater";
    return 0;
}
```

**A)** A is greater  
**B)** A is equal to B  
**C)** B is greater  
**D)** No output  

**Answer:** C) B is greater

---

### **MCQ 11:**
Which loop is guaranteed to execute at least once?

**A)** for loop  
**B)** while loop  
**C)** do-while loop  
**D)** All of the above  

**Answer:** C) do-while loop

---

### **MCQ 12:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            count++;
    }
    cout << count;
    return 0;
}
```

**A)** 4  
**B)** 5  
**C)** 10  
**D)** 0  

**Answer:** B) 5

---

### **MCQ 13:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            x++;
        }
    }
    cout << x;
    return 0;
}
```

**A)** 10  
**B)** 15  
**C)** 5  
**D)** 0  

**Answer:** B) 10

---

### **MCQ 14:**
What is the result of the following switch statement?

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 2;
    switch (num) {
        case 1:
        case 2:
            cout << "One or Two";
            break;
        case 3:
            cout << "Three";
            break;
        default:
            cout << "Default";
    }
    return 0;
}
```

**A)** One or Two  
**B)** Three  
**C)** Default  
**D)** No output  

**Answer:** A) One or Two

---

### **MCQ 15:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == j)
                continue;
            cout << i << " " << j << endl;
        }
    }
    return 0;
}
```

**A)** 1 1, 2 2, 3 3  
**B)** 1 2, 1 3, 2 1, 2 3, 3 1, 3 2  
**C)** 1 3, 2 1, 3 1, 3 2  
**D)** No output  

**Answer:** B) 1 2, 1 3, 2 1, 2 3, 3 1, 3 2

---

### **MCQ 16:**
What will the following code output?

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        i++;
        if (i == 2) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}
```

**A)** 1 2 3 4 5  
**B)** 1 3 4 5  
**C)** 1 2 3 4  
**D)** 1 2  

**Answer:** B) 1 3 4 5

---

### **MCQ 17:**
What is the output of the following code snippet?

```cpp
#include <iostream>
using namespace std

;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j)
                break;
            cout << i << j << " ";
        }
    }
    return 0;
}
```

**A)** 00 01 02  
**B)** 01 12  
**C)** 00 01 10 11 12  
**D)** 00 01 10  

**Answer:** D) 00 01 10

---

### **MCQ 18:**
What will the following code output?

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 1;
    switch (x) {
        case 1:
            cout << "Case 1" << endl;
        case 2:
            cout << "Case 2" << endl;
            break;
        case 3:
            cout << "Case 3" << endl;
            break;
        default:
            cout << "Default case" << endl;
    }
    return 0;
}
```

**A)** Case 1  
**B)** Case 1 Case 2  
**C)** Case 2  
**D)** No output  

**Answer:** B) Case 1 Case 2

---

### **MCQ 19:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i % 2 != 0)
            continue;
        cout << i << " ";
    }
    return 0;
}
```

**A)** 0 1 2 3 4  
**B)** 1 3  
**C)** 0 2 4  
**D)** 0 1 2 3  

**Answer:** C) 0 2 4

---

### **MCQ 20:**
What is the output of the following nested loop code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            count++;
        }
    }
    cout << count;
    return 0;
}
```

**A)** 3  
**B)** 5  
**C)** 6  
**D)** 2  

**Answer:** C) 6

---

### **MCQ 21:**
What is the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 0;
    if (x > 0)
        cout << "Positive";
    else if (x < 0)
        cout << "Negative";
    else
        cout << "Zero";
    return 0;
}
```

**A)** Positive  
**B)** Negative  
**C)** Zero  
**D)** No output  

**Answer:** C) Zero

---

### **MCQ 22:**
What is the result of this nested loop?

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                cout << "X ";
            } else {
                cout << "O ";
            }
        }
        cout << endl;
    }
    return 0;
}
```

**A)** X O O  
O X O  
O O X  
**B)** X O O  
X O O  
X O O  
**C)** O O O  
O O O  
O O O  
**D)** O X O  
O O O  
X O O  

**Answer:** A) X O O  
O X O  
O O X  

---

### **MCQ 23:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 5;
    if (num == 1)
        cout << "One";
    else if (num == 2)
        cout << "Two";
    else
        cout << "Other";
    return 0;
}
```

**A)** One  
**B)** Two  
**C)** Other  
**D)** No output  

**Answer:** C) Other

---

### **MCQ 24:**
What is the output of this code snippet?

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);
    return 0;
}
```

**A)** 0 1 2 3 4  
**B)** 1 2 3 4 5  
**C)** 0 1 2 3 4 5  
**D)** 0 1 2 3  

**Answer:** A) 0 1 2 3 4

---

### **MCQ 25:**
Which of the following statements will result in an infinite loop?

**A)** for (int i = 0; i < 10; i++) {}  
**B)** while (true) {}  
**C)** do {} while (false);  
**D)** All of the above  

**Answer:** B) while (true) {}

---

### **MCQ 26:**
In a switch statement, what happens if no `break` statement is provided?

**A)** The program will compile but may exhibit undefined behavior.  
**B)** The control will fall through to the next case.  
**C)** The switch statement will exit immediately.  
**D)** None of the above.  

**Answer:** B) The control will fall through to the next case.

---

### **MCQ 27:**
What will be the output of this code snippet?

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 5;
    while (i > 0) {
        if (i == 3)
            break;
        cout << i << " ";
        i--;
    }
    return 0;
}
```

**A)** 5 4 3  
**B)** 5 4  
**C)** 5 4 3 2 1  
**D)** 5 4 3 2  

**Answer:** B) 5 4

---

### **MCQ 28:**
What will be the output of the following code?

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        if (i == 3) {
            break;
        }
        cout << i << " ";
        i++;
    } while (i < 5);
    return 0;
}
```

**A)** 0 1 2  
**B)** 0 1 2 3  
**C)** 0 1 2 3 4  
**D)** No output  

**Answer:** A) 0 1 2

---

### **MCQ 29:**
What will the following code print?

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    if (a > b) {
        cout << "A is greater";
    } else {
        cout << "B is greater or equal";
    }
    return 0;
}
```

**A)** A is greater  
**B)** B is greater or equal  
**C)** No output  
**D)** Compilation error  

**Answer:** B) B is greater or equal

---

### **MCQ 30:**
What is the result of this code snippet?

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                continue;
            }
            cout << i << j << " ";
        }
    }
    return 0;
}
```

**A)** 00 01 02 10 11 12 20 21 22  
**B)** 00 01 02 10 20 21 22  
**C)** 00 01 02 10 12 20 21 22  
**D)** No output  

**Answer:** C) 00 01 02 10 12 20 21 22
