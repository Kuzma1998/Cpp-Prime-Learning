<!--
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 19:30:46
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:16:47
-->

# string  
&ensp;&ensp;标准库类型`string`表示可变长的字符序列。
```cpp
#include<string>
using std::string;
// 使用string类型必须先包含头文件，然后std定义在名称空间std里面。
```
- **string对象**：注意，不同于字符串字面值如`"hello"`，它们不是一个东西。

## 定义和初始化string对象

初始化`string`对象的方式：

| 方式 | 解释 |
| -- | -- |
| `string s1` | 默认初始化，`s1`是个空字符串 |
| `string s2(s1)` | `s2`是`s1`的副本 |
| `string s2 = s1` | 等价于`s2(s1)`，`s2`是`s1`的副本 |
| `string s3("value")` | `s3`是字面值“value”的副本，除了字面值最后的那个空字符外 |
| `string s3 = "value"` | 等价于`s3("value")`，`s3`是字面值"value"的副本 |
| `string s4(n, 'c')` | 把`s4`初始化为由连续`n`个字符`c`组成的串 |

- 拷贝初始化（copy initialization）：使用等号`=`将一个已有的对象拷贝到正在创建的对象。
- 直接初始化（direct initialization）：通过括号给对象赋值。
- 初始化和赋值也不同，赋值时原来的对象已经存在，初始化要先定义一个对象为他申请内存再复制。

## string对象上的操作
`string`的操作：

| 操作 | 解释 |
|-----|-----|
| `os << s` | 将`s`写到输出流`os`当中，返回`os` |
| `is >> s` | 从`is`中读取字符串赋给`s`，字符串以空白分割，返回`is` |
| `getline(is, s)` | 从`is`中读取一行赋给`s`，返回`is` |
| `s.empty()` | `s`为空返回`true`，否则返回`false` |
| `s.size()` | 返回`s`中字符的个数 |
| `s[n]` | 返回`s`中第`n`个字符的引用，位置`n`从0计起 |
| `s1+s2` | 返回`s1`和`s2`连接后的结果 |
| `s1=s2` | 用`s2`的副本代替`s1`中原来的字符 |
| `s1==s2` | 如果`s1`和`s2`中所含的字符完全一样，则它们相等；`string`对象的相等性判断对字母的大小写敏感 |
| `s1!=s2` | 同上 |
| `<`, `<=`, `>`, `>=` | 利用字符在字典中的顺序进行比较，且对字母的大小写敏感 |

- string io：
    - 执行读操作`>>`：忽略掉开头的空白（包括空格、换行符和制表符），从真正的第一个字符读起直到遇到下一处空白为止。
    - `getline`：读取一整行，**包括空白符**，遇到换行符就是下一行。
- 字符串字面值和string是不同的类型。

```cpp
cin>>string;// 假设输入"  hello word" 那么string等于hello
while(cin >> string){
    cout<<string<<enl;//假设输入"  hello word";先输出hello，换行再输出word，这就是以空格间隔的含义。会跳过空格读取第一个非空格
}

while(getline(cin, word)){
    cout<<word<<" "<<endl; // 假设输入"  hello word"，那么word就是"  hello word"输出这一行，不会跳过最开头的空格
    // 包括中间的空格也读入，然后换行符，回车之后就是代表读入下一行
    }
```

- s.size()函数返回的类型时std::size_type而不是int,是无符号的整形。
- == 判断两个字符串是否相等，长度与所包含的字符全都相同。
- 不等于：当两个string长度不同，而且较短的string对象每个字符都与较长的string对象对应位置的字符相同，叫说明较短的小于较长的。
  如果两个string对象在某些对应位置不一致，则比较的结果是第一对相异字符的结果
- 字面值与string相加可以得到string类型，若用字面值类型与string相加给string类型初始化必须保证+两边至少有一个string类型。

## 处理string对象的字符


| 函数 | 解释 |
|-----|-----|
| `isalnum(c)` | 当`c`是字母或数字时为真 |
| `isalpha(c)` | 当`c`是字母时为真 |
| `iscntrl(c)` | 当`c`是控制字符时为真 |
| `isdigit(c)` | 当`c`是数字时为真 |
| `isgraph(c)` | 当`c`不是空格但可以打印时为真 |
| `islower(c)` | 当`c`是小写字母时为真 |
| `isprint(c)` | 当`c`是可打印字符时为真 |
| `ispunct(c)` | 当`c`是标点符号时为真 |
| `isspace(c)` | 当`c`是空白时为真（空格、横向制表符、纵向制表符、回车符、换行符、进纸符） |
| `isupper(c)` | 当`c`是大写字母时为真 |
| `isxdigit(c)` | 当`c`是十六进制数字时为真 |
| `tolower(c)` | 当`c`是大写字母，输出对应的小写字母；否则原样输出`c` |
| `toupper(c)` | 当`c`是小写字母，输出对应的大写字母；否则原样输出`c` |

- 遍历字符串：使用**范围for**（range for）语句： `for (auto c: str)`，或者 `for (auto &c: str)`使用引用直接改变字符串中的字符。
  使用下标运算符[]也可以该百年字符串中的字符，[]接受的是size_type类型的数据。
- c++ &&运算符只要当&&左侧为真才会检查右侧！