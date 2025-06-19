

---

## 🔷 What is a Queue?

A **Queue** is a **linear data structure** that follows the **FIFO (First In First Out)** principle.

* The **element inserted first** will be removed first.
* Think of it like a **line at a ticket counter**: the first person in line is served first.

---

## 🔷 Basic Operations

| Operation | Description                         |
| --------- | ----------------------------------- |
| `enqueue` | Insert element at the rear (push)   |
| `dequeue` | Remove element from the front (pop) |
| `front`   | Access the first element            |
| `rear`    | Access the last element             |
| `isEmpty` | Check if the queue is empty         |
| `size`    | Number of elements in queue         |

---

## 🔷 Implementation Types

### ✅ 1. Using Array (Basic - Fixed Size)

```cpp
#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int front, rear, capacity;

public:
    Queue(int size) {
        arr = new int[size];
        front = 0;
        rear = 0;
        capacity = size;
    }

    void enqueue(int x) {
        if (rear == capacity) {
            cout << "Queue is Full\n";
            return;
        }
        arr[rear++] = x;
    }

    void dequeue() {
        if (front == rear) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Removed: " << arr[front++] << endl;
    }

    void display() {
        for (int i = front; i < rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};
```

---

### ✅ 2. Using STL Queue (Recommended)

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.back() << endl;

    q.pop(); // removes 10

    cout << "After pop, Front: " << q.front() << endl;
}
```

---

### ✅ 3. Using Linked List (Dynamic Size)

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = NULL;

        if (rear == NULL) {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        cout << "Removed: " << temp->data << endl;
        delete temp;
    }

    void display() {
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
```

---

## 🔷 Advanced Queues

### 🔁 1. Circular Queue

* Fixes wasted space problem in array-based queue.
* Rear wraps around.

### 🚀 2. Priority Queue

* Elements are served based on **priority**, not insertion order.
* Implemented using `std::priority_queue`.

```cpp
#include <queue>
#include <iostream>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(40);
    pq.push(10);
    pq.push(50);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    // Output: 50 40 10
}
```

Use `priority_queue<int, vector<int>, greater<int>>` for **min-heap**.

---

### 🌈 3. Deque (Double-Ended Queue)

* Insertion/deletion from both ends.
* Implemented using `std::deque`.

```cpp
#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(5);

    for (int i : dq)
        cout << i << " "; // 5 10 20
}
```

---

## 🔷 Real World Use Cases

| Use Case                           | Description                         |
| ---------------------------------- | ----------------------------------- |
| **CPU Scheduling**                 | Round Robin uses circular queues    |
| **Printer Spooling**               | Jobs are queued to print            |
| **Web Server Requests**            | Handled in the order they arrive    |
| **Level Order Traversal in Trees** | BFS uses a queue to traverse levels |
| **Buffer Handling**                | Data packets in network devices     |
| **Real-time Simulations**          | Managing events in a timed sequence |

---

## 🔷 Time and Space Complexity

| Operation  | Time (Array) | Time (Linked List) |
| ---------- | ------------ | ------------------ |
| Enqueue    | O(1)         | O(1)               |
| Dequeue    | O(1)         | O(1)               |
| Front/Rear | O(1)         | O(1)               |
| Space      | O(n)         | O(n)               |

---

## 🔷 Summary

* Queue is FIFO — useful when order matters.
* You can implement it using array, linked list, or STL containers.
* Advanced types include circular queues, priority queues, and deques.
* Widely used in OS, networking, and algorithms like BFS.

---

Sure bro! Let's go **deep into real-world and coding problem use cases** of **Queue** with clear examples and real applications in DSA and system design.

---

## 🔷 Queue Use Cases in Coding Problems & Real Applications

Here’s a breakdown of **how queues are used in actual problems**, their **purpose**, and **example problems** with **concepts** they involve.

---

### ✅ 1. **Level Order Traversal of Binary Tree (BFS)**

#### 🔸 Use Case:

* Traverse nodes **level-by-level** from top to bottom.
* Queue stores nodes to be processed in order.

#### 🔸 Problem:

* **Leetcode 102** – Binary Tree Level Order Traversal
* **GFG** – Level order traversal in spiral form

#### 🔸 Code Concept:

```cpp
queue<TreeNode*> q;
q.push(root);
while (!q.empty()) {
    TreeNode* node = q.front(); q.pop();
    if (node->left) q.push(node->left);
    if (node->right) q.push(node->right);
}
```

---

### ✅ 2. **First Non-Repeating Character in a Stream**

#### 🔸 Use Case:

* Track the first character that doesn’t repeat.
* Use a queue to preserve order and a map for frequency.

#### 🔸 Problem:

* **GFG** – First non-repeating character in a stream

#### 🔸 Code Concept:

```cpp
queue<char> q;
unordered_map<char, int> freq;
for (char ch : stream) {
    q.push(ch);
    freq[ch]++;
    while (!q.empty() && freq[q.front()] > 1)
        q.pop();
}
```

---

### ✅ 3. **Sliding Window Maximum**

#### 🔸 Use Case:

* Find the maximum of all subarrays of size `k`.
* Use **deque** for efficient sliding window.

#### 🔸 Problem:

* **Leetcode 239** – Sliding Window Maximum

#### 🔸 Code Concept:

Use deque to maintain decreasing order of elements’ indices.

---

### ✅ 4. **Generate Binary Numbers from 1 to N**

#### 🔸 Use Case:

* Use queue to **generate binary numbers** in order.

#### 🔸 Problem:

* **GFG** – Generate Binary Numbers

#### 🔸 Code Concept:

```cpp
queue<string> q;
q.push("1");
while (n--) {
    string s = q.front(); q.pop();
    cout << s << " ";
    q.push(s + "0");
    q.push(s + "1");
}
```

---

### ✅ 5. **Rotten Oranges (Multi-source BFS)**

#### 🔸 Use Case:

* Rotting spreads from multiple sources in all directions.
* Queue stores current rotten oranges to spread rot in steps.

#### 🔸 Problem:

* **Leetcode 994** – Rotting Oranges

#### 🔸 Code Concept:

```cpp
queue<pair<int,int>> q; // all initial rotten oranges
while (!q.empty()) {
    // spread rot to all adjacent fresh oranges
}
```

---

### ✅ 6. **LRU Cache (Queue + Hash Map)**

#### 🔸 Use Case:

* Cache system: discard least recently used element.
* Use queue (or doubly linked list) to maintain recent usage order.

#### 🔸 Problem:

* **Leetcode 146** – LRU Cache

---

### ✅ 7. **Circular Tour (Petrol Pump)**

#### 🔸 Use Case:

* Find the first petrol pump from which the truck can complete the circle.
* Queue helps in simulating circular rotation.

#### 🔸 Problem:

* **GFG** – Circular Tour

---

### ✅ 8. **Interleaving of Two Halves of Queue**

#### 🔸 Use Case:

* Rearrange queue with alternate elements from two halves.

#### 🔸 Problem:

* **GFG** – Interleave the first half with the second half of the queue

---

### ✅ 9. **Number of Students Unable to Eat Lunch (Queue Simulation)**

#### 🔸 Use Case:

* Simulation-based logic.
* Students choose food in order. If front doesn’t match, push to back.

#### 🔸 Problem:

* **Leetcode 1700** – Number of Students Unable to Eat Lunch

---

### ✅ 10. **Shortest Path in Grid / Graph (Unweighted)**

#### 🔸 Use Case:

* Use **BFS** with queue to find shortest distance in unweighted graph.

#### 🔸 Problem:

* **Leetcode 1091** – Shortest Path in Binary Matrix
* **GFG** – Word Ladder / Knight Walk

---

## 💡 Real-Life System Design Use Cases

| Application              | Use of Queue                                |
| ------------------------ | ------------------------------------------- |
| **Print Queue**          | Printing tasks managed in order             |
| **CPU Scheduling**       | Round Robin Scheduling (Circular Queue)     |
| **Order Processing**     | E-commerce platforms process orders in FIFO |
| **Messaging Systems**    | RabbitMQ / Kafka use queues for processing  |
| **Task Scheduling**      | Background task runners like Celery         |
| **Customer Support Bot** | FIFO queue for response handling            |

---

## 🧠 Queue Variants in Problems

| Variant            | Used In                                       |
| ------------------ | --------------------------------------------- |
| **Simple Queue**   | BFS, task ordering                            |
| **Circular Queue** | OS scheduling, ring buffers                   |
| **Priority Queue** | Dijkstra’s Algo, Huffman Coding               |
| **Deque**          | Sliding Window Max, Palindrome Check, 0-1 BFS |

---

## 📌 Summary Table

| Problem Area      | Queue Type    | Problem Name (Platform)                        |
| ----------------- | ------------- | ---------------------------------------------- |
| Tree Traversal    | Normal Queue  | Level Order Traversal (Leetcode 102)           |
| Streams           | Queue + Map   | First Non-Repeating Char (GFG)                 |
| Subarrays         | Deque         | Sliding Window Maximum (Leetcode 239)          |
| BFS Shortest Path | Queue         | Shortest Path in Binary Matrix (Leetcode 1091) |
| Graph Traversal   | Queue         | Word Ladder (Leetcode)                         |
| Simulation        | Queue         | Students Lunch Problem (Leetcode 1700)         |
| Cache Design      | Queue + Map   | LRU Cache (Leetcode 146)                       |
| Optimization      | PriorityQueue | Dijkstra’s Algo (GFG/Leetcode)                 |

---
Here are direct links to the most popular queue-based coding problems with easy access:

---

## ✅ Easy

1. **LeetCode 232: Implement Queue using Stacks**
   [https://leetcode.com/problems/implement-queue-using-stacks/](https://leetcode.com/problems/implement-queue-using-stacks/)

2. **GFG: Generate Binary Numbers**
   [https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/](https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/)

3. **GFG: First Non‑Repeating Character in a Stream**
   [https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1](https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1)

4. **LeetCode 1700: Number of Students Unable to Eat Lunch**
   [https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/](https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/)

---

## 🟡 Medium

5. **LeetCode 102: Binary Tree Level Order Traversal**
   [https://leetcode.com/problems/binary-tree-level-order-traversal/](https://leetcode.com/problems/binary-tree-level-order-traversal/) ([medium.com][1], [leetcode.com][2])

6. **LeetCode 994: Rotting Oranges**
   [https://leetcode.com/problems/rotting-oranges/](https://leetcode.com/problems/rotting-oranges/) ([leetcode.com][3])

7. **LeetCode 239: Sliding Window Maximum**
   [https://leetcode.com/problems/sliding-window-maximum/](https://leetcode.com/problems/sliding-window-maximum/)

8. **LeetCode 622: Design Circular Queue**
   [https://leetcode.com/problems/design-circular-queue/](https://leetcode.com/problems/design-circular-queue/)

9. **LeetCode 649: Dota2 Senate**
   [https://leetcode.com/problems/dota2-senate/](https://leetcode.com/problems/dota2-senate/)

10. **LeetCode 362: Design Hit Counter**
    [https://leetcode.com/problems/design-hit-counter/](https://leetcode.com/problems/design-hit-counter/)

11. **LeetCode 752: Open the Lock**
    [https://leetcode.com/problems/open-the-lock/](https://leetcode.com/problems/open-the-lock/)

12. **LeetCode 950: Reveal Cards In Increasing Order**
    [https://leetcode.com/problems/reveal-cards-in-increasing-order/](https://leetcode.com/problems/reveal-cards-in-increasing-order/)

13. **LeetCode 1823: Find the Winner of the Circular Game**
    [https://leetcode.com/problems/find-the-winner-of-the-circular-game/](https://leetcode.com/problems/find-the-winner-of-the-circular-game/)

14. **LeetCode 933: Number of Recent Calls**
    [https://leetcode.com/problems/number-of-recent-calls/](https://leetcode.com/problems/number-of-recent-calls/)

---

## 🔴 Hard / Advanced

15. **LeetCode 146: LRU Cache**
    [https://leetcode.com/problems/lru-cache/](https://leetcode.com/problems/lru-cache/)

16. **LeetCode 355: Design Twitter**
    [https://leetcode.com/problems/design-twitter/](https://leetcode.com/problems/design-twitter/)

17. **GFG: Minimum Cost to Connect Ropes**
    [https://practice.geeksforgeeks.org/problems/connect-n-ropes-with-minimum-cost/1](https://practice.geeksforgeeks.org/problems/connect-n-ropes-with-minimum-cost/1)

18. **LeetCode 407: Trapping Rain Water II**
    [https://leetcode.com/problems/trapping-rain-water-ii/](https://leetcode.com/problems/trapping-rain-water-ii/)

---

### 🎯 Bonus: Queue Fundamentals & Variations

* **LeetCode 225: Implement Stack using Queues**
  [https://leetcode.com/problems/implement-stack-using-queues/](https://leetcode.com/problems/implement-stack-using-queues/)

* **LeetCode 346: Moving Average from Data Stream**
  [https://leetcode.com/problems/moving-average-from-data-stream/](https://leetcode.com/problems/moving-average-from-data-stream/)

* **GFG: Interleave First and Second Half of Queue**
  [https://practice.geeksforgeeks.org/problems/interleaving-the-first-half-and-the-second-half-of-queue/1](https://practice.geeksforgeeks.org/problems/interleaving-the-first-half-and-the-second-half-of-queue/1)

* **GFG: Reverse First K Elements of Queue**
  [https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1](https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1)

---

**Tip:** For each one, look for C++ implementations and practice variations (e.g., using arrays, linked lists, STL, or optimized deque solutions). Solving these will truly level up your understanding and mastery of queues. 💪

Need help with code templates or choosing which to tackle first? Just say the word!

[1]: https://medium.com/%40chaudharyritesh947/rotten-oranges-leetcode-994-048551d73f8c?utm_source=chatgpt.com "Rotten Oranges — Leetcode: 994. - Medium"
[2]: https://leetcode.com/problems/binary-tree-level-order-traversal/?utm_source=chatgpt.com "102. Binary Tree Level Order Traversal - LeetCode"
[3]: https://leetcode.com/problems/rotting-oranges/?utm_source=chatgpt.com "Rotting Oranges - LeetCode"

