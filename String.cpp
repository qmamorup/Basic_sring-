#include <iostream>
#include <string>

int main()
{
	using namespace std::literals;

	// Создание строки из const char*
	std::string str1 = "hello";

	// Создание строки с помощью строкового литерала
	auto str2 = "world"s;

	// Конкатенация строк
	std::string str3 = str1 + " " + str2;

	// Вывод результата
	std::cout << str3 << '\n';

	std::string::size_type pos = str3.find(" ");
	str1 = str3.substr(pos + 1); // часть после пробела
	str2 = str3.substr(0, pos); // часть до пробела

	std::cout << str1 << ' ' << str2 << '\n';

	// Доступ к элементу с помощью оператора subscript[]
	std::cout << str1[0] << '\n';
	str1[0] = 'W';
	std::cout << str1 << '\n';
}