Sure! Here are 50 multiple-choice questions (MCQs) covering various aspects of Object-Oriented Programming (OOP) in C++. Each question includes a code snippet or theoretical concept, followed by multiple choices. Explanations are provided at the end of each question.

### Basic Level

#### 1. What does the following code demonstrate?
```cpp
class MyClass {
public:
    int x;
    void display() {
        std::cout << x;
    }
};
int main() {
    MyClass obj;
    obj.x = 10;
    obj.display();
    return 0;
}
```
a) Encapsulation  
b) Inheritance  
c) Polymorphism  
d) Abstraction

**Answer: a) Encapsulation**  
**Explanation:** Encapsulation is the bundling of data and methods that operate on the data within one unit (class).

#### 2. What is the output of the following code?
```cpp
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called!";
    }
};
int main() {
    MyClass obj;
    return 0;
}
```
a) No output  
b) "Constructor called!"  
c) Compilation error  
d) Runtime error

**Answer: b) "Constructor called!"**  
**Explanation:** The constructor is called when an object of the class is created.

#### 3. Which of the following is true about constructors?
a) They can be called directly like a regular function  
b) They have a return type  
c) They are automatically called when an object is created  
d) They must be explicitly defined by the programmer

**Answer: c) They are automatically called when an object is created**  
**Explanation:** Constructors are special member functions that are automatically called when an object is instantiated.

#### 4. What is the output of the following code?
```cpp
class MyClass {
public:
    ~MyClass() {
        std::cout << "Destructor called!";
    }
};
int main() {
    MyClass obj;
    return 0;
}
```
a) No output  
b) "Destructor called!"  
c) Compilation error  
d) Runtime error

**Answer: b) "Destructor called!"**  
**Explanation:** The destructor is called when the object goes out of scope.

#### 5. What does the following code demonstrate?
```cpp
class Base {
public:
    void display() {
        std::cout << "Base class";
    }
};
class Derived : public Base {
public:
    void display() {
        std::cout << "Derived class";
    }
};
int main() {
    Derived obj;
    obj.display();
    return 0;
}
```
a) Function overloading  
b) Function overriding  
c) Inheritance  
d) Polymorphism

**Answer: b) Function overriding**  
**Explanation:** The `display` function in the derived class overrides the `display` function in the base class.

#### 6. What is the output of the following code?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
int main() {
    Base* b = new Derived();
    b->show();
    delete b;
    return 0;
}
```
a) Base  
b) Derived  
c) Compilation error  
d) Runtime error

**Answer: b) Derived**  
**Explanation:** The `show` function is virtual in the base class, allowing the derived class's `show` function to be called.

#### 7. What does the following code demonstrate?
```cpp
class MyClass {
public:
    MyClass(int a) {
        x = a;
    }
    MyClass(const MyClass &obj) {
        x = obj.x;
    }
    int getX() {
        return x;
    }
private:
    int x;
};
int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    std::cout << obj2.getX();
    return 0;
}
```
a) Copy constructor  
b) Assignment operator  
c) Default constructor  
d) Destructor

**Answer: a) Copy constructor**  
**Explanation:** The copy constructor is used to initialize an object using another object of the same class.

#### 8. What is the purpose of a friend function in the following code?
```cpp
class MyClass {
private:
    int x;
public:
    MyClass(int val) : x(val) {}
    friend void display(MyClass&);
};
void display(MyClass& obj) {
    std::cout << obj.x;
}
int main() {
    MyClass obj(10);
    display(obj);
    return 0;
}
```
a) To access private data members  
b) To initialize the object  
c) To overload operators  
d) To inherit from another class

**Answer: a) To access private data members**  
**Explanation:** Friend functions can access private and protected members of a class.

#### 9. What is the output of the following code?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
int main() {
    Base b;
    b.show();
    return 0;
}
```
a) Base  
b) Derived  
c) Compilation error  
d) Runtime error

**Answer: a) Base**  
**Explanation:** Since `b` is an object of `Base`, the `show` method of `Base` is called.

#### 10. What is the output of the following code?
```cpp
class Base {
public:
    Base() {
        std::cout << "Base Constructor";
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor";
    }
};
int main() {
    Derived d;
    return 0;
}
```
a) Base Constructor  
b) Derived Constructor  
c) Base ConstructorDerived Constructor  
d) Derived ConstructorBase Constructor

**Answer: c) Base ConstructorDerived Constructor**  
**Explanation:** The base class constructor is called first, followed by the derived class constructor.

### Medium Level

#### 11. What does the following code demonstrate?
```cpp
template <typename T>
class MyClass {
public:
    T data;
    MyClass(T d) : data(d) {}
    void display() {
        std::cout << data;
    }
};
int main() {
    MyClass<int> obj(10);
    obj.display();
    return 0;
}
```
a) Function overloading  
b) Operator overloading  
c) Template class  
d) Virtual function

**Answer: c) Template class**  
**Explanation:** Templates allow the creation of a class that can operate with any data type.

#### 12. What is the output of the following code?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
int main() {
    Base* b = new Derived();
    b->show();
    delete b;
    return 0;
}
```
a) Base  
b) Derived  
c) Compilation error  
d) Runtime error

**Answer: b) Derived**  
**Explanation:** The `show` function is virtual in the base class, allowing the derived class's `show` function to be called.

#### 13. What does the following code demonstrate?
```cpp
class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {}
    MyClass(const MyClass &obj) {
        x = obj.x;
    }
    MyClass& operator = (const MyClass &obj) {
        if (this == &obj)
            return *this;
        x = obj.x;
        return *this;
    }
};
int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    MyClass obj3(20);
    obj3 = obj1;
    std::cout << obj3.x;
    return 0;
}
```
a) Copy constructor  
b) Assignment operator  
c) Default constructor  
d) Destructor

**Answer: b) Assignment operator**  
**Explanation:** The assignment operator is used to copy values from one object to another already existing object.

#### 14. What does the following code demonstrate?
```cpp
class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor";
    }
};
class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor";
    }
};
int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}
```
a) Function overloading  
b) Function overriding  
c) Virtual destructor  
d) Pure virtual function

**Answer: c) Virtual destructor**  
**Explanation:** The virtual destructor ensures that the destructor of the derived class is called when deleting an object through a base class pointer.

#### 15. What is the output of the following code?
```cpp
class Base {
public:
    Base() {
        std::cout << "Base Constructor";
    }
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor";
    }
    void show() override {
        std::cout << "Derived";
    }
};
int main() {
    Base

* b = new Derived();
    b->show();
    delete b;
    return 0;
}
```
a) Base ConstructorBase  
b) Base ConstructorDerived ConstructorBase  
c) Base ConstructorDerived ConstructorDerived  
d) Derived ConstructorDerived

**Answer: c) Base ConstructorDerived ConstructorDerived**  
**Explanation:** The constructors of both the base and derived classes are called, followed by the overridden `show` method of the derived class.

#### 16. What does the following code demonstrate?
```cpp
class MyClass {
public:
    static int count;
    MyClass() {
        count++;
    }
};
int MyClass::count = 0;
int main() {
    MyClass obj1, obj2, obj3;
    std::cout << MyClass::count;
    return 0;
}
```
a) Encapsulation  
b) Inheritance  
c) Polymorphism  
d) Static member

**Answer: d) Static member**  
**Explanation:** `count` is a static member, shared by all objects of the class.

#### 17. What is the output of the following code?
```cpp
class MyClass {
public:
    static int count;
    MyClass() {
        count++;
    }
    static int getCount() {
        return count;
    }
};
int MyClass::count = 0;
int main() {
    MyClass obj1, obj2, obj3;
    std::cout << MyClass::getCount();
    return 0;
}
```
a) 1  
b) 2  
c) 3  
d) Compilation error

**Answer: c) 3**  
**Explanation:** The static member `count` is incremented with each object creation and can be accessed using a static member function.

#### 18. What does the following code demonstrate?
```cpp
class Base {
public:
    virtual void show() = 0;
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
int main() {
    Derived obj;
    obj.show();
    return 0;
}
```
a) Pure virtual function  
b) Virtual destructor  
c) Function overloading  
d) Friend function

**Answer: a) Pure virtual function**  
**Explanation:** The `show` method in the base class is a pure virtual function, making `Base` an abstract class.

#### 19. What is the output of the following code?
```cpp
class Base {
public:
    Base() {
        std::cout << "Base Constructor";
    }
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor";
    }
    void show() override {
        std::cout << "Derived";
    }
};
int main() {
    Derived d;
    d.show();
    return 0;
}
```
a) Base ConstructorBase  
b) Base ConstructorDerived ConstructorBase  
c) Base ConstructorDerived ConstructorDerived  
d) Derived ConstructorDerived

**Answer: c) Base ConstructorDerived ConstructorDerived**  
**Explanation:** The constructors of both the base and derived classes are called, followed by the overridden `show` method of the derived class.

#### 20. What does the following code demonstrate?
```cpp
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor";
    }
    ~MyClass() {
        std::cout << "Destructor";
    }
};
void func() {
    MyClass obj;
}
int main() {
    func();
    return 0;
}
```
a) Static member  
b) Dynamic memory allocation  
c) Object lifetime  
d) Friend function

**Answer: c) Object lifetime**  
**Explanation:** The constructor and destructor demonstrate the lifetime of an object created within a function.

### Hard Level

#### 21. What is the output of the following code?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    void show() override {
        std::cout << "MoreDerived";
    }
};
int main() {
    Base* b = new MoreDerived();
    b->show();
    delete b;
    return 0;
}
```
a) Base  
b) Derived  
c) MoreDerived  
d) Compilation error

**Answer: c) MoreDerived**  
**Explanation:** The `show` method is overridden in `MoreDerived`, and it is called because `show` is a virtual function.

#### 22. What does the following code demonstrate?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
void display(Base& b) {
    b.show();
}
int main() {
    Derived d;
    display(d);
    return 0;
}
```
a) Function overloading  
b) Function overriding  
c) Polymorphism  
d) Friend function

**Answer: c) Polymorphism**  
**Explanation:** The code demonstrates polymorphism through function overriding and using a base class reference to call the derived class method.

#### 23. What is the output of the following code?
```cpp
class Base {
public:
    Base() {
        std::cout << "Base Constructor";
    }
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor";
    }
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    MoreDerived() {
        std::cout << "MoreDerived Constructor";
    }
    void show() override {
        std::cout << "MoreDerived";
    }
};
int main() {
    MoreDerived md;
    md.show();
    return 0;
}
```
a) Base ConstructorBase  
b) Base ConstructorDerived ConstructorBase  
c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived  
d) Derived ConstructorMoreDerived ConstructorMoreDerived

**Answer: c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived**  
**Explanation:** The constructors of all base classes are called in the order of inheritance, followed by the `show` method of the `MoreDerived` class.

#### 24. What does the following code demonstrate?
```cpp
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor";
    }
    ~MyClass() {
        std::cout << "Destructor";
    }
};
void func() {
    MyClass* obj = new MyClass();
    delete obj;
}
int main() {
    func();
    return 0;
}
```
a) Static member  
b) Dynamic memory allocation  
c) Object lifetime  
d) Friend function

**Answer: b) Dynamic memory allocation**  
**Explanation:** The code demonstrates dynamic memory allocation using `new` and deallocation using `delete`.

#### 25. What is the output of the following code?
```cpp
class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor";
    }
};
class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor";
    }
};
int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}
```
a) Base Destructor  
b) Derived Destructor  
c) Base DestructorDerived Destructor  
d) Derived DestructorBase Destructor

**Answer: d) Derived DestructorBase Destructor**  
**Explanation:** The destructors of both the derived and base classes are called when deleting an object through a base class pointer with a virtual destructor.

#### 26. What does the following code demonstrate?
```cpp
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor";
    }
    ~MyClass() {
        std::cout << "Destructor";
    }
};
int main() {
    MyClass* obj = new MyClass();
    return 0;
}
```
a) Static member  
b) Dynamic memory allocation  
c) Memory leak  
d) Friend function

**Answer: c) Memory leak**  
**Explanation:** The dynamically allocated object is not deleted, causing a memory leak.

#### 27. What does the following code demonstrate?
```cpp
class Base {
public:
    Base() {
        std::cout << "Base Constructor";
    }
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor";
    }
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    MoreDerived() {
        std::cout << "MoreDerived Constructor";
    }
    void show() override {
        std::cout << "MoreDerived";
    }
};
int main() {
    Derived* d = new MoreDerived();
    d->show();
    delete d;
    return 0;
}
```
a) Base ConstructorBase  
b) Base ConstructorDerived ConstructorBase  
c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived  
d) Derived ConstructorMoreDerived ConstructorMoreDerived

**Answer: d) Derived ConstructorMoreDerived ConstructorMoreDerived**  
**Explanation:** The constructors of the base classes and the derived class are called, followed by the `show` method of the `MoreDerived` class.

#### 28. What is the output of the following code?
```cpp


class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    void show() override {
        std::cout << "MoreDerived";
    }
};
void display(Base* b) {
    b->show();
}
int main() {
    MoreDerived md;
    display(&md);
    return 0;
}
```
a) Base  
b) Derived  
c) MoreDerived  
d) Compilation error

**Answer: c) MoreDerived**  
**Explanation:** The `show` method is overridden in `MoreDerived`, and it is called because `show` is a virtual function.

#### 29. What does the following code demonstrate?
```cpp
class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor";
    }
};
class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor";
    }
};
int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}
```
a) Base Destructor  
b) Derived Destructor  
c) Base DestructorDerived Destructor  
d) Derived DestructorBase Destructor

**Answer: d) Derived DestructorBase Destructor**  
**Explanation:** The destructors of both the derived and base classes are called when deleting an object through a base class pointer with a virtual destructor.

#### 30. What is the output of the following code?
```cpp
class Base {
public:
    Base() {
        std::cout << "Base Constructor";
    }
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor";
    }
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    MoreDerived() {
        std::cout << "MoreDerived Constructor";
    }
    void show() override {
        std::cout << "MoreDerived";
    }
};
int main() {
    MoreDerived md;
    md.show();
    return 0;
}
```
a) Base ConstructorBase  
b) Base ConstructorDerived ConstructorBase  
c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived  
d) Derived ConstructorMoreDerived ConstructorMoreDerived

**Answer: c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived**  
**Explanation:** The constructors of all base classes are called in the order of inheritance, followed by the `show` method of the `MoreDerived` class.

#### 31. What is the output of the following code?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    void show() override {
        std::cout << "MoreDerived";
    }
};
void display(Base& b) {
    b.show();
}
int main() {
    MoreDerived md;
    display(md);
    return 0;
}
```
a) Base  
b) Derived  
c) MoreDerived  
d) Compilation error

**Answer: c) MoreDerived**  
**Explanation:** The `show` method is overridden in `MoreDerived`, and it is called because `show` is a virtual function.

#### 32. What does the following code demonstrate?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
void display(Base* b) {
    b->show();
}
int main() {
    Derived d;
    display(&d);
    return 0;
}
```
a) Function overloading  
b) Function overriding  
c) Polymorphism  
d) Friend function

**Answer: c) Polymorphism**  
**Explanation:** The code demonstrates polymorphism through function overriding and using a base class pointer to call the derived class method.

#### 33. What is the output of the following code?
```cpp
class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor";
    }
};
class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor";
    }
};
int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}
```
a) Base Destructor  
b) Derived Destructor  
c) Base DestructorDerived Destructor  
d) Derived DestructorBase Destructor

**Answer: d) Derived DestructorBase Destructor**  
**Explanation:** The destructors of both the derived and base classes are called when deleting an object through a base class pointer with a virtual destructor.

#### 34. What does the following code demonstrate?
```cpp
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor";
    }
    ~MyClass() {
        std::cout << "Destructor";
    }
};
void func() {
    MyClass* obj = new MyClass();
    delete obj;
}
int main() {
    func();
    return 0;
}
```
a) Static member  
b) Dynamic memory allocation  
c) Object lifetime  
d) Friend function

**Answer: b) Dynamic memory allocation**  
**Explanation:** The code demonstrates dynamic memory allocation using `new` and deallocation using `delete`.

#### 35. What is the output of the following code?
```cpp
class Base {
public:
    Base() {
        std::cout << "Base Constructor";
    }
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor";
    }
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    MoreDerived() {
        std::cout << "MoreDerived Constructor";
    }
    void show() override {
        std::cout << "MoreDerived";
    }
};
int main() {
    MoreDerived md;
    md.show();
    return 0;
}
```
a) Base ConstructorBase  
b) Base ConstructorDerived ConstructorBase  
c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived  
d) Derived ConstructorMoreDerived ConstructorMoreDerived

**Answer: c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived**  
**Explanation:** The constructors of all base classes are called in the order of inheritance, followed by the `show` method of the `MoreDerived` class.

#### 36. What is the output of the following code?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    void show() override {
        std::cout << "MoreDerived";
    }
};
int main() {
    MoreDerived md;
    md.show();
    return 0;
}
```
a) Base  
b) Derived  
c) MoreDerived  
d) Compilation error

**Answer: c) MoreDerived**  
**Explanation:** The `show` method is overridden in `MoreDerived`, and it is called because `show` is a virtual function.

#### 37. What is the output of the following code?
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    void show() override {
        std::cout << "MoreDerived";
    }
};
void display(Base& b) {
    b.show();
}
int main() {
    MoreDerived md;
    display(md);
    return 0;
}
```
a) Base  
b) Derived  
c) MoreDerived  
d) Compilation error

**Answer: c) MoreDerived**  
**Explanation:** The `show` method is overridden in `MoreDerived`, and it is called because `show` is a virtual function.

#### 38. What does the following code demonstrate?
```cpp
class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor";
    }
};
class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor";
    }
};
int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}
```
a) Base Destructor  
b) Derived Destructor  
c) Base DestructorDerived Destructor  
d) Derived DestructorBase Destructor

**Answer: d) Derived DestructorBase Destructor**  
**Explanation:** The destructors of both the derived and base classes are called when deleting an object through a base class pointer with a virtual destructor.

#### 39. What does the following code demonstrate?
```cpp
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor";
    }
    ~MyClass() {
        std::cout << "Destructor";
    }
};
void func() {
    MyClass obj;
}
int main() {
    func();
    return 0;
}
```
a) Static member  
b) Dynamic memory allocation  
c) Object lifetime  
d) Friend function

**Answer: c) Object lifetime**  
**Explanation:** The constructor and destructor demonstrate the lifetime of an object created within a function.

#### 40. What is the output of the following code?


```cpp
class Base {
public:
    Base() {
        std::cout << "Base Constructor";
    }
    virtual void show() {
        std::cout << "Base";
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor";
    }
    void show() override {
        std::cout << "Derived";
    }
};
class MoreDerived : public Derived {
public:
    MoreDerived() {
        std::cout << "MoreDerived Constructor";
    }
    void show() override {
        std::cout << "MoreDerived";
    }
};
int main() {
    MoreDerived md;
    md.show();
    return 0;
}
```
a) Base ConstructorBase  
b) Base ConstructorDerived ConstructorBase  
c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived  
d) Derived ConstructorMoreDerived ConstructorMoreDerived

**Answer: c) Base ConstructorDerived ConstructorMoreDerived ConstructorMoreDerived**  
**Explanation:** The constructors of all base classes are called in the order of inheritance, followed by the `show` method of the `MoreDerived` class.
