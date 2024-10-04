//try-catch block
// #include <iostream>
// using namespace std;

// int main()
// {
// int x = -1;

// // Some code
// cout << "Before try \n";
// try {
// 	cout << "Inside try \n";
// 	if (x < 0)
// 	{
// 		throw x;
// 		cout << "After throw (Never executed) \n";
// 	}
// }
// catch (int x ) {
// 	cout << "Exception Caught \n";
// }

// cout << "After catch (Will be executed) \n";
// return 0;
// }

//catch all block
// #include <iostream>
// using namespace std;

// int main()
// {
// 	try {
// 	throw 10;
// 	}
// 	catch (int excp) {
// 		cout << "Caught " << excp;
// 	}
// 	catch (...) {
// 		cout << "Default Exception\n";
// 	}
// 	return 0;
// }

//implicit
// #include <iostream>
// using namespace std;

// int main()
// {
// 	try {
// 	throw 'a';
// 	}
// 	catch (int x) {
// 		cout << "Caught " << x;
// 	}
// 	catch (...) {
// 		cout << "Default Exception\n";
// 	}
// 	return 0;
// }

//thrown and not caught
// #include <iostream>
// using namespace std;

// int main()
// {
// 	try {
// 	throw 'a';
// 	}
// 	catch (int x) {
// 		cout << "Caught ";
// 	}
// 	return 0;
// }

//nested try-catch
// #include <iostream>
// using namespace std;

// int main()
// {
// 	try {
// 		try {
// 			throw 20;
// 		}
// 		catch (int n) {
// 			cout << "Handle Partially ";
// 			throw; // Re-throwing an exception
// 		}
// 	}
// 	catch (int n) {
// 		cout << "Handle remaining ";
// 	}
// 	return 0;
// }

//exception is thrown
// #include <iostream>
// using namespace std;

// class Test {
// public:
// 	Test() { cout << "Constructor of Test " << endl; }
// 	~Test() { cout << "Destructor of Test " << endl; }
// };

// int main()
// {
// 	try {
// 		Test t1;
// 		throw 10;
// 	}
// 	catch (int i) {
// 		cout << "Caught " << i << endl;
// 	}
// }

// throwing exception using single class
// #include <iostream>
// using namespace std;

// class demo {
// };

// int main()
// {
// 	try {
// 		throw demo();
// 	}

// 	catch (demo d) {
// 		cout << "Caught exception of demo class \n";
// 	}
// }

//throw exception using 2 classes
// #include <iostream>
// using namespace std;

// class demo1 {
// };

// class demo2 {
// };

// int main()
// {
// 	for (int i = 1; i <= 2; i++) {
// 		try {
// 			if (i == 1)
// 				throw demo1();

// 			else if (i == 2)
// 				throw demo2();
// 		}

// 		catch (demo1 d1) {
// 			cout << "Caught exception of demo1 class \n";
// 		}

// 		catch (demo2 d2) {
// 			cout << "Caught exception of demo2 class \n";
// 		}
// 	}
// }

//standard output stream
// #include <iostream> 

// using namespace std; 

// int main() 
// { 
// 	char sample[] = "GeeksforGeeks"; 

// 	cout << sample << "  A computer science portal for geeks"; 

// 	return 0; 
// } 

//std in stream
// #include <iostream> 
// using namespace std; 

// int main() 
// { 
// 	int age; 

// 	cout << "Enter your age:"; 
// 	cin >> age; 
// 	cout << "\nYour age is: " << age; 

// 	return 0; 
// } 

//un-buffered std error stream
// #include <iostream> 

// using namespace std; 

// int main() 
// { 
// 	cerr << "An error occurred"; 
// 	return 0; 
// } 

//buffered std error stream
// #include <iostream> 

// using namespace std; 

// int main() 
// { 
// 	clog << "An error occurred"; 

// 	return 0; 
// } 

// #include <fstream>  
// #include <iostream>  
// using namespace std;  
// int main () {  
//    char input[75];  
//    ofstream os;  
//    os.open("testout.txt");  
//    cout <<"Writing to a text file:" << endl;  
//    cout << "Please Enter your name: ";   
//    cin.getline(input, 100);  
//    os << input << endl;  
//    cout << "Please Enter your age: ";   
//    cin >> input;  
//    cin.ignore();  
//    os << input << endl;  
//    os.close();  
//    ifstream is;   
//    string line;  
//    is.open("testout.txt");   
//    cout << "Reading from a text file:" << endl;   
//    while (getline (is,line))  
//    {  
//    cout << line << endl;  
//    }      
//    is.close();  
//    return 0;  
// }

/* File Handling with C++ using fstream class object */
/* To write the Content in File */
/* Then to read the content of file*/
// #include <iostream>

// /* fstream header file for ifstream, ofstream, 
// fstream classes */
// #include <fstream>

// using namespace std;

// // Driver Code
// int main()
// {
// 	// Creation of fstream class object
// 	fstream fio;

// 	string line;

// 	// by default openmode = ios::in|ios::out mode
// 	// Automatically overwrites the content of file, To append
// 	// the content, open in ios:app
// 	// fio.open("sample.txt", ios::in|ios::out|ios::app)
// 	// ios::trunc mode delete all content before open
// 	fio.open("sample.txt", ios::trunc | ios::out | ios::in);

// 	// Execute a loop If file successfully Opened
// 	while (fio) {

// 		// Read a Line from standard input
// 		getline(cin, line);

// 		// Press -1 to exit
// 		if (line == "-1")
// 			break;

// 		// Write line in file
// 		fio << line << endl;
// 	}

// 	// Execute a loop until EOF (End of File)
// 	// point read pointer at beginning of file
// 	fio.seekg(0, ios::beg);

// 	while (fio) {

// 		// Read a Line from File
// 		getline(fio, line);

// 		// Print line in Console
// 		cout << line << endl;
// 	}

// 	// Close the file
// 	fio.close();

// 	return 0;
// }

// Q: WA C++ file handling program to read data from the file called student.doc

// #include <iostream>
// #include <fstream>
// #include <string>

// int main()
// {
//     std::string fileName ="sample.doc";

//     // Writing to a file
//     std::ofstream outFile(fileName);

//     if (outFile.is_open()) {
//         std::cout << "Enter text to write to the file (Enter 'EOF' on a new line to finish):\n";

//         std::string line;
//         while (true) {
//             std::getline(std::cin, line);

//             if (line == "EOF") {
//                 break;
//             }

//             outFile << line << std::endl;
//         }

//         outFile.close();
//         std::cout << "Text written to the file.\n";
//     } else {
//         std::cerr << "Unable to open the file for writing.\n";
//         return 1; // indicate error
//     }

//     // Reading from a file
//     std::ifstream inFile(fileName);

//     if (inFile.is_open()) {
//         std::cout << "Contents of the file:\n";

//         std::string line;
//         while (std::getline(inFile, line)) {
//             std::cout << line << std::endl;
//         }

//         inFile.close();
//     } else {
//         std::cerr << "Unable to open the file for reading.\n";
//         return 1; // indicate error
//     }

//     return 0; // indicate success
// }

//Q: write a single file handling program in c++ to reading and writing data on a file.

// #include<iostream>
// #include<fstream>

// using namespace std;
// main()
// {
// 	int rno,fee;
// 	char name[50];

// 	cout<<"Enter the Roll Number:";
// 	cin>>rno;
	
// 	cout<<"\nEnter the Name:";
// 	cin>>name;
	
// 	cout<<"\nEnter the Fee:";
// 	cin>>fee;

// 	ofstream fout("d:/output.txt");

// 	fout<<rno<<"\t"<<name<<"\t"<<fee; //write data to the file student

// 	fout.close();

// 	ifstream fin("d:/output.txt");

// 	fin>>rno>>name>>fee; //read data from the file student

// 	fin.close();

// 	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

// 	return 0; 
// }
