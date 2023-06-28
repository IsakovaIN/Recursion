#include<iostream>
//��������

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}

int factorial(int num) {
	if (num <= 0)//��������� ��������� ����� ��� ����� ������ 0.
		return 1;
	return factorial(num - 1) * num;

}

int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

template <typename T>
void my_sort(T arr[], const int length, bool inc = true);

int multiply(int a, int b) {
	if (b <= 0)
		return 0;
	return multiply(a, b - 1) + a;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//��������� � ������� ��������
	/*std::cout << "������� ����� -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;*/

	//������ 1. ����� ���������
	/*std::cout << "������ 1\n������� ����� ����� ��������� -> ";
	std::cin >> n;
	std::cout << "����� ��������� ��� ������� " << n << ": " << fibonacci(n) << std::endl;
	std::cout << "������ 13 ����� ���������: ";
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i) << ' ';
	std::cout << "\n\n";*/

	// ������ 2.���������� �� �����.
	/*std::cout << "������ 2.\n����������� ������:\n";
	const int size = 5;
	int arr[size]{ 10, 5, 8, 11, 7 };
	print_arr(arr, size);
	//my_sort(arr, size);//�� �����������
	my_sort(arr, size, false); //�� ��������
	std::cout << "��������������� ������:\n";
	print_arr(arr, size);*/

	//������ 3. ����������� ���������.
	std::cout << "������ 3.\n������� ��� ����� -> ";
	std::cin >> n >> m;
	std::cout << n << " * " << m << " = " << multiply(n, m) << std::endl;


	return 0;
}

template <typename T>
void my_sort(T arr[], const int length, bool inc) {
	if (inc) {
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (arr[j] > arr[j + 1])
					std::swap(arr[j], arr[j + 1]);
		return;
	}
	for (int i = length - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] < arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
}