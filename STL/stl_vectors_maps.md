# STL Vectors in C++ :

Vectors are dynamic arrays that can grow and shrink at runtime. They are part of the Standard Template Library (STL) in C++. 

## Basic Operations

### 1. Declaration

```cpp
#include <vector>
#include <iostream>

std::vector<int> a; // Creates an empty vector of integers
```

### 2. Adding Elements

Elements can be added to the end of the vector using the `push_back()` method.

```cpp
a.push_back(10); // Adds 10 to the vector
a.push_back(20); // Adds 20 to the vector
```

### 3. Accessing Elements

You can access elements in a vector using the square brackets `[]` operator.

```cpp
int firstElement = a[0]; // Access the first element (index 0)
```

### 4. Removing Elements

The `pop_back()` method removes the last element from the vector.

```cpp
a.pop_back(); // Removes the last element from the vector
```

### 5. Getting the Size of the Vector

The `size()` method returns the number of elements in the vector.

```cpp
int n = a.size(); // Get the size of the vector
```

### 6. Iterating Through the Vector

You can use a `for` loop to iterate through all elements of a vector.

```cpp
for (int i = 0; i < a.size(); ++i) {
    std::cout << a[i] << " ";
}
```

## Additional Operations

### 7. Sorting a Vector

The `sort()` function from the `<algorithm>` library can be used to sort the elements of the vector.

```cpp
#include <algorithm>

std::sort(a.begin(), a.end()); // Sort the vector in ascending order
```

### 8. Inserting Elements

The `insert()` method allows you to insert elements at any position in the vector.

```cpp
a.insert(a.begin() + 1, 15); // Inserts 15 at the second position (index 1)
```

### 9. Erasing Elements

The `erase()` method removes an element from a specified position in the vector.

```cpp
a.erase(a.begin() + 1); // Removes the second element (index 1)
```

### 10. Clearing the Vector

The `clear()` method removes all elements from the vector.

```cpp
a.clear(); // Clears all elements from the vector
```

### 11. Checking if the Vector is Empty

The `empty()` method checks if the vector is empty.

```cpp
if (a.empty()) {
    std::cout << "The vector is empty.";
}
```

## Example Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    // Accessing and printing elements
    for (int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << " ";
    }

    // Sorting the vector
    std::sort(a.begin(), a.end());

    // Inserting an element at the second position
    a.insert(a.begin() + 1, 25);

    // Removing the last element
    a.pop_back();

    // Erasing the second element
    a.erase(a.begin() + 1);

    // Checking if the vector is empty
    if (a.empty()) {
        std::cout << "The vector is empty.";
    }

    return 0;
}
```

### Explanation of the Example:

1. **Adding Elements**: We push `10`, `20`, and `30` into the vector.
2. **Printing Elements**: The first loop prints the elements in the vector.
3. **Sorting**: The vector is sorted in ascending order.
4. **Inserting an Element**: `25` is inserted at the second position.
5. **Removing the Last Element**: The last element is removed using `pop_back()`.
6. **Erasing an Element**: The second element is erased.
7. **Checking Empty**: We check if the vector is empty.


### Sorting Vectors

- You can sort a vector using `sort()` function from the algorithm library.

- Example:

  ```cpp
  #include <algorithm>
  #include <vector>
  
  std::vector<int> a = {20, 10, 30};
  std::sort(a.begin(), a.end()); // Sorts the vector in ascending order
  
  for (auto i : a) {
      std::cout << i << " "; // Output: 10 20 30
  }
  ```

  
### Array vs Vector

| Feature               | `Array`                      | `Vector`                       |
| --------------------- | ---------------------------- | ------------------------------ |
| **Size**              | Fixed size                   | Dynamic size                   |
| **Memory Allocation** | Allocated at compile-time    | Allocated at run-time          |
| **Resizing**          | Cannot be resized            | Can dynamically resize         |
| **Syntax**            | `int arr[100];`              | `std::vector<int> vec;`        |
| **Initialization**    | Cannot be initialized easily | Can be initialized with values |

### Common Vector Operations:

- `push_back()`: Adds an element to the end.
- `pop_back()`: Removes the last element.
- `size()`: Returns the size of the vector.
- `sort()`: Sorts the vector.

  ---

# STL Maps in C++ :

- A map is an associative container that stores key-value pairs.

- The keys in a map are unique and the map automatically sorts the keys.

- Example:

  ```cpp
  #include <map>
  #include <iostream>
  
  std::map<int, int> mppp;
  std::vector<int> a = {10, 20, 30, 10, 20};
  
  for (auto i : a) {
      mppp[i]++;
  }
  
  for (auto it : mppp) {
      std::cout << it.first << ": " << it.second << std::endl;
  }
  ```

- **Explanation**: 

  - `it.first` represents the key (e.g., 10, 20).

  - `it.second` represents the number of occurrences of that key.

  - **Output**: 

    ```
    10: 2
    20: 2
    30: 1
    ```

### Maps vs Unordered Maps

| Feature             | `map`                             | `unordered_map`                    |
| ------------------- | --------------------------------- | ---------------------------------- |
| **Ordering**        | Keys are stored in sorted order   | No specific order                  |
| **Time Complexity** | O(log n) for insert, find, delete | O(1) average time for insert, find |
| **Unique keys**     | Only unique keys                  | Only unique keys                   |
| **Use Case**        | When order is important           | When order is not important        |

### Unordered Maps

- An unordered map is similar to a map, but it does not sort the keys.

- Example:

  ```cpp
  #include <unordered_map>
  #include <iostream>
  
  std::unordered_map<int, int> umpp;
  std::vector<int> a = {10, 20, 30, 10, 20};
  
  for (auto i : a) {
      umpp[i]++;
  }
  
  for (auto it : umpp) {
      std::cout << it.first << ": " << it.second << std::endl;
  }
  ```
