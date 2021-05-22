#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main()
{
	// —читываем первую строку
	std::string strA;
	std::cin >> strA;
	// —читываем вторую строку
	std::string strB;
	std::cin >> strB;
	// ќпредел€ем размер строк
	auto sizeA = strA.size();
	auto sizeB = strB.size();
	// —оздаем массивы дл€ двух строк
	std::vector<std::vector<int>> tab;
	// »нициализируем данные
	for (auto i = 0; i <= sizeB; ++i) tab.push_back(std::vector<int>(sizeA + 1));
	for (auto i = 0; i <= sizeA; ++i) tab[0][i] = i;
	for (auto i = 1; i <= sizeB; ++i) tab[i][0] = i;
	// —читаем таблицу
	for (auto j = 1; j <= sizeB; ++j) {
		for (auto i = 1; i <= sizeA; ++i) {
			auto c = (strA.at(i - 1) == strB.at(j - 1)) ? 0 : 1;
			auto min_val = std::min({ tab[j][i - 1] + 1, tab[j - 1][i] + 1, tab[j - 1][i - 1] + c });
			tab[j][i] = min_val;
		}
	}
	std::cout << tab[sizeB][sizeA] << std::endl;
	return 0;
}