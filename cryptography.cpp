# include <cstdio>
# include <iostream>
# include <cstring>
# define Mx 200000
using namespace std;
int ans[Mx];
bool prime[Mx];
void seive()
{
	for(int i=4;i<=Mx;i=i+2)
	{
		prime[i]=false;
	}
	for(int i=3;i*i<=Mx;i+=2)
	{
		if (prime[i]==true)
		{
			for(int j=i*i;j<=Mx;j+=i+i)
			{
				prime[j]=false;
			}
		}
	}
	int cot=0;
	for(int i=2;i<=Mx;i++)
	{
		if (prime[i]==true)
		{
			ans[cot]=i;
			cot++;
		}
	}
}
int main()
{
	//freopen("in.text","r",stdin);
	memset(prime,true,sizeof prime);
	seive();
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",ans[n-1]);
	}
	return 0;
}
