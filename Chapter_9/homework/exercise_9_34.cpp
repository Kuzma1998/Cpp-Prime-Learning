/*
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-11-06 16:09:09
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-12-16 20:45:23
 */

#include <iostream>
#include <vector>
using namespace std;
using std::vector; using std::cout; using std::endl;

int main()
{
	vector<int> vi{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2){
			iter = vi.insert(iter, *iter);
            ++iter;
            ++iter;   
		    cout << i++ << endl;    
        }
        else{
		    ++iter;
        }


	}

	for (auto i : vi)
		cout << i << " ";
	cout << endl;

	vector<int>::reverse_iterator it = vi.rbegin();
	while (it != vi.rend()){
		cout<<*it << endl;
		++it;
	}

	return 0;
}

