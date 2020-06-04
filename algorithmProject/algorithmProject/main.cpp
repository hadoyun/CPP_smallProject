#include <iostream>
#include <string>
#include <vector>

// 실제 사람이 타이핑 한것 처럼 100개의 오타가 있는 스트링 출력하기
void printHandmadeString()
{
	std::vector<std::string> s{};
	{
		s.emplace_back("I will always use object-oriented design 1");
		s.emplace_back("I Will always use object-oriented design 2");
		s.emplace_back("I will Always use object-oriented design 3");
		s.emplace_back("I will always Use object-oriented design 4");
		s.emplace_back("I will always use Object-oriented design 5");
		s.emplace_back("I will always use object-oriented design 6");
		s.emplace_back("I will always use object-oriented Design 7");
		s.emplace_back("i will always use object-oriented design 8");
	}

	int count{ 0 };

	for (int i = 0; i < 100; i++)
	{
		int r = rand() % 8;

		++count;

		printf("%d", count);
		// printf에서 string은 c_str(); 으로만 출력할 수 있다.
		printf(" 번째 L%s \n", s[r].c_str());
	}
}



int main()
{
	printHandmadeString();

	return 0;
}