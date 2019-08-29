#include "pch.h"
#include "../CountLines/functions_transform.h"

using namespace std;

TEST(CountLinesTransformSpec, Should_Be_Return_1) {
  // Arrange
  const vector<string> samples{
    "Hello\nWorld"
  };
  // Act
  auto ret = count_lines_in_files_transform(samples);

  // Assert
  EXPECT_EQ(vector<int> {1}, ret);
}

TEST(CountLinesTransformSpec, Should_Be_Return_1_3) {
  // Arrange
  const vector<string> samples{
    "Hello\nWorld",
    "Hello\nWorld\nHello\nWorld"
  };
  // Act
  auto ret = count_lines_in_files_transform(samples);

  // Assert
  EXPECT_EQ((vector<int> {1, 3}), ret);
}
