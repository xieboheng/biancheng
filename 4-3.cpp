
#include<iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"Please enter number:";
cin>>n; /*输入任一整数*/
do{
if(n%2)
{
n=n*3+1; /*若为奇数，n乘3加1*/
++count;
cout<<"["<<count<<"]:"<<(n-1)/3<<"*3+1="<<n<<endl;
}
else
{
n/=2; /*若为偶数n除以2*/
++count;
cout<<"["<<count<<"]:"<<2*n<<"/2="<<n<<endl;
}
}while(n!=1); /*n不等于1则继续以上过程*/
}