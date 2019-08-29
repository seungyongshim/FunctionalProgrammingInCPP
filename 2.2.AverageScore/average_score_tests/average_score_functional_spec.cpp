#include "pch.h"
#include "../average_score/average_score_functional.h"

using namespace  std;

TEST(AverageScoreFunctionalSpec, Should_Be_Return_0) {

  // Arrange
  const vector<int> v{ 0 };

  // Act
  const auto ret = average_score_functional(v);

  // Asserts
  EXPECT_EQ(0., ret);
}

TEST(AverageScoreFunctionalSpec, Should_Be_Return_2_5) {

  // Arrange
  const vector<int> v{ 5, 0 };

  // Act
  const auto ret = average_score_functional(v);

  // Asserts
  EXPECT_EQ(2.5, ret);
}
