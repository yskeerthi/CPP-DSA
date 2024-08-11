#include <iostream>
#include <utility>
using namespace std;
void explainPair(){
    // pair<int,int> p={1,2};
    // cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> p={1,{2,3}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].second;
}
int main(){
    explainPair();
    return 0;
}