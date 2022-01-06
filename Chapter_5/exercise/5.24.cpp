/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-25 09:27:33
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-25 09:30:23
 */
// 修改你的程序，使得当第二个数是0时抛出异常。先不要设定`catch`子句，运行程序并真的为除数输入0，看看会发生什么？

#include <iostream>
#include <stdexcept>

int main()
{
    int i, j;
    std::cin >> i >> j;
    // if (j == 0)
    //     throw std::runtime_error("divisor is 0");
    std::cout << i / j << std::endl;

    return 0;
}