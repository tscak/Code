#include<iostream>
using namespace std;
class person{
    public:
    //初始化列表初始化属性
    person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
    {

    }
    int m_A,m_B,m_C;
};
void test1()
{
    person p(30,20,10);
    cout<<"m_A="<<p.m_A<<endl;
}
int main()
{

    system("pause");
    return 0;
}