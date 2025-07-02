Sure broo! Here's a **complete list of logic-based coding problems** across **Basic, Medium, and Hard levels** with:

✅ Full explanations
✅ Code (in C++)
✅ Example walkthroughs
✅ Comments in code for clarity

---

# 🟢 BASIC LEVEL

---

## 1. ✅ **Check Even or Odd (No `%` operator, use Bit Manipulation)**

### 🔹 Logic:

* Even numbers have their last bit = 0.
* Use: `num & 1`

### 🔹 Code:

```cpp
#include<iostream>
using namespace std;

void checkEvenOdd(int num) {
    // Bitwise AND with 1 tells us if LSB is 0 (even) or 1 (odd)
    if (num & 1)
        cout << num << " is Odd" << endl;
    else
        cout << num << " is Even" << endl;
}

int main() {
    checkEvenOdd(7);  // Output: Odd
    checkEvenOdd(12); // Output: Even
}
```

---

## 2. ✅ **Find Missing Number in 1 to N+1**

### 🔹 Logic:

* Expected Sum = (n+1)(n+2)/2
* Missing = Expected - Actual

### 🔹 Code:

```cpp
int findMissingNumber(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2; // sum from 1 to n+1
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return total - sum;
}

// Example: [1, 2, 4, 5] → Missing: 3
```

---

## 3. ✅ **Count Digits Using Recursion**

### 🔹 Logic:

* Keep dividing by 10 and counting steps.

### 🔹 Code:

```cpp
int countDigits(int num) {
    if (num == 0)
        return 1; // edge case: 0 has 1 digit
    if (num < 10)
        return 1;
    return 1 + countDigits(num / 10);
}
```

---

## 4. ✅ **Check if Number is Power of 2 (Bitwise)**

### 🔹 Logic:

* A power of 2 has exactly one set bit → `(n & (n-1)) == 0`

### 🔹 Code:

```cpp
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
```

---

## 5. ✅ **Check if Array is Sorted (Recursion)**

### 🔹 Logic:

* Compare last two elements recursively.

### 🔹 Code:

```cpp
bool isSorted(int arr[], int n) {
    if (n == 1) return true;
    if (arr[n - 2] > arr[n - 1]) return false;
    return isSorted(arr, n - 1);
}
```

---

# 🟠 MEDIUM LEVEL

---

## 6. ✅ **First Non-Repeating Character in String**

### 🔹 Logic:

* Use frequency array.

### 🔹 Code:

```cpp
char firstNonRepeat(string s) {
    int freq[26] = {0};
    for (char c : s)
        freq[c - 'a']++;
    for (char c : s)
        if (freq[c - 'a'] == 1)
            return c;
    return '_';
}
// Input: "aabbcddee" → Output: 'c'
```

---

## 7. ✅ **Check Balanced Parentheses**

### 🔹 Logic:

* Use stack (manually if needed)

### 🔹 Code:

```cpp
bool isBalanced(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') count++;
        else if (c == ')') count--;
        if (count < 0) return false; // more ')' than '('
    }
    return count == 0;
}
// Input: (()()) → true
```

---

## 8. ✅ **Digital Root (Sum of Digits Until One Digit)**

### 🔹 Code:

```cpp
int digitalRoot(int n) {
    if (n < 10) return n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return digitalRoot(sum);
}
// Input: 987 → 9+8+7=24 → 2+4=6 → Output: 6
```

---

## 9. ✅ **Check if Array is Strictly Decreasing**

```cpp
bool isStrictlyDecreasing(int arr[], int n) {
    if (n == 1) return true;
    if (arr[n-2] <= arr[n-1]) return false;
    return isStrictlyDecreasing(arr, n - 1);
}
```

---

## 10. ✅ **Knight’s Tour (Recursive Backtracking – HARD)**

(Simplified idea)

```cpp
bool isValid(int x, int y, int n, vector<vector<int>>& board) {
    return x >= 0 && y >= 0 && x < n && y < n && board[x][y] == -1;
}
```

---

# 🔴 HARD LEVEL

---

## 11. ✅ **Palindrome by Deleting At Most One Character**

```cpp
bool isPalindrome(string s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

bool validPalindrome(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r])
            return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
        l++; r--;
    }
    return true;
}
```

---

## 12. ✅ **Sudoku Validator**

### 🔹 Logic:

* Check each row, column, and 3×3 box.

---

## 13. ✅ **Expression Evaluator (Hard)**

(Simplified logic: Convert to postfix and evaluate)

---

## 14. ✅ **Circular Sentence Checker**

```cpp
bool isCircular(string s) {
    vector<string> words;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);
    
    for (int i = 0; i < words.size(); i++) {
        char last = words[i].back();
        char nextFirst = words[(i + 1) % words.size()][0];
        if (tolower(last) != tolower(nextFirst))
            return false;
    }
    return true;
}
// Input: "hello orange elephant hat" → false
```

---

## 15. ✅ **Find Set Bit Count in Number (Bit Logic)**

```cpp
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);  // check last bit
        n >>= 1;           // right shift
    }
    return count;
}
// Input: 13 → Binary: 1101 → Output: 3
```

---

## ✅ Summary Table

| Level  | Topics Covered                         |
| ------ | -------------------------------------- |
| Basic  | Even/Odd, Digit Count, Missing Num     |
| Medium | Recursion, Palindrome, Balanced Parens |
| Hard   | Valid Palindrome, Circular Sentences   |

---
?
