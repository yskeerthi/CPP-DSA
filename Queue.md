A **queue** in C++ is a linear data structure that follows the **FIFO (First In, First Out)** principle, where the first element added to the queue is the first one to be removed. Think of it as a real-world queue (like in a line at a store): the person who comes first is the one who gets served first.

C++ provides the **`std::queue`** container in the Standard Template Library (STL) for working with queues. This container is part of the **<queue>** header file.

### Characteristics of a Queue:
- **First In, First Out (FIFO)**: The first element added to the queue is the first one to be removed.
- **Two ends**:
  - **Front**: Where elements are removed from.
  - **Back**: Where elements are added to.

### Common Operations:
1. **enqueue (push)**: Adds an element to the end (back) of the queue.
2. **dequeue (pop)**: Removes an element from the front of the queue.
3. **front**: Retrieves the element at the front of the queue without removing it.
4. **empty**: Checks whether the queue is empty.
5. **size**: Returns the number of elements in the queue.

### Syntax:
To use a queue, you need to include the `<queue>` header:

```cpp
#include <queue>
```

### Basic Operations of `std::queue`:
Here's an overview of how to declare and use a queue in C++.

### 1. Declaration:
You can declare a queue for any data type (e.g., `int`, `float`, `string`).

```cpp
#include <queue>

std::queue<int> q;  // A queue to store integers
std::queue<std::string> qs;  // A queue to store strings
```

### 2. Enqueue (Adding an element to the queue):
Use the `push()` function to add an element to the back of the queue.

```cpp
q.push(10);  // Adds 10 to the back of the queue
q.push(20);  // Adds 20 to the back of the queue
```

### 3. Dequeue (Removing an element from the queue):
Use the `pop()` function to remove the element at the front of the queue. Note that this operation only removes the front element and does not return it.

```cpp
q.pop();  // Removes the front element (10)
```

### 4. Access the Front and Back:
- `front()`: Returns the front element.
- `back()`: Returns the last element (the most recently added).

```cpp
int frontElement = q.front();  // Accesses the front element (20)
int backElement = q.back();    // Accesses the back element (20)
```

### 5. Check if the Queue is Empty:
The `empty()` function checks if the queue is empty. It returns `true` if the queue is empty, otherwise it returns `false`.

```cpp
if (q.empty()) {
    std::cout << "Queue is empty!" << std::endl;
}
```

### 6. Get the Size of the Queue:
The `size()` function returns the number of elements currently in the queue.

```cpp
int size = q.size();  // Returns the size of the queue (1, after one element was popped)
```

### Example Program:

```cpp
#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Enqueue elements
    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << "Front element: " << q.front() << std::endl;  // 1
    std::cout << "Back element: " << q.back() << std::endl;    // 3

    // Dequeue elements
    q.pop();
    std::cout << "Front element after pop: " << q.front() << std::endl;  // 2

    // Check if queue is empty
    if (q.empty()) {
        std::cout << "Queue is empty!" << std::endl;
    } else {
        std::cout << "Queue is not empty!" << std::endl;
    }

    std::cout << "Queue size: " << q.size() << std::endl;  // 2

    return 0;
}
```

### Output:
```text
Front element: 1
Back element: 3
Front element after pop: 2
Queue is not empty!
Queue size: 2
```

### Key Points:
1. **FIFO Order**: The queue operates in a FIFO manner, meaning the first element pushed is the first to be popped.
2. **Front and Back Access**: You can access both the front and the back of the queue using `front()` and `back()`.
3. **No Element Return on Pop**: Unlike `std::stack`, where `pop()` returns the top element, `std::queue::pop()` doesn't return the front element — it just removes it.
4. **Empty Check**: It’s important to check if the queue is empty before calling `front()` or `pop()` to avoid accessing an empty queue.

### Performance:
- **Insertion and Deletion**: Insertion at the back and deletion at the front both have constant time complexity, i.e., O(1).
- **Access**: Accessing the front or back element is also O(1).

### Variants of `std::queue`:
1. **Priority Queue**: A queue that retrieves the highest-priority element first. It's implemented using `std::priority_queue`.
2. **Deque (Double-ended Queue)**: A queue where elements can be added or removed from both ends. It's implemented using `std::deque`.

### Priority Queue (Bonus):

A **priority queue** is a variant of a queue where each element has a "priority," and the element with the highest priority is dequeued first. It uses a heap internally for efficient retrieval of the highest-priority element.

Here’s an example:

```cpp
#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(15);

    std::cout << "Top element: " << pq.top() << std::endl;  // 20

    pq.pop();
    std::cout << "Top element after pop: " << pq.top() << std::endl;  // 15

    return 0;
}
```

### Deque:

A **deque** (double-ended queue) allows you to insert and delete elements from both ends (front and back). It combines the features of both a queue and a stack.

```cpp
#include <deque>
#include <iostream>

int main() {
    std::deque<int> dq;

    dq.push_back(10);   // Insert at the back
    dq.push_front(5);   // Insert at the front

    std::cout << dq.front() << std::endl;  // 5
    std::cout << dq.back() << std::endl;   // 10

    dq.pop_front();  // Remove from the front
    dq.pop_back();   // Remove from the back

    return 0;
}
```
