/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 18:59:30
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 19:00:34
 */
// > 如果想定义一个含有10个元素的vector对象，所有元素的值都是42，请例举三种不同的实现方法，哪种方式更好呢？

vector<int> v1(10,42);
vector<int> v2{42,42,42,42,42,42,42,42,42,42};
vector<int> v3;
for(int i=0; i<10;i++){
    v.push_back(42);
}
