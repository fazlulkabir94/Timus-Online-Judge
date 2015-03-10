# include <stdio.h>
# include <string.h>
int main()
{
	//freopen("in.text","r",stdin);
	int n;
	char str[30];
	scanf("%d",&n);
	scanf("%s",str);
	int k=strlen(str);
	int ans=1;
	while(n>=1)
	{
		ans*=n;
		n-=k;
	}
	printf("%d\n",ans);
	return 0;
}
