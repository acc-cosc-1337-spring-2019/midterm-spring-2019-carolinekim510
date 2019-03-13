#include "dna_consensus.h"
#include <vector>
#include <iostream>



int char_count(std::vector<std::string> dna_strings)
{
	for (int i = 0; i < dna_strings.size(); i++)
	{
		int a = 0;
		int c = 0;
		int g = 0;
		int t = 0;

		for (int j = 0; j < dna_strings[i].size(); j++)
		{
			switch (dna_strings[i][j])
			{
			case 'A': a++; break;
			case 'C': c++; break;
			case 'G': g++; break;
			case 'T': t++; break;
			}

		} 

	}

}