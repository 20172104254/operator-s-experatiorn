// operator's experatiorn.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int f,int i);
	void display();
	CFeet operator-(CFeet &a);
};
void CFeet::setvalue(int f,int i)
{
	feet = f + i / 12;
	inches =i%12;
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet CFeet::operator-(CFeet&a)
{
	CFeet temp;
	
	temp.setvalue(feet - a.feet, inches-a.inches);
	
	
	return temp;
}

int main()
{
	CFeet A, B, C;
	A.setvalue(2, 2);
	B.setvalue(1,1);
	C = B - A;
	C.display();
    return 0;
}

