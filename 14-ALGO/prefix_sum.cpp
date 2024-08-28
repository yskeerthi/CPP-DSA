#include<iostream>
using namespace std;



// Approach: To solve the PREFIX_SUM problem follow the given steps:

// Declare a new array prefixSum[] of the same size as the input array
// Run a for loop to traverse the input array
// For each index add the value of the current element and the previous value of the prefix sum array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int array[n]; // Declare an array of size n

    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i]; // Input elements into the array
    }

    // Optionally, print the array to verify input
    cout << "You entered: ";
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int size=sizeof(array)/sizeof(array[0]);
    int prefixSum[n];
    prefixSum[0]=array[0];
    for(int i=0;i<size;i++)
    {
        prefixSum[i]=prefixSum[i-1]+array[i];
    }
    for (int i = 0; i < n; i++)
        cout << prefixSum[i] << " ";
   }
