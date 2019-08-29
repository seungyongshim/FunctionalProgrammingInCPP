#include <vector>
#include <algorithm>
#include <fstream>
#include "functions_internal.h"
#include "functions_transform.h"

using namespace std;

vector<int> count_lines_in_files_transform(const vector<string>& files)
{
	vector<int> results(files.size());

	transform(files.cbegin(), files.cend(), results.begin(), count_lines);

	return results;
}

#if 0
vector<int> count_lines_in_files_transform2(const vector<string>& files)
{
	// 표준 컴파일러로 빌드 안됨
	// http://pfultz2.com/blog/2014/09/05/pipable-functions/
	return files | transform(count_lines);
}
#endif
