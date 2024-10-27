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

Here's a comprehensive example of C++ code that demonstrates the key concepts of Object-Oriented Programming (OOP), including classes, objects, inheritance, polymorphism, encapsulation, and more. We'll build a simple system for managing a library.

### Code Example

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base class
class Book {
protected:
    string title;
    string author;
    int id;

public:
    Book(string t, string a, int i) : title(t), author(a), id(i) {}

    virtual void display() {
        cout << "Book ID: " << id << ", Title: " << title << ", Author: " << author << endl;
    }

    virtual ~Book() {}
};

// Derived class
class Fiction : public Book {
private:
    string genre;

public:
    Fiction(string t, string a, int i, string g) : Book(t, a, i), genre(g) {}

    void display() override {
        cout << "Fiction Book - ID: " << id << ", Title: " << title << ", Author: " << author << ", Genre: " << genre << endl;
    }
};

class NonFiction : public Book {
private:
    string subject;

public:
    NonFiction(string t, string a, int i, string s) : Book(t, a, i), subject(s) {}

    void display() override {
        cout << "Non-Fiction Book - ID: " << id << ", Title: " << title << ", Author: " << author << ", Subject: " << subject << endl;
    }
};

// Library class to manage books
class Library {
private:
    vector<Book*> books;

public:
    void addBook(Book* book) {
        books.push_back(book);
    }

    void displayBooks() {
        for (Book* book : books) {
            book->display();
        }
    }

    ~Library() {
        for (Book* book : books) {
            delete book;
        }
    }
};

int main() {
    Library lib;

    Book* book1 = new Fiction("The Great Gatsby", "F. Scott Fitzgerald", 1, "Drama");
    Book* book2 = new NonFiction("Sapiens", "Yuval Noah Harari", 2, "History");

    lib.addBook(book1);
    lib.addBook(book2);

    lib.displayBooks();

    return 0;
}
```

### Explanation

Let's break down the code line by line to understand the key OOP concepts in C++.

1. **Include necessary headers:**
   ```cpp
   #include <iostream>
   #include <vector>
   #include <string>
   ```
   These lines include the standard input/output stream, vector, and string libraries.

2. **Using the `std` namespace:**
   ```cpp
   using namespace std;
   ```
   This line allows us to use names from the standard library without prefixing them with `std::`.

3. **Base class `Book`:**
   ```cpp
   class Book {
   protected:
       string title;
       string author;
       int id;
   public:
       Book(string t, string a, int i) : title(t), author(a), id(i) {}
       virtual void display() {
           cout << "Book ID: " << id << ", Title: " << title << ", Author: " << author << endl;
       }
       virtual ~Book() {}
   };
   ```
   - **Class Declaration:** `class Book { ... };` declares the `Book` class.
   - **Protected Members:** `protected:` ensures that derived classes can access these members.
   - **Constructor:** `Book(string t, string a, int i)` initializes the `title`, `author`, and `id` members.
   - **Virtual Function:** `virtual void display()` is a virtual function that can be overridden by derived classes.
   - **Destructor:** `virtual ~Book()` is a virtual destructor to ensure proper cleanup of derived class objects.

4. **Derived class `Fiction`:**
   ```cpp
   class Fiction : public Book {
   private:
       string genre;
   public:
       Fiction(string t, string a, int i, string g) : Book(t, a, i), genre(g) {}
       void display() override {
           cout << "Fiction Book - ID: " << id << ", Title: " << title << ", Author: " << author << ", Genre: " << genre << endl;
       }
   };
   ```
   - **Inheritance:** `class Fiction : public Book { ... };` indicates that `Fiction` inherits from `Book`.
   - **Constructor:** `Fiction(string t, string a, int i, string g)` initializes the base class and adds the `genre` member.
   - **Overridden Function:** `void display() override` provides a specific implementation for `Fiction` books.

5. **Derived class `NonFiction`:**
   ```cpp
   class NonFiction : public Book {
   private:
       string subject;
   public:
       NonFiction(string t, string a, int i, string s) : Book(t, a, i), subject(s) {}
       void display() override {
           cout << "Non-Fiction Book - ID: " << id << ", Title: " << title << ", Author: " << author << ", Subject: " << subject << endl;
       }
   };
   ```
   - **Inheritance:** `class NonFiction : public Book { ... };` indicates that `NonFiction` inherits from `Book`.
   - **Constructor:** `NonFiction(string t, string a, int i, string s)` initializes the base class and adds the `subject` member.
   - **Overridden Function:** `void display() override` provides a specific implementation for `NonFiction` books.

6. **Library class:**
   ```cpp
   class Library {
   private:
       vector<Book*> books;
   public:
       void addBook(Book* book) {
           books.push_back(book);
       }
       void displayBooks() {
           for (Book* book : books) {
               book->display();
           }
       }
       ~Library() {
           for (Book* book : books) {
               delete book;
           }
       }
   };
   ```
   - **Private Members:** `vector<Book*> books;` stores pointers to `Book` objects.
   - **Adding Books:** `void addBook(Book* book)` adds a book to the library.
   - **Displaying Books:** `void displayBooks()` iterates through the books and calls their `display` method.
   - **Destructor:** `~Library()` deletes all dynamically allocated books to prevent memory leaks.

7. **Main function:**
   ```cpp
   int main() {
       Library lib;

       Book* book1 = new Fiction("The Great Gatsby", "F. Scott Fitzgerald", 1, "Drama");
       Book* book2 = new NonFiction("Sapiens", "Yuval Noah Harari", 2, "History");

       lib.addBook(book1);
       lib.addBook(book2);

       lib.displayBooks();

       return 0;
   }
   ```
   - **Library Instance:** `Library lib;` creates an instance of the `Library` class.
   - **Creating Books:** `new Fiction(...)` and `new NonFiction(...)` create instances of `Fiction` and `NonFiction`.
   - **Adding Books:** `lib.addBook(book1);` and `lib.addBook(book2);` add books to the library.
   - **Displaying Books:** `lib.displayBooks();` displays all books in the library.
   - **Return Statement:** `return 0;` indicates successful program termination.

This example demonstrates how to use OOP concepts in C++ to create a flexible and reusable system for managing a library. It covers class definition, inheritance, polymorphism, encapsulation, and memory management.
