# Creating a Linked List in C++

In a linked list, every node contains two pieces of information: the data to store and a pointer to the next node. To handle this structure, we use self-defined data types like `structs` or `classes`. Below is an example of how to create and understand a linked list using a class.

---

## Code Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Define the Node class
class Node {
public: // Access modifier
    int data;      // The data value
    Node* next;    // Pointer to the next node

public:
    // Constructor to initialize both data and next pointer
    Node(int data1, Node* next1) {
        data = data1;   // Initialize data with the provided value
        next = next1;   // Initialize next with the provided pointer
    }

    // Constructor to initialize data, next defaults to nullptr
    Node(int data1) {
        data = data1;    // Initialize data with the provided value
        next = nullptr;  // Initialize next as nullptr since it's the end of the list
    }
};

int main() {
    // Example data
    vector<int> arr = {2, 5, 8, 7};

    // Create the first node using the first element of the array
    Node* y = new Node(arr[0]);

    // Output the memory address of the node
    cout << y << '\n';

    // Output the data stored at the memory location
    cout << y->data << '\n';

    return 0;
}
```

**output**
0x11b7f90  // (This is an example memory address; actual output may vary.)
2          // The data stored in the first node


**convert array to linkedlist**
```cpp
// Online C++ compiler to run C++ program online
#include <iostream>
 #include<vector>
using namespace std;
class Node {
    public:
        int data;         // Data stored in the node
        Node* next;       // Pointer to the next node in the linked list
        // Constructors
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        // Constructor
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};
Node* convertarr2ll(vector<int>&arr)
{
    Node* head=new Node(arr[0]);
   Node* mover=head;
   for(int i=1;i<arr.size();i++)
   {
       Node* temp=new Node(arr[i]);
       mover->next=temp;
       mover=temp;
   }
   return head;
}
int main() {
    vector<int> arr = {21, 5, 8, 7};
    Node* head=convertarr2ll(arr);
    cout << head->data<< '\n';
}
```
