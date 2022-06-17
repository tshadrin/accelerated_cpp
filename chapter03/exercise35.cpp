#include <iostream>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <Windows.h>

using std::cin;				using std::sort;
using std::cout;			using std::streamsize;
using std::endl;			using std::string;
using std::setprecision;	using std::vector;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	const int NUM_HOMEWORKS = 3;
	
	vector <string> names;
	vector <double> results;
	string name;
	
	cout << "Введите имя студента: ";
	while(cin >> name && name != "exit")
	{
		names.push_back(name);
		cout << "Привет, " << name << "!" << endl;

		cout << "Пожалуйста введите оценки по экзаменам, "
			"проведенным в середине и в конце семестра: ";
		double midterm, final;
		cin >> midterm >> final;

		cout << "Введите оценки за выполнение домашних заданий: ";

		vector <double> homeworks;

		for (int i = 0; i < NUM_HOMEWORKS; i++)
		{
			double hw;
			cin >> hw;
			homeworks.push_back(hw);
		}
		typedef vector <double>::size_type vec_sz;
		vec_sz size = homeworks.size();

		if(size == 0 ) {
			cout << "Для рассчетов необходимо ввести оценки.";
			return 1;
		}
		vec_sz middle = size / 2;
		double median;
		median = size % 2 == 0 ?
			(homeworks[middle] + homeworks[middle - 1]) / 2 :
		    homeworks[middle];
		results.push_back(0.2 * midterm + 0.4 * final + 0.4 * median);

		cout << "Введите имя студента или наберите exit для завершения рассчетов: ";
	}

	vector <string>::size_type count_students = names.size();

	for(int i=0; i<count_students; i++)
	{
		streamsize prec = cout.precision();
		cout << "Оценка " << names[i] << " на конец года: "
        << setprecision(3) << results[i]
        << setprecision(prec) << endl;
	}

	return 0;
}