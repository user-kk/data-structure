#include "array_new.h"
#include<iostream>
using namespace std;
array_new::array_new(int n)
{
	size = n;
	data = new int[n];
	number = 0;
}

array_new::~array_new()
{
	delete[]data;
}

int& array_new::operator[](int n)
{
	if (n > size - 1 || n < 0)
	{
		cout << "越界";
		exit(444);
	}
	else
		return data[n];
}

void array_new::in()
{
	int i = 0;
	if (i == size - 1)
	{
		cout << "越界";
		exit(444);
	}
	while (cin >> data[i])
	{
		i++;
		number = i;
		if (i == size)
		{
			return;
		}
	}
}

void array_new::out()
{
	for (int i = 0; i <= number - 1; i++)
		cout << data[i]<<" ";
	cout << endl;
}

bool array_new::dele(int n)
{
	if(n<=0||n>number)
	return false;
	else
	{
		for (int i = n; i <= number - 1; i++)
		{
			data[i - 1] = data[i];
		}
		number = number - 1;
		return true;
	}
}

bool array_new::insert(int n, int a)
{
	if (n <= 0 || n > number||number+1 > size)
	{
		return false;
	}
	for (int i = number-1; i >= n - 1; i--)
	{
		data[i + 1] = data[i];
	}
	data[n - 1] = a;
	number++;
	return true;
}
