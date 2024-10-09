 ***STACK-BASED ALGORITHMS *** in C++, These problems utilize the **stack data structure** and demonstrate its efficiency in various applications.

---

### 1. **Balanced Parentheses Problem**
The task is to check if an expression with parentheses (like `()`, `{}`, `[]`) is balanced.

#### Problem Explanation:
- A string of parentheses is balanced if every opening bracket has a corresponding closing bracket and they are properly nested.

#### Algorithm Steps:
1. Traverse the string.
2. Push any opening bracket (`(`, `{`, `[`) onto the stack.
3. If a closing bracket (`)`, `}`, `]`) is encountered, check if the stack has the corresponding opening bracket on top.
4. If the stack is empty at the end, the parentheses are balanced.

#### Code Implementation:
```cpp
#include <iostream>
#include <stack>
#include <unordered_map>

bool isBalanced(const std::string& expression) {
    std::stack<char> s;
    std::unordered_map<char, char> matching = { {')', '('}, {'}', '{'}, {']', '['} };

    for (char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch); // Push opening brackets
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty() || s.top() != matching[ch]) {
                return false; // If no matching opening bracket, return false
            }
            s.pop(); // Pop matching opening bracket
        }
    }

    return s.empty(); // Check if all opening brackets were matched
}

int main() {
    std::string expression = "{[()]}";
    
    if (isBalanced(expression)) {
        std::cout << "Balanced\n";
    } else {
        std::cout << "Not Balanced\n";
    }
    return 0;
}
```

#### Example:
```text
Input: "{[()]}"
Output: Balanced
```

Explanation:
- For every closing bracket, the corresponding opening bracket is present in the correct order, so the expression is balanced.

---

### 2. **Infix to Postfix Conversion (Shunting Yard Algorithm)**
Infix notation (e.g., `A + B * C`) is the standard way of writing expressions, but converting it to **postfix notation** (e.g., `A B C * +`) is easier for computation.

#### Algorithm Steps:
1. If the character is an operand (like `A`, `B`), append it directly to the result.
2. If the character is an operator, pop operators from the stack to the result based on precedence, then push the current operator onto the stack.
3. Push opening parentheses onto the stack, and when encountering closing parentheses, pop operators until the corresponding opening parenthesis is found.

#### Code Implementation:
```cpp
#include <iostream>
#include <stack>
#include <string>

int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

std::string infixToPostfix(const std::string& infix) {
    std::stack<char> operators;
    std::string postfix = "";

    for (char ch : infix) {
        if (isalnum(ch)) {  // If it's an operand (like A or B)
            postfix += ch;
        } else if (ch == '(') {
            operators.push(ch);
        } else if (ch == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();  // Pop '('
        } else {
            while (!operators.empty() && precedence(operators.top()) >= precedence(ch)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(ch);
        }
    }

    // Pop all remaining operators
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

int main() {
    std::string infix = "A+B*(C-D)";
    std::string postfix = infixToPostfix(infix);

    std::cout << "Postfix: " << postfix << std::endl;
    return 0;
}
```

#### Example:
```text
Input: A + B * (C - D)
Output: AB CD - * +
```

Explanation:
- The infix expression is converted into postfix where operators appear after their operands, making it easier for evaluation.

---

### 3. **Postfix Expression Evaluation**
Once an expression is in postfix notation, it can be easily evaluated by a stack, where operators are applied to operands in the correct order.

#### Algorithm Steps:
1. Traverse the postfix expression.
2. If you encounter an operand, push it onto the stack.
3. If you encounter an operator, pop the top two operands, apply the operator, and push the result back onto the stack.
4. After processing, the result will be the only element in the stack.

#### Code Implementation:
```cpp
#include <iostream>
#include <stack>
#include <string>

int evaluatePostfix(const std::string& postfix) {
    std::stack<int> s;

    for (char ch : postfix) {
        if (isdigit(ch)) {
            s.push(ch - '0');  // Convert char to int and push it
        } else {
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            switch (ch) {
                case '+': s.push(operand1 + operand2); break;
                case '-': s.push(operand1 - operand2); break;
                case '*': s.push(operand1 * operand2); break;
                case '/': s.push(operand1 / operand2); break;
            }
        }
    }
    return s.top();
}

int main() {
    std::string postfix = "53+82-*";
    std::cout << "Result: " << evaluatePostfix(postfix) << std::endl;
    return 0;
}
```

#### Example:
```text
Input: 53+82-*
Output: 48
```

Explanation:
- The postfix expression `53+82-*` is evaluated as `5 + 3 = 8`, then `8 * (8 - 2) = 48`.

---

### 4. **Next Greater Element Using Stack**
The task is to find the next greater element for each element in an array. For each element, the next greater element is the first one to the right that is greater than it.

#### Algorithm Steps:
1. Traverse the array from right to left.
2. Use a stack to keep track of elements for which the next greater element hasn't been found yet.
3. For each element, pop elements from the stack that are smaller, as they can't be the next greater element for future elements.
4. Push the current element onto the stack.

#### Code Implementation:
```cpp
#include <iostream>
#include <stack>
#include <vector>

std::vector<int> nextGreaterElements(const std::vector<int>& nums) {
    std::stack<int> s;
    std::vector<int> result(nums.size(), -1);

    for (int i = nums.size() - 1; i >= 0; --i) {
        while (!s.empty() && s.top() <= nums[i]) {
            s.pop();
        }
        if (!s.empty()) {
            result[i] = s.top();
        }
        s.push(nums[i]);
    }

    return result;
}

int main() {
    std::vector<int> nums = {4, 5, 2, 25};
    std::vector<int> result = nextGreaterElements(nums);

    std::cout << "Next Greater Elements: ";
    for (int n : result) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}
```

#### Example:
```text
Input: {4, 5, 2, 25}
Output: {5, 25, 25, -1}
```

Explanation:
- The next greater element for `4` is `5`, for `5` is `25`, for `2` is `25`, and there is no greater element for `25`.

---

### 5. **Largest Rectangle in Histogram**
Given an array where each element represents the height of a histogram bar, find the largest rectangle that can be formed.

#### Algorithm Steps:
1. Traverse the histogram and use a stack to keep track of bar indices.
2. If a bar is lower than the bar at the stack's top, pop the stack and calculate the area for the rectangle with the popped height.
3. Repeat until the stack is empty.

#### Code Implementation:
```cpp
#include <iostream>
#include <stack>
#include <vector>

int largestRectangleArea(const std::vector<int>& heights) {
    std::stack<int> s;
    int maxArea = 0, index = 0;

    while (index < heights.size()) {
        if (s.empty() || heights[index] >= heights[s.top()]) {
            s.push(index++);
        } else {
            int height = heights[s.top()];
            s.pop();
            int width = s.empty() ? index : index - s.top() - 1;
            maxArea = std::max(maxArea, height * width);
        }
    }

    while (!s.empty()) {
        int height = heights[s.top()];
        s.pop();
        int width = s.empty() ? index : index - s.top() - 1
