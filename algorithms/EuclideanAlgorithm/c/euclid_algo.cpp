#include <stdio.h>
#define ll int
using namespace std;
ll _g_c_d(ll num1,ll num2)
{
	if(num1==0) return num2;
	else
	return _g_c_d(num2%num1,num1);
}
int main() {
	ll tc;
	scanf("%d",&tc);
	while(tc--)
	{
		ll n1,n2;
		scanf("%d %d",&n1,&n2);
		ll ans=_g_c_d(n1,n2);
	  printf("Greatest common divisor of %d and %d is %d\n",n1,n2,ans);
	}
	return 0;
}
