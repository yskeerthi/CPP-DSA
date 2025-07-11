#include <bits/stdc++.h>
using namespace std;

// ✅ Node class definition
class Node {
public:
    int data;      // Data part of the node
    Node* next;    // Pointer to next node

    // Constructor to create a new node with given value
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// ✅ Traverse and print linked list
// Time Complexity: O(n)
void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " → ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// ✅ Insert at beginning (head insertion)
// Time Complexity: O(1)
void insertAtHead(Node*& head, int value) {
    Node* nn = new Node(value); // Create new node
    nn->next = head;            // Point new node to old head
    head = nn;                  // Update head to new node
}

// ✅ Insert at end using head only
// Time Complexity: O(n) — traverses list
void insertAtEnd_UsingHead(Node*& head, int value) {
    Node* nn = new Node(value);
    if (head == NULL) {
        head = nn;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nn;
}

// ✅ Insert at end using tail pointer
// Time Complexity: O(1)
void insertAtEnd_UsingTail(Node*& head, Node*& tail, int value) {
    Node* nn = new Node(value);
    if (head == NULL) {
        head = tail = nn; // First node becomes both head and tail
    } else {
        tail->next = nn;  // Attach new node to tail
        tail = nn;        // Update tail
    }
}

// ✅ Insert at specific position (1-based index)
// Time Complexity: O(n)
void insertAtPosition(Node*& head, int pos, int value) {
    Node* nn = new Node(value);
    if (pos == 1) {
        nn->next = head;
        head = nn;
        return;
    }

    Node* temp = head;
    int count = 1;
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Position too large, inserting at end." << endl;
        insertAtEnd_UsingHead(head, value);
        return;
    }

    nn->next = temp->next;
    temp->next = nn;
}

// ✅ Find length of linked list
// Time Complexity: O(n)
int length(Node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

// ✅ Search for element
// Time Complexity: O(n)
int search(Node* head, int key) {
    int index = 1;
    while (head != NULL) {
        if (head->data == key)
            return index;
        index++;
        head = head->next;
    }
    return -1;
}

// ✅ Find middle using slow and fast pointer (Optimized)
// Time Complexity: O(n)
int findMiddle_SlowFast(Node* head) {
    if (head == NULL)
        return -1;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;         // Move 1 step
        fast = fast->next->next;   // Move 2 steps
    }

    return slow->data; // Slow is at middle
}

// ✅ Delete from beginning
// Time Complexity: O(1)
void deleteFromBeginning(Node*& head) {
    if (head == NULL) return;

    Node* temp = head;   // Store current head
    head = head->next;   // Move head to next
    delete temp;         // Delete old head
}

// ✅ Delete from end using head only
// Time Complexity: O(n)
void deleteFromEnd_UsingHead(Node*& head) {
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;     // Delete last node
    temp->next = NULL;     // Set second-last node's next to NULL
}

// ✅ Delete from end using tail pointer (Extra Optimized — Doubly Linked List Recommended)
// For singly linked list, still O(n)
void deleteFromEnd_UsingTail(Node*& head, Node*& tail) {
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    temp->next = NULL;
    tail = temp;
}

// ✅ Delete from a specific position
// Time Complexity: O(n)
void deleteFromPosition(Node*& head, int pos) {
    if (head == NULL) return;

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

// ✅ MAIN function
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int n, value;

    cout << "Enter number of initial nodes: ";
    cin >> n;

    // 🔁 Build list with tail for efficient insertions
    for (int i = 0; i < n; i++) {
        cout << "Enter value of node " << i + 1 << ": ";
        cin >> value;
        insertAtEnd_UsingTail(head, tail, value);
    }

    cout << "\nInitial Linked List: ";
    traverse(head);

    // ➕ Insert at beginning
    cout << "\nEnter value to insert at beginning: ";
    cin >> value;
    insertAtHead(head, value);
    cout << "After inserting at beginning: ";
    traverse(head);

    // ➕ Insert at end using head only
    cout << "\nEnter value to insert at end (using head): ";
    cin >> value;
    insertAtEnd_UsingHead(head, value);
    cout << "After inserting at end: ";
    traverse(head);

    // ➕ Insert at position
    int pos;
    cout << "\nEnter position and value to insert: ";
    cin >> pos >> value;
    insertAtPosition(head, pos, value);
    cout << "After inserting at position " << pos << ": ";
    traverse(head);

    // 📏 Length of list
    cout << "\nLength of Linked List: " << length(head) << endl;

    // 🔍 Search element
    cout << "\nEnter value to search: ";
    cin >> value;
    int found = search(head, value);
    if (found != -1)
        cout << "Element found at position: " << found << endl;
    else
        cout << "Element not found." << endl;

    // 🎯 Find middle using optimized method
    cout << "\nMiddle of Linked List (Slow-Fast): " << findMiddle_SlowFast(head) << endl;

    // ❌ Delete from beginning
    deleteFromBeginning(head);
    cout << "\nAfter deleting from beginning: ";
    traverse(head);

    // ❌ Delete from end using head
    deleteFromEnd_UsingHead(head);
    cout << "\nAfter deleting from end (using head): ";
    traverse(head);

    // ❌ Delete from end using tail
    deleteFromEnd_UsingTail(head, tail);
    cout << "\nAfter deleting from end (using tail): ";
    traverse(head);

    // ❌ Delete from position
    cout << "\nEnter position to delete: ";
    cin >> pos;
    deleteFromPosition(head, pos);
    cout << "After deleting from position " << pos << ": ";
    traverse(head);

    return 0;
}
