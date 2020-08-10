#include <algorithm>
#include <string>
#include <ios>
#include "listing01/Student_info.h"

int main()
{
	Student_info s;
	s.name = "Test";
	//int maxlen = 10;
	std::string::size_type maxlen = 10;
	std::cout << std::max(s.name.size(), maxlen);
}