#include<iostream>
using namespace std;

class person()
{
    person()
    {
        cout<<"没招了"<<endl;
    }
    ~person()
    {
        cout<<"有招了"<<endl;
    }
}
int main()
{
    system("pause");
    return 0;
}