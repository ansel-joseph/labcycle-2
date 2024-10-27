#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char str1[100], str2[100];

 
    cout << "\n\nEnter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;


    cout << "\nLength of first string: " << strlen(str1) << endl;
    cout << "Length of second string: " << strlen(str2) << endl;

    char concatenated[200];
    strcpy(concatenated, str1);
    strcat(concatenated, str2);
    cout << "\nConcatenated string: " << concatenated << endl;

  
    if (strcmp(str1, str2) == 0) {
        cout << "\nThe strings are equal." << endl;
    } else {
        cout << "\nThe strings are not equal." << endl;
    }

   
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    cout << "\nAfter swapping:" << endl;
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;

   return 0;
}

