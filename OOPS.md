### Object-Oriented Programming (OOP) in C++

Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects," which can contain data and code that manipulates that data. C++ is one of the most popular languages that supports OOP. Here's a detailed overview from basic to advanced concepts.

#### **Basic Concepts**

1. **Classes and Objects**
   - **Class:** A blueprint for creating objects. It defines a type of object according to the attributes and methods.
   - **Object:** An instance of a class. It has state and behavior as defined by the class.

   ```cpp
   class Car {
   public:
       string brand;
       string model;
       int year;

       void displayInfo() {
           cout << brand << " " << model << " " << year << endl;
       }
   };

   int main() {
       Car car1;
       car1.brand = "Toyota";
       car1.model = "Corolla";
       car1.year = 2020;
       car1.displayInfo();
       return 0;
   }
   ```

2. **Encapsulation**
   - Encapsulation is the wrapping of data and methods into a single unit (class). It restricts direct access to some of the object's components, which can prevent the accidental modification of data.

   ```cpp
   class Person {
   private:
       int age;

   public:
       void setAge(int a) {
           age = a;
       }

       int getAge() {
           return age;
       }
   };

   int main() {
       Person person;
       person.setAge(25);
       cout << "Age: " << person.getAge() << endl;
       return 0;
   }
   ```

3. **Abstraction**
   - Abstraction means hiding complex implementation details and showing only the necessary features of an object. It helps to reduce programming complexity and effort.

   ```cpp
   class AbstractCar {
   public:
       virtual void start() = 0; // Pure virtual function
       virtual void stop() = 0;
   };

   class Tesla : public AbstractCar {
   public:
       void start() override {
           cout << "Tesla starting" << endl;
       }

       void stop() override {
           cout << "Tesla stopping" << endl;
       }
   };

   int main() {
       Tesla myTesla;
       myTesla.start();
       myTesla.stop();
       return 0;
   }
   ```

4. **Inheritance**
   - Inheritance allows a class (derived class) to inherit properties and behavior from another class (base class). It promotes code reusability.

   ```cpp
   class Animal {
   public:
       void eat() {
           cout << "Eating" << endl;
       }
   };

   class Dog : public Animal {
   public:
       void bark() {
           cout << "Barking" << endl;
       }
   };

   int main() {
       Dog myDog;
       myDog.eat();
       myDog.bark();
       return 0;
   }
   ```

5. **Polymorphism**
   - Polymorphism means "many forms." It allows methods to do different things based on the object it is acting upon.

   ```cpp
   class Shape {
   public:
       virtual void draw() {
           cout << "Drawing shape" << endl;
       }
   };

   class Circle : public Shape {
   public:
       void draw() override {
           cout << "Drawing circle" << endl;
       }
   };

   class Square : public Shape {
   public:
       void draw() override {
           cout << "Drawing square" << endl;
       }
   };

   int main() {
       Shape* shape1 = new Circle();
       Shape* shape2 = new Square();

       shape1->draw();
       shape2->draw();

       delete shape1;
       delete shape2;
       return 0;
   }
   ```

#### **Advanced Concepts**

1. **Constructor and Destructor**
   - **Constructor:** A special method that is automatically called when an object is created. It initializes the object.
   - **Destructor:** A special method that is automatically called when an object is destroyed. It cleans up the object.

   ```cpp
   class MyClass {
   public:
       MyClass() {
           cout << "Constructor called" << endl;
       }

       ~MyClass() {
           cout << "Destructor called" << endl;
       }
   };

   int main() {
       MyClass obj;
       return 0;
   }
   ```

2. **Operator Overloading**
   - C++ allows you to redefine the way operators work for user-defined types. This is called operator overloading.

   ```cpp
   class Complex {
   private:
       float real;
       float imag;

   public:
       Complex() : real(0), imag(0) {}

       Complex(float r, float i) : real(r), imag(i) {}

       Complex operator + (const Complex& obj) {
           Complex temp;
           temp.real = real + obj.real;
           temp.imag = imag + obj.imag;
           return temp;
       }

       void display() {
           cout << real << " + " << imag << "i" << endl;
       }
   };

   int main() {
       Complex c1(3.4, 5.5), c2(2.7, 4.6);
       Complex c3 = c1 + c2;
       c3.display();
       return 0;
   }
   ```

3. **Inheritance Types**
   - **Single Inheritance:** A derived class inherits from one base class.
   - **Multiple Inheritance:** A derived class inherits from more than one base class.
   - **Multilevel Inheritance:** A class is derived from another derived class.
   - **Hierarchical Inheritance:** Multiple classes inherit from a single base class.
   - **Hybrid Inheritance:** A combination of two or more types of inheritance.

4. **Virtual Functions and Abstract Classes**
   - **Virtual Function:** A function in a base class that can be overridden in a derived class. It supports runtime polymorphism.
   - **Abstract Class:** A class that cannot be instantiated and usually contains at least one pure virtual function.

   ```cpp
   class Base {
   public:
       virtual void show() {
           cout << "Base class" << endl;
       }
   };

   class Derived : public Base {
   public:
       void show() override {
           cout << "Derived class" << endl;
       }
   };

   int main() {
       Base* basePtr;
       Derived derivedObj;

       basePtr = &derivedObj;
       basePtr->show();

       return 0;
   }
   ```

5. **Templates**
   - Templates allow you to write generic programs. A function or class can operate with any data type.

   ```cpp
   template <typename T>
   class MyClass {
   private:
       T data;
   public:
       MyClass(T data) : data(data) {}

       void display() {
           cout << data << endl;
       }
   };

   int main() {
       MyClass<int> obj1(5);
       MyClass<string> obj2("Hello");

       obj1.display();
       obj2.display();

       return 0;
   }
   ```

6. **Exception Handling**
   - Exception handling provides a way to handle runtime errors using `try`, `catch`, and `throw`.

   ```cpp
   int main() {
       int a = 10, b = 0;
       try {
           if (b == 0)
               throw "Division by zero!";
           cout << a / b << endl;
       }
       catch (const char* msg) {
           cerr << "Error: " << msg << endl;
       }
       return 0;
   }
   ```

By understanding and implementing these concepts, you can leverage the full power of OOP in C++.
