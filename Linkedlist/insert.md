### **Explanation of the C++ Code for Singly Linked List Insertion Operations**

---

### **1. Header Files**
```cpp
#include <iostream>
using namespace std;
```
- `#include <iostream>` → This header file allows us to use input and output functions (`cin`, `cout`).
- `using namespace std;` → This avoids the need to write `std::` before `cout`, `cin`, etc.

---

### **2. Node Structure**
```cpp
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
```
- This defines a **Node** class to represent each element in the linked list.
- `data` → Stores the integer value of the node.
- `next` → Pointer that stores the address of the next node in the list.
- Constructor `Node(int val)` initializes the node with:
  - `data = val` (assigns value to the node).
  - `next = nullptr` (initially, the node does not point to anything).

---

### **3. Linked List Class**
```cpp
class LinkedList {
private:
    Node* head;

public:
    LinkedList() { head = nullptr; }
```
- This defines a **LinkedList** class to manage the list.
- `head` → Pointer that always points to the first node of the linked list.
- Constructor `LinkedList()` initializes `head = nullptr` (empty list at the beginning).

---

## **4. Insert at the Head (Beginning)**
```cpp
void insertAtHead(int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
```
### **Explanation:**
- Creates a new node using `new Node(val)`.
- Sets `newNode->next = head`, making the new node point to the existing first node.
- Updates `head = newNode`, so the new node becomes the first node in the list.

---

## **5. Insert at the Tail (End)**
```cpp
void insertAtTail(int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}
```
### **Explanation:**
- Creates a new node.
- If the list is empty (`head == nullptr`), the new node becomes the head.
- Otherwise, it traverses the list using `temp` until it reaches the last node (`temp->next == nullptr`).
- The last node’s `next` is updated to point to the new node.

---

## **6. Insert at a Specific Position**
```cpp
void insertAtPosition(int val, int pos) {
    if (pos == 1) {
        insertAtHead(val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++)
        temp = temp->next;

    if (temp == nullptr) {
        cout << "Position out of bounds\n";
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
```
### **Explanation:**
- If `pos == 1`, calls `insertAtHead(val)` to insert at the beginning.
- Otherwise, it traverses the list to find the `(pos-1)th` node.
- If the position is invalid (`temp == nullptr`), prints an error message.
- Otherwise:
  - `newNode->next = temp->next;` (new node points to the next node).
  - `temp->next = newNode;` (previous node now points to the new node).

---

## **7. Display the Linked List**
```cpp
void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
```
### **Explanation:**
- Uses a `while` loop to traverse the list.
- Prints each node's `data` followed by `->`.
- When the loop ends, prints `NULL` to indicate the end of the list.

---

## **8. Main Function**
```cpp
int main() {
    LinkedList list;

    list.insertAtHead(10);
    list.insertAtHead(5);
    cout << "After inserting at head: ";
    list.display();

    list.insertAtTail(20);
    list.insertAtTail(25);
    cout << "After inserting at tail: ";
    list.display();

    list.insertAtPosition(15, 3);
    cout << "After inserting 15 at position 3: ";
    list.display();

    return 0;
}
```
### **Explanation:**
1. Creates an object `list` of `LinkedList` class.
2. Inserts **5 → 10** at the head.
3. Inserts **20 → 25** at the tail.
4. Inserts **15** at position **3**.
5. Calls `display()` after each insertion to show the current state of the linked list.

---

## **9. Output**
```
After inserting at head: 5 -> 10 -> NULL
After inserting at tail: 5 -> 10 -> 20 -> 25 -> NULL
After inserting 15 at position 3: 5 -> 10 -> 15 -> 20 -> 25 -> NULL
```

---

### **Summary**
✅ `insertAtHead(val)`: Inserts a node at the beginning.  
✅ `insertAtTail(val)`: Inserts a node at the end.  
✅ `insertAtPosition(val, pos)`: Inserts a node at a specific position.  
✅ `display()`: Prints the linked list.

Let me know if you have any doubts! 🚀
