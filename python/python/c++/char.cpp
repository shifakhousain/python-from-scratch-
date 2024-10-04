// C++ Program demonstrate
// Use of char
// #include <iostream>
// using namespace std;

// int main()
// {
// 	char c = 'g';
// 	cout << c;
// 	return 0;
// }

// char to ASCII value
// C++ Program to convert
// Char to ASCII value
// #include <iostream>
// using namespace std;

// int main()
// {
// 	char c = 'g';
// 	cout << "The Corresponding ASCII value of 'g' : ";//103
// 	cout << int(c) << endl;

// 	c = 'A';
// 	cout << "The Corresponding ASCII value of 'A' : ";//65
// 	cout << int(c) << endl;
// 	return 0;
// }

// C++ Program to convert
// ASCII value to character
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int x = 53;
// 	cout << "The Corresponding character value of x is : ";
// 	cout << char(x) << endl;

// 	x = 65;
// 	cout << "The Corresponding character value of x is : ";
// 	cout << char(x) << endl;

// 	x = 97;
// 	cout << "The Corresponding character value of x is : ";
// 	cout << char(x) << endl;
// 	return 0;
// }

// C++ Program to demonstrate
// Use of Escape Sequence
// #include <iostream>
// using namespace std;

// int main()
// {
// 	char a = 'G';

// 	// horizontal tab
// 	char b = '\t';
// 	char c = 'F';
// 	char d = '\t';
// 	char e = 'G';

// 	// new line
// 	char f = '\n';
// 	string s = "is the best";
// 	cout << a << b << c << d << e << f << s;
// 	return 0;
// }

// C++ program to demonstrate isalpha()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[5] = "g1";

// 	// checking for isalpha() function
// 	for (int i = 0; i < 2; i++) {
// 		if (isalpha(ch[i]))
// 			cout << ch[i] << " is alphabet" << endl;
// 		else
// 			cout << ch[i] << " is not alphabet" << endl;
// 	}
// }

// C++ program to demonstrate isalpha()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[5] = "GgFc";

// 	// checking for isupper() function
// 	for (int i = 0; i < 4; i++) {
// 		if (isupper(ch[i]))
// 			cout << ch[i] << " is an upper alphabet" << endl;
// 		else
// 			cout << ch[i] << " is not an upper alphabet" << endl;
// 	}
// }

// C++ program to demonstrate isalpha()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[5] = "GgFc";

// 	// checking for islower() function
// 	for (int i = 0; i < 4; i++) {
// 		if (islower(ch[i]))
// 			cout << ch[i] << " is an lower alphabet" << endl;
// 		else
// 			cout << ch[i] << " is not an lower alphabet" << endl;
// 	}
// }

// C++ program to demonstrate isalnum()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[5] = "@1$T";

// 	// checking for isalnum() function
// 	for (int i = 0; i < 4; i++) {
// 		if (isalnum(ch[i]))
// 			cout << ch[i] << " is alphabet or numeric" << endl;
// 		else
// 			cout << ch[i] << " is not alphabet or numeric" << endl;
// 	}
// }

// C++ program to demonstrate isdigit()
// #include <cctype>
// #include <iostream>
// using namespace std;

// int main()
// {
// 	// initializing character array
// 	char ch[5] = "g1";

// 	// checking for isdigit() function
// 	for (int i = 0; i < 2; i++) {
// 		if (isdigit(ch[i]))
// 			cout << ch[i] << " is digit" << endl;
// 		else
// 			cout << ch[i] << " is not digit" << endl;
// 	}
// }

// C++ program to demonstrate isblank()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[4] = " \n\t";

// 	// checking for isblank() function
// 	for (int i = 0; i < 3; i++) {
// 		if (isblank(ch[i]))
// 			cout << " Character is blank" << endl;
// 		else
// 			cout << " Character is not blank" << endl;
// 	}
// }

// // C++ program to demonstrate isspace()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[4] = "t\n\t";

// 	// checking for isspace() function
// 	for (int i = 0; i < 3; i++) {
// 		if (isspace(ch[i]))
// 			cout << " Character is space" << endl;
// 		else
// 			cout << " Character is not space" << endl;
// 	}
// }

// C++ program to demonstrate iscntrl()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[4] = " \n\t";

// 	// checking for iscntrl() function
// 	for (int i = 0; i < 3; i++) {
// 		if (iscntrl(ch[i]))
// 			cout << " Character is control code " << endl;
// 		else
// 			cout << " Character is not control code"
// 				<< endl;
// 	}
// }

// C++ program to demonstrate isprint()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[6] = "\t@gf1";

// 	// checking for isprint() function
// 	for (int i = 0; i < 5; i++) {
// 		if (isprint(ch[i]))
// 			cout << ch[i] << " is printable character "
// 				<< endl;
// 		else
// 			cout << ch[i] << " is not printable Character"
// 				<< endl;
// 	}
// }


// C++ program to demonstrate isxdigit()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[6] = "\t@gf1";

// 	// checking for isxdigit() functsion
// 	for (int i = 0; i < 5; i++) {
// 		if (isxdigit(ch[i]))
// 			cout << ch[i] << " is hexadecimal Character"
// 				<< endl;
// 		else
// 			cout << ch[i] << " is not hexadecimal Character"
// 				<< endl;
// 	}
// }

// C++ program to demonstrate ispunct()
// #include <cctype>
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// initializing character array
// 	char ch[6] =",e:st";

// 	// checking for ispunct() function
// 	for (int i = 0; i < 5; i++) {
// 		if (ispunct(ch[i]))
// 			cout << ch[i] << " is punctuation mark" << endl;
// 		else
// 			cout << ch[i] << " is not punctuation mark"
// 				<< endl;
// 	}
// }
