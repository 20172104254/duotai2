// duotai2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CBace//抽象类(包含纯虚函数的类)
{
public:
	virtual void test() = 0;//纯虚函数(无函数体)
	virtual void display()//虚函数
	{
		cout << "jilei" << endl;
	}
};
class CDervite :public CBace
{
public:
	void test()
	{

	}//如不把纯虚函数写出来,派生类是不能创建对象的
	void display()
	{
		//CBace::display();
		cout << "paishenglei" << endl;
	}//函数覆盖
};


int main()
{
	CBace *p;//抽象类不能实例化,就是不能创建对象,是用来继承的
	CDervite obj1;
	p = &obj1;//基类指针能指向派生类对象
	p->display();//动态绑定
	p->CBace::display();//预作用预符
    return 0;
}

