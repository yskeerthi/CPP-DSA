#include<iostream>
#include <stack>
using namespace std;
void print_stack(stack <int> s){
   cout<<"Stack: ";
   while(!s.empty())
   {
    cout<<s.top()<<" ";
    s.pop();
   }
   cout<<endl;
}
int main(){
    stack<int>s;
    for(int i=1;i<=5;i++){
        s.push(i);
        print_stack(s);
        cout<<"top value: "<<s.top()<<endl;
        s.pop();
        if (!s.empty()) {
            cout << "current top: " << s.top() << endl;
        } else {
            cout << "Stack is empty now" << endl;
        }
    }
    print_stack(s);
}


