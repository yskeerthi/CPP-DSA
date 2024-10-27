Here are 20 coding questions that involve using the C++ Standard Template Library (STL):

1. **Vector Manipulations**:
   - Given an array, use `vector` to reverse it and find the maximum and minimum elements.
   - Remove duplicates from a vector and return the sorted unique elements.

2. **Set Operations**:
   - Write a program to find the union and intersection of two sets using `set`.
   - Given a list of numbers, find and display all unique numbers in sorted order using `set`.

3. **Map Operations**:
   - Count the frequency of each word in a string using `map`.
   - Write a program to find the first non-repeating character in a string using `unordered_map`.

4. **String Manipulation with STL**:
   - Check if two strings are anagrams of each other using `map` or `unordered_map`.
   - Find the most frequent character in a string using `unordered_map`.

5. **Sorting and Searching**:
   - Sort an array of pairs based on the second element using `sort` and a custom comparator.
   - Implement binary search on a sorted vector and find the index of a target number.

6. **Deque Operations**:
   - Given a sliding window size, find the maximum of all subarrays of that size in an array using `deque`.
   - Use a `deque` to implement a basic browser history navigation system with forward and backward functionality.

7. **Priority Queue Applications**:
   - Find the `k` largest elements in an array using a max-heap (priority queue).
   - Implement a program to merge `k` sorted arrays using a min-heap.

8. **Stack and Queue**:
   - Check if a string of parentheses is balanced using a `stack`.
   - Use a `queue` to implement a program that generates binary numbers from `1` to `n`.

9. **Transform and Modify Containers**:
   - Use the `transform` function to convert a vector of lowercase letters to uppercase.
   - Implement a function that takes two vectors and returns a vector of their element-wise sum using `transform`.

10. **Pair and Tuple**:
    - Create a list of pairs representing people’s names and ages. Sort it by age using `pair`.
    - Write a program to store the coordinates of points in a `vector` of `tuple` and sort by distance from the origin.

11. **Set Operations on Vectors**:
    - Find the intersection of two sorted arrays using `set_intersection`.
    - Given a sorted vector, find the first and last occurrence of a target element using `lower_bound` and `upper_bound`.

12. **Random and Shuffle**:
    - Shuffle the elements of a vector randomly using `shuffle`.
    - Generate a random password containing uppercase, lowercase, and special characters using `random`.

13. **Accumulate and Numeric Algorithms**:
    - Calculate the sum of all elements in a vector using `accumulate`.
    - Use `inner_product` to find the dot product of two vectors.

14. **Partitioning and Rearranging**:
    - Partition a vector of integers into even and odd numbers using `partition`.
    - Use `nth_element` to find the `k`th smallest element in an unsorted array.

15. **Custom Comparators**:
    - Use a custom comparator to sort students by their grades in descending order using `sort`.
    - Sort a vector of strings by length using a lambda function.

16. **Two-pointer Techniques with STL**:
    - Use `sort` and two pointers to find pairs in a vector that sum up to a target.
    - Implement a program to find if there exists a subarray with sum zero in an array using `unordered_map`.

17. **Rotate and Reverse Operations**:
    - Rotate a vector to the right by `k` positions using `rotate`.
    - Reverse a subarray within a vector using `reverse`.

18. **Permutation**:
    - Given a string, print all unique permutations using `next_permutation`.
    - Check if a string can be rearranged to form a palindrome using `map`.

19. **Frequency Counting**:
    - Given an array, use `unordered_map` to count the frequency of each element and sort by frequency.
    - Find the most common element in a vector using `unordered_map`.

20. **Interval Scheduling**:
    - Given a list of intervals, merge overlapping intervals using `vector` and `sort`.
    - Given meeting start and end times, find the minimum number of meeting rooms needed using `priority_queue`.

These questions will test and improve your familiarity with the STL while helping you solve real-world problems efficiently. Let me know if you need hints or explanations for any of them!


Sure, here are solutions or approaches for each of these STL-based questions in C++. I'll include brief explanations to help you understand each one.

### 1. **Vector Manipulations**
   - **Reverse** and **Find Max/Min**:
     ```cpp
     #include <iostream>
     #include <vector>
     #include <algorithm>

     int main() {
         std::vector<int> vec = {3, 1, 5, 9, 2};
         std::reverse(vec.begin(), vec.end());
         int max_elem = *std::max_element(vec.begin(), vec.end());
         int min_elem = *std::min_element(vec.begin(), vec.end());
         // Output results here
     }
     ```
   - **Remove Duplicates**:
     ```cpp
     std::sort(vec.begin(), vec.end());
     auto last = std::unique(vec.begin(), vec.end());
     vec.erase(last, vec.end());
     ```

### 2. **Set Operations**
   - **Union and Intersection**:
     ```cpp
     std::set<int> set1 = {1, 2, 3}, set2 = {3, 4, 5};
     std::vector<int> union_res, inter_res;
     std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(union_res));
     std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(inter_res));
     ```

### 3. **Map Operations**
   - **Frequency of Words**:
     ```cpp
     #include <map>
     std::map<std::string, int> freq_map;
     for (const auto& word : words) freq_map[word]++;
     ```
   - **First Non-Repeating Character**:
     ```cpp
     std::unordered_map<char, int> char_count;
     for (char ch : str) char_count[ch]++;
     for (char ch : str) if (char_count[ch] == 1) return ch;
     ```

### 4. **String Manipulation with STL**
   - **Anagram Check**:
     ```cpp
     std::unordered_map<char, int> char_count;
     for (char ch : str1) char_count[ch]++;
     for (char ch : str2) char_count[ch]--;
     ```
   - **Most Frequent Character**:
     ```cpp
     for (char ch : str) char_count[ch]++;
     auto max_elem = std::max_element(char_count.begin(), char_count.end(),
                                      [](const auto &a, const auto &b) { return a.second < b.second; });
     ```

### 5. **Sorting and Searching**
   - **Sort Pairs by Second Element**:
     ```cpp
     std::sort(pairs.begin(), pairs.end(), [](const auto &a, const auto &b) { return a.second < b.second; });
     ```
   - **Binary Search**:
     ```cpp
     int index = std::binary_search(vec.begin(), vec.end(), target) ? std::distance(vec.begin(), std::find(vec.begin(), vec.end(), target)) : -1;
     ```

### 6. **Deque Operations**
   - **Sliding Window Maximum**:
     ```cpp
     std::deque<int> dq;
     for (int i = 0; i < arr.size(); i++) { /* deque operations */ }
     ```
   - **Browser History**:
     ```cpp
     std::deque<std::string> history;
     ```

### 7. **Priority Queue Applications**
   - **Find `k` Largest Elements**:
     ```cpp
     std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;
     ```
   - **Merge `k` Sorted Arrays**:
     ```cpp
     using elem = std::pair<int, int>; // (value, index)
     std::priority_queue<elem, std::vector<elem>, std::greater<elem>> min_heap;
     ```

### 8. **Stack and Queue**
   - **Balanced Parentheses**:
     ```cpp
     std::stack<char> stk;
     for (char ch : str) { /* Stack operations */ }
     ```
   - **Generate Binary Numbers**:
     ```cpp
     std::queue<std::string> q;
     q.push("1");
     ```

### 9. **Transform and Modify Containers**
   - **Convert to Uppercase**:
     ```cpp
     std::transform(str.begin(), str.end(), str.begin(), ::toupper);
     ```
   - **Element-Wise Sum**:
     ```cpp
     std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::plus<int>());
     ```

### 10. **Pair and Tuple**
   - **Sort by Age**:
     ```cpp
     std::sort(people.begin(), people.end(), [](const auto &a, const auto &b) { return a.second < b.second; });
     ```
   - **Sort by Distance**:
     ```cpp
     std::sort(points.begin(), points.end(), [](const auto &a, const auto &b) {
         return (std::get<0>(a) * std::get<0>(a) + std::get<1>(a) * std::get<1>(a)) < (std::get<0>(b) * std::get<0>(b) + std::get<1>(b) * std::get<1>(b));
     });
     ```

### 11. **Set Operations on Vectors**
   - **Intersection of Sorted Arrays**:
     ```cpp
     std::set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(intersection));
     ```
   - **First and Last Occurrence**:
     ```cpp
     auto first = std::lower_bound(vec.begin(), vec.end(), target);
     auto last = std::upper_bound(vec.begin(), vec.end(), target) - 1;
     ```

### 12. **Random and Shuffle**
   - **Shuffle Vector**:
     ```cpp
     std::random_device rd;
     std::mt19937 g(rd());
     std::shuffle(vec.begin(), vec.end(), g);
     ```

### 13. **Accumulate and Numeric Algorithms**
   - **Sum of Elements**:
     ```cpp
     int sum = std::accumulate(vec.begin(), vec.end(), 0);
     ```
   - **Dot Product**:
     ```cpp
     int dot_product = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);
     ```

### 14. **Partitioning and Rearranging**
   - **Partition Even and Odd**:
     ```cpp
     std::partition(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
     ```
   - **Kth Smallest Element**:
     ```cpp
     std::nth_element(vec.begin(), vec.begin() + k, vec.end());
     ```

### 15. **Custom Comparators**
   - **Sort by Grade**:
     ```cpp
     std::sort(students.begin(), students.end(), [](const Student &a, const Student &b) { return a.grade > b.grade; });
     ```
   - **Sort by Length**:
     ```cpp
     std::sort(strings.begin(), strings.end(), [](const std::string &a, const std::string &b) { return a.size() < b.size(); });
     ```

### 16. **Two-pointer Techniques with STL**
   - **Pairs Sum to Target**:
     ```cpp
     int left = 0, right = vec.size() - 1;
     ```
   - **Subarray with Sum Zero**:
     ```cpp
     std::unordered_map<int, int> prefix_sum;
     ```

### 17. **Rotate and Reverse Operations**
   - **Rotate Vector**:
     ```cpp
     std::rotate(vec.begin(), vec.begin() + (vec.size() - k), vec.end());
     ```
   - **Reverse Subarray**:
     ```cpp
     std::reverse(vec.begin() + start, vec.begin() + end + 1);
     ```

### 18. **Permutation**
   - **Unique Permutations**:
     ```cpp
     do { /* Output permutation */ } while (std::next_permutation(str.begin(), str.end()));
     ```
   - **Check Palindrome Arrangement**:
     ```cpp
     std::unordered_map<char, int> char_count;
     for (char ch : str) char_count[ch]++;
     ```

### 19. **Frequency Counting**
   - **Frequency Count and Sort**:
     ```cpp
     std::unordered_map<int, int> freq;
     for (int n : arr) freq[n]++;
     ```
   - **Most Common Element**:
     ```cpp
     auto max_elem = std::max_element(freq.begin(), freq.end(), [](const auto &a, const auto &b) { return a.second < b.second; });
     ```

### 20. **Interval Scheduling**
   - **Merge Overlapping Intervals**:
     ```cpp
     std::sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b) { return a.first < b.first; });
     ```
   - **Minimum Meeting Rooms**:
     ```cpp
     std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
     ```

Each of these solutions leverages different aspects of STL functionality, making them powerful

 and efficient for solving a wide variety of problems. Let me know if you’d like a deeper dive into any solution!
