---
---

### 128. Longest Consecutive Sequence

#### 🔸 Problem:

Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

#### ✅ Brute Force:

* Sort the array → find consecutive streak

```cpp
int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;
    sort(nums.begin(), nums.end());
    int longest = 1, count = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) continue;
        else if (nums[i] == nums[i - 1] + 1) count++;
        else count = 1;
        longest = max(longest, count);
    }
    return longest;
}
```

**Time:** O(n log n), **Space:** O(1)

#### ✅ Optimal:

* Use `unordered_set` to track starts of sequences

```cpp
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;
    for (int n : numSet) {
        if (!numSet.count(n - 1)) {
            int current = n;
            int streak = 1;
            while (numSet.count(current + 1)) {
                current++;
                streak++;
            }
            longest = max(longest, streak);
        }
    }
    return longest;
}
```

**Time:** O(n), **Space:** O(n)

---

### 3. Longest Substring Without Repeating Characters

#### 🔸 Problem:

Given a string `s`, find the length of the longest substring without repeating characters.

#### ✅ Brute Force:

* Try all substrings, check if characters repeat.

**Time:** O(n^2), **Space:** O(n)

#### ✅ Optimal (Sliding Window):

```cpp
int lengthOfLongestSubstring(string s) {
    unordered_set<char> set;
    int l = 0, res = 0;
    for (int r = 0; r < s.size(); r++) {
        while (set.count(s[r])) {
            set.erase(s[l++]);
        }
        set.insert(s[r]);
        res = max(res, r - l + 1);
    }
    return res;
}
```

**Time:** O(n), **Space:** O(n)

---

### 5. Longest Palindromic Substring

#### 🔸 Problem:

Return the longest palindromic substring in a string `s`.

#### ✅ Brute Force:

* Try all substrings, check palindrome.

**Time:** O(n^3), **Space:** O(1)

#### ✅ Optimal (Expand Around Center):

```cpp
string longestPalindrome(string s) {
    int start = 0, maxLen = 1;
    for (int i = 0; i < s.length(); i++) {
        int l = i, r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--, r++;
        }
        l = i, r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--, r++;
        }
    }
    return s.substr(start, maxLen);
}
```

**Time:** O(n^2), **Space:** O(1)

---



---



---

### 128. Longest Consecutive Sequence

#### 🔸 Problem:

Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

#### ✅ Brute Force:

* Sort the array → find consecutive streak

```cpp
int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;
    sort(nums.begin(), nums.end());
    int longest = 1, count = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) continue;
        else if (nums[i] == nums[i - 1] + 1) count++;
        else count = 1;
        longest = max(longest, count);
    }
    return longest;
}
```

**Time:** O(n log n), **Space:** O(1)

#### ✅ Optimal:

* Use `unordered_set` to track starts of sequences

```cpp
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;
    for (int n : numSet) {
        if (!numSet.count(n - 1)) {
            int current = n;
            int streak = 1;
            while (numSet.count(current + 1)) {
                current++;
                streak++;
            }
            longest = max(longest, streak);
        }
    }
    return longest;
}
```

**Time:** O(n), **Space:** O(n)

---

### 3. Longest Substring Without Repeating Characters

#### 🔸 Problem:

Given a string `s`, find the length of the longest substring without repeating characters.

#### ✅ Brute Force:

* Try all substrings, check if characters repeat.

**Time:** O(n^2), **Space:** O(n)

#### ✅ Optimal (Sliding Window):

```cpp
int lengthOfLongestSubstring(string s) {
    unordered_set<char> set;
    int l = 0, res = 0;
    for (int r = 0; r < s.size(); r++) {
        while (set.count(s[r])) {
            set.erase(s[l++]);
        }
        set.insert(s[r]);
        res = max(res, r - l + 1);
    }
    return res;
}
```

**Time:** O(n), **Space:** O(n)

---

### 5. Longest Palindromic Substring

#### 🔸 Problem:

Return the longest palindromic substring in a string `s`.

#### ✅ Brute Force:

* Try all substrings, check palindrome.

**Time:** O(n^3), **Space:** O(1)

#### ✅ Optimal (Expand Around Center):

```cpp
string longestPalindrome(string s) {
    int start = 0, maxLen = 1;
    for (int i = 0; i < s.length(); i++) {
        int l = i, r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--, r++;
        }
        l = i, r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--, r++;
        }
    }
    return s.substr(start, maxLen);
}
```

**Time:** O(n^2), **Space:** O(1)

---

### 11. Container With Most Water

#### 🔸 Problem:

Given `height[]`, find two lines such that together with the x-axis, they form a container that holds the most water.

#### ✅ Brute Force:

```cpp
int maxArea(vector<int>& height) {
    int maxA = 0;
    for (int i = 0; i < height.size(); i++) {
        for (int j = i + 1; j < height.size(); j++) {
            maxA = max(maxA, min(height[i], height[j]) * (j - i));
        }
    }
    return maxA;
}
```

**Time:** O(n^2), **Space:** O(1)

#### ✅ Optimal (Two Pointers):

```cpp
int maxArea(vector<int>& height) {
    int l = 0, r = height.size() - 1, maxA = 0;
    while (l < r) {
        maxA = max(maxA, min(height[l], height[r]) * (r - l));
        height[l] < height[r] ? l++ : r--;
    }
    return maxA;
}
```

**Time:** O(n), **Space:** O(1)

---

### 15. 3Sum

#### 🔸 Problem:

Return all unique triplets `[a, b, c]` such that `a + b + c == 0`.

#### ✅ Brute Force:

* Try all triplets and use set for uniqueness.
  **Time:** O(n^3), **Space:** O(n)

#### ✅ Optimal:

```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int l = i + 1, r = nums.size() - 1;
        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum < 0) l++;
            else if (sum > 0) r--;
            else {
                res.push_back({nums[i], nums[l], nums[r]});
                while (l < r && nums[l] == nums[l + 1]) l++;
                while (l < r && nums[r] == nums[r - 1]) r--;
                l++, r--;
            }
        }
    }
    return res;
}
```

**Time:** O(n^2), **Space:** O(n)

---
\[Content above unchanged...]

---

### 19. Remove Nth Node From End of List

#### 🔸 Problem:

Given the head of a linked list, remove the nth node from the end.

#### ✅ Brute Force:

* Count length, delete (len - n)th node

```cpp
ListNode* removeNthFromEnd(ListNode* head, int n) {
    int len = 0;
    ListNode* temp = head;
    while (temp) {
        len++;
        temp = temp->next;
    }
    int target = len - n;
    if (target == 0) return head->next;
    temp = head;
    for (int i = 1; i < target; i++) temp = temp->next;
    temp->next = temp->next->next;
    return head;
}
```

**Time:** O(n), **Space:** O(1)

#### ✅ Optimal (Two Pointer):

```cpp
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode *first = &dummy, *second = &dummy;
    for (int i = 0; i <= n; i++) first = first->next;
    while (first) {
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
    return dummy.next;
}
```

**Time:** O(n), **Space:** O(1)

---

### 152. Maximum Product Subarray

#### 🔸 Problem:

Find the contiguous subarray within `nums` that has the largest product.

#### ✅ Brute Force:

* Try all subarrays

**Time:** O(n²), **Space:** O(1)

#### ✅ Optimal:

```cpp
int maxProduct(vector<int>& nums) {
    int currMax = nums[0], currMin = nums[0], result = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) swap(currMax, currMin);
        currMax = max(nums[i], currMax * nums[i]);
        currMin = min(nums[i], currMin * nums[i]);
        result = max(result, currMax);
    }
    return result;
}
```

**Time:** O(n), **Space:** O(1)

---

### 153. Find Minimum in Rotated Sorted Array

#### 🔸 Problem:

Return the minimum element in a rotated sorted array (no duplicates).

#### ✅ Brute Force:

* Scan all elements, return minimum

**Time:** O(n), **Space:** O(1)

#### ✅ Optimal (Binary Search):

```cpp
int findMin(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] > nums[r]) l = mid + 1;
        else r = mid;
    }
    return nums[l];
}
```

**Time:** O(log n), **Space:** O(1)

---

### 33. Search in Rotated Sorted Array

#### 🔸 Problem:

Search a target value in a rotated sorted array. Return index or -1.

#### ✅ Brute Force:

* Linear scan

**Time:** O(n), **Space:** O(1)

#### ✅ Optimal (Modified Binary Search):

```cpp
int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) return mid;
        if (nums[l] <= nums[mid]) {
            if (nums[l] <= target && target < nums[mid]) r = mid - 1;
            else l = mid + 1;
        } else {
            if (nums[mid] < target && target <= nums[r]) l = mid + 1;
            else r = mid - 1;
        }
    }
    return -1;
}
```

**Time:** O(log n), **Space:** O(1)

---

---

### 424. Longest Repeating Character Replacement

#### 🔸 Problem:

Given a string s and an integer k, return the length of the longest substring that can be transformed into repeating characters by replacing at most k characters.

#### ✅ Brute Force:

* Check all substrings and use frequency map to track replacement count.
  **Time:** O(n³), **Space:** O(1)

#### ✅ Optimal (Sliding Window + Frequency Map):

```cpp
int characterReplacement(string s, int k) {
    int maxFreq = 0, l = 0, res = 0;
    unordered_map<char, int> freq;
    for (int r = 0; r < s.length(); r++) {
        freq[s[r]]++;
        maxFreq = max(maxFreq, freq[s[r]]);
        while ((r - l + 1) - maxFreq > k) {
            freq[s[l]]--;
            l++;
        }
        res = max(res, r - l + 1);
    }
    return res;
}
```

**Time:** O(n), **Space:** O(26) = O(1)

---

### 48. Rotate Image

#### 🔸 Problem:

Rotate an `n x n` 2D matrix 90 degrees clockwise.

#### ✅ Brute Force:

* Use another matrix to rotate
  **Time:** O(n²), **Space:** O(n²)

#### ✅ Optimal (In-place: Transpose + Reverse Rows):

```cpp
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
```

**Time:** O(n²), **Space:** O(1)

---

### 49. Group Anagrams

#### 🔸 Problem:

Group all anagrams together in a list of strings.

#### ✅ Brute Force:

* Compare all strings pairwise
  **Time:** O(n² \* k log k), **Space:** O(n)

#### ✅ Optimal (Use Sorted Key in HashMap):

```cpp
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }
    vector<vector<string>> res;
    for (auto& pair : mp) res.push_back(pair.second);
    return res;
}
```

**Time:** O(n \* k log k), **Space:** O(n)

---

### 53. Maximum Subarray

#### 🔸 Problem:

Return the contiguous subarray with the largest sum.

#### ✅ Brute Force:

* Try all subarrays
  **Time:** O(n²), **Space:** O(1)

#### ✅ Optimal (Kadane's Algorithm):

```cpp
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0], currSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
```

**Time:** O(n), **Space:** O(1)

---

\[Previous content unchanged...]

---

### 198. House Robber

#### 🔸 Problem:

You are a robber robbing houses along a street. Each house has some money, but adjacent houses can't be robbed together. Return the maximum money you can rob.

#### ✅ Brute Force:

* Recursively consider rob or skip
  **Time:** O(2^n), **Space:** O(n)

#### ✅ Optimal (Dynamic Programming):

```cpp
int rob(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return nums[0];
    int prev1 = max(nums[0], nums[1]);
    int prev2 = nums[0];
    for (int i = 2; i < nums.size(); i++) {
        int curr = max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
```

**Time:** O(n), **Space:** O(1)

---

### 73. Set Matrix Zeroes

#### 🔸 Problem:

If an element is 0, set its row and column to 0. Do it in-place.

#### ✅ Brute Force:

* Mark cells using extra space
  **Time:** O(mn), **Space:** O(m + n)

#### ✅ Optimal (Use 1st row & col as marker):

```cpp
void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    bool firstRow = false, firstCol = false;
    for (int i = 0; i < m; i++) if (matrix[i][0] == 0) firstCol = true;
    for (int j = 0; j < n; j++) if (matrix[0][j] == 0) firstRow = true;
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
        }
    }
    if (firstRow) for (int j = 0; j < n; j++) matrix[0][j] = 0;
    if (firstCol) for (int i = 0; i < m; i++) matrix[i][0] = 0;
}
```

**Time:** O(mn), **Space:** O(1)

---

### 347. Top K Frequent Elements

#### 🔸 Problem:

Return the k most frequent elements in an array.

#### ✅ Brute Force:

* Use hashmap to count, then sort
  **Time:** O(n log n), **Space:** O(n)

#### ✅ Optimal (Heap or Bucket Sort):

```cpp
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int n : nums) freq[n]++;
    priority_queue<pair<int, int>> pq;
    for (auto& p : freq) pq.push({p.second, p.first});
    vector<int> res;
    for (int i = 0; i < k; i++) {
        res.push_back(pq.top().second);
        pq.pop();
    }
    return res;
}
```

**Time:** O(n log k), **Space:** O(n)

---

### 238. Product of Array Except Self

#### 🔸 Problem:

Return an array `answer` where `answer[i]` is product of all elements except `nums[i]`.

#### ✅ Brute Force:

* Multiply all elements except current
  **Time:** O(n²), **Space:** O(1)

#### ✅ Optimal (Left/Right pass):

```cpp
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, 1);
    int left = 1;
    for (int i = 0; i < n; i++) {
        res[i] = left;
        left *= nums[i];
    }
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= right;
        right *= nums[i];
    }
    return res;
}
```

**Time:** O(n), **Space:** O(1) (excluding result array)

---

### 371. Sum of Two Integers

#### 🔸 Problem:

Return the sum of two integers `a` and `b` without using `+` or `-` operators.

#### ✅ Optimal (Bit Manipulation):

```cpp
int getSum(int a, int b) {
    while (b != 0) {
        unsigned carry = (unsigned)(a & b);
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
```

**Time:** O(1), **Space:** O(1)

---



