// C++ Program to demonstrate strings
// #include <iostream>
// using namespace std;

// int main()
// {

// 	char s[] = "GeeksforGeeks";
// 	cout << s << endl;
// 	return 0;
// }

// // C++ program to create std::string objects
// #include <iostream>
// using namespace std;

// int main()
// {
// 	string str(8, 'g');
// 	cout << str;
// 	return 0;
// }

// // C++ Program to demonstrate use of string keyword
// #include <iostream>
// using namespace std;

// int main()
// {

// 	string s = "GeeksforGeeks";
// 	string str("sharanya");

// 	cout << "s = " << s << endl;
// 	cout << "str = " << str << endl;

// 	return 0;
// }

// // C++ Program to demonstrate C-style string declaration
// #include <iostream>
// using namespace std;

// int main()
// {

// 	char s1[] = { 'g', 'f', 'g', '\0' };
// 	char s2[4] = { 'g', 'f', 'g', '\0' };
// 	char s3[4] = "gfg";
// 	char s4[] = "gfg";

// 	cout << "s1 = " << s1 << endl;
// 	cout << "s2 = " << s2 << endl;
// 	cout << "s3 = " << s3 << endl;
// 	cout << "s4 = " << s4 << endl;

// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
// cout<<  "*" <<endl;
// cout<< "*  *" <<endl;
// cout<<"*  *  *"<<endl;
// return 0;
// }

// // C++ Program to demonstrate string input using cin
// #include <iostream>
// using namespace std;

// int main() {

// 	string s;
	
// 	cout<<"Enter String"<<endl;
// 	cin>>s;

// 	cout<<"String is: "<<s<<endl;
// 	return 0;
// }

// C++ Program to demonstrate use of getline function
// #include <iostream>
// using namespace std;

// int main()
// {

// 	string s;
// 	cout << "Enter String" << endl;
// 	getline(cin, s);
// 	cout << "String is: " << s << endl;
// 	return 0;
// }

// C++ Program to demonstrate use of stringstream object
// #include <iostream>
// #include <sstream>
// #include<string>

// using namespace std;

// int main()
// {

// 	string s = " GeeksforGeeks to the Moon ";
// 	stringstream obj(s);
// 	// string to store words individually
// 	string temp;
// 	// >> operator will read from the stringstream object
// 	while (obj >> temp) {
// 		cout << temp << endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     string str1="sharanya";
//     string str2="vindhya";
//     cout<<"first string \t"<<str1<<"\tsecond string\t"<<str2;
// }

// // C++ Program to print string using pointers
// #include <iostream>
// using namespace std;

// int main()
// {
//                // 0123456
// 	string s = "vindhya";
// 	// pointer variable declared to store the starting
// 	// address of the string
// 	char* p = &s[0];
// 	// this loop will execute and print the character till
// 	// the character value is null this loop will execute and
// 	// print the characters

// 	while (*p != '\0') {
// 		cout << *p;
// 		p++;
// 	}
// 	cout <<*p<< endl;

// 	return 0;
// }

// // C++ Program to demonstrate working of a function
#include <iostream>
using namespace std;

// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)          //returntype func_name(p1,p2){//func body}
{
	if (x > y)
		return x;
	else
		return y;
}

// // main function that doesn't receive any parameter and
// // returns integer
int main()
{
	int a = 30, b = 20;

	// Calling above function to find max of 'a' and 'b'
	int m = max(a, b);

	cout << "m is " << m;
	return 0;
}

// // C++ Program to demonstrate function definition
// #include <iostream>
// using namespace std;

// void fun(int x)
// {
// 	// definition of
// 	// function
// 	x = 30;
// }

// int main()
// {
// 	int x = 20;
// 	fun(x);
// 	cout << "x = " << x;
// 	return 0;
// }

// // C++ Program to demonstrate working of
// // function using pointers
// #include <iostream>
// using namespace std;

// void fun(int* ptr) { *ptr = 30; }

// int main()
// {
// 	int x = 20;
// 	fun(&x);
// 	cout << "x = " << x;

// 	return 0;
// }

// //passing array to function
// #include <iostream>
// using namespace std;
// void printMin(int arr[5]);
// int main()
// {
// 	int ar[5] = { 30, 10, 20, 40, 50 };
// 	printMin(ar); // passing array to function
// }
// void printMin(int arr[5])
// {
// 	int min = arr[0];
// 	for (int i = 0; i < 5; i++) {
// 		if (min > arr[i]) {
// 			min = arr[i];
// 		}
// 	}
// 	cout << "Minimum element is: " << min << "\n";
// }

// Program of function overloading with different types of
// arguments.
// #include <iostream>
// using namespace std;
// int mul(int, int);
// float mul(float, int);

// int mul(int a, int b) { return a * b; }
// float mul(double x, int y) { return x * y; }
// int main()
// {
// 	int r1 = mul(6, 7);
// 	float r2 = mul(0.2, 3);
// 	cout << "r1 is : " << r1 << endl;
// 	cout << "r2 is : " << r2 << endl;
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// void fun(int);
// void fun(float);
// void fun(int i) { cout << "Value of i is : " << i << endl; }
// void fun(float j)
// {
// 	cout << "Value of j is : " << j << endl;
// }
// int main()
// {
// 	fun(12);
// 	fun(1.2);
// 	return 0;
// }

//ambiguity
// Program of function overloading with different types of
// arguments.
// #include <iostream>
// using namespace std;
// int mul(int, int);
// float mul(float, int);

// int mul(int a, int b) { return a * b; }
// float mul(double x, int y) { return x * y; }
// int main()
// {
// 	int r1 = mul(6, 7);
// 	float r2 = mul(0.2, 3);
// 	cout << "r1 is : " << r1 << endl;
// 	cout << "r2 is : " << r2 << endl;
// 	return 0;
// }

//default arguments
// #include <iostream>
// using namespace std;
// void fun(int);
// void fun(float, int);
// void fun(float i) { cout << "Value of i is : " << i << endl; }
// void fun(int a, double b = 9.0)
// {
// 	cout << "Value of a is : " << a << endl;
// 	cout << "Value of b is : " << b << endl;
// }
// int main()
// {
// 	fun(12);

// 	return 0;
// }

//pass by reference
// #include <iostream>
// using namespace std;
// void fun(int);
// void fun(int&);
// int main()
// {
// 	int a = 10;
// 	fun(a); // error, which fun()?
// 	return 0;
// }
// void fun(int x) { cout << "Value of x is : " << x << endl; }
// void fun(int& b)
// {
// 	cout << "Value of b is : " << b << endl;
// }

// friend function
// #include <iostream>
// using namespace std;
// class Largest {
// 	int a, b, m;

// public:
// 	void set_data();
// 	friend void find_max(Largest);
// };

// void Largest::set_data()
// {
// 	cout << "Enter the first number : ";
// 	cin >> a;
// 	cout << "\nEnter the second number : ";
// 	cin >> b;
// }

// void find_max(Largest t)
// {
// 	if (t.a > t.b)
// 		t.m = t.a;
// 	else
// 		t.m = t.b;

// 	cout << "\nLargest number is " << t.m;
// }

// int main()
// {
// 	Largest l;
// 	l.set_data();
// 	find_max(l);
// 	return 0;
// }

// CPP Program to demonstrate passing
// an array to a function is always treated
// as a pointer
// #include <iostream>
// using namespace std;

// // Note that arr[] for fun is 
// // just a pointer even if square
// // brackets are used
// void fun(int arr[]) // SAME AS void fun(int *arr)
// {
// 	unsigned int n = sizeof(arr) / sizeof(arr[0]);
// 	cout << "\nArray size inside fun() is " << n;
// }

// // Driver Code
// int main()
// {
// 	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
// 	unsigned int n = sizeof(arr) / sizeof(arr[0]);
// 	cout << "Array size inside main() is " << n;
// 	fun(arr);
// 	return 0;
// }

// inline function
// #include <iostream>
// using namespace std;
// inline int cube(int s) { return s * s * s; }
// int main()
// {
// 	cout << "The cube of 3 is: " << cube(3) << "\n";
// 	return 0;
//  }      

//inline functions with class
// //C++ Program to demonstrate inline functions and classes
// #include <iostream>

// using namespace std;

// class operation {
// 	int a, b, add, sub, mul;
// 	float div;

// public:
// 	void get();
// 	void sum();
// 	void difference();
// 	void product();
// 	void division();
// };
// inline void operation ::get()
// {
// 	cout << "Enter first value:";
// 	cin >> a;
// 	cout << "Enter second value:";
// 	cin >> b;
// }

// inline void operation ::sum()
// {
// 	// add = a + b;
// 	cout<<"Addition of two numbers: "<< a + b << "\n";
// }

// inline void operation ::difference()
// {
// 	// sub = a - b;
// 	cout << "Difference of two numbers: " << a - b << "\n";
// }

// inline void operation ::product()
// {
// 	// mul = a * b;
// 	cout << "Product of two numbers: " << a * b << "\n";
// }

// inline void operation ::division()
// {
// 	// div = a / b;
// 	cout << "Division of two numbers: " << a / b << "\n";
// }

// int main()
// {
// 	cout << "Program using inline function\n";
// 	operation s;
// 	s.get();
// 	s.sum();
// 	s.difference();
// 	s.product();
// 	s.division();
// 	return 0;
// }

// C++ Program to calculate the sum of first N natural 
// // numbers using recursion 
// #include <iostream> 
// using namespace std; 

// int nSum(int n) 
// { 
// 	// base condition to terminate the recursion when N = 0 
// 	if (n == 0) { 
// 		return 0; 
// 	} 

// 	// recursive case / recursive call 
// 	int res = n + nSum(n - 1); 

// 	return res; 
// } 

// int main() 
// { 
// 	int n = 5; 

// 	// calling the function 
// 	int sum = nSum(n); 

// 	cout << "Sum = " << sum; 
// 	return 0; 
// }

// C++ Program to find fibonacci series using recursion 
// #include <iostream> 
// using namespace std; 

// // Function for fibonacci 
// int fib(int n) 
// { 
// 	// Stop condition 
// 	if (n == 0) 
// 		return 0; 
// 	// Stop condition 
// 	if (n == 1 || n == 2) 
// 		return 1; 
// 	// Recursion function 
// 	else
// 		return (fib(n - 1) + fib(n - 2));  //0,1,1,
// } 

// Driver Code 
// int main() 
// { 
// 	// Initialize variable n. 
// 	int n = 7; 
// 	cout << "Fibonacci series of 5 numbers is: "; 
// 	// for loop to print the fibonacci series. 
// 	for (int i = 0; i < n; i++) { 
// 		cout << fib(i) << " "; 
// 	} 
// 	return 0; 
// }

// C++ Program to print array using 
// recursion 
// #include <iostream> 
// using namespace std; 

// // recursive function to print array 
// void pArray(int* arr, int n) 
// { 
// 	// base condition 
// 	if (n == 0) { 
// 		return; 
// 	} 
// 	// recursive call 
// 	pArray(arr, n - 1); 
// 	cout << arr[n - 1] << ' '; 
// } 

// int main() 
// { 
// 	// declaring array 
// 	int arr[5] = { 1, 2, 3, 4, 5 }; 
// 	// calling function 
// 	pArray(arr, 5); 
// 	return 0; 
// }

// C++ program to illustrate Pointers 

// #include <bits/stdc++.h> 
// using namespace std; 
// void geeks() 
// { 
// 	int var = 20; 

// 	// declare pointer variable 
// 	int *ptr; 

// 	// note that data type of ptr and var must be same 
// 	ptr = &var; 

// 	// assign the address of a variable to a pointer 
// 	cout << "Value at ptr = " << ptr << "\n"; 
// 	cout << "Value at var = " << var << "\n"; 
// 	cout << "Value at *ptr = " << *ptr << "\n"; 
// } 
// // Driver program 
// int main() 
// { 
// geeks(); 
// return 0; 
// }

// C++ program to illustrate call-by-methods 

// #include <bits/stdc++.h> 
// using namespace std; 

// // Pass-by-Value 
// int square1(int n) 
// { 
// 	// Address of n in square1() is not the same as n1 in 
// 	// main() 
// 	cout << "address of n1 in square1(): " << &n << "\n"; 

// 	// clone modified inside the function 
// 	n *= n; 
// 	return n; 
// } 
// // Pass-by-Reference with Pointer Arguments 
// void square2(int* n) 
// { 
// 	// Address of n in square2() is the same as n2 in main() 
// 	cout << "address of n2 in square2(): " << n << "\n"; 

// 	// Explicit de-referencing to get the value pointed-to 
// 	*n *= *n; 
// } 
// // Pass-by-Reference with Reference Arguments 
// void square3(int& n) 
// { 
// 	// Address of n in square3() is the same as n3 in main() 
// 	cout << "address of n3 in square3(): " << &n << "\n"; 

// 	// Implicit de-referencing (without '*') 
// 	n *= n; 
// } 
// void geeks() 
// { 
// 	// Call-by-Value 
// 	int n1 = 8; 
// 	cout << "address of n1 in main(): " << &n1 << "\n"; 
// 	cout << "Square of n1: " << square1(n1) << "\n"; 
// 	cout << "No change in n1: " << n1 << "\n"; 

// 	// Call-by-Reference with Pointer Arguments 
// 	int n2 = 8; 
// 	cout << "address of n2 in main(): " << &n2 << "\n"; 
// 	square2(&n2); 
// 	cout << "Square of n2: " << n2 << "\n"; 
// 	cout << "Change reflected in n2: " << n2 << "\n"; 

// 	// Call-by-Reference with Reference Arguments 
// 	int n3 = 8; 
// 	cout << "address of n3 in main(): " << &n3 << "\n"; 
// 	square3(n3); 
// 	cout << "Square of n3: " << n3 << "\n"; 
// 	cout << "Change reflected in n3: " << n3 << "\n"; 
// } 
// // Driver program 
// int main() { geeks(); }

// C++ program to illustrate Array Name as Pointers 
// #include <bits/stdc++.h> 
// using namespace std; 
// void geeks() 
// { 
// 	// Declare an array 
// 	int val[3] = { 5, 10, 20 }; 

// 	// declare pointer variable 
// 	int* ptr; 

// 	// Assign the address of val[0] to ptr 
// 	// We can use ptr=&val[0];(both are same) 
// 	ptr = val; 
// 	cout << "Elements of the array are: "; 
// 	cout << ptr[0] << " " << ptr[1] << " " << ptr[2]; 
// } 
// // Driver program 
// int main() { geeks(); }

// dereferencing pointer
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int a = 10, b = 20;
// 	int* pt;
// 	pt = &a;

// 	cout << "The address where a is stored is: " << pt
// 		<< endl;
// 	cout << "The value stored at the address by "
// 			"dereferencing the pointer is: "
// 		<< *pt << endl;
// }

// C++ Program to changing the
// address pointed by pointer
// #include <iostream>
// using namespace std;

// // Driver code
// int main()
// {
// 	int a = 10, b = 20;
// 	int* pt;

// 	// Referencing to the pointer
// 	pt = &a;

// 	cout << "The address where a is stored is: " << pt
// 		<< endl;

// 	// dereference the pointer
// 	cout << "The value stored at the address by "
// 			"dereferencing the pointer is: "
// 		<< *pt << endl;

// 	// Referening the address to same pointer
// 	pt = &b;

// 	// dereference the pointer
// 	cout << "Pointer is now pointing at: " << pt << endl;
// 	cout << "New value the pointer is pointing to is: "
// 		<< *pt << endl;

// 	return 0;
// }

// C++ Program to change the value
// of variable using dereferncing of
// pointers
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int a = 5, b = 6;

// 	// Pointer declared
// 	int* pt;

// 	// Referencing
// 	pt = &a;

// 	cout << "The address where a is stored is: " << pt
// 		<< endl;
// 	cout << "The value stored at the address by "
// 			"dereferencing the pointer is: "
// 		<< *pt << endl;

// 	// Changing value of variable
// 	// Address stored in the pointer will not
// 	// be effected by this
// 	*pt = b;
// 	cout << "Pointer is still pointing at: " << pt << endl;
// 	cout << "The new value stored at the address by "
// 			"dereferencing the pointer is: "
// 		<< *pt << endl;
// 	cout << "Now the value of a is: " << a << endl;

// 	return 0;
// }

// C++ Program to implement
// Array using Pointer
// #include <iostream>
// using namespace std;

// int main()
// {
// 	// Array Declared
// 	int arr[] = { 1, 2, 3, 4, 5 };

// 	// Referencing array with pointer
// 	int* ptr = arr;

// 	// Using dereferencing to print
// 	// elements of array
// 	cout << "Elements of array:";
// 	for (int i = 0; i < 5; i++) {
// 		cout << *(ptr + i) << " ";
// 	}
// 	cout << endl;

// 	return 0;
// }

// C++ program to illustrate the
// lvalue and rvalue

// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// Declaring the variable
// 	int a{ 10 };

// 	// Declaring reference to
// 	// already created variable
// 	int& b = a;

// 	// Provision made to display
// 	// the boolean output in the
// 	// form of True and False
// 	// instead of 1 and
// 	cout << boolalpha;

// 	// Comparing the address of both the
// 	// variable and its reference and it
// 	// will turn out to be same
// 	cout << (&a == &b) << endl;
// 	return 0;
// }

// C++ program to illustrate the
// lvalue and rvalue
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	int a = 10;

// 	// Declaring lvalue reference
// 	// (i.e variable a)
// 	int& lref = a;

// 	// Declaring rvalue reference
// 	int&& rref = 20;

// 	// Print the values
// 	cout << "lref = " << lref << endl;
// 	cout << "rref = " << rref << endl;

// 	// Value of both a
// 	// and lref is changed
// 	lref = 30;

// 	// Value of rref is changed
// 	rref = 40;
// 	cout << "lref = " << lref << endl;
// 	cout << "rref = " << rref << endl;

// 	// This line will generate an error
// 	// as l-value cannot be assigned
// 	// to the r-value references
// 	// int &&ref = a;
// 	return 0;
// }

// C++ program to illustrate lvalue
// #include <iostream>
// using namespace std;

// // Creating the references of the
// // parameter passed to the function
// void swap(int& x, int& y)
// {
// 	int temp = x;
// 	x = y;
// 	y = temp;
// }

// // Driver Code
// int main()
// {
// 	// Given values
// 	int a{ 10 }, b{ 20 };
// 	cout << "a = " << a
// 		<< " b = " << b << endl;

// 	// Call by Reference
// 	swap(a, b);

// 	// Print the value
// 	cout << "a = " << a
// 		<< " b = " << b << endl;
// 	return 0;
// }

// C++ program to illustrate rvalue
// #include <iostream>
// using namespace std;

// // lvalue reference to the lvalue
// // passed as the parameter
// void printReferenceValue(int& x)
// {
// 	cout << x << endl;
// }

// // Driver Code
// int main()
// {
// 	// Given value
// 	int a{ 10 };

// 	// Function call is made lvalue & can
// 	// be assigned to lvalue reference
// 	printReferenceValue(a);
// 	return 0;
// }

// C++ program to illustrate rvalue
// #include <iostream>
// using namespace std;

// // Declaring rvalue reference to the
// // rvalue passed as the parameter
// void printReferenceValue(int&& x)
// {
// 	cout << x << endl;
// }

// // Driver Code
// int main()
// {
// 	// Given value a
// 	int a{ 10 };

// 	// Works fine as the function is
// 	// called with rvalue
// 	printReferenceValue(100);
// 	return 0;
// }

// C++ program to demonstrate working of a Pointers
// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
// 	int length;
// 	int breadth;
// };

// void fun()
// {
// 	// By taking a pointer p and
// 	// dynamically creating object
// 	// of class rectangle
// 	Rectangle* p = new Rectangle();
// }

// int main()
// {
// 	// Infinite Loop
// 	while (1) {
// 		fun();
// 	}
// }

// C++ program to demonstrate the working of Smart Pointer
// #include <iostream>
// using namespace std;

// class SmartPtr {
// 	int* ptr; // Actual pointer
// public:
// 	// Constructor: Refer https:// www.geeksforgeeks.org/g-fact-93/
// 	// for use of explicit keyword
// 	explicit SmartPtr(int* p = NULL) { ptr = p; }

// 	// Destructor
// 	~SmartPtr() { delete (ptr); }

// 	// Overloading dereferencing operator
// 	int& operator*() { return *ptr; }
// };

// int main()
// {
// 	SmartPtr ptr(new int());
// 	*ptr = 20;
// 	cout << *ptr;

// 	// We don't need to call delete ptr: when the object
// 	// ptr goes out of scope, the destructor for it is automatically
// 	// called and destructor does delete ptr.

// 	return 0;
// }

// C++ program to demonstrate the working of unique_ptr
// Here we are showing the unique_pointer is pointing to P1.
// But, then we remove P1 and assign P2 so the pointer now
// points to P2.

// #include <iostream>
// using namespace std;
// //Dynamic Memory management library
// #include <memory>

// class Rectangle {
// 	int length;
// 	int breadth;

// public:
// 	Rectangle(int l, int b)
// 	{
// 		length = l;
// 		breadth = b;
// 	}

// 	int area() { return length * breadth; }
// };

// int main()
// {
// // --\/ Smart Pointer
// 	unique_ptr<Rectangle> P1(new Rectangle(10, 5));
// 	cout << P1->area() << endl; // This'll print 50

// 	// unique_ptr<Rectangle> P2(P1);
// 	unique_ptr<Rectangle> P2;
// 	P2 = move(P1);

// 	// This'll print 50
// 	cout << P2->area() << endl;

// 	cout<<P1->area()<<endl;
// 	return 0;
// }

// C++ program to demonstrate the working of shared_ptr
// Here both smart pointer P1 and P2 are pointing to the
// object Addition to which they both maintain a reference
// of the object
// #include <iostream>
// using namespace std;
// //Dynamic Memory management library
// #include <memory>

// class Rectangle {
// 	int length;
// 	int breadth;

// public:
// 	Rectangle(int l, int b)
// 	{
// 		length = l;
// 		breadth = b;
// 	}

// 	int area() { return length * breadth; }
// };

// int main()
// {
// 	//---\/ Smart Pointer
// 	shared_ptr<Rectangle> P1(new Rectangle(10, 10));
// 	// This'll print 50
// 	cout << P1->area() << endl;

// 	shared_ptr<Rectangle> P2;
// 	P2 = P1;

// 	// This'll print 50
// 	cout << P2->area() << endl;

// 	// This'll now not give an error,
// 	cout << P1->area() << endl;

// 	// This'll also print 50 now
// 	// This'll print 2 as Reference Counter is 2
// 	cout << P1.use_count() << endl;
// 	return 0;
// }

// C++ program to demonstrate the use of auto_ptr 
// C++ program to illustrate the use of auto_ptr 
// #include <iostream> 
// #include <memory> 
// using namespace std; 

// class A { 
// public: 
// 	void show() { cout << "A::show()" << endl; } 
// }; 

// int main() 
// { 
// 	// p1 is an auto_ptr of type A 
// 	auto_ptr<A> p1(new A); 
// 	p1->show(); 

// 	// returns the memory address of p1 
// 	cout << p1.get() << endl; 

// 	// copy constructor called, this makes p1 empty. 
// 	auto_ptr<A> p2(p1); 
// 	p2->show(); 

// 	// p1 is empty now 
// 	cout << p1.get() << endl; 

// 	// p1 gets copied in p2 
// 	cout << p2.get() << endl; 

// 	return 0; 
// }

// C++ program to demonstrate the working of weak_ptr
// Here both smart pointer P1 and P2 are pointing to the
// object Addition to which they both does not maintain
// a reference of the object
// #include <iostream>
// using namespace std;
// //Dynamic Memory management library
// #include <memory>

// class Rectangle {
// 	int length;
// 	int breadth;

// public:
// 	Rectangle(int l, int b)
// 	{
// 		length = l;
// 		breadth = b;
// 	}

// 	int area() { return length * breadth; }
// };

// int main()
// {
// 	//---\/ Smart Pointer
// 	shared_ptr<Rectangle> P1(new Rectangle(5, 5));

// 	// create weak ptr
// 	weak_ptr<Rectangle> P2 (P1);

// 	// This'll print 50
// 	cout << P1->area() << endl;

// 	// This'll print 1 as Reference Counter is 1
// 	cout << P1.use_count() << endl;
// 	return 0;
// }
