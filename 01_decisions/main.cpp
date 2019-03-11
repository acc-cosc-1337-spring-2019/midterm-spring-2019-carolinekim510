#include "dna_hamming.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;

int main() 
{
	string dna1, dna2;
	char choice;

	do
	{
		cout << "Enter first DNA hamming: ";
		cin >> dna1;
		cout << "Enter second DNA hamming: ";
		cin >> dna2;

		int distance = get_dna_hamming_distance(dna1, dna2);
		cout << "The distance between two DNA hammings is " << distance;

		cout << "\n\nEnter Y to compare again, any other key to exit: ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

}