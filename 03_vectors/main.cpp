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

	do
	{
		cout << "Enter how many DNA strings you will be entering: ";
		cin >> string_count;

		for (int i = 0; i < string_count; i++)
		{
			cout << "Enter dna strings: ";
			cin >> dna_str;

			std::vector<string> dna_strings;
			dna_strings.push_back(dna_str);
			
			void char_count(std::vector<std::string> dna_strings);

		}

		cout << "Enter 1 to test again, any other to exit; ";
		cin >> choice;
	} while (choice == 1);

}