//Для написания программы были использованы обычные(не широкие) строки, для упрощения работы.
//Окончания фраз без склонений для простоты

#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif

	string::size_type min, max;
	min = max = 0;

	cout << "Введите кучу слов: ";
	string x;

	while (cin >> x) {
		string::size_type len = x.size();
		if (len < min || min == 0) {
			min = len;
		}
		if (len > max) {
			max = len;
		}
	}

	cout << "Минимальный размер значения string: " << min << endl;
	cout << "Максимальный размер значения string: " << max << endl;
}
