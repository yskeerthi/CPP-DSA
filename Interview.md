This code is designed to count the number of even and odd digits in a given integer. Here’s a breakdown of each part and how it works.

### Code Explanation: Counting Even and Odd Digits in a Number

```cpp
#include <bits/stdc++.h>    // Includes all standard libraries
using namespace std;

int main() {
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;               // Reads an integer from the user and stores it in `n`
    
    int temp = n, e = 0, o = 0;  // `temp` holds `n`, `e` counts even digits, and `o` counts odd digits
    
    // Loop through each digit of the number
    while (temp != 0) {
        int digit = temp % 10;   // Extract the last digit of `temp`
        
        if (digit % 2 == 0) {    // Check if the digit is even
            e++;                 // Increment `e` if the digit is even
        } else {
            o++;                 // Increment `o` if the digit is odd
        }
        
        temp /= 10;              // Remove the last digit from `temp`
    }
    
    // Print the results
    cout << "Even count: " << e << endl;
    cout << "Odd count: " << o << endl;
    
    return 0;
}
```

### Step-by-Step Explanation

1. **User Input**: The program prompts the user to enter a number, which is stored in the variable `n`.

2. **Variable Initialization**:
   - `temp` is initialized to `n` and will be used to store and modify the value of `n` during the loop.
   - `e` and `o` are initialized to `0`. `e` counts the even digits, and `o` counts the odd digits in `n`.

3. **Loop for Digit Extraction**:
   - The program enters a `while` loop that continues as long as `temp` is not zero.
   - Inside the loop:
     - `temp % 10` extracts the last digit of `temp`.
     - The program then checks if the extracted `digit` is even (i.e., `digit % 2 == 0`). If it’s even, it increments `e`. If it’s odd, it increments `o`.
     - `temp /= 10` removes the last digit from `temp` by integer division.

4. **Output Results**:
   - After the loop completes, `e` will hold the count of even digits, and `o` will hold the count of odd digits in the number.
   - Finally, the program outputs these counts.

### Example
If the user inputs `n = 12345`, the program will:
   - Extract digits: `5, 4, 3, 2, 1` (in reverse order).
   - Count them: 
      - `5, 3, 1` are odd, so `o = 3`.
      - `4, 2` are even, so `e = 2`.
   - The output will be:
     ```
     Even count: 2
     Odd count: 3
     ```
Here’s the C++ code to count the number of set bits in an integer without using functions:

```cpp
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    
    // Loop until all bits are processed
    while (num > 0) {
        // Check if the last bit is set
        count += num & 1;
        // Right shift the number by 1 to check the next bit
        num >>= 1;
    }
    
    cout << "Number of set bits: " << count << endl;
    
    return 0;
}
```

### Explanation
- **Input**: The code reads an integer `num` from the user.
- **Loop and Count**:
  - It initializes `count` to zero.
  - While `num` is greater than zero, it uses `num & 1` to check if the least significant bit is `1`.
  - If the bit is `1`, it increments `count`.
  - The `num >>= 1` right-shifts `num` by one position, moving to the next bit.
- **Output**: After the loop ends, `count` contains the number of set bits in `num`, which is then printed.
  Here's the Bubble Sort code that takes input from the user:

```cpp
#include <iostream>
#include <algorithm> // For std::swap

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
```

### Explanation of the Changes
1. **Taking Input for Array Size**: 
   - The code prompts the user to enter the number of elements, storing it in `n`.
   
2. **Taking Input for Array Elements**:
   - The code prompts the user to enter each element of the array, one by one.

### Example of Input and Output
#### Input:
```
Enter the number of elements: 5
Enter 5 elements: 64 25 12 22 11
```

#### Output:
```
Original array: 64 25 12 22 11 
Sorted array: 11 12 22 25 64
```

This approach allows the user to input any array size and elements to be sorted using Bubble Sort.

Here's the Selection Sort code without using any functions. It directly sorts the array in the `main` function and prints the results.

```cpp
#include <iostream>
#include <algorithm> // For std::swap

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[minIndex], arr[i]);
    }

    // Print sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### Explanation of the Code

1. **Input Section**:
   - The program prompts the user to enter the number of elements and the elements themselves.

2. **Selection Sort Implementation**:
   - The outer loop iterates through the array to find the minimum element for each position.
   - The inner loop finds the smallest element in the unsorted portion of the array.
   - The `std::swap` function is used to place the smallest element at the start of the unsorted portion.

3. **Printing the Sorted Array**:
   - After sorting, the sorted array is printed in ascending order.

### Example of Input and Output
#### Input:
```
Enter the number of elements: 5
Enter 5 elements: 29 10 14 37 13
```

#### Output:
```
Sorted array: 10 13 14 29 37
```

This code demonstrates Selection Sort directly in `main`, without the use of separate functions.
```cpp
#include <iostream>

bool isPrimeDigit(int digit) {
    // Check if the digit is one of the prime digits: 2, 3, 5, or 7
    return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int primeDigitCount = 0;
    int temp = number;

    // Check each digit
    while (temp > 0) {
        int digit = temp % 10; // Extract the last digit
        if (isPrimeDigit(digit)) {
            primeDigitCount++;
        }
        temp /= 10; // Remove the last digit
    }

    std::cout << "Number of prime digits in " << number << ": " << primeDigitCount << std::endl;

    return 0;
}
```
