#include <vector>
#include <algorithm>
#include <numeric>
#include "functions_accumulate.h"
using namespace std;

vector<int> count_lines_in_files_accumulate(const vector<string>& files)
{
  vector<int> results(files.size());

  transform(files.cbegin(), files.cend(), results.begin(), [](auto s) -> auto
  {
    return accumulate(s.cbegin(), s.cend(), 0, [](auto p, auto c) -> auto
    {
      return (c != '\n') ? p : p + 1;
    });
  });

  return results;
}
