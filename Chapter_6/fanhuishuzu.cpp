#include<iostream>
using namespace std;

// auto ret() -> int (*)[6]
// {
// 	int arr[] = { 1,0,0,0,0,0 };
// 	int *p = arr;
// 	return &arr;
//     // return p; //./返回数组首元素的地址。
// }

int *retr() {
	int arr[6] = { 1,2,0,0,0,0 };
	return arr;
}


void dispArr(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr" << "[" << i << "]" << " is:" << arr[i] << endl;
	}
}


int main() {
	// auto arr = ret();
	auto arr = retr();
	cout << *arr << endl;
	
}
