#include"iostream.h"
void main()
{ 
 int i,num=0,j=0;
 for(i=2000;i<=3000;i++)
 {
  if((i%4==0&&i%100!=0)||(i%400==0))
  {
   
   cout<<("%d ",i);
   j++;
   num++;
  }
  if(j==10){cout<<("\n");j=0;}
 }
 cout<<("\n num is %d",num);
}



