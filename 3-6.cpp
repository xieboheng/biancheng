#include <iostream.h>  
#include <conio.h>  
 
#define PI 3.14 
 
void main()                  
{ 
 int r = 0;   
 int k = 0; 
 
 cout<<("������뾶r: \n"); 
 cout<<("%d",&r); 
 
 cout<<("\n\n�����봦��Ҫ��\n  1. ����Բ����� \n  2. ����Բ���ܳ�\n  3. ����Բ���ܳ���Բ����� \n"); 
 cout<<("%d",&k); 
 
 while(1) 
 { 
 switch(k) 
 { 
 case 1: 
  cout<<("Բ�����Ϊ: %.2f\n",PI*r*r);  
  break; 
 case 2: 
  cout<<("Բ���ܳ�Ϊ: %.2f\n",2*PI*r);  
  break; 
 case 3: 
  cout<<("Բ�����Ϊ: %.2f\n",PI*r*r);   
  cout<<("Բ���ܳ�Ϊ: %.2f\n",2*PI*r);   
  break; 
 default: 
  cout<<("����Ҫ��!! \n"); 
  break; 
 } 
 
 cout<<("\n\n�����봦��Ҫ��\n  1. ����Բ����� \n  2. ����Բ���ܳ�\n  3. ����Բ���ܳ���Բ����� \n"); 
 cout<<("%d",&k); 
 } 
 
 getch(); 
}