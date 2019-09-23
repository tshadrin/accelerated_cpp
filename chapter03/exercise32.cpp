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

	double q1 = mid % 2 == 1 ?
		homework[mid / 2] :
		(homework[mid / 2] + homework[(mid / 2) - 1]) / 2;
	cout << q1 << " Q1" << endl;

	double median;
	median = size % 2 == 0 ?
		(homework[mid] + homework[mid - 1]) / 2 :
		homework[mid];
	cout << median << " Q2" << endl;

	if (size % 2 == 1) {
		double q3 = mid % 2 == 1 ?
			 homework[mid + (mid / 2 + 1)] :
			(homework[mid + (mid / 2 + 1)] + homework[mid + (mid / 2)]) / 2;
		cout << q3 << " Q3" << endl;
	} else {
		double q3 = mid % 2 == 1 ?
			 homework[mid + (mid / 2)] :
			(homework[mid + (mid / 2)] + homework[mid + (mid / 2 - 1)]) / 2;
		cout << q3 << " Q3" << endl;
	}
}
