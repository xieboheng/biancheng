#include<iostream.h>
#include<math.h>
void main()
{
          double a,b,c,d,s,q;
          cout<<("输入三边长");
          cout<<("%d%d%d",&a,&b,&c);
          d=fabs(a-b);
          if(d<c&&a+b>c)
         {
              q=(a+b+c)/2;
               cout<<("%f",s=sqrt(q*(q-a)*(q-b)*(q-c)));
         }
           else
                cout<<("非三角形");
         }



