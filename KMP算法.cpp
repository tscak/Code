#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 255
typedef struct String{
    char ch[MAXSIZE+1];
    int length;
}SString;

void get_next(SString T,int next[])
{
    int i=1;
    next[1]=0;
    j=0;
    while(i<T.length)
    {
        if(j==0||T,ch[i]==T.ch[j])
        {
            ++i;
            ++j;
            next[i]=j;
            else j=next[j];
        }
    }
}

int Index_KMP(SString S,SString T,int pos)
{
    int i,j; 
    i=pos;
    j=1;
    while(i<=S.length&&j<T.length)
    {
        if(j==0||S.ch[i]==T.ch[j])
        {
            ++i;
            ++j;
        }
        else j=next[j];
    }
    if(j>T.length)return i-T.length;
    else return 0;
}

int main(){

    system("pause");
    return0;
}