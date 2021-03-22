#include <iostream>
#include "MyLib.h"


#define RANGE(x,y) ((x >= 0 && x < y ) ? "TRUE" : "FALSE")
#define ARRSIZE 5


using namespace std;


void task1()
{
	const size_t size = 10;

	float* arr = createAPP(size);
	printf(arr, size);
	plusminus(arr, size);
 
}


void task2()
{
	int n;
	cout << "ENTER YOUR NUMBER FOR CHECK: "; 
	cin >> n;

	cout << RANGE(n, 15) << endl; 


}


void task3()
{
	int* arr = new (nothrow) int[ARRSIZE];

	if (arr != nullptr)
	{
		cout << "ENTER " << ARRSIZE << " " << "NUMBERS " << endl;

		for (int i = 0; i < ARRSIZE; i++)
		{
			cin >> arr[i];

			

		}

		sort(arr, ARRSIZE);
		printi(arr, ARRSIZE);

	}

	delete[] arr;
}


int main()
{
	task1();

	task2();

	task3();


	return 0;

}