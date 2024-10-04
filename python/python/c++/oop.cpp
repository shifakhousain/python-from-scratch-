//Class
// C++ Program to show the syntax/working of Objects as a
// part of Object Oriented PProgramming
// #include <iostream>
// using namespace std;

// class person {
// 	char name[20];
// 	int id;

// public:
// 	void getdetails() {}
// };

// int main()
// {

// 	person p1; // p1 is a object
// 	return 0;
// }

//class and object
// #include <iostream>  
// using namespace std;  
// class Student {  
//    public:  
//       int id;//data member (also instance variable)      
//       string name;//data member(also instance variable)      
// };  
// int main() {  
//     Student s1; //creating an object of Student   
//     s1.id = 201;    
//     s1.name = "Sonoo Jaiswal";   
//     cout<<s1.id<<endl;  
//     cout<<s1.name<<endl;  
//     return 0;  
// }  

//class using methods
// #include <iostream>  
// using namespace std;  
// class Student {  
//    public:  
//        int id;//data member (also instance variable)      
//        string name;//data member(also instance variable)      
//        void insert(int i, string n)    
//         {    
//             id = i;    
//             name = n;    
//         }    
//        void display()    
//         {    
//             cout<<id<<"  "<<name<<endl;    
//         }    
// };  
// int main(void) {  //int main()
//     Student s1; //creating an object of Student   
//     Student s2; //creating an object of Student  
//     s1.insert(201, "Sonoo");    
//     s2.insert(202, "Nakul");    
//     s1.display();    
//     s2.display();  
//     return 0;  
// }

// C++ program to demonstrate public
// access modifier

// #include<iostream>
// using namespace std;

// // class definition
// class Circle
// {
// 	public: 
// 		double radius;
		
// 		double compute_area()
// 		{
// 			return 3.14*radius*radius;
// 		}
	
// };

// // main function
// int main()
// {
// 	Circle obj;
	
// 	// accessing public datamember outside class
// 	obj.radius = 5.5;
	
// 	cout << "Radius is: " << obj.radius << "\n";
// 	cout << "Area is: " << obj.compute_area();
// 	return 0;
// }

// C++ program to demonstrate private
// access modifier

// #include<iostream>
// using namespace std;

// class Circle
// { 
// 	// private data member
// 	private: 
// 		double radius;
	
// 	// public member function 
// 	public: 
// 		double compute_area()
// 		{ // member function can access private 
// 			// data member radius
// 			return 3.14*radius*radius;
// 		}
	
// };

// // main function
// int main()
// { 
// 	// creating object of the class
// 	Circle obj;
	
// 	// trying to access private data member
// 	// directly outside the class
// 	obj.radius = 1.5;
	
// 	cout << "Area is:" << obj.compute_area();
// 	return 0;
// }

// C++ program to demonstrate private
// access modifier

// #include<iostream>
// using namespace std;

// class Circle
// { 
// 	// private data member
// 	private: 
// 		double radius;
	
// 	// public member function 
// 	public: 
// 		void compute_area(double r)
// 		{ // member function can access private 
// 			// data member radius
// 			radius = r;
			
// 			double area = 3.14*radius*radius;
			
// 			cout << "Radius is: " << radius << endl;
// 			cout << "Area is: " << area;
// 		}
	
// };

// // main function
// int main()
// { 
// 	// creating object of the class
// 	Circle obj;
	
// 	// trying to access private data member
// 	// directly outside the class
// 	obj.compute_area(1.5);
	
	
// 	return 0;
// }

// C++ program to demonstrate
// protected access modifier
// #include <bits/stdc++.h>
// using namespace std;

// // base class
// class Parent
// { 
// 	// protected data members
// 	protected:
// 	int id_protected;
	
// };

// // sub class or derived class from public base class
// class Child : public Parent
// {
// 	public:
// 	void setId(int id)
// 	{
		
// 		// Child class is able to access the inherited 
// 		// protected data members of base class
		
// 		id_protected = id;
		
// 	}
	
// 	void displayId()
// 	{
// 		cout << "id_protected is: " << id_protected << endl;
// 	}
// };

// // main function
// int main() {
	
// 	Child obj1;
	
// 	// member function of the derived class can
// 	// access the protected data members of the base class
	
// 	obj1.setId(81);
// 	obj1.displayId();
// 	return 0;
// }

// C++ program to create a global function as a friend
// function of some class
// #include <iostream>
// using namespace std;

// class base {
// private:
// 	int private_variable;

// protected:
// 	int protected_variable;

// public:
// 	base()
// 	{
// 		private_variable = 10;
// 		protected_variable = 99;
// 	}
	
// 	// friend function declaration
// 	friend void friendFunction(base& obj);
// };


// // friend function definition
// void friendFunction(base& obj)
// {
// 	cout << "Private Variable: " << obj.private_variable
// 		<< endl;
// 	cout << "Protected Variable: " << obj.protected_variable;
// }

// // driver code
// int main()
// {
// 	base object1;
// 	friendFunction(object1);

// 	return 0;
// }

// C++ program to create a member function of another class
// as a friend function
// #include <iostream>
// using namespace std;

// class base; // forward definition needed
// // another class in which function is declared
// class anotherClass {
// public:
// 	void memberFunction(base& obj);
// };

// // base class for which friend is declared
// class base {
// private:
// 	int private_variable;

// protected:
// 	int protected_variable;

// public:
// 	base()
// 	{
// 		private_variable = 10;
// 		protected_variable = 99;
// 	}

// 	// friend function declaration
// 	friend void anotherClass::memberFunction(base&);
// };

// // friend function definition
// void anotherClass::memberFunction(base& obj)
// {
// 	cout << "Private Variable: " << obj.private_variable
// 		<< endl;
// 	cout << "Protected Variable: " << obj.protected_variable;
// }

// // driver code
// int main()
// {
// 	base object1;
// 	anotherClass object2;
// 	object2.memberFunction(object1);

// 	return 0;
// }

// Example: defining the constructor within the class

// #include<iostream>
// using namespace std;
// class student
// {
// 	int rno;
// 	char name[50];
// 	double fee;
// 	public:
// 	student()
// 	{
        
// 		cout<<"Enter the RollNo:";
// 		cin>>rno;
// 		cout<<"Enter the Name:";
// 		cin>>name;
// 		cout<<"Enter the Fee:"; 
// 		cin>>fee;
// 	} 
	


// 	void display()
// 	{
// 		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
// 	}
// };

// int main()
// {
// 	student s; //constructor gets called automatically when we create the object of the class
// 	s.display();
// 	return 0;

// }

// Example: defining the constructor outside the class

// #include<iostream>
// using namespace std;
// class student
// {
// 	int rno;
// 	char name[50];
// 	double fee;
// 	public:
// 	student();
// 	void display();
	
// };

// 	student::student()
// 	{
// 		cout<<"Enter the RollNo:";
// 		cin>>rno;
// 		cout<<"Enter the Name:";
// 		cin>>name;
// 		cout<<"Enter the Fee:"; 
// 		cin>>fee;
// 	} 

// void student::display()
// 	{
// 		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
// 	}
	
// int main()
// {
// 	student s;
// 	s.display();
// 	return 0;
// }

// Cpp program to illustrate the
// concept of default Constructors
// #include <iostream>
// using namespace std;

// class construct {
// public:
// 	int a, b;

// 	// Default Constructor
// 	construct()
// 	{
// 		a = 10;
// 		b = 20;
// 	}
// };

// int main()
// {
// 	// Default constructor called automatically
// 	// when the object is created
// 	construct c;
// 	cout << "a: " << c.a << endl << "b: " << c.b;
// 	return 1;
// }

// CPP program to illustrate
// parameterized constructors
// #include <iostream>
// using namespace std;

// class Point {
// private:
// 	int x, y;

// public:
// 	// Parameterized Constructor
// 	Point(int x1, int y1)
// 	{
// 		x = x1;
// 		y = y1;
// 	}

// 	int getX() { return x; }
// 	int getY() { return y; }
// };

// int main()
// {
// 	// Constructor called
// 	Point p1(10, 15);

// 	// Access values assigned by constructor
// 	cout << "p1.x = " << p1.getX()
// 		<< ", p1.y = " << p1.getY();

// 	return 0;
// }

// Implicit copy constructor

// #include<iostream>
// using namespace std;

// class Sample
// {		 
//     int id;
// 	public:
// 	void init(int x)
// 	{
// 		id=x; 
// 	} 
// 	void display()
// 	{
// 		cout<<endl<<"ID="<<id;
// 	}
// };

// int main()
// {
// 	Sample obj1;
// 	obj1.init(10);
// 	obj1.display();
// 	Sample obj2(obj1); //or obj2=obj1; 
// 	obj2.display();
// 	return 0;
// }

// C++ program to demonstrate the execution of constructor
// and destructor

// #include <iostream>
// using namespace std;

// class Test {
// public:
// 	// User-Defined Constructor
// 	Test() { cout << "\n Constructor executed"; }

// 	// User-Defined Destructor
// 	~Test() { cout << "\nDestructor executed"; }
// };
// main()
// {
// 	Test t;

// 	return 0;
// }

// C++ program to demonstrate the execution of constructor
// and destructor when multiple objects are created

// #include <iostream>
// using namespace std;
// class Test {
// public:
// 	// User-Defined Constructor
// 	Test() { cout << "\n Constructor executed"; }

// 	// User-Defined Destructor
// 	~Test() { cout << "\n Destructor executed"; }
// };

// main()
// {
// 	// Create multiple objects of the Test class
// 	Test t, t1, t2, t3;
// 	return 0;
// }

// C++ Program to demonstrate 
// the working of static data member
// #include <iostream>
// using namespace std;

// class A {
// public:
// 	A() 
// 	{ 
// 	cout << "A's Constructor Called " << 
// 			endl; 
// 	}
// };

// class B {
// 	static A a;

// public:
// 	B() 
// 	{ 
// 	cout << "B's Constructor Called " << 
// 			endl; 
// 	}
// };

// // Driver code
// int main()
// {
// 	B b;
// 	return 0;
// }

// C++ Program to demonstrate 
// the Compilation Error occurred
// due to violation of Static
// Data Memeber Rule
// #include <iostream>
// using namespace std;

// class A {
// 	int x;

// public:
// 	A() 
// 	{ 
// 	cout << "A's constructor called " << 
// 			endl; 
// 	}
// };

// class B {
// 	static A a;

// public:
// 	B() 
// 	{ 
// 	cout << "B's constructor called " << 
// 			endl; 
// 	}
// 	static A getA() 
// 	{ 
// 	return a; 
// 	}
// };

// Driver code
// int main()
// {
// 	B b;
// 	A a = b.getA();
// 	return 0;
// }

// C++ program to access static data
// member with explicit definition
// #include <iostream>
// using namespace std;

// class A {
// 	int x;

// public:
// 	A() 
// 	{ 
// 	cout << "A's constructor called " << 
// 			endl; 
// 	}
// };

// class B {
// 	static A a;

// public:
// 	B() 
// 	{ 
// 	cout << "B's constructor called " << 
// 			endl; 
// 	}
// 	static A getA() 
// 	{ 
// 	return a; 
// 	}
// };

// // Definition of a
// A B::a; 

// // Driver code
// int main()
// {
// B b1, b2, b3;
// A a = b1.getA();

// return 0;
// }

// C++ Program to show the working of
// static member functions
// #include <iostream> 
// using namespace std; 

// class Box 
// { 
// 	private: 
// 	static int length; 
// 	static int breadth; 
// 	static int height; 
	
// 	public:
	
// 	static void print() 
// 	{ 
// 		cout << "The value of the length is: " << length << endl; 
// 		cout << "The value of the breadth is: " << breadth << endl; 
// 		cout << "The value of the height is: " << height << endl; 
// 	}
// }; 

// //initialize the static data members 

// int Box :: length = 10; 
// int Box :: breadth = 20; 
// int Box :: height = 30; 

// // Driver Code

// int main() 
// {
	
// 	Box b; 
	
// 	cout << "Static member function is called through Object name: \n" << endl; 
// 	b.print(); 
	
// 	cout << "\nStatic member function is called through Class name: \n" << endl; 
// 	Box::print(); 
	
// 	return 0; 
// }

// C++ program to demonstrate
// Encapsulation
// #include <iostream>
// using namespace std;

// class Encapsulation {
// private:
// 	// Data hidden from outside world
// 	int x;

// public:
// 	// Function to set value of
// 	// variable x
// 	void set(int a) { x = a; }

// 	// Function to return value of
// 	// variable x
// 	int get() { return x; }
// };

// // Driver code
// int main()
// {
// 	Encapsulation obj;
// 	obj.set(5);
// 	cout << obj.get();
// 	return 0;
// }

//using this pointer
// #include <iostream>
// #include <string>

// using namespace std;

// class Person {
// private:
// 	string name;
// 	int age;
// public:
// 	Person(string name, int age) {
// 	this->name = name;
// 	this->age = age;
// 	}
// 	void setName(string name) {
// 	this->name = name;
// 	}
// 	string getName() {
// 	return name;
// 	}
// 	void setAge(int age) {
// 	this->age = age;
// 	}
// 	int getAge() {
// 	return age;
// 	}
// };

// int main() {
// Person person("John Doe", 30);

// cout << "Name: " << person.getName() << endl;
// cout << "Age: " << person.getAge() << endl;

// person.setName("Jane Doe");
// person.setAge(32);

// cout << "Name: " << person.getName() << endl;
// cout << "Age: " << person.getAge() << endl;

// return 0;
// }

// C++ Program to Demonstrate the
// working of Abstraction
// #include <iostream>
// using namespace std;

// class implementAbstraction {
// private:
// 	int a, b;

// public:
// 	// method to set values of
// 	// private members
// 	void set(int x, int y)
// 	{
// 		a = x;
// 		b = y;
// 	}

// 	void display()
// 	{
// 		cout << "a = " << a << endl;
// 		cout << "b = " << b << endl;
// 	}
// };

// int main()
// {
// 	implementAbstraction obj;
// 	obj.set(10, 20);
// 	obj.display();
// 	return 0;
// }

// C++ program to demonstrate
// function overloading or
// Compile-time Polymorphism
// #include <bits/stdc++.h>

// using namespace std;
// class Geeks {
// public:
// 	// Function with 1 int parameter
// 	void func(int x)
// 	{
// 		cout << "value of x is " << x << endl;
// 	}

// 	// Function with same name but
// 	// 1 double parameter
// 	void func(double x)
// 	{
// 		cout << "value of x is " << x << endl;
// 	}

// 	// Function with same name and
// 	// 2 int parameters
// 	void func(int x, int y)
// 	{
// 		cout << "value of x and y is " << x << ", " << y
// 			<< endl;
// 	}
// };

// // Driver code
// int main()
// {
// 	Geeks obj1;

// 	// Function being called depends
// 	// on the parameters passed
// 	// func() is called with int value
// 	obj1.func(7);

// 	// func() is called with double value
// 	obj1.func(9.132);

// 	// func() is called with 2 int values
// 	obj1.func(85, 64);
// 	return 0;
// }

// C++ program to demonstrate
// Operator Overloading or
// Compile-Time Polymorphism
// #include <iostream>
// using namespace std;

// class Complex {
// private:
// 	int real, imag;

// public:
// 	Complex(int r = 0, int i = 0)
// 	{
// 		real = r;
// 		imag = i;
// 	}

// 	// This is automatically called
// 	// when '+' is used with between
// 	// two Complex objects
// 	Complex operator+(Complex const& obj)
// 	{
// 		Complex res;
// 		res.real = real + obj.real;
// 		res.imag = imag + obj.imag;
// 		return res;
// 	}
// 	void print() { cout << real << " + i" << imag << endl; }
// };

// // Driver code
// int main()
// {
// 	Complex c1(10, 5), c2(2, 4);

// 	// An example call to "operator+"
// 	Complex c3 = c1 + c2;
// 	c3.print();
// }

// C++ program for function overriding with data members
// #include <bits/stdc++.h>
// using namespace std;

// // base class declaration.
// class Animal {
// public:
// 	string color = "Black";
// };

// // inheriting Animal class.
// class Dog : public Animal {
// public:
// 	string color = "Grey";
// };

// // Driver code
// int main(void)
// {
// 	Animal d = Dog(); // accessing the field by reference
// 					// variable which refers to derived
// 	cout << d.color;
// }

// C++ program to demonstrate how we will calculate
// the area of shapes USING VIRTUAL FUNCTION
// #include <fstream>
// #include <iostream>
// using namespace std;

// // Declaration of Base class
// class Shape {
// public:
// 	// Usage of virtual constructor
// 	virtual void calculate()
// 	{
// 		cout << "Area of your Shape ";
// 	}
// 	// usage of virtual Destuctor to avoid memory leak
// 	virtual ~Shape()
// 	{
// 		cout << "Shape Destuctor Call\n";
// 	}
// };

// // Declaration of Derived class
// class Rectangle : public Shape {
// public:
// 	int width, height, area;

// 	void calculate()
// 	{
// 		cout << "Enter Width of Rectangle: ";
// 		cin >> width;

// 		cout << "Enter Height of Rectangle: ";
// 		cin >> height;

// 		area = height * width;
// 		cout << "Area of Rectangle: " << area << "\n";
// 	}

// 	// Virtual Destuctor for every Derived class
// 	virtual ~Rectangle()
// 	{
// 		cout << "Rectangle Destuctor Call\n";
// 	}
// };

// // Declaration of 2nd derived class
// class Square : public Shape {
// public:
// 	int side, area;

// 	void calculate()
// 	{
// 		cout << "Enter one side your of Square: ";
// 		cin >> side;

// 		area = side * side;
// 		cout << "Area of Square: " << area << "\n";
// 	}

// // Virtual Destuctor for every Derived class
// 	virtual ~Square()
// 	{
// 		cout << "Square Destuctor Call\n";
// 	}
// };

// int main()
// {

// 	// base class pointer
// 	Shape* S;
// 	Rectangle r;

// 	// initialization of reference variable
// 	S = &r;

// 	// calling of Rectangle function
// 	S->calculate();
// 	Square sq;

// 	// initialization of reference variable
// 	S = &sq;

// 	// calling of Square function
// 	S->calculate();

// 	// return 0 to tell the program executed
// 	// successfully
// 	return 0;
// }

// Example: define member function without argument within 
// the class 

// #include <iostream> 
// using namespace std; 

// class Person { 
// 	int id; 
// 	char name[100]; 

// public: 
// 	void set_p() 
// 	{ 
// 		cout << "Enter the Id:"; 
// 		cin >> id; 
// 		cout << "Enter the Name:"; 
// 		cin >> name; 
// 	} 

// 	void display_p() 
// 	{ 
// 		cout << endl <<"Id: "<< id << "\nName: " << name <<endl; 
// 	} 
// }; 

// class Student : private Person { 
// 	char course[50]; 
// 	int fee; 

// public: 
// 	void set_s() 
// 	{ 
// 		set_p(); 
// 		cout << "Enter the Course Name:"; 
// 		cin >> course; 
// 		cout << "Enter the Course Fee:"; 
// 		cin >> fee; 
// 	} 

// 	void display_s() 
// 	{ 
// 		display_p(); 
// 		cout <<"Course: "<< course << "\nFee: " << fee << endl; 
// 	} 
// }; 

// int main() 
// { 
// 	Student s; 
// 	s.set_s(); 
// 	s.display_s(); 
// 	return 0; 
// }

// Example: define member function without argument outside the class 

// #include<iostream> 
// using namespace std; 

// class Person 
// { 
// 	int id; 
// 	char name[100]; 
	
// 	public: 
// 		void set_p(); 
// 		void display_p(); 
// }; 

// void Person::set_p() 
// { 
// 	cout<<"Enter the Id:"; 
// 	cin>>id; 
// 	cout<<"Enter the Name:"; 
// 	cin>>name; 
// } 

// void Person::display_p() 
// { 
// 	cout<<endl<<"id: "<< id<<"\nName: "<<name; 
// } 

// class Student: private Person 
// { 
// 	char course[50]; 
// 	int fee; 
	
// 	public: 
// 		void set_s(); 
// 		void display_s(); 
// }; 

// void Student::set_s() 
// { 
// 	set_p(); 
// 	cout<<"Enter the Course Name:"; 
// 	cin>>course; 
// 	cout<<"Enter the Course Fee:"; 
// 	cin>>fee; 
// } 

// void Student::display_s() 
// { 
// 	display_p(); 
// 	cout<<"\nCourse: "<<course<<"\nFee: "<<fee<<endl; 
// } 

// int main() 
// { 
// 	Student s; 
// 	s.set_s(); 
// 	s.display_s(); 
// 	return 0; 
// } 

// C++ program to explain 
// Single inheritance 
// #include<iostream> 
// using namespace std; 

// // base class 
// class Vehicle { 
// public: 
// 	Vehicle() 
// 	{ 
// 	cout << "This is a Vehicle\n"; 
// 	} 
// }; 

// // sub class derived from a single base classes 
// class Car : public Vehicle { 
// public:
//      Car(){
// 		cout<<"This is a car";
// 	 }
// }; 

// // main function 
// int main() 
// { 
// 	// Creating object of sub class will 
// 	// invoke the constructor of base classes 
// 	Car obj; 
// 	return 0; 
// } 

// C++ program to explain 
// multiple inheritance 
// #include <iostream> 
// using namespace std; 

// // first base class 
// class Vehicle { 
// public: 
// 	Vehicle() { cout << "This is a Vehicle\n"; } 
// }; 

// // second base class 
// class FourWheeler { 
// public: 
// 	FourWheeler() 
// 	{ 
// 		cout << "This is a 4 wheeler Vehicle\n"; 
// 	} 
// }; 

// // sub class derived from two base classes 
// class Car : public Vehicle, public FourWheeler { 
// public:
//      Car(){
// 		cout<<"this is a car";
// 	 }
// }; 

// // main function 
// int main() 
// { 
// 	// Creating object of sub class will 
// 	// invoke the constructor of base classes. 
// 	Car obj; 
// 	return 0; 
// }

// C++ program to implement 
// Multilevel Inheritance 
// #include <iostream> 
// using namespace std; 

// // base class 
// class Vehicle { 
// public: 
// 	Vehicle() { cout << "This is a Vehicle\n"; } 
// }; 

// // first sub_class derived from class vehicle 
// class fourWheeler : public Vehicle { 
// public: 
// 	fourWheeler() 
// 	{ 
// 		cout << "Objects with 4 wheels are vehicles\n"; 
// 	} 
// }; 
// // sub class derived from the derived base class fourWheeler 
// class Car : public fourWheeler { 
// public: 
// 	Car() { cout << "Car has 4 Wheels\n"; } 
// }; 

// // main function 
// int main() 
// { 
// 	// Creating object of sub class will 
// 	// invoke the constructor of base classes. 
// 	Car obj; 
// 	return 0; 
// }

// C++ program to implement 
// Hierarchical Inheritance 
// #include <iostream> 
// using namespace std; 

// // base class 
// class Vehicle { 
// public: 
// 	Vehicle() { cout << "This is a Vehicle\n"; } 
// }; 

// // first sub class 
// class Car : public Vehicle { 
// public:
//      Car(){cout<<"this is first syb class\n";}
// }; 

// // second sub class 
// class Bus : public Vehicle { 
// public:
//     Bus(){cout<<"this is second sub class";}
// }; 

// // main function 
// int main() 
// { 
// 	// Creating object of sub class will 
// 	// invoke the constructor of base class. 
// 	Car obj1; 
// 	Bus obj2; 
// 	return 0; 
// }

// C++ program for Hybrid Inheritance 

// #include <iostream> 
// using namespace std; 

// // // base class 
// class Vehicle { 
// public: 
// 	Vehicle() { cout << "This is a Vehicle\n"; } 
// }; 

// // base class 
// class Fare : public Vehicle{ 
// public: 
// 	Fare() { cout << "Fare of Vehicle\n"; } 
// }; 

// // first sub class 
// class Car : public Vehicle { 
// 	public:
// 	 Car(){cout<<"i am hierarchical inheritance class\n";}
// }; 

// // second sub class 
// class Bus : public Vehicle, public Fare,public Car { 
// 	public:
// 	 Bus(){cout<<" i am multiple inheritance class";}
// }; 

// // main function 
// int main() 
// { 
// 	// Creating object of sub class will 
// 	// invoke the constructor of base class. 
// 	Bus obj2; 
// 	return 0; 
// }

// C++ Program to Demonstrate the implementation of Dynamic
// Binding without the help of Virtual Function
// #include <bits/stdc++.h>
// using namespace std;

// class GFG {
// public:
// 	void Add(int gfg1, int gfg2) // Function Definition
// 	{
// 		cout << gfg1 + gfg2 << endl;
// 		return;
// 	}

// 	// Function Definition
// 	void Sub(int gfg1, int gfg2) { cout << gfg1 - gfg2; }
// };

// int main()
// {
// 	GFG gfg;
// 	gfg.Add(10, 12);
// 	gfg.Sub(10, 12);

// 	return 0;
// }

// C++ Program to Demonstrate the Concept of Dynamic binding
// with the help of virtual function
// #include <iostream>
// using namespace std;

// class GFG {
// public:
// 	// function that call print

// 	void call_Function() { print(); }
// 	// the display function
// 	virtual void print()
// 	{
// 		cout << "Printing the Base class Content" << endl;
// 	}
// };

// // GFG2 inherited publicly
// class GFG2 : public GFG {
// public:
// 	void print() // GFG2's display
// 	{
// 		cout << "Printing the Derived class Content"
// 			<< endl;
// 	}
// };
// int main()
// {
// 	GFG geeksforgeeks; // Creating GFG's object
// 	geeksforgeeks.call_Function(); // Calling call_Function
// 	GFG2 geeksforgeeks2; // calling GFG2
// 	geeksforgeeks2.call_Function();
// 	return 0;
// }

//message passing
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Lucky_generator {
public:
   int lucky_number;
   void get_luckyNumber() {
       lucky_number = rand() % 100;
       cout << "Whose lucky Number is: " << lucky_number << endl;
   }
};
class Ninja {
private:
   string ninja_name;
   int ninja_id;
public:
   Ninja(string name, int id) {
       ninja_name = name;
       ninja_id = id;
   }
   void call_luckyNumber(Lucky_generator &Number) { // Pass by reference
       cout << "Ninja name is: " << ninja_name << endl;
       cout << "Ninja id: " << ninja_id << endl;
       Number.get_luckyNumber();
   }
};
int main() {
   srand(time(0)); // Seed the random number generator only once
   Ninja Abhi("Abhi", 23);
   Lucky_generator Number;
   Abhi.call_luckyNumber(Number);
   return 0;
}
