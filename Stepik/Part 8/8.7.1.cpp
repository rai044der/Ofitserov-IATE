
#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	// ��������� ����� ��������
	size_t count = 0;
	std::cin >> count;
	// ��������� �������� ��������
	std::vector<int> nominals;
	nominals.push_back(0);
	for (size_t i = 0; i < count; ++i) {
		int value = 0;
		std::cin >> value;
		nominals.push_back(value);
	}
	/*
	����� ������ ������������ ����� ��� ������ �������. ��������� ����� S[i] ������������ ����� ��� �������� �� 0 �� i.
	������� S[i] ����� ������ ��� ������� ��������. ����� S[i] = min{S[i-1] + S[i], S[i-2] + S[i]}. ������ ��� ��������
	����� 0 � nominals[1].
	*/
	// �������������� ������
	std::vector<int> S;
	S.push_back(0);           // 0-� �������
	S.push_back(nominals[1]); // 1-� �������
	for (size_t i = 2; i <= count; ++i) S.push_back(std::max({ S[i - 1] + nominals[i], S[i - 2] + nominals[i] }));
	// ������� �������� � ��������� �������
	std::cout << S[count] << std::endl;
	return 0;
}