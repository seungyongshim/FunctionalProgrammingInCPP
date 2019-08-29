#include "pch.h"
#include "../average_score/average_score_command.h"

using namespace  std;

TEST(AverageScoreCommandSpec, Should_Be_Return_0) {
  
  // Arrange
  const vector<int> v{ 0 };

  // Act
  const auto ret = average_score_command(v);

  // Asserts
  EXPECT_EQ(0., ret);
}

TEST(AverageScoreCommandSpec, Should_Be_Return_2_5) {

	// Arrange
	const vector<int> v{ 5, 0 };

	// Act
	const auto ret = average_score_command(v);

	// Asserts
	EXPECT_EQ(2.5, ret);
}
