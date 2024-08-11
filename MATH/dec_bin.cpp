#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define pb push_back

using namespace std;
string DecimalToBinary(int num){
string binary = "";
while(num > 0){
//26% 2 = 0;
binary+=to_string(num%2);
num = num/2;
}
reverse(binary.begin(),binary.end());
return binary;
}
void ConvertBinary(int num){
int mask = 1 << 4; 
//1<<4
//00001
//00010
//00100
//01000
//00000
//11010 

while(mask > 0){
if((num & mask) == 0){
cout<<0;
}
else{
cout<<1;

}
mask = mask >> 1;
}
}
int main(){
int num;
cin >> num;
ConvertBinary(num);
}
