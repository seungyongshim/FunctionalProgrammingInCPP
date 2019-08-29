#include <vector>
#include <algorithm>
#include <numeric>
#include "functions_accumulate.h"
using namespace std;

int f(const int previous_count, const char c)
{
  return (c != '\n') ? previous_count : previous_count + 1;
}

vector<int> count_lines_in_files_accumulate(const vector<string>& files)
{
  vector<int> results(files.size());

  transform(files.cbegin(), files.cend(), results.begin(), [](auto s) -> auto
  {
    return accumulate(s.cbegin(), s.cend(), 0, [](auto p, auto c) -> auto
    {
      return 0;
    });
  });

  return results;
}
