## `count_lines` 분리
- ifstream API로 인해 코드는 구현된 내용이 최선이다.
- `count_lines_in_files`는 I/O가 필요 없으며 `count_lines` 함수 위주로만 구현된다.
- 범위 표기법의 도입은 여기서 다음과 같이 우아한 코드를 가져온다.
```cpp
vector<int> count_lines_in_files_transform2(const vector<string>& files)
{
	return files | transform(count_lines);
}
```
