The sliding window technique is a commonly used approach in computer science to solve problems involving subarrays or subsequences. 
It is particularly useful when you need to track a range of elements (like a subarray) that "slides" over an array or list. 
This approach helps reduce the complexity of problems that would otherwise require nested loops.

***Concept:***
The sliding window technique involves maintaining a window that moves across the data structure. The window can either be of fixed size or variable size, depending on the problem.

**Fixed-size window:** The size of the window remains constant as it moves from the beginning of the array to the end.

**Variable-size window:** The size of the window changes dynamically based on the problem constraints (e.g., sum, product, condition, etc.).
The basic idea is to adjust the window size (by expanding or shrinking it) while efficiently maintaining some information (like sum, product, etc.) within the window.


**Steps:**
Start with two pointers (start and end) to define the boundaries of the window.
Move the end pointer to expand the window.
Perform calculations (e.g., summing the elements in the window).
If the window exceeds the problem's constraints, move the start pointer to shrink the window until it satisfies the condition.

**Problem:**
Given an array of integers and a number k, find the maximum sum of a subarray of size k.

_Sliding Window Approach (Fixed Size):_
cpp
```cpp
#include <iostream>
#include <vector>
using namespace std;

int maxSum(const vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return -1; // Edge case: If the array size is less than k

    int window_sum = 0, max_sum = 0;

    // Calculate the sum of the first window
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    max_sum = window_sum;

    // Slide the window from start to the end of the array
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; // Add the next element, remove the previous element
        max_sum = max(max_sum, window_sum); // Track the maximum sum
    }

    return max_sum;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;
    cout << "Maximum sum of a subarray of size " << k << " is " << maxSum(arr, k) << endl;//24 output
    return 0;
}

```
**Explanation:**
We calculate the sum of the first subarray of size k.
Then, as we slide the window one element at a time, we add the next element and subtract the element that's left behind by the sliding window.
This allows us to maintain a running sum in O(1) time for each iteration after the initial sum calculation.
Complexity:
**Time complexity:** _O(n)_ because we visit each element at most twice (once when the end pointer moves forward, and possibly once when the start pointer moves forward).
**Space complexity:** _O(1) _for the sum variables (not counting the input array)


**Example Problem with a Variable-size Sliding Window:
**
**Problem**

_Find the length of the smallest subarray whose sum is greater than or equal to a given value S.
_

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int S, const vector<int>& arr) {
    int n = arr.size();
    int start = 0, sum = 0, min_len = INT_MAX;

    for (int end = 0; end < n; end++) {
        sum += arr[end];

        // Shrink the window until the sum becomes smaller than S
        while (sum >= S) {
            min_len = min(min_len, end - start + 1);
            sum -= arr[start++];
        }
    }

    return min_len == INT_MAX ? 0 : min_len; // Return 0 if no valid subarray is found
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int S = 7;
    cout << "Minimum length of a subarray with sum >= " << S << " is " << minSubArrayLen(S, arr) << endl;
    return 0;
}

```
**Explantion:**
The end pointer expands the window by adding elements to the sum.
Whenever the sum becomes greater than or equal to S, the start pointer shrinks the window from the left while maintaining the sum condition, thereby attempting to find the minimum-length subarray.
Complexity:

_Time complexity_: O(n)
_Space complexity_: O(1)
_Summary:_
The sliding window technique is efficient for problems involving subarrays or contiguous sequences, as it reduces the problem complexity by maintaining a window that "slides" across the array.
In a fixed-size sliding window, both pointers move at a constant rate, while in a variable-size window, one pointer moves dynamically based on problem constraints.



