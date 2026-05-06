#include<iostream>
#include<string>
using namespace std;
//类对象作为类成员
class phone{
public:
    phone(string pname)
    {
        p_name=pname;
    }
    string p_name;
};
class person{
    public:
    person(string name,string pname):m_name(name), m_phone(pname)
    {
        cout<<"名字是："<<m_name<<"手机是："<<m_phone.p_name<<endl;
    }
    string m_name;
    phone m_phone;
    
};
//当其他类对象作为本类成员时，构造先构造类对象，再构造自身，析构顺序与构造相反。
void test1()
{
    person p("张三","rog");
}
int main(){

    test1();
    return 0;
}