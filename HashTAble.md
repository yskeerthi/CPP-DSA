### 📘 Hash Table in C++

A **Hash Table** is a **data structure** that provides fast insertion, deletion, and lookup operations. It uses a **hash function** to map keys to **indices** in an array, called a **hash table**.

---

### 🔑 Key Concepts:

| Concept                      | Explanation                                             |
| ---------------------------- | ------------------------------------------------------- |
| **Key**                      | The identifier used to look up a value (e.g., "apple"). |
| **Value**                    | The data associated with a key (e.g., 5).               |
| **Hash Function**            | A function that maps a key to an array index.           |
| **Collision**                | When two keys map to the same index.                    |
| **Chaining/Open Addressing** | Techniques to handle collisions.                        |

---

### 📚 Hash Table in C++ STL

C++ provides two main hash-based containers in the **Standard Template Library (STL)**:

1. `unordered_map` – stores key-value pairs using hashing.
2. `unordered_set` – stores only unique keys (like a hash set).

#### ✅ Syntax:

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> fruitPrice;

    fruitPrice["apple"] = 100;
    fruitPrice["banana"] = 60;

    cout << "Apple price: " << fruitPrice["apple"] << endl;

    return 0;
}
```

---

### ⚙️ How it Works Internally

* **Hash Function:** Converts the key into an index.
* **Buckets:** Internally, it uses an array of linked lists (chaining).
* **Load Factor:** Determines when to rehash (resize the table).
* **Collision Handling:** Typically resolved by **chaining** or **open addressing**.

---

### 🆚 Map vs Unordered Map

| Feature             | `map`           | `unordered_map`      |
| ------------------- | --------------- | -------------------- |
| **Order**           | Sorted (by key) | Unsorted             |
| **Implementation**  | Red-Black Tree  | Hash Table           |
| **Time Complexity** | O(log n)        | O(1) avg, O(n) worst |

---

### 📌 Example Use Cases

* Counting frequency of elements
* Caching results (memoization)
* Lookup dictionaries (e.g., word → meaning)
* Implementing sets

---

### 🚧 Handling Collisions

Two keys with the same hash:

* **Chaining**: Each bucket holds a linked list of entries.
* **Open Addressing**: Probes next available bucket (linear/quadratic probing).

---

### 🧠 Best Practices

* Choose good hash functions to avoid collisions.
* Avoid using complex types (like custom structs) as keys unless a hash function is defined.
* Monitor the **load factor** to keep performance optimal.

---

### 🧪 Sample Problem

**Problem:** Count the frequency of characters in a string.

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "hello";
    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    for (auto it : freq) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}
```

---

Would you like me to explain how to implement a hash table **from scratch** without using STL?
