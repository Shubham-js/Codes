#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int x;
	cin>>x;
	int result=interpolation(ar,n,x)
	if(result!=-1)
	{
		cout<<result<endl;
	}
	else{
		cout<<"Not present"<<endl;
	}
	return 0;
}
int interpolation(int ar[],int n,int x)
{
	int l=0,h=n-1;
	while(l<=h && x>=ar[l]&&x==arr[h])
	{
		if(l==h)
		{
			if(ar[l]==x)
			{
				return l;
			}
			return -1;
		}
		int pos =l+((double)(x-ar[l])*(h-l))/(ar[h]-ar[l]);
		if(ar[pos]==x)
		{
			return pos;

		}
		else if(ar[pos]<x)
		{
			l=pos+1;
		}
		else
		{
			h=pos-1;
		}
	}
	return -1;
}
		