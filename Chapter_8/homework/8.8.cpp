/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 20:21:46
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 20:26:15
 */
#include <fstream>
#include <iostream>

#include "7.26.h"

using std::ifstream; using std::ofstream; using std::endl; using std::cerr;

int main(int argc, char **argv)
{
	ifstream input(argv[1]);
	ofstream output(argv[2],ofstream::app);

	Sales_data total;
	if (read(input, total))
	{
		Sales_data trans;
		while (read(input, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(output, total) << endl;
				total = trans;
			}
		}
		print(output, total) << endl;
	}
	else
	{
		cerr << "No data?!" << endl;
	}

	return 0;
}