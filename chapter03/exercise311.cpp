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
	cout << "����������, ������� ��� ���: ";
	string name;
	cin >> name;
	cout << "������, " << name << "!" << endl;

	cout << "����������, ������� ������ �� ��������� "
		"� �������� � � ����� �������: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "������� ��� ������ �� ���������� �������� �������, "
		"�������� ���� ��������� ����� �����: ";

	vector<double> homework;
	double x;

	while (cin >> x) {
		homework.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "��������� ������ ������ ��� ��������. "
			"����������, ����������� �����." << endl;

		return 1;
	}

	sort(homework.begin(), homework.end());
	
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ?
		(homework[mid] + homework[mid - 1]) / 2 :
		homework[mid];

	streamsize prec = cout.precision();
	cout << "���� �������� ������ ����� " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;
}
