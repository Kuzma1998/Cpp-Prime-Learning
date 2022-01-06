/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-07 20:30:06
 */


// > 在本节对名册（roster）调用equal 的例子中，如果两个名册中保存的都是C风格字符串而不是string，会发生什么？


// equal使用==运算符比较两个序列中的元素。string类重载了==，
// 可比较两个字符串是否长度相等且其中元素对位相等。而C风格字符串本质是char*类型，
// 用==比较两个char*对象，只是检查两个指针值是否相等，即地址是否相等，而不会比较其中字符是否相等。
// 所以，只有当两个序列中的指针都指向相同的地址时，equal才会返回ture。否则即使字符串内容完全相同，也会返回false。


#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<list>
using namespace std;

char* strdup (const char* s)
{
  size_t slen = strlen(s);
  char* result = (char*)malloc(slen + 1);
  if(result == NULL)
  {
    return NULL;
  }

  memcpy(result, s, slen+1);
  return result;
}

int main()
{
	//1111111111111111111111111111111111111111111111111111111111111111111
	list<const char*>cclist = { "hello","world","hello" };
	list<const char*> cclist2 = { "hello","world","hello" };
	bool svec_equal_cclist2 = equal(cclist.cbegin(), cclist.cend(), cclist2.cbegin());
	cout << "svec_equal_cclist2= " << svec_equal_cclist2 << endl;
	//2222222222222222222222222222222222222222222222222222222222222222222
	const char *p[]= { "hello","world","hello" };
	const char *q[]= { strdup(p[0]),strdup(p[1]),strdup(p[2])}; // 拷贝因此地址不一样
	const char* r[] = { p[0],p[1],p[2] };
	bool p_equal_q = equal(begin(p), end(p), begin(q));
	bool p_equal_r = equal(begin(p), end(p), begin(r));
	cout << "p_equal_q= " << p_equal_q << endl;
	cout << "p_equal_r= " << p_equal_r << endl;
	
	return 0;
}