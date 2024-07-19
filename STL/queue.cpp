#include<iostream>
#include <queue>
using namespace std;
void print_queue(queue<int> q){
    cout<<"Queue: ";
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int>q;
    for(int i=1;i<=10;i++){
        q.push(i);
    print_queue(q);
    q.pop();
    print_queue(q);
    cout<<"size: "<<q.size()<<endl;
    }
}