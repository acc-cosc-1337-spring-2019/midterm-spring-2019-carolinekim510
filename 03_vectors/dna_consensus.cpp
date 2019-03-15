#include "dna_consensus.h"
#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::to_string;

std::vector<string> dna_profile(vector<string> dna_strings)
{

	for (int i = 0; i < 8; i++)
	{
		int a_count = 0;
		int c_count = 0;
		int g_count = 0;
		int t_count = 0;

		for (int j = 0; j < 7; j++)
		{
			if (dna_strings[j][i] == 'A')
			{
				a_count++;
			}
			else if (dna_strings[j][i] == 'C')
			{
				c_count++;
			}
			else if (dna_strings[j][i] == 'G')
			{
				g_count++;
			}
			else if (dna_strings[j][i] == 'T')
			{
				t_count++;
			}
		}
		
		string a = "";
		string c = "";
		string g = "";
		string t = "";

		a += to_string(a_count);
		c += to_string(c_count);
		g += to_string(g_count);
		t += to_string(t_count);

		vector<string>dna_strings;
		dna_strings.push_back(a);
		dna_strings.push_back(c);
		dna_strings.push_back(g);
		dna_strings.push_back(t);

	}

	return dna_strings;
}


std::string dna_consensus(std::vector<std::string>dna_strings)
{
	string dna_consensus ="";
	int maxIndex = 0;

	for (int i = 0; i <= dna_strings.size(); i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (dna_strings[j][i] > maxIndex)
			{
				maxIndex = j;
			}
		} dna_consensus += dna_strings[maxIndex][i];
	}

	return dna_consensus;
}



//MIDTERM 3/15