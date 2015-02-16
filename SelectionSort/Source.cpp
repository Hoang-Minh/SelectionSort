#include<iostream>
#include<string>

using namespace std;

//void SortArray(int arr[]);
void SwapElement(int& a, int& b);

int main()
{
	// Selection sort is Big 0(n^2)
	// unsorted array
	int unSortedArr[] = { 10, 5, 2, 7 };

	//cout << "size of array: " << (sizeof(unSortedArr) / sizeof(*unSortedArr)) << endl;
	int minIndex, temp;
	int length = sizeof(unSortedArr) / sizeof(*unSortedArr);

	for (int i = 0; i < length - 1; i++)
	{
		minIndex = i;

		for (int j = i + 1; j < length; j++)
		{
			if (unSortedArr[j] < unSortedArr[minIndex])
				minIndex = j;
		}

		if (minIndex != i)
		{
			//SwapElement(unSortedArr[i], unSortedArr[minIndex]);
			temp = unSortedArr[i];
			unSortedArr[i] = unSortedArr[minIndex];
			unSortedArr[minIndex] = temp;
		}
			
	}

	for (int i = 0; i < length; i++)
		cout << unSortedArr[i] << " ";
	cout << endl;

	//SortArray(unSortedArr);

	return 0;
}

//void SortArray(int arr[])
//{
//	cout << "size of array: " << (sizeof(arr) / sizeof(*arr)) << endl;
//}

void SwapElement(int& a, int& b)
{
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}