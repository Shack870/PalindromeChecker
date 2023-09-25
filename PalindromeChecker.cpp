#include <iostream>
#include <string>
using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(const string& str, int start, int end) {
    // Base cases
    if (start >= end) return true;  // String length is 0 or 1

    // Check first and last characters
    if (str[start] != str[end]) return false;

    // Recursive call for the inner substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    cout << "Welcome to the World Famous Palindrome checker!" << endl << endl;
    char choice;
    
    do {
        string input;
        cout << "Enter a string: ";
        cin >> input;

        // Call the recursive function
        if (isPalindrome(input, 0, input.length() - 1)) {
            cout << input << " is a palindrome." << endl;
        } else {
            cout << input << " is not a palindrome." << endl;
        }

        // Ask the user if they want to check another string
        cout << "Do you want to check another string? (Y/N): ";
        cin >> choice;

    } while (toupper(choice) == 'Y');  // Continue as long as the user enters 'Y' or 'y'

    cout << "Thank you for using the World Famous Palindrome checker. Goodbye!" << endl;
    return 0;
}
