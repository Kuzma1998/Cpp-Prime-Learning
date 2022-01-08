/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-09 18:58:23
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-09 19:05:03
 */

#ifndef CP5_ex7_23_h
#define CP5_ex7_23_h
#include<string>

class Scree{
public:
    using pos = string::size_type;
    Scree() = default;
    Screen(pos ht, pos wd, char c): height(ht),width(wd),content(ht*wd,c) {}// cursor使用类内初始值初始化
    char get() const {return content[cursor];}
    char get(pos r,pos c) const {return content[r*width+c];}

private:
    pos cursor=0;
    pos height=0,width=0;
    std::string contents;
};


#endif