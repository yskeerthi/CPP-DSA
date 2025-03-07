#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	gcd(a,b);
	int lcm=(a*b)/gcd(a,b);
	cout<<lcm;
	

}
