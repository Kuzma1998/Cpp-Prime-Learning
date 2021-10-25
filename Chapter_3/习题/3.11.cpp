/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:43:46
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:43:46
 */


// > 下面的范围for语句合法吗？如果合法，c的类型是什么？

// const string s = "Keep out!";
// for(auto &c : s){ /* ... */ }

// 要根据for循环中的代码来看是否合法，c是string 对象中字符的引用，
// s是常量。因此如果for循环中的代码重新给c赋值就会非法，如果不改变c的值，那么合法。