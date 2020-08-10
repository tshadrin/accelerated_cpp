#include <ios>
#include "Student_info.h"


using std::istream; using std::vector;

bool compare(const Student_info& x, const Student_info& y)
{
	return x.name < y.name;
}

istream& read(istream& is, Student_info& s)
{
	std::cout << "������� ��� �������� � ������ �� �������� � �������� �������� � � �����: ";
	is >> s.name >> s.midterm >> s.final;
	std::cout << "������� ������ �� �������� �������: ";
	read_hw(is, s.homework);
	std::cout << std::endl;
	return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
	if (in)
	{
		hw.clear();

		double x;
		while (in >> x)
		{
			hw.push_back(x);
		}
		in.clear();
	}
	return in;
}


