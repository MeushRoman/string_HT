//1.	Запросить у пользователя символ и количество символов, создать строку из заданного количества повторов указанного символа и вывести ее на экран.
//2.	Запросить у пользователя строку и количество символов, создать строку из заданного количества символов исходной строки и вывести ее на экран.
//3.	Написать пример, демонстрирующий возникновение и обработку исключения out_of_range при обращении к символу строки по недопустимому индексу.
//4.	Разработать функцию сортировки массива строк, предусмотреть возможность сортировки : в алфавитном порядке, в обратном алфавитном порядке, по длине стрк.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string& a, const string& b) {
	return a.size() < b.size();
}

void main() {

	setlocale(LC_ALL, "rus");

	cout << "1. " << endl;
	string s;
	char c;
	int cnt;
	cout << "Введите символ: ";
	cin >> c;
	cout << "Введите количество символов: ";
	cin >> cnt;

	s = string(cnt, c);

	cout << s << endl;

	cout << "\n-------------------------------------\n\n";

	cout << "2." << endl;

	string s1;
	int cnt1;
	cout << "введите строку: ";
	cin >> s1;

	cout << "количество символов: ";
	cin >> cnt1;
	//s1.erase(cnt - 1);
	s1 = s1.substr(0, cnt1);
	cout << s1 << endl;


	cout << "\n-------------------------------------\n\n";

	cout << "3." << endl;

	string s2 = "asd";

	try
	{
		cout << s.at(100) << endl;
	}
	catch (out_of_range e)
	{
		cout << "exception: " << e.what() << endl;
	}

	cout << "\n-------------------------------------\n\n";
	while (true) {
		cout << "4." << endl;

		vector<string> s3 = { "abc", "acd", "asdd", "bcfd", "ygxz", "xhgyzl" };
		int num;
		cout << "сортировать массив строк\n1. в алфовитном порядке;\n2. в обратном алфавитном порядке;\n3. по длине строк.\n";
		cin >> num;

		switch (num)
		{
		case 1: sort(begin(s3), end(s3));
			break;
		case 2: sort(rbegin(s3), rend(s3));
			break;
		case 3: sort(begin(s3), end(s3), cmp);
			break;
		default:
			cout << "Неизвестная комманда!\n";
			break;
		}


		for (int i = 0; i < s3.size(); i++)
			cout << s3[i] << endl;

		cout << endl;
	}
	
	system("pause");
}