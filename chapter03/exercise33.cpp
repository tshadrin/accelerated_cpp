/**
 * Упражнение достаточно простое, но я сам не додумался до алгоритма подсчета одинаковых слов.
 * Когда понял, что посчитать слова уже после ввода, тогда задача стала совсем простой.
 * Не склонял окончания при выводе данных.
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif

	vector<string> words;

	cout << "Введите кучу слов: ";
	string word;

	while (cin >> word) {
		words.push_back(word);
	}

	sort(words.begin(), words.end());

	int word_count = 1;
	string last_word{};

	for (int i = 0; i < words.size(); i++) {
		if (words[i] == last_word) {
			word_count++;
		} else {
			if (i > 0) {
				cout << last_word << " встречается " << word_count << " раз" << endl;
			}
			word_count = 1;
			last_word = words[i];
		}

		if (i == (words.size() - 1)) {
			cout << last_word << " встречается " << word_count << " раз" << endl;
		}
	}
}