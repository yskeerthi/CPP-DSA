Got it, bro! Here’s your **complete Stack Mastery Guide** – everything you need to publish on GitHub or prepare for interviews: definitions, use cases, tips, array/linked list/queue implementations, categorized problems, and pro insights.

---

# 🚀 STACK MASTERY GUIDE

---

## 📌 What is a Stack?

A **Stack** is a linear data structure that follows **LIFO** (Last In First Out) principle.
Imagine a stack of plates – you add to the top (`push`) and remove from the top (`pop`).

---

## 🔧 Stack Operations

| Operation   | Description                   | Time Complexity |
| ----------- | ----------------------------- | --------------- |
| `push(x)`   | Insert element `x` on top     | O(1)            |
| `pop()`     | Remove and return top element | O(1)            |
| `top()`     | View the top element          | O(1)            |
| `isEmpty()` | Check if stack is empty       | O(1)            |
| `size()`    | Number of elements in stack   | O(1)            |

---

## 🧠 Applications of Stack

* Undo operations in editors
* Function call management
* Expression evaluation and conversion (Infix ↔ Postfix)
* Parenthesis checking
* Backtracking (maze/recursion)
* Browser history
* Depth First Search (DFS)
* Reversing strings
* Balanced symbol checking

---

## ⚙️ Stack Implementations

### ✅ 1. Using Array

```cpp
class Stack {
    int* arr;
    int top;
    int size;
public:
    Stack(int n) {
        arr = new int[n];
        size = n;
        top = -1;
    }

    void push(int x) {
        if(top == size - 1) return; // Overflow
        arr[++top] = x;
    }

    void pop() {
        if(top == -1) return; // Underflow
        top--;
    }

    int peek() {
        if(top == -1) return -1;
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};
```

---

### ✅ 2. Using Linked List

```cpp
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

class Stack {
    Node* top;
public:
    Stack() : top(NULL) {}

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    void pop() {
        if(top == NULL) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if(top == NULL) return -1;
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }
};
```

---

### ✅ 3. Using Queue (to implement Stack)

#### Method 1: Make `push()` costly

```cpp
class MyStack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        int size = q.size();
        while(size-- > 1) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if(!q.empty()) q.pop();
    }

    int top() {
        return q.front();
    }

    bool isEmpty() {
        return q.empty();
    }
};
```

---

## 🔥 Categorized Problems (No Solutions)

### 🟢 Basic Problems

* [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
* [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)
* [Min Stack](https://leetcode.com/problems/min-stack/)
* [Stack Push Pop](https://practice.geeksforgeeks.org/problems/stack-push-pop/1)
* [Maximum Element](https://www.hackerrank.com/challenges/maximum-element/problem)

---

### 🟡 Medium Problems

* [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)
* [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)
* [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/)
* [Online Stock Span](https://leetcode.com/problems/online-stock-span/)
* [Celebrity Problem](https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1)

---

### 🔴 Advanced Problems

* [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)
* [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)
* [Remove K Digits](https://leetcode.com/problems/remove-k-digits/)
* [Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/)
* [Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/)

---

## 💡 Pro Tips to Master Stack

✅ Visualize the stack operations using diagrams or simulators
✅ Practice infix ↔ postfix and expression problems
✅ Learn variations like MinStack, MaxStack
✅ Understand interview patterns (NGE, span problems, etc.)
✅ Avoid recursion stack overflow with tail recursion if possible
✅ Use Stack in simulation-based problems (e.g., backspace in string)
✅ Always analyze time and space tradeoffs (e.g., 2-stack queue vs normal queue)

---

If you want a **Queue Mastery Guide** or **Graph Mastery**, I can prepare that next. Want it?
Absolutely, bro! Let's break down **Stack Implementation** **line-by-line** — using **Array**, **Linked List**, and **Queue**.

---

## ✅ 1. Stack Implementation Using Array (Line-by-line)

```cpp
class Stack {
    int* arr;         // Pointer to dynamically allocate array
    int top;          // Points to the top index in the stack
    int size;         // Maximum capacity of the stack
public:
    Stack(int n) {         // Constructor with capacity input
        arr = new int[n];  // Allocating memory for the stack
        size = n;          // Setting the size
        top = -1;          // Initially, stack is empty
    }

    void push(int x) {
        if(top == size - 1) return;  // Overflow: stack is full
        arr[++top] = x;              // Increment top and insert
    }

    void pop() {
        if(top == -1) return;  // Underflow: nothing to pop
        top--;                 // Simply reduce the top index
    }

    int peek() {
        if(top == -1) return -1;  // Empty stack, return invalid
        return arr[top];         // Return top element
    }

    bool isEmpty() {
        return top == -1;  // If top is -1, stack is empty
    }
};
```

### 🧠 Key Points:

* We use `top = -1` to indicate an empty stack.
* `arr[++top] = x` adds the element and moves `top`.
* Time Complexity: `push`, `pop`, `peek`, and `isEmpty` are all **O(1)**.

---

## ✅ 2. Stack Using Linked List (Line-by-line)

```cpp
struct Node {
    int data;        // Value stored in node
    Node* next;      // Pointer to next node

    Node(int val) {  // Constructor for easy initialization
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* top;         // Pointer to the top of the stack
public:
    Stack() {
        top = NULL;     // Initially, stack is empty
    }

    void push(int x) {
        Node* temp = new Node(x); // Create new node
        temp->next = top;         // Point it to old top
        top = temp;               // Make new node the top
    }

    void pop() {
        if(top == NULL) return;   // Stack is empty
        Node* temp = top;         // Save top for deletion
        top = top->next;          // Move top to next node
        delete temp;              // Delete old top node
    }

    int peek() {
        if(top == NULL) return -1;
        return top->data;         // Return value at top
    }

    bool isEmpty() {
        return top == NULL;
    }
};
```

### 🧠 Key Points:

* Dynamically grows — no size limit like arrays.
* Each node stores `data` and a `next` pointer.
* Ideal when you don't know the max size in advance.

---

## ✅ 3. Stack Using Queues (push is costly)

This is a smart trick — we simulate a stack using only **queues**.

```cpp
class MyStack {
    queue<int> q;  // Using STL queue

public:
    void push(int x) {
        q.push(x);               // Add new element
        int size = q.size();     
        size--;                  // Skip the new one
        while(size--) {
            q.push(q.front());  // Rotate front to back
            q.pop();            // Remove rotated element
        }
    }

    void pop() {
        if(!q.empty()) q.pop();  // Pop front (top of simulated stack)
    }

    int top() {
        return q.front();       // Front behaves like top
    }

    bool isEmpty() {
        return q.empty();
    }
};
```

### 🧠 Key Points:

* After pushing, rotate the queue so new element comes to front.
* `push()` becomes **O(n)**, but `pop()` and `top()` are **O(1)**.
* Can be done with two queues as well (more code, same logic).

---

## ✅ Stack Using STL in C++

```cpp
#include <stack>
stack<int> s;

s.push(10);    // Push element
s.top();       // Access top
s.pop();       // Pop top
s.empty();     // Check if empty
```

This is the most **interview-friendly** and fastest approach in C++ when you're allowed to use STL.

---

## 💡 When to Use Which?

| Implementation | Best When...                        |
| -------------- | ----------------------------------- |
| Array          | Max size known, fast access         |
| Linked List    | Size unknown, dynamic memory        |
| Queue          | For fun/tricks or interview puzzles |
| STL Stack      | Allowed in contests/interviews      |

---

Let me know if you want similar breakdowns for **Queue**, **Heap**, **Deque**, or **Recursion Stack**!
