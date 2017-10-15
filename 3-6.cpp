#include <iostream.h>  
#include <conio.h>  
 
#define PI 3.14 
 
void main()                  
{ 
 int r = 0;   
 int k = 0; 
 
 cout<<("请输入半径r: \n"); 
 cout<<("%d",&r); 
 
 cout<<("\n\n请输入处理要求\n  1. 计算圆的面积 \n  2. 计算圆的周长\n  3. 计算圆的周长和圆的面积 \n"); 
 cout<<("%d",&k); 
 
 while(1) 
 { 
 switch(k) 
 { 
 case 1: 
  cout<<("圆的面积为: %.2f\n",PI*r*r);  
  break; 
 case 2: 
  cout<<("圆的周长为: %.2f\n",2*PI*r);  
  break; 
 case 3: 
  cout<<("圆的面积为: %.2f\n",PI*r*r);   
  cout<<("圆的周长为: %.2f\n",2*PI*r);   
  break; 
 default: 
  cout<<("错误要求!! \n"); 
  break; 
 } 
 
 cout<<("\n\n请输入处理要求\n  1. 计算圆的面积 \n  2. 计算圆的周长\n  3. 计算圆的周长和圆的面积 \n"); 
 cout<<("%d",&k); 
 } 
 
 getch(); 
}