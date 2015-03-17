# include <iostream>
# include <cstdio>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.text","r",stdin);
    #endif // ONLINE_JUDGE
    int data[50];
    int n,k;
    cin>>n>>k;
     data[1]=k;
     data[2]=k*k-1;
    for(int i=3;i<=n;i++)
    {
        data[i]=(k-1)*(data[i-1]+data[i-2]);
    }
    cout<<(k-1)*data[n-1];
    return 0;
}
