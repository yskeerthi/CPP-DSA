#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1,i;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    int res=0;
    while(fact%10==0){
        res++;
        fact=fact/10;
    }
   cout<<res;
}