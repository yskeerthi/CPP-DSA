#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin >>n;
    int s=0;
    int temp=n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;

    }
    cout<<s<<endl;

}