### Overview of Strings in C++

In C++, strings are used to store and manipulate text. The C++ Standard Library provides the `std::string` class, which offers various functions and operators for string handling, making it easier to work with text. Here are some key points about strings in C++:

1. **String Declaration:**
   - You can declare a string using `std::string`:
     ```cpp
     std::string str = "Hello, World!";
     ```

2. **Common Operations:**
   - **Concatenation:** You can concatenate strings using the `+` operator.
   - **Accessing Characters:** You can access individual characters using the indexing operator `[]`.
   - **Length:** Use `.length()` or `.size()` to get the number of characters in a string.
   - **Substring:** Use the `.substr()` method to get a portion of the string.
   - **Searching:** You can search for a substring using `.find()`.

3. **Common Functions:**
   - `std::getline()` for reading a line of text.
   - `std::stoi()`, `std::stof()` for converting strings to integers or floats.
   - `std::sort()` for sorting characters in a string.

4. **String Comparison:**
   - Strings can be compared using relational operators (`==`, `!=`, `<`, `>`, etc.).

5. **String Manipulation:**
   - You can modify strings using methods like `.append()`, `.insert()`, `.erase()`, and `.replace()`.

### Questions and Answers on Strings in C++

#### Basic Level Questions

1. **Question:** How do you declare a string variable in C++?
2. **Question:** Write a program to find the length of a string.
3. **Question:** How can you concatenate two strings in C++?
4. **Question:** Write a function to convert a string to uppercase.
5. **Question:** How do you access the first character of a string?
6. **Question:** Write a program to check if a string is empty.
7. **Question:** How do you compare two strings in C++?
8. **Question:** Write a function to reverse a string.
9. **Question:** How do you find the position of a substring within a string?
10. **Question:** Write a program to replace a character in a string.

#### Medium Level Questions

11. **Question:** Write a function to count the number of vowels in a string.
12. **Question:** How can you remove whitespace from a string?
13. **Question:** Write a function to check if a string is a palindrome.
14. **Question:** How do you split a string into words?
15. **Question:** Write a function to check if two strings are anagrams.
16. **Question:** How can you convert a string to an integer?
17. **Question:** Write a program to concatenate two strings without using the `+` operator.
18. **Question:** How can you find the longest word in a string?
19. **Question:** Write a function to convert a string into a character array.
20. **Question:** How do you sort the characters in a string?

#### Hard Level Questions

21. **Question:** Write a program to find the longest common prefix among an array of strings.
22. **Question:** How can you find all permutations of a string?
23. **Question:** Write a function to generate all substrings of a string.
24. **Question:** How do you find the first non-repeating character in a string?
25. **Question:** Write a program to check if a string has all unique characters.
26. **Question:** How can you implement a function to perform string compression?
27. **Question:** Write a function to find the longest substring without repeating characters.
28. **Question:** How can you count the frequency of each character in a string?
29. **Question:** Write a program to rotate a string left by `n` positions.
30. **Question:** How can you implement a function to convert a string to a number without using standard functions?

### Answers to Basic Level Questions

1. **Answer:**
   ```cpp
   std::string str; // Declaration
   ```

2. **Answer:**
   ```cpp
   #include <iostream>
   #include <string>
   int main() {
       std::string str = "Hello";
       std::cout << "Length: " << str.length() << std::endl;
       return 0;
   }
   ```
   *Explanation:* The `.length()` method returns the length of the string.

3. **Answer:**
   ```cpp
   std::string str1 = "Hello";
   std::string str2 = " World";
   std::string result = str1 + str2; // Concatenation
   ```

4. **Answer:**
   ```cpp
   void toUpperCase(std::string &str) {
       for (char &c : str) c = toupper(c); // Convert to uppercase
   }
   ```

5. **Answer:**
   ```cpp
   char firstChar = str[0]; // Accessing first character
   ```

6. **Answer:**
   ```cpp
   if (str.empty()) std::cout << "String is empty!" << std::endl; // Check if empty
   ```

7. **Answer:**
   ```cpp
   if (str1 == str2) std::cout << "Strings are equal!" << std::endl; // Comparing strings
   ```

8. **Answer:**
   ```cpp
   void reverseString(std::string &str) {
       std::reverse(str.begin(), str.end()); // Reverse the string
   }
   ```

9. **Answer:**
   ```cpp
   size_t pos = str.find("substring"); // Find position of substring
   ```

10. **Answer:**
    ```cpp
    void replaceChar(std::string &str, char oldChar, char newChar) {
        std::replace(str.begin(), str.end(), oldChar, newChar); // Replace character
    }
    ```

### Answers to Medium Level Questions

11. **Answer:**
    ```cpp
    int countVowels(const std::string &str) {
        int count = 0;
        for (char c : str) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') count++;
        }
        return count; // Return number of vowels
    }
    ```

12. **Answer:**
    ```cpp
    std::string removeWhitespace(const std::string &str) {
        std::string result;
        for (char c : str) {
            if (!isspace(c)) result += c; // Remove whitespace
        }
        return result;
    }
    ```

13. **Answer:**
    ```cpp
    bool isPalindrome(const std::string &str) {
        std::string reversed = str;
        std::reverse(reversed.begin(), reversed.end()); // Reverse the string
        return str == reversed; // Check if equal
    }
    ```

14. **Answer:**
    ```cpp
    std::vector<std::string> splitString(const std::string &str) {
        std::istringstream iss(str);
        std::vector<std::string> words((std::istream_iterator<std::string>(iss)),
                                        std::istream_iterator<std::string>()); // Split into words
        return words;
    }
    ```

15. **Answer:**
    ```cpp
    bool areAnagrams(const std::string &str1, const std::string &str2) {
        if (str1.length() != str2.length()) return false; // Length check
        std::vector<int> count(256, 0); // Character count
        for (char c : str1) count[c]++;
        for (char c : str2) {
            if (--count[c] < 0) return false; // Check count
        }
        return true; // They are anagrams
    }
    ```

16. **Answer:**
    ```cpp
    int stringToInt(const std::string &str) {
        int num = 0;
        for (char c : str) {
            num = num * 10 + (c - '0'); // Convert character to integer
        }
        return num; // Return integer
    }
    ```

17. **Answer:**
    ```cpp
    void concatenateWithoutPlus(std::string &str1, const std::string &str2) {
        for (char c : str2) str1 += c; // Append characters one by one
    }
    ```

18. **Answer:**
    ```cpp
    std::string longestWord(const std::string &str) {
        std::istringstream iss(str);
        std::string longest, word;
        while (iss >> word) {
            if (word.length() > longest.length()) longest = word; // Update longest
        }
        return longest; // Return longest word
    }
    ```

19. **Answer:**
    ```cpp
    void stringToCharArray(const std::string &str, char arr[]) {
        for (size_t i = 0; i < str.length(); i++) {
            arr[i] = str[i]; // Copy to char array
        }
        arr[str.length()] = '\0'; // Null-terminate
    }
    ```
   20. **Answer:**
    ```cpp
    int findFirstOccurrence(const std::string &str, char target) {
    return str.find(target); // Returns index of first occurrence, or std::string::npos if not found
}

    ```### Answers to Hard Level Questions

21. **Answer:**
   ```cpp
   std::string longestCommonPrefix(std::vector<std::string> &strs) {
       if (strs.empty()) return "";
       std::string prefix = strs[0];
       for (size_t i = 1; i < strs.size(); i++) {
           while (strs[i].find(prefix) != 0) {
               prefix = prefix.substr(0, prefix.length() - 1); // Shorten prefix
               if (prefix.empty()) return "";
           }
       }
       return prefix; // Return longest common prefix
   }
   ```
   *Explanation:* This function iteratively reduces the prefix by checking each string in the array until it finds a match.

22. **Answer:**
   ```cpp
   void permute(std::string str, int left, int right) {
       if (left == right) std::cout << str << std::endl; // Print permutation
       else {
           for (int i = left; i <= right; i++) {
               std::swap(str[left], str[i]); // Swap to generate permutation
               permute(str, left + 1, right); // Recursive call
               std::swap(str[left], str[i]); // Backtrack
           }
       }
   }
   ```
   *Explanation:* This function generates permutations by swapping characters and using recursion.

23. **Answer:**
   ```cpp
   void generateSubstrings(const std::string &str) {
       for (size_t i = 0; i < str.length(); i++) {
           for (size_t j = i + 1; j <= str.length(); j++) {
               std::cout << str.substr(i, j - i) << std::endl; // Print substring
           }
       }
   }
   ```
   *Explanation:* This function iterates through all possible starting and ending indices to extract and print substrings.

24. **Answer:**
   ```cpp
   char firstNonRepeatingChar(const std::string &str) {
       std::unordered_map<char, int> charCount;
       for (char c : str) charCount[c]++; // Count characters
       for (char c : str) {
           if (charCount[c] == 1) return c; // Return first non-repeating character
       }
       return '\0'; // No non-repeating character
   }
   ```
   *Explanation:* This function uses a hash map to count occurrences of each character, then finds the first character with a count of one.

25. **Answer:**
   ```cpp
   bool hasUniqueCharacters(const std::string &str) {
       std::unordered_set<char> charSet;
       for (char c : str) {
           if (charSet.count(c)) return false; // Duplicate character found
           charSet.insert(c); // Add character to set
       }
       return true; // All characters are unique
   }
   ```
   *Explanation:* This function checks for unique characters by using a hash set to track characters already seen.

26. **Answer:**
   ```cpp
   std::string stringCompression(const std::string &str) {
       std::string compressed;
       int count = 1;
       for (size_t i = 1; i <= str.length(); i++) {
           if (str[i] == str[i - 1]) count++; // Count consecutive characters
           else {
               compressed += str[i - 1] + std::to_string(count); // Append character and count
               count = 1; // Reset count
           }
       }
       return compressed.length() < str.length() ? compressed : str; // Return compressed string or original
   }
   ```
   *Explanation:* This function builds a compressed version of the string by counting consecutive characters and appending them.

27. **Answer:**
   ```cpp
   int longestSubstringWithoutRepeating(const std::string &str) {
       std::unordered_map<char, int> charIndex;
       int maxLength = 0, start = 0;
       for (int i = 0; i < str.length(); i++) {
           if (charIndex.count(str[i])) {
               start = std::max(charIndex[str[i]] + 1, start); // Move start if character is repeated
           }
           charIndex[str[i]] = i; // Update character index
           maxLength = std::max(maxLength, i - start + 1); // Update maximum length
       }
       return maxLength; // Return maximum length
   }
   ```
   *Explanation:* This function uses a sliding window technique with a hash map to track indices of characters.

28. **Answer:**
   ```cpp
   std::unordered_map<char, int> characterFrequency(const std::string &str) {
       std::unordered_map<char, int> frequency;
       for (char c : str) frequency[c]++; // Count frequency of each character
       return frequency; // Return frequency map
   }
   ```
   *Explanation:* This function counts the frequency of each character in the string using a hash map.

29. **Answer:**
   ```cpp
   std::string rotateStringLeft(std::string str, int n) {
       n = n % str.length(); // Adjust n if greater than string length
       return str.substr(n) + str.substr(0, n); // Rotate string
   }
   ```
   *Explanation:* This function rotates the string by using the substring method to rearrange parts of the string.

30. **Answer:**
   ```cpp
   int stringToNumber(const std::string &str) {
       int num = 0;
       for (char c : str) {
           num = num * 10 + (c - '0'); // Convert each character to digit
       }
       return num; // Return converted number
   }
   ```
   *Explanation:* This function converts a string to a number by iterating through each character and building the integer value.

---


