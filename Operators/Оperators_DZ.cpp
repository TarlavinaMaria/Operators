#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TASK1 // ���������
//#define TASK2 // �����������

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK1 // ������: 3,4,2,3,4
	int sum = 0;
	cout << "������ ��������� \n�������� ���� �� ��������� ������� � ������� Inter \n" << endl;
	int question_1, question_2, question_3, question_4, question_5;
	cout << "1. ��� ����� 1 ����? \n1. 1024 ����� \n2. 4 ��� \n3. 8 ��� \n4. 10 �����\n�����: "; cin >> question_1;
	cout << "2. ���������� ����� ���������� � ����� ������ ����������? \n1. ������� \n2. ������� \n3. ������� \n4. ������\n�����: "; cin >> question_2;
	cout << "3. ����� ���������� �� ������������� ��� ������ ����������? \n1. ��������� \n2. ������� \n3. ���������� \n4. ����������\n�����: "; cin >> question_3;
	cout << "4. ��� ����� ������������ �����? \n1. ���������� ��������� \n2. ��������� ��������� \n3. ���������, ������� ����� ������������ � ������� �������� ���� ����� � �����, ����������� ������� ������ � ��������� \n4. ���� ������\n�����: "; cin >> question_4;
	cout << "5. ��� ������ ����������� ����������� ���������� � ���������� ����? \n1. ��� ���������� \n2. ������ ������������ ��������� \n3. ���������� ��������� \n4. ���������� ������� �����\n�����: "; cin >> question_5;
	if (question_1 == 3)
	{
		sum++;
	}
	if (question_2 == 4)
	{
		sum++;
	}
	if (question_3 == 2)
	{
		sum++;
	}
	if (question_4 == 3)
	{
		sum++;
	}if (question_5 == 4)
	{
		sum++;
	}
	if (sum == 1)
		cout << "�����: " << sum << " ������ �����";
	else if (sum == 5)
		cout << "�����: " << sum << " ������ �������";
	else
		cout << "�����: " << sum << " ������ ������";
#endif

#if defined TASK2
	double number1;
	double number2;
	char sign;
	cout << "������� ������ ����� � ������� Inter: "; cin >> number1;
	cout << "������� ���� � ������� Inter: "; cin >> sign;
	cout << "������� ������ ����� � ������� Inter: "; cin >> number2;
	if (sign == '+')
	{
		double answer = (number1 + number2);
		cout << "��� �����: " << answer;
	}
	if (sign == '-')
	{
		double answer = (number1 - number2);
		cout << "��� �����: " << answer;
	}
	if (sign == '*')
	{
		double answer = (number1 * number2);
		cout << "��� �����: " << answer;
	}
	if (sign == '/')
	{
		double answer = (number1 / number2);
		cout << "��� �����: " << answer;
	}
#endif
}