#include "pch.h"
#include "../CountLines/functions.h"

using namespace std;

TEST(CountLinesSpec, Should_Be_Return_1) {
  // Arrange
  const vector<string> samples {
    "Hello\nWorld"
  };
  // Act
  auto ret = count_lines_in_files(samples);

  // Assert
  EXPECT_EQ(vector<int> {1}, ret);
}

TEST(CountLinesSpec, Should_Be_Return_1_3) {
  // Arrange
  const vector<string> samples{
    "Hello\nWorld",
    "Hello\nWorld\nHello\nWorld"
  };
  // Act
  auto ret = count_lines_in_files(samples);

  // Assert
  EXPECT_EQ((vector<int> {1, 3}), ret);
}
