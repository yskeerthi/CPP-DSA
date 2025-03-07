**LCM with GCD**
```
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
```
**LCM wthout GCD**
```
#include <iostream>
using namespace std;

int findLCM(int a, int b) {
    int maxVal = max(a, b); // Start from the larger number

    while (true) {
        if (maxVal % a == 0 && maxVal % b == 0) {
            return maxVal; // Found LCM
        }
        maxVal++; // Increase and check again
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "LCM: " << findLCM(a, b) << endl;
    return 0;
}
```
