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
	
	cout << "������� ��� ��������: ";
	while(cin >> name && name != "exit")
	{
		names.push_back(name);
		cout << "������, " << name << "!" << endl;

		cout << "���������� ������� ������ �� ���������, "
			"����������� � �������� � � ����� ��������: ";
		double midterm, final;
		cin >> midterm >> final;

		cout << "������� ������ �� ���������� �������� �������: ";

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
			cout << "��� ��������� ���������� ������ ������.";
			return 1;
		}
		vec_sz middle = size / 2;
		double median;
		median = size % 2 == 0 ?
			(homeworks[middle] + homeworks[middle - 1]) / 2 :
		    homeworks[middle];
		results.push_back(0.2 * midterm + 0.4 * final + 0.4 * median);

		cout << "������� ��� �������� ��� �������� exit ��� ���������� ���������: ";
	}

	vector <string>::size_type count_students = names.size();

	for(int i=0; i<count_students; i++)
	{
		streamsize prec = cout.precision();
		cout << "������ " << names[i] << " �� ����� ����: " << setprecision(3) << results[i] << setprecision(prec) << endl;
	}

	return 0;
}