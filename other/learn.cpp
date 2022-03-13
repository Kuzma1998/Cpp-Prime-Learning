#include <iostream>
#include <vector>
using namespace std;

// namespace ljx_inline{
// 		// 声明1（加 inline，建议使用）
// 	inline int functionName(int first, int second,...);
// 	// 声明2（不加 inline）
// 	int functionName(int first, int second,...);
// 	// 定义
// 	inline int functionName(int first, int second,...) {/****/};
// 	// 类内定义，隐式内联
// 	class A {
// 	int doA() { return 0; } // 隐式内联
// 	};
// 	// 类外定义，需要显式内联
// 	class A {
// 	int doA();
// 	};
// 	inline int A::doA() { return 0; } // 需要显式内联

// }

namespace ljx_pack
{
// 设定结构体、联合以及类成员变量以 n 字节方式对齐
#pragma pack(push) // 保存对齐状态
#pragma pack(4)	   // 设定为 4 字节对齐
	struct test
	{
		char m1;
		double m4;
		int m3;
	};
	void test1()
	{
		cout << sizeof(test) << endl; // 16字节，1+8+4对齐到4的倍数
	}
#pragma pack(pop) // 恢复对齐状态

}

namespace ljx_constructor
{
	class A
	{
		int a;

	public:
		A(int val) : a(val)
		{
			cout << "constructor list " << endl;
		}
	};



	struct S
	{
		vector<int> a;
		S(std::initializer_list<int> l) : a(l)
		{
			cout << "constructor list " << endl;
		}
	};
}

namespace RTT
{
	class Flyable // 能飞的
	{
	public:
		virtual void takeoff() = 0; // 起飞
		virtual void land() = 0;	// 降落
	};
	class Bird : public Flyable // 鸟
	{
	public:
		void foraging() {  } // 觅食
		virtual void takeoff() {  }
		virtual void land() {  }
		virtual ~Bird() {}
	};
	class Plane : public Flyable // 飞机
	{
	public:
		void carry() {  } // 运输
		virtual void takeoff() {  }
		virtual void land() { }
	};

	class type_info
	{
	public:
		const char *name() const;
		bool operator==(const type_info &rhs) const;
		bool operator!=(const type_info &rhs) const;
		int before(const type_info &rhs) const;
		virtual ~type_info();

	private:
	
	};

	void doSomething(Flyable *obj) // 做些事情
	{
		obj->takeoff();

		cout << typeid(*obj).name() << endl; // 输出传入对象类型（"class Bird" or "class Plane"）

		if (typeid(*obj) == typeid(Bird)) // 判断对象类型
		{
			Bird *bird = dynamic_cast<Bird *>(obj); // 对象转化
			bird->foraging();
			cout<<"bird"<<endl;
		}

		obj->land();
	}
	void test()
	{
		Bird *b = new Bird();
		doSomething(b);
		delete b;
		b = nullptr;
		return ;
	}
}

int main()
{
	// ljx_pack::test1();
	ljx_constructor::A t = 3;
	// ljx_constructor::S s = {1, 2, 3};
	// RTT::test();
	
}