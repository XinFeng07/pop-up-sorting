#include<iostream>
#include<cstdio>
using namespace std;
int a[1000],n;
void n_2()
{
	for (int i=1;i<=n;i++)
	{
		for (int j=i;j<=n;j++)
		{
			if (a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int main()
{
	cout<<"请在第一行输入数对个数，再在第二行输入你需要排列的数字，用空格间隔"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	n_2();
	for (int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
