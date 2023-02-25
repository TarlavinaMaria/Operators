#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TASK1 // Викторина
//#define TASK2 // Калькулятор

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK1 // Ответы: 3,4,2,3,4
	int sum = 0;
	cout << "Начало викторины \nВыберите один из вариантов ответов и нажмите Inter \n" << endl;
	int question_1, question_2, question_3, question_4, question_5;
	cout << "1. Что такое 1 байт? \n1. 1024 Кбайт \n2. 4 бит \n3. 8 бит \n4. 10 Мбайт\nОтвет: "; cin >> question_1;
	cout << "2. Устройство ввода информации с листа бумаги называется? \n1. плоттер \n2. стример \n3. драйвер \n4. сканер\nОтвет: "; cin >> question_2;
	cout << "3. Какое устройство ПК предназначено для вывода информации? \n1. процессор \n2. монитор \n3. клавиатура \n4. магнитофон\nОтвет: "; cin >> question_3;
	cout << "4. Что такое компьютерный вирус? \n1. прикладная программа \n2. системная программа \n3. программы, которые могут размножаться и скрытно внедрять свои копии в файлы, загрузочные секторы дисков и документы \n4. база данных\nОтвет: "; cin >> question_4;
	cout << "5. Что делает невозможным подключение компьютера к глобальной сети? \n1. тип компьютера \n2. состав периферийных устройств \n3. отсутствие дисковода \n4. отсутствие сетевой карты\nОтвет: "; cin >> question_5;
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
		cout << "Итого: " << sum << " верный ответ";
	else if (sum == 5)
		cout << "Итого: " << sum << " верных ответов";
	else
		cout << "Итого: " << sum << " верных ответа";
#endif

#if defined TASK2
	double number1;
	double number2;
	char sign;
	cout << "Введите первое число и нажмите Inter: "; cin >> number1;
	cout << "Введите знак и нажмите Inter: "; cin >> sign;
	cout << "Введите второе число и нажмите Inter: "; cin >> number2;
	if (sign == '+')
	{
		double answer = (number1 + number2);
		cout << "Ваш ответ: " << answer;
	}
	if (sign == '-')
	{
		double answer = (number1 - number2);
		cout << "Ваш ответ: " << answer;
	}
	if (sign == '*')
	{
		double answer = (number1 * number2);
		cout << "Ваш ответ: " << answer;
	}
	if (sign == '/')
	{
		double answer = (number1 / number2);
		cout << "Ваш ответ: " << answer;
	}
#endif
}