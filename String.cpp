#include <iostream>
#include <string>

int main()
{
	using namespace std::literals;

	// �������� ������ �� const char*
	std::string str1 = "hello";

	// �������� ������ � ������� ���������� ��������
	auto str2 = "world"s;

	// ������������ �����
	std::string str3 = str1 + " " + str2;

	// ����� ����������
	std::cout << str3 << '\n';

	std::string::size_type pos = str3.find(" ");
	str1 = str3.substr(pos + 1); // ����� ����� �������
	str2 = str3.substr(0, pos); // ����� �� �������

	std::cout << str1 << ' ' << str2 << '\n';

	// ������ � �������� � ������� ��������� subscript[]
	std::cout << str1[0] << '\n';
	str1[0] = 'W';
	std::cout << str1 << '\n';
}