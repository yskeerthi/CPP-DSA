Here’s a **detailed list** of **basic array algorithm questions**, along with **well-commented code** and **time complexities**. 🚀  

---

## **📌 1. Traversal & Basic Operations**
### **Q1: Print all elements of an array**
🔹 **Problem**: Given an array, print all elements.  
🔹 **Complexity**: **O(n)**  
```cpp
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    // Loop through the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size
    printArray(arr, n); // Call function
    return 0;
}
```

---

## **📌 2. Find Maximum and Minimum in an Array**
### **Q2: Find max and min element in an array**
🔹 **Problem**: Find the largest and smallest number in an array.  
🔹 **Complexity**: **O(n)**
```cpp
#include <iostream>
using namespace std;

void findMinMax(int arr[], int n) {
    int minVal = arr[0]; // Assume first element is min
    int maxVal = arr[0]; // Assume first element is max

    for (int i = 1; i < n; i++) { // Iterate through the array
        if (arr[i] < minVal) minVal = arr[i]; // Update min
        if (arr[i] > maxVal) maxVal = arr[i]; // Update max
    }

    cout << "Minimum: " << minVal << ", Maximum: " << maxVal << endl;
}

int main() {
    int arr[] = {3, 1, 5, 7, 2, 8}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of array
    findMinMax(arr, n); // Call function
    return 0;
}
```

---

## **📌 3. Reverse an Array**
### **Q3: Reverse the given array**
🔹 **Problem**: Reverse an array in **O(n)** time.  
🔹 **Complexity**: **O(n)**
```cpp
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1; // Two-pointer approach
    while (left < right) {
        swap(arr[left], arr[right]); // Swap elements
        left++;
        right--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);
    printArray(arr, n); // Output: 5 4 3 2 1

    return 0;
}
```

---

## **📌 4. Searching Algorithms**
### **Q4: Linear Search**
🔹 **Problem**: Find an element in an unsorted array.  
🔹 **Complexity**: **O(n)**
```cpp
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i; // Found the element
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = linearSearch(arr, n, key);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
```

---

### **Q5: Binary Search (For Sorted Arrays)**
🔹 **Problem**: Find an element in a **sorted** array.  
🔹 **Complexity**: **O(log n)**
```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2; // Middle index

        if (arr[mid] == key) return mid; // Found
        if (arr[mid] < key) left = mid + 1; // Search right half
        else right = mid - 1; // Search left half
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = binarySearch(arr, 0, n - 1, key);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
```

---

## **📌 5. Sorting Algorithms**
### **Q6: Bubble Sort**
🔹 **Problem**: Sort an array using Bubble Sort.  
🔹 **Complexity**: **O(n²)**
```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Outer loop
        for (int j = 0; j < n - i - 1; j++) { // Inner loop
            if (arr[j] > arr[j + 1]) { // Swap if needed
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
```

---

### **Q7: Selection Sort**
🔹 **Problem**: Sort an array using Selection Sort.  
🔹 **Complexity**: **O(n²)**
```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume min is at i
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j; // Update minIndex
        }
        swap(arr[i], arr[minIndex]); // Swap min element with first
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
```

---

## **🚀 Final Notes**
- **Traversal, Searching, Sorting are core concepts** in Arrays.  
- **Sorting complexity varies** → Bubble Sort **O(n²)**, Quick Sort **O(n log n)**.  
- **Binary Search only works on sorted arrays**.  
- **Linear Search works on any array** but is slower **O(n)**.  
Now, let's **level up** 🚀 and move to **intermediate** and **advanced** array problems with **efficient algorithms** like **Kadane's Algorithm, Two-Pointer Technique, Sliding Window, and Prefix Sum**.  

---

## **📌 6. Kadane’s Algorithm (Maximum Subarray Sum)**
🔹 **Problem**: Find the **maximum sum of a contiguous subarray** (Largest Sum Subarray).  
🔹 **Complexity**: **O(n)**  
🔹 **Use Case**: Stock trading profits, temperature changes analysis.  

### **👉 Brute Force Approach (O(n²))**
```cpp
#include <iostream>
using namespace std;

int maxSubarraySumBruteForce(int arr[], int n) {
    int maxSum = arr[0];
    
    // Try every subarray
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum (Brute Force): " << maxSubarraySumBruteForce(arr, n) << endl;

    return 0;
}
```

---

### **👉 Kadane’s Algorithm (Optimized - O(n))**
```cpp
#include <iostream>
using namespace std;

int kadaneAlgorithm(int arr[], int n) {
    int maxSum = arr[0];  // Store the maximum sum
    int currentSum = arr[0];  // Store the current sum

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]); // Extend subarray or start fresh
        maxSum = max(maxSum, currentSum);  // Update maxSum if needed
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum (Kadane's Algorithm): " << kadaneAlgorithm(arr, n) << endl;

    return 0;
}
```

🔹 **Why is this efficient?**
- Instead of checking all subarrays, **it keeps track of a running sum**.
- **If the sum goes negative, we start a new subarray.**

---

## **📌 7. Two-Pointer Technique**
🔹 **Problem**: Check if a sorted array has two numbers that add up to a target.  
🔹 **Complexity**: **O(n)**  

### **👉 Two Pointer Approach**
```cpp
#include <iostream>
using namespace std;

bool twoSumSorted(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) return true;
        else if (sum < target) left++;  // Increase sum
        else right--;  // Decrease sum
    }

    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 8, 10};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    if (twoSumSorted(arr, n, target)) cout << "Pair found!" << endl;
    else cout << "No pair found!" << endl;

    return 0;
}
```

🔹 **Why is this efficient?**
- Instead of **O(n²) brute force**, it **shrinks** the search space using **two pointers**.

---

## **📌 8. Sliding Window Technique**
🔹 **Problem**: Find the **maximum sum of any subarray of size k**.  
🔹 **Complexity**: **O(n)**  
🔹 **Use Case**: Optimizing for **continuous subarrays**.

### **👉 Brute Force Approach (O(n²))**
```cpp
int maxSumBruteForce(int arr[], int n, int k) {
    int maxSum = 0;
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
```

---

### **👉 Optimized Sliding Window (O(n))**
```cpp
#include <iostream>
using namespace std;

int maxSumSlidingWindow(int arr[], int n, int k) {
    int maxSum = 0, windowSum = 0;

    // Compute the sum of the first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // Add new element, remove old one
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Maximum sum of subarray of size " << k << ": " << maxSumSlidingWindow(arr, n, k) << endl;

    return 0;
}
```

🔹 **Why is this efficient?**
- Instead of recalculating every subarray sum, it **adjusts the sum in O(1) per step**.

---

## **📌 9. Prefix Sum Technique**
🔹 **Problem**: Find the sum of any subarray **(L, R) in O(1)** after preprocessing.  
🔹 **Complexity**: **O(n) preprocessing, O(1) queries**.

### **👉 Prefix Sum Algorithm**
```cpp
#include <iostream>
using namespace std;

void computePrefixSum(int arr[], int n, int prefixSum[]) {
    prefixSum[0] = arr[0]; // First element remains the same

    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i]; // Add previous sum
    }
}

// Function to get sum in range [L, R]
int rangeSum(int prefixSum[], int L, int R) {
    if (L == 0) return prefixSum[R]; // Sum from 0 to R
    return prefixSum[R] - prefixSum[L - 1]; // Exclude left part
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixSum[n];

    computePrefixSum(arr, n, prefixSum);

    int L = 1, R = 3; // Query for sum in range [1,3]
    cout << "Sum of subarray [" << L << ", " << R << "] = " << rangeSum(prefixSum, L, R) << endl;

    return 0;
}
```

🔹 **Why is this useful?**
- Instead of recalculating sum for each query, we **precompute sums** in **O(n)**.

---


Do you want to move to **sorting-based** or **advanced problem-solving** next? 🚀🔥
## Basic Level Array Questions

1. **Question 1:** Write a program to find the largest element in an array.

2. **Question 2:** Write a program to find the smallest element in an array.

3. **Question 3:** Write a program to calculate the sum of all elements in an array.

4. **Question 4:** Write a program to reverse an array.

5. **Question 5:** Write a program to count the number of even and odd numbers in an array.

6. **Question 6:** Write a program to check if an array is sorted in ascending order.

7. **Question 7:** Write a program to copy one array to another.

8. **Question 8:** Write a program to find the second largest element in an array.

9. **Question 9:** Write a program to rotate an array to the right by one position.

10. **Question 10:** Write a program to find the frequency of each element in an array.

11. **Question 11:** Write a program to merge two arrays into a third array.

12. **Question 12:** Write a program to find the minimum and maximum elements in an array.

13. **Question 13:** Write a program to remove duplicates from an array.

14. **Question 14:** Write a program to find the intersection of two arrays.

15. **Question 15:** Write a program to check if an array contains a specific element.

16. **Question 16:** Write a program to print the elements of an array in reverse order without using a second array.

17. **Question 17:** Write a program to find the average of elements in an array.

18. **Question 18:** Write a program to find the median of an array.

19. **Question 19:** Write a program to shift all zeros in an array to the end.

20. **Question 20:** Write a program to find the longest sequence of increasing elements in an array.

### Basic Level Answers

1. **Answer:** 
   ```cpp
   int arr[] = {1, 2, 3, 4, 5};
   int max = arr[0];
   for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
       if (arr[i] > max) {
           max = arr[i];
       }
   }
   ```
   *Explanation:* The loop iterates through the array, updating the maximum value whenever it finds a larger element.

2. **Answer:**
   ```cpp
   int arr[] = {1, 2, 3, 4, 5};
   int min = arr[0];
   for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
       if (arr[i] < min) {
           min = arr[i];
       }
   }
   ```
   *Explanation:* Similar to finding the largest element, this loop checks for the smallest element in the array.

3. **Answer:**
   ```cpp
   int arr[] = {1, 2, 3, 4, 5};
   int sum = 0;
   for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
       sum += arr[i];
   }
   ```
   *Explanation:* This loop adds up all elements of the array to compute the sum.

4. **Answer:**
   ```cpp
   int arr[] = {1, 2, 3, 4, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
   for (int i = n - 1; i >= 0; i--) {
       cout << arr[i] << " ";
   }
   ```
   *Explanation:* This loop prints the elements in reverse order starting from the last index to the first.

5. **Answer:**
   ```cpp
   int arr[] = {1, 2, 3, 4, 5};
   int evenCount = 0, oddCount = 0;
   for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
       if (arr[i] % 2 == 0) evenCount++;
       else oddCount++;
   }
   ```
   *Explanation:* This loop counts even and odd numbers by checking the remainder of each element when divided by 2.

6. **Answer:**
   ```cpp
   int arr[] = {1, 2, 3, 4, 5};
   bool isSorted = true;
   for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) - 1; i++) {
       if (arr[i] > arr[i + 1]) {
           isSorted = false;
           break;
       }
   }
   ```
   *Explanation:* This loop checks if each element is less than or equal to the next one to determine if the array is sorted.

7. **Answer:**
   ```cpp
   int arr1[] = {1, 2, 3};
   int arr2[3];
   for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
       arr2[i] = arr1[i]; // Copying elements
   }
   ```
   *Explanation:* This loop copies elements from one array to another.

8. **Answer:**
```cpp
  // Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main() {
    int n;
     cin>>n;
   vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=INT_MIN,s=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>l)
        {
            s=l;
            l=arr[i];
        }
        else if(arr[i]>s && arr[i]!=l)
        {
            s=arr[i];
        }
    }
    cout<<s;
    // return 0;
}
   ```
   *Explanation:* This loop tracks the largest and second-largest values by comparing each element.

9. **Answer:**
   ```cpp
   int arr[] = {1, 2, 3, 4, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
   int temp = arr[n - 1]; // Store last element
   for (int i = n - 1; i > 0; i--) {
       arr[i] = arr[i - 1]; // Shift elements
   }
   arr[0] = temp; // Move last element to first
   ```
   *Explanation:* This loop rotates the array by moving elements one position to the right.

10. **Answer:**
```cpp
   #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Array to store the user input
    cout << "Enter the elements of the array (values should be less than 100): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Frequency array initialized to 0, assuming elements are less than 100
    int freq[100] = {0};

    // Calculating the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; // Increment frequency of the element arr[i]
    }

    // Printing the frequency of each unique element
    cout << "Element frequencies:" << endl;
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            cout << i << ": " << freq[i] << endl;
        }
    }

    return 0;
}
```
    *Explanation:* This loop counts the frequency of each element and prints it.

11. **Answer:**
    ```cpp
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[6];
    for (int i = 0; i < 3; i++) {
        arr3[i] = arr1[i]; // Copy first array
        arr3[i + 3] = arr2[i]; // Copy second array
    }
    ```
    *Explanation:* This loop merges two arrays into a third array.

12. **Answer:**
    ```cpp
    int arr[] = {1, 2, 3, 4, 5};
    int min = arr[0], max = arr[0];
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    ```
    *Explanation:* This loop finds both the minimum and maximum elements in the array.

13. **Answer:**
    ```cpp
    int arr[] = {1, 2, 2, 3, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int unique[n], index = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < index; j++) {
            if (arr[i] == unique[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            unique[index++] = arr[i]; // Add unique element
        }
    }
    ```
    *Explanation:* This nested loop finds and stores unique elements in a new array.

14. **Answer:**
    ```cpp
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};
    int intersection[3], index = 0;
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
        for (int j = 0; j < sizeof(arr2)/sizeof(arr2[0]); j++) {
            if (arr1[i] == arr2[j]) {
                intersection[index++] = arr1[i]; // Store intersection
                break;
            }
        }
    }

 
    ```
    *Explanation:* This nested loop finds the common elements between two arrays.

15. **Answer:**
    ```cpp
    int arr[] = {1, 2, 3, 4, 5};
    int search = 3;
    bool found = false;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] == search) {
            found = true;
            break; // Element found
        }
    }
    ```
    *Explanation:* This loop checks if a specific element exists in the array.

16. **Answer:**
    ```cpp
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = sizeof(arr)/sizeof(arr[0]) - 1; i >= 0; i--) {
        cout << arr[i] << " "; // Print in reverse order
    }
    ```
    *Explanation:* This loop prints elements in reverse without using a second array.

17. **Answer:**
    ```cpp
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        sum += arr[i];
    }
    float average = sum / (float)(sizeof(arr)/sizeof(arr[0]));
    ```
    *Explanation:* This loop calculates the average of the elements by dividing the sum by the number of elements.

18. **Answer:**
    ```cpp
    int arr[] = {1, 3, 2, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n); // Sort array
    float median;
    if (n % 2 == 0) {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0; // Even number of elements
    } else {
        median = arr[n / 2]; // Odd number of elements
    }
    ```
    *Explanation:* This program calculates the median by first sorting the array and then checking if the number of elements is odd or even.

19. **Answer:**
    ```cpp
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i]; // Move non-zero elements
        }
    }
    while (index < n) {
        arr[index++] = 0; // Fill remaining with zeros
    }
    ```
    *Explanation:* This loop moves all non-zero elements to the front and fills the rest with zeros.

20. **Answer:**
    ```cpp
    int arr[] = {1, 2, 3, 2, 1, 5};
    int maxLength = 0, currentLength = 1;
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] > arr[i - 1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1; // Reset for new sequence
        }
    }
    maxLength = max(maxLength, currentLength); // Final check
    ```
    *Explanation:* This loop checks for the longest increasing sequence by comparing each element with the previous one.

---

## Medium Level Array Questions

1. **Question 1:** Write a program to rotate an array to the left by `k` positions.

2. **Question 2:** Write a program to find the missing number in an array of size `n` containing numbers from `1` to `n`.

3. **Question 3:** Write a program to sort an array using the selection sort algorithm.

4. **Question 4:** Write a program to find the common elements between two arrays.

5. **Question 5:** Write a program to implement binary search on a sorted array.

6. **Question 6:** Write a program to find all pairs in an array whose sum is equal to a given value.

7. **Question 7:** Write a program to find the first non-repeating element in an array.

8. **Question 8:** Write a program to implement insertion sort on an array.

9. **Question 9:** Write a program to find the longest consecutive sequence in an array.

10. **Question 10:** Write a program to split an array into two halves and calculate the sum of both halves.

11. **Question 11:** Write a program to find the smallest subarray with a sum greater than a given value.

12. **Question 12:** Write a program to find the intersection of two sorted arrays.

13. **Question 13:** Write a program to rotate an array in-place.

14. **Question 14:** Write a program to check if two arrays are equal.

15. **Question 15:** Write a program to rearrange an array such that even and odd numbers are at separate positions.

16. **Question 16:** Write a program to check if a subarray with a given sum exists.

17. **Question 17:** Write a program to remove all occurrences of a given element from an array.

18. **Question 18:** Write a program to merge two sorted arrays into a single sorted array.

19. **Question 19:** Write a program to count the number of triplets in an array that sum to a given value.

20. **Question 20:** Write a program to sort an array using the merge sort algorithm.

### Medium Level Answers

1. **Answer:**
   ```cpp
   void rotateLeft(int arr[], int n, int k) {
       k = k % n; // Normalize k
       int temp[k];
       for (int i = 0; i < k; i++) {
           temp[i] = arr[i]; // Store first k elements
       }
       for (int i = 0; i < n - k; i++) {
           arr[i] = arr[i + k]; // Shift left
       }
       for (int i = 0; i < k; i++) {
           arr[n - k + i] = temp[i]; // Place stored elements
       }
   }
   ```
   *Explanation:* This function rotates the array to the left by `k` positions using a temporary array.

2. **Answer:**
   ```cpp
   int findMissingNumber(int arr[], int n) {
       int total = n * (n + 1) / 2; // Sum of first n natural numbers
       int sum = 0;
       for (int i = 0; i < n - 1; i++) {
           sum += arr[i]; // Calculate sum of array elements
       }
       return total - sum; // The missing number
   }
   ```
   *Explanation:* This program calculates the sum of the first `n` natural numbers and subtracts the sum of the array to find the missing number.

3. **Answer:**
   ```cpp
   void selectionSort(int arr[], int n) {
       for (int i = 0; i < n - 1; i++) {
           int minIndex = i;
           for (int j = i + 1; j < n; j++) {
               if (arr[j] < arr[minIndex]) {
                   minIndex = j; // Update min index
               }
           }
           swap(arr[i], arr[minIndex]); // Swap the found minimum with the first element
       }
   }
   ```
   *Explanation:* This implementation of selection sort finds the minimum element and swaps it with the first unsorted element.

4. **Answer:**
   ```cpp
   void findCommon(int arr1[], int n1, int arr2[], int n2) {
       int i = 0, j = 0;
       while (i < n1 && j < n2) {
           if (arr1[i] < arr2[j]) i++;
           else if (arr1[i] > arr2[j]) j++;
           else {
               cout << arr1[i] << " "; // Common element
               i++; j++;
           }
       }
   }
   ```
   *Explanation:* This function uses two pointers to find and print common elements between two sorted arrays.

5. **Answer:**
   ```cpp
   int binarySearch(int arr[], int n, int target) {
       int left = 0, right = n - 1;
       while (left <= right) {
           int mid = left + (right - left) / 2;
           if (arr[mid] == target) return mid; // Found
           if (arr[mid] < target) left = mid + 1; // Search right
           else right = mid - 1; // Search left
       }
       return -1; // Not found
   }
   ```
   *Explanation:* This function implements binary search to find a target element in a sorted array.

6. **Answer:**
   ```cpp
   void findPairs(int arr[], int n, int sum) {
       for (int i = 0; i < n; i++) {
           for (int j

 = i + 1; j < n; j++) {
               if (arr[i] + arr[j] == sum) {
                   cout << "(" << arr[i] << ", " << arr[j] << ") "; // Print pair
               }
           }
       }
   }
   ```
   *Explanation:* This function checks for all pairs of elements that sum to a given value.

7. **Answer:**
   ```cpp
   int findFirstNonRepeating(int arr[], int n) {
       unordered_map<int, int> count;
       for (int i = 0; i < n; i++) {
           count[arr[i]]++; // Count occurrences
       }
       for (int i = 0; i < n; i++) {
           if (count[arr[i]] == 1) return arr[i]; // First non-repeating
       }
       return -1; // Not found
   }
   ```
   *Explanation:* This program counts occurrences using a map and finds the first element that occurs only once.

8. **Answer:**
   ```cpp
   void insertionSort(int arr[], int n) {
       for (int i = 1; i < n; i++) {
           int key = arr[i];
           int j = i - 1;
           while (j >= 0 && arr[j] > key) {
               arr[j + 1] = arr[j]; // Shift elements
               j--;
           }
           arr[j + 1] = key; // Insert key in the correct position
       }
   }
   ```
   *Explanation:* This function implements insertion sort by shifting elements to find the correct position for the key.

9. **Answer:**
   ```cpp
   int longestConsecutive(int arr[], int n) {
       unordered_set<int> nums(arr, arr + n);
       int maxLength = 0;
       for (int num : nums) {
           if (nums.find(num - 1) == nums.end()) { // Check if it's the start of a sequence
               int length = 1;
               while (nums.find(num + length) != nums.end()) {
                   length++; // Count length of consecutive numbers
               }
               maxLength = max(maxLength, length); // Update max length
           }
       }
       return maxLength;
   }
   ```
   *Explanation:* This program uses a set to efficiently check for consecutive sequences.

10. **Answer:**
    ```cpp
    void splitAndSum(int arr[], int n) {
        int mid = n / 2;
        int sum1 = accumulate(arr, arr + mid, 0); // Sum first half
        int sum2 = accumulate(arr + mid, arr + n, 0); // Sum second half
        cout << "Sum of first half: " << sum1 << ", Sum of second half: " << sum2 << endl;
    }
    ```
    *Explanation:* This program splits the array into two halves and calculates the sum using the `accumulate` function.

11. **Answer:**
    ```cpp
    int smallestSubarray(int arr[], int n, int sum) {
        int minLength = n + 1;
        for (int start = 0; start < n; start++) {
            int currentSum = 0;
            for (int end = start; end < n; end++) {
                currentSum += arr[end];
                if (currentSum > sum) {
                    minLength = min(minLength, end - start + 1); // Update min length
                    break; // Break since sum exceeded
                }
            }
        }
        return minLength == n + 1 ? -1 : minLength; // Return -1 if not found
    }
    ```
    *Explanation:* This function finds the smallest subarray with a sum greater than the given value.

12. **Answer:**
    ```cpp
    void intersectionSorted(int arr1[], int n1, int arr2[], int n2) {
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (arr1[i] < arr2[j]) i++;
            else if (arr1[i] > arr2[j]) j++;
            else {
                cout << arr1[i] << " "; // Print common element
                i++; j++;
            }
        }
    }
    ```
    *Explanation:* This program finds the intersection of two sorted arrays using two pointers.

13. **Answer:**
    ```cpp
    void rotateInPlace(int arr[], int n, int k) {
        k = k % n; // Normalize k
        reverse(arr, arr + n); // Reverse entire array
        reverse(arr, arr + n - k); // Reverse first n-k elements
        reverse(arr + n - k, arr + n); // Reverse last k elements
    }
    ```
    *Explanation:* This function rotates the array in place by reversing segments of the array.

14. **Answer:**
    ```cpp
    bool areEqual(int arr1[], int n1, int arr2[], int n2) {
        if (n1 != n2) return false; // Different sizes
        for (int i = 0; i < n1; i++) {
            if (arr1[i] != arr2[i]) return false; // Check elements
        }
        return true; // Arrays are equal
    }
    ```
    *Explanation:* This function checks if two arrays are equal by comparing their sizes and elements.

15. **Answer:**
    ```cpp
    void rearrange(int arr[], int n) {
        int evenIndex = 0, oddIndex = 1;
        while (evenIndex < n && oddIndex < n) {
            while (evenIndex < n && arr[evenIndex] % 2 == 0) evenIndex += 2; // Find even index
            while (oddIndex < n && arr[oddIndex] % 2 != 0) oddIndex += 2; // Find odd index
            if (evenIndex < n && oddIndex < n) {
                swap(arr[evenIndex], arr[oddIndex]); // Swap elements
            }
        }
    }
    ```
    *Explanation:* This function rearranges the array such that even and odd numbers are at separate positions.

16. **Answer:**
    ```cpp
    bool subarrayWithSumExists(int arr[], int n, int sum) {
        unordered_map<int, int> prefixSumMap;
        int currentSum = 0;
        for (int i = 0; i < n; i++) {
            currentSum += arr[i];
            if (currentSum == sum) return true; // Subarray from start
            if (prefixSumMap.find(currentSum - sum) != prefixSumMap.end()) return true; // Subarray exists
            prefixSumMap[currentSum] = i; // Store prefix sum
        }
        return false; // No subarray found
    }
    ```
    *Explanation:* This function checks if a subarray with a given sum exists using prefix sums.

17. **Answer:**
    ```cpp
    void removeOccurrences(int arr[], int &n, int target) {
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] != target) {
                arr[index++] = arr[i]; // Move non-target elements
            }
        }
        n = index; // Update size
    }
    ```
    *Explanation:* This function removes all occurrences of a specified element from the array.

18. **Answer:**
    ```cpp
    void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2) {
        int i = 0, j = 0, index = 0;
        int merged[n1 + n2];
        while (i < n1 && j < n2) {
            if (arr1[i] < arr2[j]) {
                merged[index++] = arr1[i++]; // Add smaller element
            } else {
                merged[index++] = arr2[j++]; // Add smaller element
            }
        }
        while (i < n1) merged[index++] = arr1[i++]; // Add remaining elements
        while (j < n2) merged[index++] = arr2[j++]; // Add remaining elements
        for (int k = 0; k < n1 + n2; k++) cout << merged[k] << " "; // Print merged array
    }
    ```
    *Explanation:* This function merges two sorted arrays into a single sorted array.

19. **Answer:**
    ```cpp
    int countTriplets(int arr[], int n, int sum) {
        sort(arr, arr + n);
        int count = 0;
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int currentSum = arr[i] + arr[left] + arr[right];
                if (currentSum == sum) {
                    count++; // Found triplet
                    left++; right--; // Move both pointers
                } else if (currentSum < sum) {
                    left++; // Move left pointer
                } else {
                    right--; // Move right pointer
                }
            }
        }
        return count; // Total triplet count
    }
    ```
    *Explanation:* This function counts the number of triplets in the array that sum to a specified value.

20. **Answer:**
    ```cpp
    void mergeSort(int arr[], int left, int right) {
        if (left < right) {
            int mid

 = left + (right - left) / 2;
            mergeSort(arr, left, mid); // Sort first half
            mergeSort(arr, mid + 1, right); // Sort second half
            merge(arr, left, mid, right); // Merge sorted halves
        }
    }

    void merge(int arr[], int left, int mid, int right) {
        int n1 = mid - left + 1, n2 = right - mid;
        int L[n1], R[n2];
        for (int i = 0; i < n1; i++) L[i] = arr[left + i]; // Left subarray
        for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i]; // Right subarray
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) arr[k++] = L[i++]; // Add from left
            else arr[k++] = R[j++]; // Add from right
        }
        while (i < n1) arr[k++] = L[i++]; // Add remaining from left
        while (j < n2) arr[k++] = R[j++]; // Add remaining from right
    }
    ```
    *Explanation:* This implementation of merge sort recursively divides the array and merges sorted halves.

---
