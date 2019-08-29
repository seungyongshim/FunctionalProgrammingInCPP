#include <vector>
#include <sstream>
#include "functions.h"

using namespace std;

vector<int> count_lines_in_files(const vector<string>& files)
{
	vector<int> results;
	char c = 0;

	for(const auto& file: files)
	{
		int line_count = 0;

		stringstream in(file);

		while (in.get(c))
		{
			if (c == '\n')
				line_count++;
		}

		results.push_back(line_count);
	}

	return results;
}

