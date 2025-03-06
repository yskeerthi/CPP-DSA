Here are the **C++ codes** for various **applications of prefix sum**, along with explanations:

---

## **1. Constructing the Prefix Sum Array**
### **Code:**
```cpp
#include <iostream>
using namespace std;

void computePrefixSum(int arr[], int prefix[], int n) {
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

int main() {
    int arr[] = {3, 1, 4, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix[n];

    computePrefixSum(arr, prefix, n);

    cout << "Prefix Sum Array: ";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }
    return 0;
}
```
### **Explanation:**
- Compute prefix sum by iterating once over the array.
- `prefix[i] = prefix[i - 1] + arr[i]`
- **Time Complexity:** `O(N)`

---

## **2. Finding Sum of Any Subarray in O(1)**
### **Code:**
```cpp
#include <iostream>
using namespace std;

void computePrefixSum(int arr[], int prefix[], int n) {
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

int getSubarraySum(int prefix[], int L, int R) {
    if (L == 0)
        return prefix[R];
    return prefix[R] - prefix[L - 1];
}

int main() {
    int arr[] = {3, 1, 4, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix[n];

    computePrefixSum(arr, prefix, n);

    int L = 1, R = 3;
    cout << "Sum of subarray (" << L << ", " << R << ") = " << getSubarraySum(prefix, L, R);
    return 0;
}
```
### **Explanation:**
- Uses `prefix[R] - prefix[L-1]` to compute the sum in **O(1)**.
- **Time Complexity:** `O(1)`

---

## **3. Finding Equilibrium Index**
### **Code:**
```cpp
#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int n) {
    int prefix[n];
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    for (int i = 0; i < n; i++) {
        int leftSum = (i == 0) ? 0 : prefix[i - 1];
        int rightSum = prefix[n - 1] - prefix[i];
        if (leftSum == rightSum)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = findEquilibriumIndex(arr, n);
    cout << "Equilibrium Index: " << index;
    return 0;
}
```
### **Explanation:**
- An **equilibrium index** is where **left sum = right sum**.
- Compute total sum first, then check for balance.
- **Time Complexity:** `O(N)`

---

## **4. Checking if an Array can be Partitioned into Two Equal Sums**
### **Code:**
```cpp
#include <iostream>
using namespace std;

bool canBePartitioned(int arr[], int n) {
    int prefix[n];
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    if (prefix[n - 1] % 2 != 0)
        return false;

    int halfSum = prefix[n - 1] / 2;
    for (int i = 0; i < n; i++) {
        if (prefix[i] == halfSum)
            return true;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (canBePartitioned(arr, n))
        cout << "Array can be partitioned into two equal sums.";
    else
        cout << "Cannot be partitioned.";
    return 0;
}
```
### **Explanation:**
- If total sum is odd, return false.
- If prefix sum reaches **half of total sum**, partition is possible.
- **Time Complexity:** `O(N)`

---

## **5. Range Update Queries (Difference Array + Prefix Sum)**
### **Code:**
```cpp
#include <iostream>
using namespace std;

void rangeUpdate(int diff[], int L, int R, int val, int n) {
    diff[L] += val;
    if (R + 1 < n)
        diff[R + 1] -= val;
}

void applyUpdates(int arr[], int diff[], int n) {
    arr[0] = diff[0];
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] + diff[i];
    }
}

int main() {
    int arr[] = {3, 1, 4, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int diff[n] = {0};

    rangeUpdate(diff, 1, 3, 5, n);
    rangeUpdate(diff, 2, 4, 10, n);

    applyUpdates(arr, diff, n);

    cout << "Updated Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
```
### **Explanation:**
- Use a **difference array** for efficient range updates.
- Apply prefix sum to get the final array.
- **Time Complexity:** `O(N)`

---

## **6. 2D Prefix Sum (Matrix Subsum Queries)**
### **Code:**
```cpp
#include <iostream>
using namespace std;

#define N 3
#define M 3

void compute2DPrefixSum(int mat[N][M], int prefix[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            prefix[i][j] = mat[i][j];
            if (i > 0) prefix[i][j] += prefix[i - 1][j];
            if (j > 0) prefix[i][j] += prefix[i][j - 1];
            if (i > 0 && j > 0) prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }
}

int getSubmatrixSum(int prefix[N][M], int x1, int y1, int x2, int y2) {
    int sum = prefix[x2][y2];
    if (x1 > 0) sum -= prefix[x1 - 1][y2];
    if (y1 > 0) sum -= prefix[x2][y1 - 1];
    if (x1 > 0 && y1 > 0) sum += prefix[x1 - 1][y1 - 1];
    return sum;
}

int main() {
    int mat[N][M] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int prefix[N][M];

    compute2DPrefixSum(mat, prefix);

    cout << "Submatrix Sum (1,1) to (2,2): " << getSubmatrixSum(prefix, 1, 1, 2, 2);
    return 0;
}
```
