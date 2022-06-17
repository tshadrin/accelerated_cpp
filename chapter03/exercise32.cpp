/**
 * Упражнение выкинуто из русскоязычного варианта книги (
 *
 * Оригинальный текст сформулирован следующим образом
 *
 * Write a program to compute and print the quartiles (that is, the quarter of the numbers with the largest values,
 * the next highest quarter, and so on) of a set of integers.
 *
 * Напишите программу для вычисления и печати квартилей (то есть четверти чисел с наибольшими значениями,
 * следующей самой высокой четверти и т. д.) набора целых чисел.
 *
 * Надо признать, что задача поставлена не совсем корректно. Я  встречал программу, которая выводит
 * квартиль целиком(все числа квартиля).
 * Сам же я ограничусь значениями квартилей, а не полным набором самих чисел.
 * Еще один вариант был с рассчетами медианы когда значений было меньше четырех)
 */
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
#ifdef __WIN32
    system("chcp 65001");
#endif

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
