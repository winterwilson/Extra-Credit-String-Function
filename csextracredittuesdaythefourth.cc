/*
 *      Author: Nasseef Abukamail
 *        Date: April 4, 2019
 * Description: Example that uses string member functions:
 * 		        length, find, erase, substr, replace
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

//function prototypes

int main()
{
    
	cout << "Enter a string: ";
    string inputstring;
    cin >> inputstring;
    cout << endl;

    cout << "Enter a substring: ";
    string inputsubstring;
    cin >> inputsubstring;
    cout << endl;


    int length1 = inputstring.length();
    int length2 = inputsubstring.length();

    for (int i = 0; i < length1; i++){
        inputstring[i] = toupper(inputstring[i]);
    }

    for (int i = 0; i < length2; i++){
        inputsubstring[i] = toupper(inputsubstring[i]);
    }

    int count = 0;

    int location = inputstring.find(inputsubstring);


    if (location != string::npos){
        count++;
        location = inputstring.find(inputsubstring, location + length2);
    }
    
    cout << "Count equals: " << count << endl; 

	return 0; //or EXIT_SUCCESS
}

/*
 * Extra credit: Due: Thursday April 4 (11:59 PM).
 * Write a function that counts the number of occurrences of a substring in a line
 * of text. The function should work for both upper and lowercase characters.
 * For example,
 *           number = countOccurrences("aBC", "ABCdeaBcfgAbcd");
 * should assign 3 to number.
 * Write a main program to test your function.
 * To submit the extra credit, you must create a public repository on GitHub and tag me (@nasseef) when
 * you are done.
 *
 */
