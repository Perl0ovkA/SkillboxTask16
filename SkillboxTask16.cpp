#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int day = buf.tm_mday;

	const int size = 5;
	int array[size][size];

	//Функция для выведения массива
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j];
		}
		cout << endl;
	}
	cout << endl;


	int stringIndex = day % size;
	int sum = 0;
	cout << "String index:" << stringIndex << endl;

	//Функция для вывода итогового подсчета строки
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum += array[stringIndex][j];
		}
		cout << "Sum string:" << sum << endl;

	}
}