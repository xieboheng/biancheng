#include<iostream.h>
void main()
{
	int i;
	cout<<"请输入数字"<<endl;
	cin>>i;
	if(i>=100)
		if(i>=1000)
			cout<<"1000以上"<<endl;
		else
			cout<<"100-999"<<endl;
	else
		if(i>=10)
			cout<<"10-99"<<endl;
		else
			cout<<"小于10"<<endl;
}
