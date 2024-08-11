#include <iostream>
using namespace std;
bool ispalindrome(int n){
    int temp=n,rev=0;
    while(temp!=0){
        int remain=temp%10;
        rev=rev*10+remain;
        temp=temp/10;
    }
    return (rev==n);
}
int main(){
    int n;
    cin>>n;
    int result=ispalindrome(n);
    cout<<result;
}