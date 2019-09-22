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

	cout << "Введите числа для вычисления квантилей ";

	vector<double> homework;
	double x;

	while (cin >> x) {
		homework.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size < 4) {
		cout << endl << "Неоходимо ввести минимум 4 числа для рассчетов." << endl;

		return 1;
	}

	sort(homework.begin(), homework.end());

	vec_sz mid = size / 2;

	vec_sz mid2 = size % 2 == 0 ?
		mid / 2 :
		mid2 = (mid - 1) / 2;

	double q1 = mid % 2 == 0 ?
		(homework[mid2] + homework[mid2 - 1]) / 2 :
		homework[mid2];
	cout << q1 << " Q1" << endl;

	double median;
	median = size % 2 == 0 ?
		(homework[mid] + homework[mid - 1]) / 2 :
		homework[mid];
	cout << median << " Q2" << endl;

//todo Q3
}
