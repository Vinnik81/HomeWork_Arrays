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

	cout << "\n������� �������� ��������� �������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "\n����� ������� � ������ �������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		sum += arr[i];  //���������� ����� ���� ���������
		arm = sum / n;  //���������� ������ ��������������� �������� ���������
	}
	cout << "\n\n����� ������� � �������� �������: " << endl;
	for (int i = n; i > 0; i--)
	{
		cout << arr[i - 1] << " ";
	}
	cout << "\n\n����� ���� ���������� ������� �����: " << sum << endl;
	cout << "\n������� �������������� �������� �����: " << arm << endl;
	int min = arr[0]; //����������� ������������ �������� ������ �������
	int max = arr[0]; //����������� ������������� �������� ������ �������
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i]; //���������� �������� ������� � ��� ������ ���������, ������� min
		if (arr[i] > max) max = arr[i]; //���������� �������� ������� � ��� ������ ���������, ������� max
	}
	cout << "\n����������� �������� �����: " << min << endl;
	cout << "\n������������ �������� �����: " << max << endl;
	cout << GRATE;
	cout << "\t\t\t\t������� ����� ������� ��� ������.\n\n";
	cout << GRATE;
#endif // TASK_ONE

#ifdef TASK_TWO

	cout << GR_TASK2;

	int k, shift;
	const int n = 10;
	int arr[n] = {};
	cout << "������� �������� �������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "\n�������� ������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\n������� ����� �� ������� ��������� �������� ������: "; cin >> k;
	for (int i = 0; i < k; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			(j == n - 1) ? shift = arr[n - 1] : arr[j + 1] = arr[j]; //��������� ������� ���������� � shift � �������� ������
		}
		arr[0] = shift; //���������� �������� ���������� �������� � ������
	}
	cout << "\n��������� ������ �������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	cout << GRATE;
	cout << "\t\t\t\t������� ����� ������� ��� ������.\n\n";
	cout << GRATE;
#endif // TASK_TWO


}