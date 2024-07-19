#include <iostream> // Includes the input-output stream lib for console
#include <string>   // Includes the string library

using namespace std; // Allows the use of std library without prefixes

int main() {
    // Declare and initialize variables with Aryelle's details
    string fName = "Aryelle";
    string lName = "Stilar";
    string address = "264 Winston Ave";
    string city = "Newbury, VT";
    string zip = "05051"; // zip code acts more as a string than an int

    // Print the information with the preset variables
    cout << "Here is the address of " << fName << " " << lName << "\n";
    cout << address << "\n" << city << " " << zip << "\n";

    return 0; // Indicate that the program ended successfully
}
