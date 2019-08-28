#include <string>
#include <fstream>
#include <vector>

using namespace std;

int count_lines(const string& filename)
{
	ifstream in(filename);

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