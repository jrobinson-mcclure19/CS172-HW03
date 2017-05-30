////////////////////////////////
// Jalen Robinson-McClure
// CS 172
// May 30th, 2017
// EX03_04
///////////////////////////////

#include <iostream>
#include <string>

using namespace std;

string sort(string& s) // string sort
{
	bool organized = true; // tests if statement if true
	s.size();
	do // do while loop that puts letters in order
	{
		organized = true;
		for (int i = 0; i < s.size() - 1; i++) // for loop that compares letters
		{
			if (tolower(s[i]) > tolower(s[i + 1])) // compares letter
			{
				char temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
				organized = false;
			}
		}
	} while (!organized);
	return s;
}

int main() // main function 
{
	string input;
	cout << "enter a string: " << endl; // promt user for string
	cin >> input;

	cout << " The ordered string is " << sort(input) << endl; // shows ordered string
}