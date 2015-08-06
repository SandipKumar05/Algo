#include <iostream>

using namespace std;
int main()
{
	int a;
	cin >> a;
	while(a--)
	{
	  	int n,m;
	  	cin >> n>>m;
	  	int prime[m+2];
	  	
	  	for (int i = 0; i <= m; ++i)
	  	{
	  		prime[i]=1;
	  	}
	  	prime[0]=0;
	  	prime[1]=0;
	  	prime[2]=1;
	  	for (int i = 2; i <= m; ++i)
	  	{
	  		if(prime[i]==1)
	  		{
	  			int j=2;
	  			while(j*i <= m)
	  			{
	  				prime[j*i] = 0;
	  				j++;
	  			}
	  		}
	  	}
	  	for (int i = n; i <= m; ++i)
	  	{
	  		if(prime[i]==1) cout << i<<'\n';
	  	}
	  	cout <<'\n';
	}
	return 0;
}