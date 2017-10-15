#include "iostream.h"
int main(void)
{
	int n;
	cout<<("%d", &n);
	if (n % 37 == 0)
		cout<<("YES");
	else
		cout<<("NO");
	return 0;
}
