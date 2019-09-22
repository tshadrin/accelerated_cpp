#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;				using std::sort;
using std::cout;		    using std::string;
using std::endl;		    using std::streamsize;
using std::setprecision;	using std::vector;

int main()
{
	cout << "Пожалуйста, введите своё имя: ";
	string name;
	cin >> name;
	cout << "Привет, " << name << "!" << endl;

	cout << "Пожалуйста, введите оценки по экзаменам "
		"в середине и в конце семетра: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Введите все оценки за выполнение домашних заданий, "
		"завершив ввод признаком конца файла: ";

	vector<double> homework;
	double x;

	while (cin >> x) {
		homework.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "Неоходимо ввести оценки для рассчета. "
			"Пожалуйста, попытайтесь снова." << endl;

		return 1;
	}

	sort(homework.begin(), homework.end());
	
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ?
		(homework[mid] + homework[mid - 1]) / 2 :
		homework[mid];

	streamsize prec = cout.precision();
	cout << "Ваша итоговая оценка равна " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;
}
