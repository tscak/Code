#include<iostream>
using namespace std;
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作
class person{
public:
       person()
       {
        cout<<"person的默认构造函数调用"<<endl;
       }
       person(int age)
       {
        m_age=age;
        cout<<"person的有参构造函数调用"<<endl;
       }
       ~person()
       {
         cout<<"person的析构函数调用"<<endl;
       }
       int m_age;
};
void test01()
{
    person p1(18);
    cout<<"p1的年龄为:"<<p1.m_age<<endl;
}
int main()
{
     test01;
    system("pause");
    return 0;
}