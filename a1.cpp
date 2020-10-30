#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>
using namespace std;

int main()
{
//FILE *p,*q;
ifstream p;
p.open("D:\\result\\a.txt");
int flag=2;
string a;
string ext="D:\\result\\";
while(flag--)
{
    /*p>>a;
    ext+=a;ext+=".c";
    //cout<<ext<<endl;
    a=ext;
    ext="D:\\result\\1\\";*/
    a="D:\\result\\test.txt";
    ifstream is; //输入流
    is.open(a.c_str());
    istream_iterator<string> ii(is);
    istream_iterator<string> eos;
    vector<string>b (ii,eos); //将文件的内容存入容器中
    vector<string>::iterator it; //使用迭代器
    string str="a";
    
    for(it = b.begin();it<b.end();it++)
    {
        //cout<<*it;
        if(str==*it)
        {
            *it=" ";
            //break;
        }
    }
    cout<<endl;
    for(it = b.begin();it<b.end();it++)
    {
        cout<<*it;
    }
    //it=b.end();it--;*it="";
    ofstream wr(a.c_str(),ios::out); 
    for(it=b.begin() ; it<b.end();it++) //重新写回文件
    {
        wr << *it <<endl;
        //cout <<*it<< endl;
    }
}
system("pause");
return 0;
} 