#include <iostream>
using namespace std;

#define GRATE "########################################################################################################################\n\n"
#define GR_ARR "#\t\t\t\t\t\t\tARRAY\t\t\t\t\t\t\t\t#\n\n"
#define GR_TASK1 "################################################\tTASK_ONE\t################################################\n\n"
#define GR_TASK2 "################################################\tTASK_TWO\t################################################\n\n"

//#define TASK_ONE
#define TASK_TWO


void main()
{
	setlocale(LC_ALL, "Russian");

	cout << GRATE;
	cout << GR_ARR;
	cout << GRATE;

#ifdef TASK_ONE

	cout << GR_TASK1;

	double sum = 0, arm;
	const int n = 10;
	int arr[n] = {};

	cout << "\nВведите значение элементов массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "\nВывод массива в прямом порядке: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		sum += arr[i];  //нахождение суммы всех элементов
		arm = sum / n;  //нахождение средне арифметического значения элементов
	}
	cout << "\n\nВывод массива в обратном порядке: " << endl;
	for (int i = n; i > 0; i--)
	{
		cout << arr[i - 1] << " ";
	}
	cout << "\n\nСумма всех эелементов массива равна: " << sum << endl;
	cout << "\nСреднее арифметическое значение равно: " << arm << endl;
	int min = arr[0]; //присваеваем минимальному значению первый элемент
	int max = arr[0]; //присваеваем максимальному значению первый элемент
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i]; //сравниваем элементы массива с его первым элементом, находим min
		if (arr[i] > max) max = arr[i]; //сравниваем элементы массива с его первым элементом, находим max
	}
	cout << "\nМинимальное значение равно: " << min << endl;
	cout << "\nМаксимальное значение равно: " << max << endl;
	cout << GRATE;
	cout << "\t\t\t\tНажмите любую клавишу для выхода.\n\n";
	cout << GRATE;
#endif // TASK_ONE

#ifdef TASK_TWO

	cout << GR_TASK2;

	int k, shift;
	const int n = 10;
	int arr[n] = {};
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "\nЗаданный массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\nВведите число на сколько элементов сдвигать массив: "; cin >> k;
	for (int i = 0; i < k; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			(j == n - 1) ? shift = arr[n - 1] : arr[j + 1] = arr[j]; //последний элемент записываем в shift и сдвигаем массив
		}
		arr[0] = shift; //записываем значение последнего элемента в первый
	}
	cout << "\nРезультат сдвига массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	cout << GRATE;
	cout << "\t\t\t\tНажмите любую клавишу для выхода.\n\n";
	cout << GRATE;
#endif // TASK_TWO


}