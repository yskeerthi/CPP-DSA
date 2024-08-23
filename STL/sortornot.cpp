#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Check if the size of the array is valid
    if (n <= 0) {
        cout << "false" << endl;
        return 0;
    }

    // Dynamically allocate array
    int* arr = new int[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Check if the array is sorted
    bool isSorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }
    
    // Output the result
    if (isSorted) {
        cout << "True" << endl;
    } else {
        cout << "false" << endl;
    }

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
