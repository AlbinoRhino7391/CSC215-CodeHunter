// Assign06-CodeHunter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//Creator Information:
/*
Name: Eric Phelps
Professor: Juan Rodriguez
Date Completed: 20220217
Project Name: Dubugging Skills CodeHunter.
*/

/*
Assignment Goal:
	Debug and fix code
Assignment Tasks:
	use breakpoint to debug program to remove unnessecary components.
	add block descriptions for each section.
	add line descriptions for removals or changes.
	get the validated output response.
*/

// These bring in the iostream for console readout and the string object for the string variable.
#include <iostream>
#include <string>

using namespace std; // This defines the entire standard namespace so that objects from it may be used without calling for them. 

// Start of program.
int main()
{
	/*
	Declared Variables
	starts counts at 0
	added comment markers to removed unneeded code
	*/ 
	string textToAnalyze;
	//int foo = 0;                // removed.
	int vowels = 0;				  
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	//int bar = 0;				 // removed.

	/*
	Opening Narritive
	collects user input to validate
	*/
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze:\n" << endl;
	getline(cin, textToAnalyze); 

	/*
	For Loop and .length function
		if > checks for vowels
		else if > checks for constanates
		else if > checks for digits
		else if > checks for white space
		else if > checks for unknowns
		++ adds up by 1 for each instance
		*/
	for (int i = 0; i < textToAnalyze.length(); ++i) 
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; // changed -- to ++ caused the break
		}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			++consonants; // fixed spelling caused the break
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		{
			++unknownCharacters;
		}
	}
	/*
	.length function to make the total length of input
	checksum to count all ints together to get matching numbers
	*/
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	/*
	Output of total counts
	*/
	cout << "\nVowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	/*
	If Else statement
	If checksum and .length are the same output this
	else output this
	*/
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "\nThis program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "\nWARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	/*
	Program end clause
	pause = press any to continue
	*/
	system("pause"); 
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
