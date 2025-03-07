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
**GCD of all array elements**
```
#include <iostream>
using namespace std;

// Function to find GCD using the Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find GCD of all elements in the array
int gcdArray(int arr[], int n) {
    int gcdValue = arr[0]; // Start with the first element
    for (int i = 1; i < n; i++) {
        gcdValue = findGCD(gcdValue, arr[i]); // Find GCD with each element
    }
    return gcdValue;
}

int main() {
    int n;
    cin >> n; // Read the number of elements
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read array elements
    }

    cout << gcdArray(arr, n) << endl; // Output the GCD of the array
    return 0;
}
```
**LCM OF N NATURAL NUMBERS**
```
#include <iostream>
using namespace std;

// Function to compute GCD using the Euclidean algorithm
long long findGCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM using GCD
long long findLCM(int n) {
    long long lcm = 1;
    for (int i = 2; i <= n; i++) {
        lcm = (lcm * i) / findGCD(lcm, i); // LCM formula
    }
    return lcm;
}

int main() {
    int n;
    cin >> n;  // Input N
    cout << findLCM(n) << endl; // Output LCM of first N natural numbers
    return 0;
}
```

**COPRIME or not**
```
#include <iostream>
using namespace std;

// Function to compute GCD using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if two numbers are co-prime
bool areCoPrime(int a, int b) {
    return findGCD(a, b) == 1; // If GCD is 1, they are co-prime
}

int main() {
    int a, b;
    cin >> a >> b; // Input two numbers

    if (areCoPrime(a, b))
        cout << "YES, Co-prime" << endl;
    else
        cout << "NO, Not Co-prime" << endl;

    return 0;
}
```

** Generate all prime numbers up to N (Sieve of Eratosthenes).**
```
#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true); // Step 1: Assume all numbers are prime
    isPrime[0] = isPrime[1] = false;   // Step 2: 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) { // Step 3: Start marking multiples
        if (isPrime[i]) { 
            for (int j = i * i; j <= n; j += i) { // Mark multiples of i
                isPrime[j] = false;
            }
        }
    }

    // Step 6: Print all prime numbers
    cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Input the number

    sieveOfEratosthenes(n); // Call function to find primes

    return 0;
}
```
**Sum of Primes in a Range **
```
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find sum of primes in range [L, R]
int sumOfPrimes(int L, int R) {
    int sum = 0;
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int L, R;
    cin >> L >> R; // Input range

    cout << "Sum of primes in range [" << L << ", " << R << "]: " << sumOfPrimes(L, R) << endl;
    
    return 0;
}
```
**Count Of Primes**
```
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find sum of primes in range [L, R]
int sumOfPrimes(int L, int R) {
    int sum = 0;
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) {
            sum++;
        }
    }
    return sum;
}

int main() {
    int L, R;
    cin >> L >> R; // Input range

    cout << "Sum of primes in range [" << L << ", " << R << "]: " << sumOfPrimes(L, R) << endl;
    
    return 0;
}
```
