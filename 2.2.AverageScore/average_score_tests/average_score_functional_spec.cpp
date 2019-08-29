#include "pch.h"
#include "../average_score/average_score_functional.h"

using namespace  std;

TEST(AverageScoreFunctionalSpec, Should_Be_Return_0) {

  // Arrange
  const vector<int> v{ 0 };

  // Act
  const auto ret = average_score_functional(v);

  // Asserts
  EXPECT_DOUBLE_EQ(0., ret);
}

TEST(AverageScoreFunctionalSpec, Should_Be_Return_2_5) {

  // Arrange
  const vector<int> v{ 5, 0 };

  // Act
  const auto ret = average_score_functional(v);

  // Asserts
  EXPECT_DOUBLE_EQ(2.5, ret);
}

TEST(AverageScoreFunctionalSpec, Should_Be_Return_7_57) {

  // Arrange
  const vector<int> v{ 9, 7, 10, 5, 8, 8, 6 };

  // Act
  const auto ret = average_score_functional(v);

  // Asserts
  EXPECT_NEAR(7.57, ret, 0.01);
}
