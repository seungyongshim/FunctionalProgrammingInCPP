#include <vector>
#include "average_score_functional.h"
#include <numeric>

using namespace std;

double average_score_functional(const vector<int>& scores)
{
  return accumulate(scores.cbegin(), scores.cend(), 0) / static_cast<double>(scores.size());
}
