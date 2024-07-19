#include<iostream>
#include <iomanip>
#include<conio.h>

// Standard namespace declaration
using namespace std;

// Main Function
int main() {
     double myMoney = 1000.50;  // This should be printed out

     // Set precision
     cout << fixed << setprecision(2);

     // Standard output statements
     cout << "Please be sure to correct all syntax errors in this program." << endl;
     cout << "I have corrected all errors for this program." << endl;
     cout << "\nThe total amount of money available is = $" << myMoney << endl;

     // Wait for output screen
     cout << "\n\nPress Enter to continue...";
     cin.get();  // Waits for the user to press Enter

     cout << "Goodbye. ♥";

     // Main function return statement
     return 0;
}
