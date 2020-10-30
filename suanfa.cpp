#include <iostream>

using namespace std;
 
int f(int n,int m)
{
    if(m==1||n==m)
        return 1;
    else
        return f(n-1,m-1)+f(n-1,m)*m;
}
 
int main(void)
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        int sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=f(n,i);
        }
        cout<<sum<<endl;
    }
    system("pause");
    return 0;
}