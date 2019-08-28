#include <vector>
#include <algorithm>
#include <fstream>

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

vector<int> count_lines_in_files_transform(const vector<string>& files)
{
	vector<int> results(files.size());

	transform(files.cbegin(), files.cend(), results.begin(), count_lines);

	return results;
}

vector<int> count_lines_in_files_transform2(const vector<string>& files)
{
	// 표준 컴파일러로 빌드 안됨
	// http://pfultz2.com/blog/2014/09/05/pipable-functions/
	return files | transform(count_lines);
}
