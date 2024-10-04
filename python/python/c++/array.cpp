// C++ program to illustrate the
// iterators in vector
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
// 	vector<int> g1;   //#101    1=#102=*i

// 	for (int i = 1; i <= 5; i++)//1,2,3,4,5
// 		g1.push_back(i);                //rear-last, front-first

// 	cout << "Output of begin and end: ";
// 	for (auto i = g1.begin(); i != g1.end(); ++i)
// 		cout << *i << " ";

// 	cout << "\nOutput of cbegin and cend: ";
// 	for (auto i = g1.cbegin(); i != g1.cend(); ++i)
// 		cout << *i << " ";

// 	cout << "\nOutput of rbegin and rend: ";
// 	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
// 		cout << *ir << " ";

// 	cout << "\nOutput of crbegin and crend : ";
// 	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
// 		cout << *ir << " ";

// 	return 0;
// }



// C++ program to illustrate the
// capacity function in vector
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
// 	vector<int> g1;

// 	for (int i = 1; i <= 5; i++)
// 		g1.push_back(i);

// 	cout << "Size : " << g1.size();
// 	cout << "\nCapacity : " << g1.capacity();
// 	cout << "\nMax_Size : " << g1.max_size();

// 	// resizes the vector size to 4
// 	g1.resize(4);

// 	// prints the vector size after resize()
// 	cout << "\nSize : " << g1.size();

// 	// checks if the vector is empty or not
// 	if (g1.empty() == false)
// 		cout << "\nVector is not empty";
// 	else
// 		cout << "\nVector is empty";

// 	// Shrinks the vector
// 	g1.shrink_to_fit();
// 	cout << "\nVector elements are: ";
// 	for (auto it = g1.begin(); it != g1.end(); it++)
// 		cout << *it << " ";

// 	return 0;
// }

// // C++ program to illustrate the
// // element access in vector
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int> g1;
//                                    //0  1  2  3  4  5  6  7  8  9
// 	for (int i = 1; i <= 10; i++)  //10,20,30,40,50,60,70,80,90,100
// 		g1.push_back(i * 10);

// 	cout << "\nReference operator [g] : g1[2] = " << g1[2];

// 	cout << "\nat : g1.at(4) = " << g1.at(4);

// 	cout << "\nfront() : g1.front() = " << g1.front();

// 	cout << "\nback() : g1.back() = " << g1.back();

// 	// pointer to the first element
// 	int* pos = g1.data();

// 	cout << "\nThe first element is " << *pos;
// 	return 0;
// }

// C++ program to illustrate the
// Modifiers in vector
#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main()
{
	// Assign vector
	vector<int> v;
	// fill the vector with 10 five times
	v.assign(5, 10);

	cout << "The vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	// inserts 15 to the last position
	v.push_back(15);
	int n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	// removes last element
	v.pop_back();

	// prints the vector
	cout << "\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	// inserts 5 at the beginning
	v.insert(v.begin(), 5);

	cout << "\nThe first element is: " << v[0];

	// removes the first element
	v.erase(v.begin());

	cout << "\nThe first element is: " << v[0];

	// inserts at the beginning
	v.emplace(v.begin(), 6);
	cout << "\nThe first element is: " << v[0];

	// Inserts 20 at the end
	v.emplace_back(20);
	n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	// erases the vector
	v.clear();
	cout << "\nVector size after clear(): " << v.size();

	// two vector to perform swap
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(3);
	v2.push_back(4);

	cout << "\n\nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

	// Swaps v1 and v2
	v1.swap(v2);

	cout << "\nAfter Swap \nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
}

// C++ Program to Illustrate How to Access Array Elements 
// #include <iostream> 
// using namespace std; 

// int main() 
// { 

// 	int arr[3]; 

// // 	// Inserting elements in an array 
// 	arr[0] = 10; 
// 	arr[1] = 20; 
// 	arr[2] = 30; 

// 	// Accessing and printing elements of the array 
// 	cout << "arr[0]: " << arr[0] << endl; 
// 	cout << "arr[1]: " << arr[1] << endl; 
// 	cout << "arr[2]: " << arr[2] << endl; 

// 	return 0; 
// }
// C++ Program to Illustrate How to Traverse an Array 
// #include <iostream> 
// using namespace std; 

// int main() 
// { 

// 	// Initialize the array 
// 	int table_of_two[10] 
// 		= { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; 

// 	// Traverse the array using for loop 
// 	for (int i = 0; i < 10; i++) { 
// 		// Print the array elements using indexing 
// 		cout << table_of_two[i] <<endl; 
// 	} 

// 	return 0; 
// }

// C++ Program to Illustrate How to Find the Size of an 
// Array 
// #include <iostream> 
// using namespace std; 

// int main() 
// { 
// 	int arr[] = { 1, 2, 3, 4, 5 ,6}; 

// 	// Size of one element of an array 
// 	cout << "Size of arr[0]: " << sizeof(arr[0]) << endl; 

// 	// Size of array 'arr' 
// 	cout << "Size of arr: " << sizeof(arr) << endl; 

// 	// Length of an array 
// 	int n = sizeof(arr) / sizeof(arr[0]); 

// 	cout << "Length of an array: " << n << endl; 

// 	return 0; 
// }
// C++ Program to Illustrate that Array Name is a Pointer 
// that Points to First Element of the Array 
// #include <iostream> 
// using namespace std; 

// int main() 
// { 
// 	// Defining an array 
// 	int arr[] = { 1, 2, 3, 4 }; 

// 	// Define a pointer 
// 	int* ptr = arr; 

// 	// Printing address of the arrary using array name 
// 	cout << "Memory address of arr: " << &arr << endl; 

// 	// Printing address of the array using ptr 
// 	cout << "Memory address of arr: " << ptr << endl; 

// 	return 0; 
// }

// datatype array_name[s1][s2];

// c++ program to illustrate the two dimensional array 
// #include <iostream> 
// using namespace std; 

// int main() 
// { 
// 	// Declaring 2D array 
// 	int arr[4][6]; 

// 	// Initialize 2D array using loop 
// 	for (int i = 0; i < 4; i++) { 
// 		for (int j = 0; j < 6; j++) { 
// 			arr[i][j] = i + j; 
// 		} 
// 	} 

// 	// Printing the element of 2D array 
// 	for (int i = 0; i < 4; i++) { 
// 		for (int j = 0; j < 6; j++) { 
// 			cout << arr[i][j] << " "; 
// 		} 
// 		cout << endl; 
// 	} 

// 	return 0; 
// }

// C++ program to verify the size of multidimensional 
// arrays 
// #include <iostream> 
// using namespace std; 

// int main() 
// { 
//     // datatype array_name[size1][size2]......[sizen];
// 	// creating 2d and 3d array 
// 	int arr1[2][4];      
// 	int arr2[2][4][8]; 

// 	// using sizeof() operator to get the size of the above 
// 	// arrays 
// 	cout << "Size of array arr1: " << sizeof(arr1) 
// 		<< " bytes" << endl; 
// 	cout << "Size of array arr2: " << sizeof(arr2) 
// 		<< " bytes"; 

// 	return 0; 
// }

// C++ program to illustrate the 3d array 
// #include <iostream> 
// using namespace std; 

// int main() 
// { 

// 	int count = 0; 
// 	// declaring 3d array //r-2, c-4    
// 	int x[2][2][3];                    

// 	// initializing the array 
// 	for (int i = 0; i < 2; i++) { 
// 		for (int j = 0; j < 2; j++) { 
// 			for (int k = 0; k < 3; k++) {  //0   1   2
// 				x[i][j][k] = count;        //3   4   5
// 				count++;                   //6   7    8
// 			}                              //9   10   11
// 		} 
// 	} 

// 	// printing the array 
// 	for (int i = 0; i < 2; i++) { 
// 		for (int j = 0; j < 2; j++) { 
// 			for (int k = 0; k < 3; k++) { 
// 				printf("x[%d][%d][%d] = %d \n", i, j, k, 
// 					x[i][j][k]); 
// 				count++; 
// 			} 
// 		} 
// 	} 

// 	return 0; 
// }
