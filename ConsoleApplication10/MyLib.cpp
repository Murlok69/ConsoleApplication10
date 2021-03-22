#include <iostream>


#define SWAP(x,y) int temp = x; x = y; y = temp;


using namespace std;

float* createAPP(size_t size)
{
	float* Arr = new (nothrow) float[size];
	if (Arr != nullptr)
	{
		for (int i = 0; i < size; i++)
		{
			Arr[i] = rand() % 100 - 50;
		}

	}

	return Arr;
}

void printf(float* arr,size_t size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " " << endl; 

	}
	cout << endl; 
}

void printi(int* arr, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}

void plusminus(float* arr, size_t size)
{
	int plus = 0;
	int minus = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			plus++;
		}
		else
		{
			minus++;
		}
	}

	cout << "POSITIVE NUMBERS : " << plus << endl;
	cout << "NEGATIVE NUMBERS : " << minus << endl;

}

void sort(int* arr, size_t size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				SWAP (arr[j], arr[j+1])
			}
		}
	}


}