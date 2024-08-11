#include<iostream>
using namespace std;
int main()
{
   int n;
   for(int i=1;i<=n;i++){
    if(i%3==0){
        continue;//skip iteration
    }
    cout<<i<<endl;
   }
}