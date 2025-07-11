Absolutely brooo! Let’s make you **pro in Linked Lists**, step-by-step from **scratch to advanced**, even if you don't know the basics right now. I’ll explain everything in a **simple, friendly, and clear way**.

---

## 🔥 Step-by-Step Plan to MASTER LINKED LISTS

### ✅ PHASE 1: UNDERSTANDING BASICS

#### 🔹 What is a Linked List?

A **Linked List** is a linear data structure where elements are **stored in nodes**, and each node points to the **next node**.
Unlike arrays, the elements are not stored at contiguous memory locations.

#### 🔹 Types of Linked Lists:

| Type                     | Description                                      |
| ------------------------ | ------------------------------------------------ |
| **Singly Linked List**   | Each node points to the next node only           |
| **Doubly Linked List**   | Each node points to both previous and next nodes |
| **Circular Linked List** | Last node connects to the first node             |

---

## 🎯 PHASE 2: MASTER TOPICS + QUESTIONS

Below is the **complete roadmap**. I will cover each one with:

* ✅ Explanation
* 🧠 Intuition
* 💡 Code
* 🔍 Time & Space Complexity

---

### 🧱 BASIC LEVEL: BUILDING & OPERATIONS

| #  | Topic                        | Description             |
| -- | ---------------------------- | ----------------------- |
| 1  | **Node Structure** (C++)     | Define a node           |
| 2  | **Create a Linked List**     | Add nodes manually      |
| 3  | **Print a Linked List**      | Traverse the list       |
| 4  | **Insert at Beginning**      | Add new node at front   |
| 5  | **Insert at End**            | Add new node at end     |
| 6  | **Insert at Position (i)**   | At specific index       |
| 7  | **Delete from Beginning**    | Remove front node       |
| 8  | **Delete from End**          | Remove last node        |
| 9  | **Delete from Position (i)** | Delete a specific index |
| 10 | **Length of Linked List**    | Count nodes             |
| 11 | **Search an Element**        | Find a value            |

I'll give you **these 11 basic problems with full code and explanation below** (starting next message).

---

### 🔁 INTERMEDIATE LEVEL

| #  | Topic                                        |
| -- | -------------------------------------------- |
| 12 | Reverse a Linked List (Iterative)            |
| 13 | Reverse a Linked List (Recursive)            |
| 14 | Find Middle of Linked List                   |
| 15 | Detect Loop (Cycle)                          |
| 16 | Remove Loop                                  |
| 17 | Find Length of Loop                          |
| 18 | Check Palindrome Linked List                 |
| 19 | Merge Two Sorted Linked Lists                |
| 20 | Intersection Point of 2 Lists                |
| 21 | Delete Nth Node from End                     |
| 22 | Segregate Even & Odd Nodes                   |
| 23 | Remove Duplicates (Sorted/Unsorted)          |
| 24 | Sort a Linked List                           |
| 25 | Copy a Linked List with Random Pointers      |
| 26 | Add 1 to a Number Represented as Linked List |

---

### 🔥 ADVANCED LEVEL (HARD)

| #  | Topic                                  |
| -- | -------------------------------------- |
| 27 | Merge K Sorted Linked Lists            |
| 28 | Flatten a Multilevel Linked List       |
| 29 | LRU Cache (Using Linked List + Map)    |
| 30 | Reverse in Groups of K Nodes           |
| 31 | Rotate a Linked List                   |
| 32 | Reorder List                           |
| 33 | Swap Nodes in Pairs                    |
| 34 | Clone Linked List With Random Pointers |
| 35 | Convert Binary Number in LL to Integer |

---

## 📘 Learning Resources

| Type        | Name / Link                                                                                      |
| ----------- | ------------------------------------------------------------------------------------------------ |
| Visual Tool | [VisuAlgo - Linked List](https://visualgo.net/en/list)                                           |
| Practice    | [LeetCode Linked List Problems](https://leetcode.com/tag/linked-list/)                           |
| Practice    | [GFG Linked List Problems](https://www.geeksforgeeks.org/data-structures/linked-list/)           |
| Video       | [Apna College LL Playlist](https://youtube.com/playlist?list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ) |

---

## 🔜 NEXT STEP

I will now start giving you **BASIC QUESTIONS 1-11**, one by one with:

* Concept 📘
* Code 💻 (in C++)
* Explanation 🧠
* Time Complexity ⏱️

Shall I start with **Question 1: Creating a Node and Building Linked List**?

Say **“Yes bro start from Q1”** and I’ll proceed!

---
Let’s gooo brooo! 🔥 We’re starting from **BASIC LINKED LIST – Q1 to Q11** with full explanations and codes in C++. This will build your complete foundation.

---

## ✅ Q1: Create a Node and Build a Linked List

### 📘 Concept:

In a singly linked list, each node contains:

* `data` → stores value
* `next` → points to the next node

### 💻 C++ Code:

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};
```

### 🧠 Explanation:

* We define a class `Node` with two parts:

  * `data`: holds the value.
  * `next`: pointer to the next node.
* The constructor initializes the node with value and sets `next` as `NULL`.

### ⏱️ Time Complexity:

* Creating node = **O(1)**

---

## ✅ Q2: Add Nodes to Build a Linked List

### 💻 C++ Code:

```cpp
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " → ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node(10);      // First node
    Node* second = new Node(20);    // Second node
    Node* third = new Node(30);     // Third node

    // Linking nodes
    head->next = second;
    second->next = third;

    printList(head);
    return 0;
}
```

### 🧠 Explanation:

* We manually create and link nodes.
* The `printList` function traverses and prints the list.

### 🟢 Output:

```
10 → 20 → 30 → NULL
```

---

## ✅ Q3: Insert at Beginning

### 💻 Code:

```cpp
Node* insertAtBeginning(Node* head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    return newNode;
}
```

### 🧠 Explanation:

* Create new node with value.
* Make its next point to current head.
* Return new head.

---

## ✅ Q4: Insert at End

```cpp
Node* insertAtEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}
```

---

## ✅ Q5: Insert at Given Position (1-based index)

```cpp
Node* insertAtPosition(Node* head, int pos, int val) {
    if (pos == 1) return insertAtBeginning(head, val);

    Node* newNode = new Node(val);
    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return head;

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
```

---

## ✅ Q6: Delete from Beginning

```cpp
Node* deleteFromBeginning(Node* head) {
    if (head == NULL) return NULL;

    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
```

---

## ✅ Q7: Delete from End

```cpp
Node* deleteFromEnd(Node* head) {
    if (head == NULL || head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
    return head;
}
```

---

## ✅ Q8: Delete at Given Position

```cpp
Node* deleteAtPosition(Node* head, int pos) {
    if (head == NULL) return NULL;
    if (pos == 1) return deleteFromBeginning(head);

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;

    Node* delNode = temp->next;
    if (delNode == NULL) return head;

    temp->next = delNode->next;
    delete delNode;
    return head;
}
```

---

## ✅ Q9: Find Length of Linked List

```cpp
int getLength(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}
```

---

## ✅ Q10: Search an Element in Linked List

```cpp
bool search(Node* head, int key) {
    while (head != NULL) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}
```

---

## ✅ Q11: Print Linked List (Already Done)

```cpp
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " → ";
        head = head->next;
    }
    cout << "NULL\n";
}
```

---

## 🔚 Summary of Basic Concepts:

| Topic                 | Function Name           |
| --------------------- | ----------------------- |
| Create Node           | `Node(val)` constructor |
| Insert at Beginning   | `insertAtBeginning()`   |
| Insert at End         | `insertAtEnd()`         |
| Insert at Position    | `insertAtPosition()`    |
| Delete from Beginning | `deleteFromBeginning()` |
| Delete from End       | `deleteFromEnd()`       |
| Delete at Position    | `deleteAtPosition()`    |
| Length of Linked List | `getLength()`           |
| Search an Element     | `search()`              |
| Print Linked List     | `printList()`           |

---
Let's goo brooo! 🔥 You're ready for **Intermediate Linked List** concepts — this is where things get exciting 💯

We'll now cover:

---

## 🔁 INTERMEDIATE LINKED LIST TOPICS (Q12 to Q22)

| #  | Topic                             |
| -- | --------------------------------- |
| 12 | Reverse a Linked List (Iterative) |
| 13 | Reverse a Linked List (Recursive) |
| 14 | Find Middle of Linked List        |
| 15 | Detect Loop in Linked List        |
| 16 | Remove Loop in Linked List        |
| 17 | Find Length of Loop               |
| 18 | Check Palindrome Linked List      |
| 19 | Merge Two Sorted Linked Lists     |
| 20 | Intersection Point of 2 Lists     |
| 21 | Delete Nth Node from End          |
| 22 | Segregate Even & Odd Nodes        |

---

I’ll now give you Q12 to Q15 first, fully explained with code and logic.

---

## ✅ Q12: Reverse a Linked List (Iterative)

### 📘 Logic:

* Keep three pointers: `prev`, `curr`, and `next`
* Reverse the direction of `next` at each step.

### 💻 Code:

```cpp
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
```

### 🧠 Intuition:

You're flipping the arrows one by one until the list is fully reversed.

### ⏱️ Time: O(n) | Space: O(1)

---

## ✅ Q13: Reverse a Linked List (Recursive)

### 💻 Code:

```cpp
Node* reverseRecursive(Node* head) {
    if (head == NULL || head->next == NULL) return head;

    Node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
```

### 🧠 Intuition:

* Recursively go to the end.
* Reverse pointers on the way back.

---

## ✅ Q14: Find Middle of Linked List

### 📘 Logic:

Use **slow and fast pointer** technique.

### 💻 Code:

```cpp
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
```

### 🧠 Intuition:

Fast moves 2 steps, slow moves 1. When fast is at the end, slow is at the middle.

### ⏱️ Time: O(n) | Space: O(1)

---

## ✅ Q15: Detect Loop in Linked List (Floyd’s Algorithm)

### 📘 Logic:

Again use **slow and fast pointer**. If they meet, there’s a cycle.

### 💻 Code:

```cpp
bool detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) return true;
    }

    return false;
}
```

### 🧠 Intuition:

If there's a loop, fast will "lap" slow at some point.

---

Yesss brooo 🔥 continuing with **Q16 to Q22**, you're doing awesome! This set takes you **deeper into intermediate level** — and prepares you for many interview rounds too 💪

---

## ✅ Q16: Remove Loop from Linked List

### 📘 Logic:

* First detect the loop using Floyd’s Cycle Detection.
* Then, move one pointer to head, the other stays at meeting point.
* Move both 1 step at a time until they meet again — that's loop start.
* Break the loop by setting the `last->next = NULL`.

### 💻 Code:

```cpp
void removeLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Detect loop
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }

    // No loop
    if (slow != fast) return;

    // Find start of loop
    slow = head;
    if (slow == fast) {
        while (fast->next != slow)
            fast = fast->next;
    } else {
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    // Remove loop
    fast->next = NULL;
}
```

### ⏱️ Time: O(n), Space: O(1)

---

## ✅ Q17: Find Length of Loop

### 💻 Code:

```cpp
int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            int count = 1;
            Node* temp = slow->next;
            while (temp != slow) {
                count++;
                temp = temp->next;
            }
            return count;
        }
    }

    return 0;
}
```

### 🧠 Intuition:

Once a loop is detected, count the number of nodes in the loop.

---

## ✅ Q18: Check if Linked List is Palindrome

### 📘 Logic:

* Find middle of the list.
* Reverse the second half.
* Compare both halves.

### 💻 Code:

```cpp
bool isPalindrome(Node* head) {
    if (!head || !head->next) return true;

    // Step 1: Find middle
    Node* slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse second half
    Node* prev = NULL;
    Node* curr = slow;
    while (curr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Step 3: Compare both halves
    Node* first = head;
    Node* second = prev;
    while (second) {
        if (first->data != second->data)
            return false;
        first = first->next;
        second = second->next;
    }

    return true;
}
```

---

## ✅ Q19: Merge Two Sorted Linked Lists

### 💻 Code:

```cpp
Node* mergeSortedLists(Node* l1, Node* l2) {
    Node dummy(0);
    Node* tail = &dummy;

    while (l1 && l2) {
        if (l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1) tail->next = l1;
    if (l2) tail->next = l2;

    return dummy.next;
}
```

---

## ✅ Q20: Find Intersection Point of Two Linked Lists

### 📘 Logic:

* Get lengths of both lists.
* Move the longer list’s head forward by `abs(len1 - len2)`.
* Then move both together till they meet.

### 💻 Code:

```cpp
int getLength(Node* head) {
    int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

Node* getIntersectionNode(Node* headA, Node* headB) {
    int lenA = getLength(headA);
    int lenB = getLength(headB);

    while (lenA > lenB) {
        headA = headA->next;
        lenA--;
    }
    while (lenB > lenA) {
        headB = headB->next;
        lenB--;
    }

    while (headA && headB) {
        if (headA == headB) return headA;
        headA = headA->next;
        headB = headB->next;
    }

    return NULL;
}
```

---

## ✅ Q21: Delete N-th Node from End

### 💻 Code:

```cpp
Node* deleteNthFromEnd(Node* head, int n) {
    Node dummy(0);
    dummy.next = head;
    Node* fast = &dummy;
    Node* slow = &dummy;

    for (int i = 0; i < n; i++)
        fast = fast->next;

    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }

    Node* delNode = slow->next;
    slow->next = delNode->next;
    delete delNode;

    return dummy.next;
}
```

---

## ✅ Q22: Segregate Even and Odd Nodes (Maintain Order)

### 💻 Code:

```cpp
Node* segregateEvenOdd(Node* head) {
    Node* evenStart = NULL;
    Node* evenEnd = NULL;
    Node* oddStart = NULL;
    Node* oddEnd = NULL;

    while (head) {
        int val = head->data;

        if (val % 2 == 0) {
            if (!evenStart) {
                evenStart = evenEnd = head;
            } else {
                evenEnd->next = head;
                evenEnd = evenEnd->next;
            }
        } else {
            if (!oddStart) {
                oddStart = oddEnd = head;
            } else {
                oddEnd->next = head;
                oddEnd = oddEnd->next;
            }
        }

        head = head->next;
    }

    if (!evenStart || !oddStart)
        return evenStart ? evenStart : oddStart;

    evenEnd->next = oddStart;
    oddEnd->next = NULL;

    return evenStart;
}
```

---

Let’s goooo brooo! 🔥 You’ve crushed Basics and Intermediate — now welcome to the **ADVANCED LEVEL** of Linked Lists. These are **interview-level tough questions** that test your mastery. 💯

---

## 🔥 ADVANCED LINKED LIST QUESTIONS (Q23–Q35)

| #  | Topic                                 |
| -- | ------------------------------------- |
| 23 | Remove Duplicates (Sorted/Unsorted)   |
| 24 | Sort a Linked List                    |
| 25 | Copy Linked List with Random Pointers |
| 26 | Add 1 to Number Represented by LL     |
| 27 | Merge K Sorted Linked Lists           |
| 28 | Flatten a Multilevel Linked List      |
| 29 | LRU Cache Using Linked List + Map     |
| 30 | Reverse in Groups of K Nodes          |
| 31 | Rotate a Linked List                  |
| 32 | Reorder List                          |
| 33 | Swap Nodes in Pairs                   |
| 34 | Clone Linked List with Random Pointer |
| 35 | Convert Binary LL to Integer          |

---

## ✅ Q23: Remove Duplicates

### ✅ A. From Sorted List

```cpp
Node* removeDuplicatesSorted(Node* head) {
    Node* curr = head;
    while (curr && curr->next) {
        if (curr->data == curr->next->data) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }
    return head;
}
```

---

### ✅ B. From Unsorted List

```cpp
#include <unordered_set>
Node* removeDuplicatesUnsorted(Node* head) {
    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = NULL;

    while (curr) {
        if (seen.count(curr->data)) {
            prev->next = curr->next;
            delete curr;
        } else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }

    return head;
}
```

---

## ✅ Q24: Sort a Linked List (Merge Sort)

```cpp
Node* merge(Node* l1, Node* l2) {
    Node dummy(0);
    Node* tail = &dummy;

    while (l1 && l2) {
        if (l1->data < l2->data) {
            tail->next = l1; l1 = l1->next;
        } else {
            tail->next = l2; l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

Node* sortList(Node* head) {
    if (!head || !head->next) return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* mid = slow->next;
    slow->next = NULL;

    Node* left = sortList(head);
    Node* right = sortList(mid);

    return merge(left, right);
}
```

---

## ✅ Q25: Copy Linked List with Random Pointers

### 📘 Concept:

* Clone `next` pointers.
* Adjust `random` using hashmap.

```cpp
class NodeRandom {
public:
    int val;
    NodeRandom* next;
    NodeRandom* random;
    NodeRandom(int x) : val(x), next(NULL), random(NULL) {}
};
```

```cpp
NodeRandom* copyRandomList(NodeRandom* head) {
    unordered_map<NodeRandom*, NodeRandom*> mp;

    NodeRandom* curr = head;
    while (curr) {
        mp[curr] = new NodeRandom(curr->val);
        curr = curr->next;
    }

    curr = head;
    while (curr) {
        mp[curr]->next = mp[curr->next];
        mp[curr]->random = mp[curr->random];
        curr = curr->next;
    }

    return mp[head];
}
```

---

## ✅ Q26: Add 1 to a Number Represented by Linked List

### 📘 Logic:

* Reverse the list, add 1, handle carry, reverse again.

```cpp
Node* reverse(Node* head) {
    Node* prev = NULL;
    while (head) {
        Node* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

Node* addOne(Node* head) {
    head = reverse(head);
    Node* curr = head;
    int carry = 1;

    while (curr && carry) {
        int sum = curr->data + carry;
        curr->data = sum % 10;
        carry = sum / 10;

        if (curr->next == NULL && carry) {
            curr->next = new Node(0);
        }

        curr = curr->next;
    }

    return reverse(head);
}
```

---

## ✅ Q27: Merge K Sorted Linked Lists (Min Heap)

```cpp
#include <queue>
struct compare {
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

Node* mergeKLists(vector<Node*>& lists) {
    priority_queue<Node*, vector<Node*>, compare> pq;

    for (auto list : lists)
        if (list) pq.push(list);

    Node dummy(0);
    Node* tail = &dummy;

    while (!pq.empty()) {
        Node* top = pq.top(); pq.pop();
        tail->next = top;
        tail = tail->next;

        if (top->next) pq.push(top->next);
    }

    return dummy.next;
}
```

---

## ✅ Q28: Flatten a Multilevel Doubly Linked List

This is asked at Amazon/LinkedIn

```cpp
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

Node* flatten(Node* head) {
    if (!head) return head;

    Node* curr = head;

    while (curr) {
        if (curr->child) {
            Node* next = curr->next;
            Node* child = flatten(curr->child);

            curr->next = child;
            child->prev = curr;
            curr->child = NULL;

            Node* temp = child;
            while (temp->next) temp = temp->next;

            temp->next = next;
            if (next) next->prev = temp;
        }
        curr = curr->next;
    }

    return head;
}
```

---

## ✅ Q29: LRU Cache Using Doubly Linked List + HashMap

### 📘 Idea:

* Map to store key→node
* DLL to store LRU order

🔗 Will provide full implementation later if needed.

---

## ✅ Q30: Reverse Nodes in K-Groups

```cpp
Node* reverseKGroup(Node* head, int k) {
    Node* curr = head;
    int count = 0;
    while (curr && count < k) {
        curr = curr->next;
        count++;
    }

    if (count == k) {
        curr = reverseKGroup(curr, k);
        while (count--) {
            Node* tmp = head->next;
            head->next = curr;
            curr = head;
            head = tmp;
        }
        head = curr;
    }

    return head;
}
```

---

## ✅ Q31: Rotate Linked List Right by K

```cpp
Node* rotateRight(Node* head, int k) {
    if (!head || !head->next || k == 0) return head;

    int len = 1;
    Node* tail = head;
    while (tail->next) {
        tail = tail->next;
        len++;
    }

    k %= len;
    if (k == 0) return head;

    tail->next = head;

    for (int i = 0; i < len - k; i++)
        tail = tail->next;

    head = tail->next;
    tail->next = NULL;

    return head;
}
```

---

## ✅ Q32: Reorder List (L0 → Ln → L1 → Ln-1...)

```cpp
void reorderList(Node* head) {
    if (!head || !head->next) return;

    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* second = reverse(slow->next);
    slow->next = NULL;
    Node* first = head;

    while (second) {
        Node* tmp1 = first->next;
        Node* tmp2 = second->next;

        first->next = second;
        second->next = tmp1;

        first = tmp1;
        second = tmp2;
    }
}
```

---

## ✅ Q33: Swap Nodes in Pairs

```cpp
Node* swapPairs(Node* head) {
    if (!head || !head->next) return head;

    Node* newHead = head->next;
    head->next = swapPairs(head->next->next);
    newHead->next = head;
    return newHead;
}
```

---

## ✅ Q34: Clone Linked List With Random Pointers (Alternate approach)

Same as Q25 but without extra space.

---

## ✅ Q35: Convert Binary Number in LL to Integer

```cpp
int getDecimalValue(Node* head) {
    int result = 0;
    while (head) {
        result = result * 2 + head->data;
        head = head->next;
    }
    return result;
}
```

---

| No.    | Question Name                 | Difficulty | LeetCode Link                                                                               |
| ------ | ----------------------------- | ---------- | ------------------------------------------------------------------------------------------- |
| 1️⃣    | Reverse Linked List           | Easy       | [LC 206](https://leetcode.com/problems/reverse-linked-list/)                                |
| 2️⃣    | Merge Two Sorted Lists        | Easy       | [LC 21](https://leetcode.com/problems/merge-two-sorted-lists/)                              |
| 3️⃣    | Remove N-th Node From End     | Medium     | [LC 19](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)                    |
| 4️⃣    | Detect Cycle in Linked List   | Easy       | [LC 141](https://leetcode.com/problems/linked-list-cycle/)                                  |
| 5️⃣    | Linked List Cycle II          | Medium     | [LC 142](https://leetcode.com/problems/linked-list-cycle-ii/)                               |
| 6️⃣    | Reorder List                  | Medium     | [LC 143](https://leetcode.com/problems/reorder-list/)                                       |
| 7️⃣    | Add Two Numbers               | Medium     | [LC 2](https://leetcode.com/problems/add-two-numbers/)                                      |
| 8️⃣    | Copy List with Random Pointer | Medium     | [LC 138](https://leetcode.com/problems/copy-list-with-random-pointer/)                      |
| 9️⃣    | Intersection of Two LLs       | Easy       | [LC 160](https://leetcode.com/problems/intersection-of-two-linked-lists/)                   |
| 🔟     | Rotate List                   | Medium     | [LC 61](https://leetcode.com/problems/rotate-list/)                                         |
| 1️⃣1️⃣ | Palindrome Linked List        | Easy       | [LC 234](https://leetcode.com/problems/palindrome-linked-list/)                             |
| 1️⃣2️⃣ | Remove Duplicates (Sorted)    | Easy       | [LC 83](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)                  |
| 1️⃣3️⃣ | Swap Nodes in Pairs           | Medium     | [LC 24](https://leetcode.com/problems/swap-nodes-in-pairs/)                                 |
| 1️⃣4️⃣ | Reverse Nodes in k-Group      | Hard       | [LC 25](https://leetcode.com/problems/reverse-nodes-in-k-group/)                            |
| 1️⃣5️⃣ | Sort List                     | Medium     | [LC 148](https://leetcode.com/problems/sort-list/)                                          |
| 1️⃣6️⃣ | LRU Cache (Design)            | Hard       | [LC 146](https://leetcode.com/problems/lru-cache/)                                          |
| 1️⃣7️⃣ | Flatten Multilevel DLL        | Medium     | [LC 430](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/)            |
| 1️⃣8️⃣ | Merge K Sorted Lists          | Hard       | [LC 23](https://leetcode.com/problems/merge-k-sorted-lists/)                                |
| 1️⃣9️⃣ | Convert Binary LL to Integer  | Easy       | [LC 1290](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/) |
| 2️⃣0️⃣ | Odd Even Linked List          | Medium     | [LC 328](https://leetcode.com/problems/odd-even-linked-list/)                               |

