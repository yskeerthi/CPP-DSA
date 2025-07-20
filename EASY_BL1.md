---

## 1. Two Sum

### 🔹 Problem:

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

---

### ✅ Brute Force:

* Check every pair using nested loops.

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }
    return {};
}
```

**Time:** O(n^2), **Space:** O(1)

---

### ✅ Optimized:

* Use hashmap to store value → index

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        if (mp.find(diff) != mp.end())
            return {mp[diff], i};
        mp[nums[i]] = i;
    }
    return {};
}
```

**Time:** O(n), **Space:** O(n)

---

## 2. Missing Number

### 🔹 Problem:

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the missing number.

---

### ✅ Brute Force:

* Use a boolean array or loop from `0` to `n` and check if each is present.

---

### ✅ Optimal:

* Use sum formula: `n*(n+1)/2 - sum(nums)`

```cpp
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int num : nums) actualSum += num;
    return expectedSum - actualSum;
}
```

**Time:** O(n), **Space:** O(1)

---

## 3. Valid Parentheses

### 🔹 Problem:

Check if a string of brackets is valid (open/close properly).

### ✅ Brute Force:

* Repeatedly remove pairs `()`, `{}`, `[]` until string is empty or no changes.

### ✅ Optimal:

* Use a stack.

```cpp
bool isValid(string s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') st.push(ch);
        else {
            if (st.empty()) return false;
            if ((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '['))
                return false;
            st.pop();
        }
    }
    return st.empty();
}
```

**Time:** O(n), **Space:** O(n)

---

## 4. Merge Two Sorted Lists

### ✅ Brute Force:

* Collect all nodes → sort → rebuild list.

### ✅ Optimal:

* Merge directly using pointers.

```cpp
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* tail = &dummy;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}
```

**Time:** O(n + m), **Space:** O(1)

---

## 5. Climbing Stairs

### ✅ Brute Force:

* Recursive `f(n) = f(n-1) + f(n-2)`

### ✅ Optimal:

* Use DP / Fibonacci logic

```cpp
int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2;
    for (int i = 3; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}
```

**Time:** O(n), **Space:** O(1)

---

## 6. Reverse Linked List

```cpp
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    while (head) {
        ListNode* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}
```

**Time:** O(n), **Space:** O(1)

---

## 7. Counting Bits

### ✅ Brute Force:

* Count bits by manually shifting bits.

### ✅ Optimal:

```cpp
vector<int> countBits(int n) {
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
        ans[i] = ans[i >> 1] + (i & 1);
    return ans;
}
```

**Time:** O(n), **Space:** O(n)

---

## 8. Contains Duplicate

### ✅ Brute Force:

* Nested loops to compare every element

### ✅ Optimal:

* Use a set to detect duplicates

```cpp
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int n : nums) {
        if (seen.count(n)) return true;
        seen.insert(n);
    }
    return false;
}
```

**Time:** O(n), **Space:** O(n)

---

## 9. Same Tree

```cpp
bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;
    if (!p || !q || p->val != q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
```

**Time:** O(n), **Space:** O(h)

---

## 10. Maximum Depth of Binary Tree

```cpp
int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
```

**Time:** O(n), **Space:** O(h)

---

## 11. Valid Anagram

### ✅ Using Hashmap:

```cpp
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;
    unordered_map<char, int> mp;
    for (char c : s) mp[c]++;
    for (char c : t) mp[c]--;
    for (auto& [ch, cnt] : mp) {
        if (cnt != 0) return false;
    }
    return true;
}
```

**Time:** O(n), **Space:** O(k)

---

## 12. Best Time to Buy and Sell Stock

### ✅ Optimal:

```cpp
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX, profit = 0;
    for (int price : prices) {
        minPrice = min(minPrice, price);
        profit = max(profit, price - minPrice);
    }
    return profit;
}
```

**Time:** O(n), **Space:** O(1)

---

## 13. Valid Palindrome

```cpp
bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        while (i < j && !isalnum(s[i])) i++;
        while (i < j && !isalnum(s[j])) j--;
        if (tolower(s[i]) != tolower(s[j])) return false;
        i++, j--;
    }
    return true;
}
```

**Time:** O(n), **Space:** O(1)
