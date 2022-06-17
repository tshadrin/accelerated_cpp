/*
 * В моем случае в Visual Studio 2019 компилируется программа без проблем, но при запуске когда
 * происходит деление на ноль я получаю
 * Вызвано исключение по адресу 0x00007FFCCE2AD7D3 (KernelBase.dll) в exercise301.exe: 0x40010005
 * В macos вместо исключения написано "ваша итоговая оценка равна nan"
 */
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;		using std::setprecision;
using std::cout;	using std::string;
using std::endl;	using std::streamsize;

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif

	cout << "Пожалуйста, введите свое имя: ";
	string name;
	cin >> name;
	cout << "Привет, " << name << "!" << endl;
	cout << "Пожалуйста введите оценки по экзаменам "
		"в середине и в конце семестра: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Введите все оценки за выполнение домашних заданий, "
			"завершив ввод признаком конца файла: ";
	int count = 0;
	double sum = 0;

	double x;

	while (cin >> x) {
		++count;
		sum += x;
	}
	if (count == 0)
	{
		cout << "Вы не ввели ни одной оценки за домашние задания";
		return 1;
	}
	streamsize prec = cout.precision();
	cout << "Ваша итоговая оценка равна " << setprecision(3) 
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count 
		<< setprecision(prec) << endl;
}