#include <string>
#include <vector>
#include "functions_std.h"
#include "functions_internal.h"
#include <sstream>

using namespace std;

int count_lines(const string& filename)
{
	stringstream in(filename);

	return count(
		istreambuf_iterator<char>(in),
		istreambuf_iterator<char>(),
		'\n'
	);
}

vector<int> count_lines_in_files_std(const vector<string>& files)
{
	vector<int> results;
	for	(const auto& file : files)
	{
		results.push_back(count_lines(file));
	}

	return move(results);
}
