#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,i,j;
	cin>>m;
	int arr[m][m];
for(i=0;i<m;++i)
{
	for(j=0;j<m;++j)
	{
		cin>>arr[i][j];
	}
}

for(int i=0;i<m/2;++i)
{
	for(j=i;j<m-i-1;++j)
    {
     cout<<arr[i][j]<<" ";
    }
    for(j=i;j<m-i-1;++j)
    {
      cout<<arr[j][m-i-1]<<" ";
    }
    for(j=m-i-1;j>i;--j)
    {
    	cout<<arr[m-i-1][j]<<" ";
    }
    for(j=m-i-1;j>i;--j)
    {
    	cout<<arr[j][i]<<" ";
    }
}

if(m%2==1) cout<<arr[m/2][m/2];




}