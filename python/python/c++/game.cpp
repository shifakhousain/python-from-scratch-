// #include <iostream>
// #include <cstdlib> // For random number generation
// #include <ctime>   // For seeding the random number generator

// using namespace std;

// int main() {
//     // Seed the random number generator
//     srand(time(0));

//     int playerChoice;
//     int computerChoice = rand() % 3 + 1; // Generates a random number from 1 to 3

//     cout << "Rock, Paper, Scissors Game" << endl;
//     cout << "1. Rock" << endl;
//     cout << "2. Paper" << endl;
//     cout << "3. Scissors" << endl;
//     cout << "Enter your choice (1/2/3): ";
//     cin >> playerChoice;

//     if (playerChoice == computerChoice) {
//         cout << "It's a tie!" << endl;
//     } else if ((playerChoice == 1 && computerChoice == 3) ||
//                (playerChoice == 2 && computerChoice == 1) ||
//                (playerChoice == 3 && computerChoice == 2)) {
//         cout << "You win!" << endl;
//     } else {
//         cout << "Computer wins!" << endl;
//     }

//     return 0;
// }
