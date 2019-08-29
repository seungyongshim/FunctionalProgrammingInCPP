
#include <vector>
#include "average_score_command.h"

using namespace std;
double average_score_command(const vector<int>& scores)
{
  auto sum = 0;

  for (auto score: scores)
  {
		sum += score;
  }
	return sum/static_cast<double>(scores.size());
}
