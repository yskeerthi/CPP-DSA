#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int sum=0;
    int n;
    cin>>n;
   int  original_num=n;
    
    while(n>0){
             int lastdigit=n%10;
            sum+= pow(lastdigit,3);
            n=n/10;
    }
    
    if(sum==original_num){
        cout<<"Armstrong"<<endl;
    }
    else{
       cout<<"Not armstrong"<<endl;
    }
 
}