#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;
//Домашнее задание 1
int task_1_1(int day, int month, int year, int day2, int month2, int year2) {
	int summa = 0;
	summa += abs(day - day2);
	if (year > year2) {
		while (year > year2) {
			year2++;
			if (year2 % 4 == 0)
				summa += 366;
			else
				summa += 365;
		}
	}
	else if (year < year2) {
		while (year < year2) {
			year++;
			if (year2 % 4 == 0)
				summa += 366;
			else
				summa += 365;
		}
	}
	if (month > month2) {
		while (month > month2) {
			month2++;
			if (month2 == 1 || 3 || 5 || 7 || 8 || 11 || 12)
				summa += 31;
			else if (month2 == 2 && year2 % 4 == 0)
				summa += 29;
			else if (month2 == 2 && year2 % 4 != 0)
				summa += 28;
			else
				summa += 30;
		}
	}
	else if (month < month2) {
		while (month < month2) {
			month++;
			if (month2 == 1 || 3 || 5 || 7 || 8 || 11 || 12)
				summa += 31;
			else if (month2 == 2 && year2 % 4 == 0)
				summa += 29;
			else if (month2 == 2 && year2 % 4 != 0)
				summa += 28;
			else
				summa += 30;
		}
	}

	return summa;
}
void task_1_2(int arr[], int s) {
	float arf = 0;
	for (int i = 0; i < s; i++) {
		arf += arr[i];
	}
	cout << arf / s;
}
void task_1_3(int* arr) {
	int pozitive = 0, negative = 0, null = 0;
	for (int i = 0; i < 10; i++) {
		if (*(arr + i) > 0) pozitive++;
		else if (*(arr + i) < 0) negative++;
		else if (*(arr + i) == 0) null++;
	}
	cout << "Кол-во положительных элементов - " << pozitive << endl;
	cout << "Кол-во отрицательных элементов - " << negative << endl;
	cout << "Кол-во нулевых элементов - " << null << endl;
}
//---

//task_2_1 start
   //Для Int Матриц
int** CreateArrInt(int s1, int s2) {
	int** arr = new int*[s1];
	for (int i = 0; i < s1; i++) {
		arr[i] = new int[s2] {0};
	}
	return arr;
}
void FeelingArr(int** arr, int s1, int s2) {
	srand(time(NULL));
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}
void PrinfArr(int** arr,int s1,int s2) {
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void MinMaxElementArrDiagonal(int** arr, int s1) {
	int min = arr[0][0];
	int max = arr[0][0];
	for (int i = 1; i < s1; i++) {
		if (min > arr[i][i]) min = arr[i][i];
		if (max < arr[i][i]) max = arr[i][i];
	}
	cout << "Минимальный элемент на главной диагонали матрицы - " << min << endl;
	cout << "Максимальный элемент на главной диагонали матрицы - " << max << endl;
}
void SortArr(int** arr, int s1, int s2) {
	for (int k = 0; k < s1; k++) {
		int temp;
		for (int i = 0; i < s2; i++) {
			for (int j = s2 - 1; j > i; j--) {
				if (arr[k][j - 1] > arr[k][j]) {
					temp = arr[k][j - 1];
					arr[k][j - 1] = arr[k][j];
					arr[k][j] = temp;
				}
			}
		}
	}
}
   //--
   //Для Double матриц
double** CreateArrDouble(double s1, double s2) {
	double** arr = new double* [s1];
	for (int i = 0; i < s1; i++) {
		arr[i] = new double[s2] {0};
	}
	return arr;
}
void FeelingArr(double** arr, int s1, int s2) {
	srand(time(NULL));
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
}
void PrinfArr(double** arr, int s1, int s2) {
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void MinMaxElementArrDiagonal(double** arr, int s1) {
	double min = arr[0][0];
	double max = arr[0][0];
	for (int i = 1; i < s1; i++) {
		if (min > arr[i][i]) min = arr[i][i];
		if (max < arr[i][i]) max = arr[i][i];
	}
	cout << "Минимальный элемент на главной диагонали матрицы - " << min << endl;
	cout << "Максимальный элемент на главной диагонали матрицы - " << max << endl;
}
void SortArr(double** arr, int s1, int s2) {
	for (int k = 0; k < s1; k++) {
		double temp;
		for (int i = 0; i < s2; i++) {
			for (int j = s2 - 1; j > i; j--) {
				if (arr[k][j - 1] > arr[k][j]) {
					temp = arr[k][j - 1];
					arr[k][j - 1] = arr[k][j];
					arr[k][j] = temp;
				}
			}
		}
	}
}
   //--
   //Для Char матриц
char** CreateArrChar(int s1, int s2) {
	char** arr = new char* [s1];
	for (int i = 0; i < s1; i++) {
		arr[i] = new char[s2] {0};
	}
	return arr;
}
void FeelingArr(char** arr, int s1, int s2) {
	srand(time(NULL));
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			arr[i][j] = 97 + rand() % 26;
		}
	}
}
void PrinfArr(char** arr, int s1, int s2) {
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void MinMaxElementArrDiagonal(char** arr, int s1) {
	char min = arr[0][0];
	char max = arr[0][0];
	for (int i = 1; i < s1; i++) {
		if (min > arr[i][i]) min = arr[i][i];
		if (max < arr[i][i]) max = arr[i][i];
	}
	cout << "Минимальный элемент на главной диагонали матрицы - " << min << endl;
	cout << "Максимальный элемент на главной диагонали матрицы - " << max << endl;
}
void SortArr(char** arr, int s1, int s2) {
	for (int k = 0; k < s1; k++) {
		char temp;
		for (int i = 0; i < s2; i++) {
			for (int j = s2 - 1; j > i; j--) {
				if (arr[k][j - 1] > arr[k][j]) {
					temp = arr[k][j - 1];
					arr[k][j - 1] = arr[k][j];
					arr[k][j] = temp;
				}
			}
		}
	}
}
   //--
//task_2_1 end

//--
int task_2_2(int a, int b) {
	int temp;
	if (a > b) {
		temp = a % b;
		if (temp == 0) return b;
		else return (temp, b);
	}
	else {
		temp = b % a;
		if (temp == 0) return a;
		else return (temp, a);

	}


}
//--

//task 2_3 start
int counter = 0;
bool flag = true;

void number_split(int com_num, int us_num);
int random_number();
void check_num(int* UArr, int* CArr);
void win(int a, int b);

int random_number() {
	int a;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1000, 9999);
	a = dist(gen);
	return a;
}
void number_split(int com_num, int us_num) {
	int nC1, nC2, nC3, nC4;
	int nU1, nU2, nU3, nU4;
	nC1 = com_num / 1000;
	nC2 = com_num / 100 % 10;
	nC3 = com_num / 10 % 10;
	nC4 = com_num % 10;
	nU1 = us_num / 1000;
	nU2 = us_num / 100 % 10;
	nU3 = us_num / 10 % 10;
	nU4 = us_num % 10;
	int us_num_arr[4] = { nU1,nU2, nU3, nU4 };
	int com_num_arr[4] = { nC1, nC2, nC3, nC4 };
	//---- Для проверки
	for (int i = 0; i < 4; i++) {
		cout << us_num_arr[i] << endl;
	}
	cout << "---------\n";
	for (int i = 0; i < 4; i++) {
		cout << com_num_arr[i] << endl;
	}
	cout << "-----------\n";
	//----
	check_num(us_num_arr, com_num_arr);
}
void check_num(int* UArr, int* CArr) {
	for (int i = 0; i < 4; i++) {
		if (CArr[i] == UArr[i]) {
			cout << "Число " << UArr[i] << " отгадано верно и стоит на своём месте\n ";
		}
		else {
			for (int j = 0; j < 4; j++) {
				if (CArr[i] == UArr[j]) {
					cout << "Число " << UArr[j] << " отгадано верно, но стоит на не верном месте\n";
				}
			}
		}
	}
	counter++;
}
void win(int a, int b) {
	if (a == b) {
		counter--;
		cout << "Вы победили!!!\n";
		cout << "Кол-во свершённых попыток - " << counter << endl;
		cout << "Желаете продолжить игру?(y/n)\n ";
		char s;
		cin >> s;
		if (s == 'n') ::flag = false;
		else {
			::counter = 0;
			system("cls");
		}
	}
}
//task 2_3 end






int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Задание 1. Написать функцию, которая принимает две даты
	//(т.е.функция принимает шесть параметров) и вычисляет
	//	разность в днях между этими датами.Для решения этой
	//	задачи необходимо также написать функцию, которая
	//	определяет, является ли год високосным.

	//cout << "Разница в днях между датами - " << task_1_1(10,8,2022,20,7,2021);


	//Задание 2. Написать функцию, определяющую среднее
	//арифметическое элементов передаваемого ей массива.

	/*const int s = 10;
	int massive[s] = { 2,8,7,1,9,10,18,5,7,3 };
	task_1_2(massive, s);*/


	//Задание 3. Написать функцию, определяющую количество
	//положительных, отрицательных и нулевых элементов
	//передаваемого ей массива.
	/*
	int arr[10] = { 1,-8,0,5,-9,4,0,0,-6,3 };
	task_1_3(arr);*/


	// Домашнее задание 2


	//Задание 1. Написать перегруженные функции (int, double,
	//char) для выполнения следующих задач :
	//■■Инициализация квадратной матрицы;
	//■■ Вывод матрицы на экран;
	//■■Определение максимального и минимального элемента
	//	на главной диагонали матрицы;
	//■■Сортировка элементов по возрастанию отдельно для
	//	каждой строки матрицы.

	/*
	int s1 = 2, s2 = 5;
	int** arrINT = CreateArrInt(s1, s2);

	FeelingArr(arrINT, s1, s2);
	SortArr(arrINT, s1, s2);
	PrinfArr(arrINT, s1, s2);
	MinMaxElementArrDiagonal(arrINT, s1);

	double** arrDOUBLE = CreateArrDouble(s1, s2);
	FeelingArr(arrDOUBLE, s1, s2);
	SortArr(arrDOUBLE, s1, s2);
	PrinfArr(arrDOUBLE, s1, s2);
	MinMaxElementArrDiagonal(arrDOUBLE, s1);

	char** arrCHAR = CreateArrChar(s1, s2);
	FeelingArr(arrCHAR, s1, s2);
	SortArr(arrCHAR, s1, s2);
	PrinfArr(arrCHAR, s1, s2);
	MinMaxElementArrDiagonal(arrCHAR, s1);
	*/

	//Задание 2. Написать рекурсивную функцию нахождения
	//наибольшего общего делителя двух целых чисел.

	//cout << "Наибольший общий делитель двух целых чисел - " << task_2_2(35, 30);

	//Задание 3. Написать игру «Быки и коровы». Программа
	//«загадывает» четырёхзначное число и играющий должен
	//	угадать его.После ввода пользователем числа программа
	//	сообщает, сколько цифр числа угадано(быки) и сколько
	//	цифр угадано и стоит на нужном месте(коровы).После
	//	отгадывания числа на экран необходимо вывести коли -
	//	чество сделанных пользователем попыток.В программе
	//	необходимо использовать рекурсию.

	/*
	int user_number, computer_number = random_number();
	cout << "ИГРА КОРОВЫ И БЫКИ\n\n";
	while (flag) {                                                      //Я не смог придумать субординацию рекурсии, но игру я сотворил,                                                            //хоть и не безукоризненную, но она работает.
		cout << "Введите число: ";                                 //хоть и не безукоризненную, но она работает.
		cin >> user_number;
		number_split(computer_number, user_number);
		win(user_number, computer_number);
	}
	*/
}
