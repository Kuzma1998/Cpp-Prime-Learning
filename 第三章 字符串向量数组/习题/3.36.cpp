/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 10:37:34
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 10:46:08
 */
// > 编写一段程序，比较两个数组是否相等。再写一段程序，比较两个vector对象是否相等。

#include<iostream>
#include<vector>
using namespace std;

bool compare(int* const begin_1,int* const end_1,int* const begin_2,int* const end_2){
    if((end_1-begin_1)!=(end_2-begin_2))
        return false;
    else{
        for(auto i = begin_1,j = begin_2;(i!=end_1) &&(j!=begin_2);++i,++j){
            if(*i!=*j){return false;}
        }
    }
    return true;
}

int main(){
    int arr1[3] = { 0, 1, 2 };
	int arr2[3] = { 0, 2, 4 };

	if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "The two arrays are equal." << endl;
	else
		cout << "The two arrays are not equal." << endl;

	cout << "==========" << endl;

	vector<int> vec1 = { 0, 1, 2 };
	vector<int> vec2 = { 0, 1, 2 };

	if (vec1 == vec2)
		cout << "The two vectors are equal." << endl;
	else
		cout << "The two vectors are not equal." << endl;

	return 0;
}