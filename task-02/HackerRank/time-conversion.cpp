#include<iostream>
using namespace std;
int main()
{
    int h,m,s;
    char cr,ch;
    cin>>h>>cr>>m>>cr>>s>>ch;
    if(h==12 && ch=='A')
    {
        cout<<"00"<<":"<<m<<":"<<s;
        return 0;
    }
    if(ch=='P')
        h=h+12;
    if(h<10)
        cout<<"0"<<h<<":";
    else
        cout<<h<<":";
    if(m<10)
        cout<<"0"<<m<<":";
    else
        cout<<m<<":";
    if(s<10)
        cout<<"0"<<s;
    else
        cout<<s;
    return 0;
}
