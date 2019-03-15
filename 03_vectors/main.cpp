
#include "dna_consensus.h"
#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
	int choice;
	int string_count;
	string dna_str;
	std::vector<string> dna_strings = {"ATCCAGCT", "GGGCAACT", "ATGGATCT", "AAGCAACC", "TTGGAACT", "ATGCCATT", "ATGGCACT"};

	do
	{
		cout << "Processing...." << "\n";
		cout << dna_consensus(dna_strings) << "\n";

		cout << "\nEnter 1 to see it again, any other to exit. ";
		cin >> choice;

	} while (choice == 1);

}


//MIDTERM 3/15