// duotai2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CBace//������(�������麯������)
{
public:
	virtual void test() = 0;//���麯��(�޺�����)
	virtual void display()//�麯��
	{
		cout << "jilei" << endl;
	}
};
class CDervite :public CBace
{
public:
	void test()
	{

	}//�粻�Ѵ��麯��д����,�������ǲ��ܴ��������
	void display()
	{
		//CBace::display();
		cout << "paishenglei" << endl;
	}//��������
};


int main()
{
	CBace *p;//�����಻��ʵ����,���ǲ��ܴ�������,�������̳е�
	CDervite obj1;
	p = &obj1;//����ָ����ָ�����������
	p->display();//��̬��
	p->CBace::display();//Ԥ����Ԥ��
    return 0;
}

