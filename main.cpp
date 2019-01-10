#include <iostream>
#include <math.h>
#include <ctime>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void f1(int n)
{
	int* arr = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	std::cout << "\nMinimal = " << min << "\nMaximum = " << max << "\n";
}

void f2(int n)
{
	srand(time(NULL));

	int** mas = new int*[n];
	if (n <= 0)
		exit(0);
	for (int i = 0; i < n; i++)
	{
		*(mas + i) = new int[3];
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][0] = rand() % 100; //a
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][1] = rand() % 100; //b
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][2] = mas[i][0] * mas[i][1]; //S
		std::cout << "Rectangle #" << i << ". a = " << mas[i][0] << ", b = " << mas[i][1] << ". S = " << mas[i][2] << "\n";
	}
	int max_s = mas[0][2];
	for (int i = 0; i < n; ++i)
	{
		if (max_s < mas[i][2])
		{
			max_s = mas[i][2];
		}
	}
	std::cout << "Max S = " << max_s << "\n";
}

void f3(int n)
{
	srand(time(NULL));

	int** mas = new int*[n];
	if (n <= 0)
		exit(0);
	for (int i = 0; i < n; i++)
	{
		*(mas + i) = new int[3];
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][0] = rand() % 100; //a
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][1] = rand() % 100; //b
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][2] = mas[i][0] + mas[i][1]; //P
		mas[i][2] *= 2;
		std::cout << "Rectangle #" << i << ". a = " << mas[i][0] << ", b = " << mas[i][1] << ". P = " << mas[i][2] << "\n";
	}
	int max_p = mas[0][2];
	for (int i = 0; i < n; ++i)
	{
		if (max_p < mas[i][2])
		{
			max_p = mas[i][2];
		}
	}
	std::cout << "Max P = " << max_p << "\n";
}

void f4(int n)
{
	srand(time(NULL));
	if (n <= 0)
		exit(0);
	int *mas = new int[n];
	for (int i = 0; i < n; ++i)
	{
		mas[i] = rand() % 100;
		std::cout << mas[i] << ' ';
	}
	int min = mas[0];
	int min_i = 0;
	for (int i = 0; i < n; ++i)
	{
		if (min > mas[i])
		{
			min_i = i;
			min = mas[i];
		}
	}
	std::cout << "\n" << "Minimal number = " << min_i << "\n";
}

void f5(int n)
{
	srand(time(NULL));
	double** mas = new double*[n];
	if (n <= 0)
		exit(0);
	for (int i = 0; i < n; i++)
	{
		*(mas + i) = new double[3];
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][0] = rand() % 100; // m
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][1] = rand() % 100; // v
	}
	for (int i = 0; i < n; ++i)
	{
		mas[i][2] = mas[i][0] / mas[i][1]; // p
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			std::cout << mas[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	double min = mas[0][2];
	int min_i = 0;
	for (int i = 0; i < n; ++i)
	{
		if (min > mas[i][2])
			min = mas[i][2];
		min_i = i;
	}
	std::cout << "Minimal P is " << min << " in #" << min_i << "\n";
}

void f6(int n)
{
	srand(time(NULL));
	if (n <= 0)
		exit(0);
	int *mas = new int[n];
	for (int i = 0; i < n; ++i)
	{
		mas[i] = rand() % 100;
		std::cout << mas[i] << ' ';
	}
	int min = mas[0];  // first min = last max
	int min_i = 0;
	for (int i = 0; i < n; ++i)
	{
		if (min > mas[i])
		{
			min = mas[i];
			min_i = i;
		}
	}
	std::cout << "\nFirst min = last max: #" << min_i << " = " << min << "\n";
}

void f7(int n)
{
	srand(time(NULL));
	if (n <= 0)
		exit(0);
	int *mas = new int[n];
	for (int i = 0; i < n; ++i)
	{
		mas[i] = rand() % 100;
		std::cout << mas[i] << ' ';
	}
	int max = mas[0];  // first max = last min
	int max_i = 0;
	for (int i = 0; i < n; ++i)
	{
		if (max < mas[i])
		{
			max = mas[i];
			max_i = i;
		}
	}
	std::cout << "\nLast min = first max: #" << max_i << " = " << max << "\n";
}

void f8(int n)
{
	srand(time(NULL));
	if (n <= 0)
		exit(0);
	int *mas = new int[n];
	for (int i = 0; i < n; ++i)
	{
		mas[i] = rand() % 100;
		std::cout << mas[i] << ' ';
	}
	int first_min = mas[0];  // first min 
	int first_min_i = 0;
	int last_min = mas[0];  // last min = max
	int last_min_i = 0;
	for (int i = 0; i < n; ++i)
	{
		if (first_min > mas[i])
		{
			first_min = mas[i];
			first_min_i = i;
		}
		if (last_min < mas[i])
		{
			last_min = mas[i];
			last_min_i = i;
		}
	}
	std::cout << "\nFirst min: #" << first_min_i << " = " << first_min;
	std::cout << "\nLast min: #" << last_min_i << " = " << last_min << "\n";
}

void f9(int n)
{
	srand(time(NULL));
	if (n <= 0)
		exit(0);
	int *mas = new int[n];
	for (int i = 0; i < n; ++i)
	{
		mas[i] = rand() % 100;
		std::cout << mas[i] << ' ';
	}
	int first_max = mas[0];  // first max 
	int first_max_i = 0;
	int last_max = mas[0];  // last max = min
	int last_max_i = 0;
	for (int i = 0; i < n; ++i)
	{
		if (first_max < mas[i])
		{
			first_max = mas[i];
			first_max_i = i;
		}
		if (last_max > mas[i])
		{
			last_max = mas[i];
			last_max_i = i;
		}
	}
	std::cout << "\nFirst max: #" << first_max_i << " = " << first_max;
	std::cout << "\nLast max: #" << last_max_i << " = " << last_max << "\n";
}

void f10(int n)
{
	srand(time(NULL));
	if (n <= 0)
		exit(0);
	int *mas = new int[n];
	for (int i = 0; i < n; ++i)
	{
		mas[i] = rand() % 100;
		std::cout << mas[i] << ' ';
	}
	int ext;
	int min = mas[0];
	int max = mas[0];
	int min_i;
	int max_i;
	for (int i = 0; i < n; ++i)
	{
		if (min >= mas[i])
		{
			min = mas[i];
			min_i = i;
		}
		if (max <= mas[i])
		{
			max = mas[i];
			max_i = i;
		}
	}
	if (max_i > min_i)
	{
		ext = min_i;
	}
	else
	{
		ext = max_i;
	}
	std::cout << "\n" << ext << std::endl;
}

void f11(int n)
{
	srand(time(NULL));
	if (n <= 0)
		exit(0);
	int *mas = new int[n];
	for (int i = 0; i < n; ++i)
	{
		mas[i] = rand() % 100;
		std::cout << mas[i] << ' ';
	}
	int ext;
	int min = mas[0];
	int max = mas[0];
	int min_i;
	int max_i;
	for (int i = 0; i < n; ++i)
	{
		if (min >= mas[i])
		{
			min = mas[i];
			min_i = i;
		}
		if (max <= mas[i])
		{
			max = mas[i];
			max_i = i;
		}
	}
	if (max_i < min_i)
	{
		ext = min_i;
	}
	else
	{
		ext = max_i;
	}
	std::cout << "\n" << ext << std::endl;
}

void f12(int n)
{
	srand(time(NULL));
	bool pos = 0;
	int* arr = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 101 - 50;
		std::cout << arr[i] << ' ';
	}
	int min_pos = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if ((min_pos > arr[i]) && (arr[i] >= 0))
		{
			min_pos = arr[i];
		}
		if ((arr[i]) >= 0)
		{
			pos = 1;
		}
	}
	if (pos == 1)
	{
		std::cout << "\n" << "Minimal positive element is " << min_pos << "\n";
	}
	else
	{
		std::cout << "\n" << "0" << "\n";
	}
	
}

void f13(int n)
{
	srand(time(NULL));
	bool pos = 0;
	int* arr = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	int max = arr[0];
	int arr_i;
	bool neg = 0;
	for (int i = 0; i < n; ++i)
	{
		if ((arr[i] > max) && (arr[i] % 2 != 0))
		{
			max = arr[i];
			arr_i = i;
			neg = 1;
		}
	}
	if (neg == 0)
	{
		std::cout << "0" << "\n";
	}
	else
	{
		std::cout << "\n" << arr_i << "\n";
	}

}

void f14(int b)
{
	srand(time(NULL));
	if (b <= 0)
	{
		exit(0);
	}
	bool pos = 0;
	int* arr = new int[10];
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	int minAfter_b = arr[0];
	int minAfter_b_i;
	bool more_b = 0;
	for (int i = 0; i < 10; ++i)
	{
		if ((minAfter_b > b) && (minAfter_b > arr[i]))
		{
			minAfter_b = arr[i];
			minAfter_b_i = i;
			more_b = 1;
		}
	}
	if(more_b = 0)
	{
		std::cout << "00" << "\n";
	}
	else
	{
		std::cout << "\nMinimal number after b = " << minAfter_b << " #" << minAfter_b_i << "\n";
	}
}

void f15(int b, int c)
{
	if ((0 > b) || (b > c))
	{
		std::cout << "Wrong B or C" << std::endl;
		exit(0);
	}
	if ((b > 10) || (b < 1) || (c < 1) || (b = c))
	{
		exit(0);
	}
	if (c > 10)
		c = 10;
	srand(time(NULL));
	int* arr = new int[10];
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	int max = arr[0];
	int max_i;
	for (int i = b; i <= c; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
			max_i = i;
		}
	}
	std::cout << "Max element between BC = " << max << " #" << max_i << "\n";
}

int main()
{
	f15(10,20);
	system("pause");
	return 0;
}
