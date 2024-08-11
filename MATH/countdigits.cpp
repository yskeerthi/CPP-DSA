#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res=0;
    while(n>0){
        n=n/10;
        res++;
    }
   cout<<res;

}