/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 17:24:26
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 17:24:27
 */
> 下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，描述其执行结果；对于不正确的，说明其错误的原因。

vector<vector<int>> ivec;         // 在C++11当中合法
vector<string> svec = ivec;       // 不合法，类型不一样
vector<string> svec(10, "null");  // 合法