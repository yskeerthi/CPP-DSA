#include<iostream>
#include <queue>
using namespace std;
void print_priority_queue(queue<int> q){
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
    priority_queue<int>pq;
    for(int i=1;i<=10;i++){
        q.push(i);
    print_priority_queue(q);
    // q.pop();
    // print_priority_queue(q);
    // cout<<"size: "<<q.size()<<endl;
    }
}