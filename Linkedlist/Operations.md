// Online C++ compiler to run C++ program online
```cpp
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
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* deletehead(Node* head)
{
    if(head==NULL)
    {
        return head;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deletetail(Node* head)
{
    if(head==NULL || head->next==NULL)
    return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
int main() {
    vector<int> arr = {2,8,9};
    Node* head=convertarr2ll(arr);
     cout<<"after deleting head:";
    head=deletehead(head);
    print(head);
    cout<<"after deleting tail:";
    head=deletetail(head);
    print(head);
}
```
