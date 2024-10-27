 B) `template <typename T, typename U>`
    - C) `template <class T>`
    - D) `template <int N>`

    **Answer: A**

22. **What is the output of the following code?**
    ```cpp
    template <typename T>
    T getMax(T a, T b) {
        return (a > b) ? a : b;
    }
    template <typename T>
    T getMax(T a, T b, T c) {
        return getMax(getMax(a, b), c);
    }
    int main() {
        cout << getMax(1, 2, 3) << endl;
        cout << getMax(1.1, 2.2, 3.3) << endl;
        return 0;
    }
    ```
    - A) 3 3.3
    - B) 2 2.2
    - C) 3 2.2
    - D) 3 3

    **Answer: A**

23. **Which of the following statements about template instantiation is true?**
    - A) Templates are instantiated at compile time.
    - B) Templates are instantiated at runtime.
    - C) Templates cannot be instantiated.
    - D) Templates can only be instantiated for built-in types.

    **Answer: A**

24. **What will be the output of the following code?**
    ```cpp
    template <typename T>
    class MyClass {
        T data;
    public:
        MyClass(T d) : data(d) {}
        T getData() { return data; }
    };
    int main() {
        MyClass<int> obj(10);
        cout << obj.getData();
        return 0;
    }
    ```
    - A) 0
    - B) 10
    - C) Compilation error
    - D) Undefined behavior

    **Answer: B**

25. **Which of the following is true regarding the use of templates in C++?**
    - A) Templates increase code size.
    - B) Templates are slower than regular functions.
    - C) Templates can cause type-related errors at runtime.
    - D) All of the above.

    **Answer: A**

### Conclusion
Templates are a powerful feature in C++ that enable generic programming. Understanding and utilizing templates effectively can lead to more flexible and reusable code. This set of MCQs covers a range of basic to advanced topics, providing a comprehensive assessment of your knowledge about templates in C++.
