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
	cout<<"���ڵ�һ���������Ը��������ڵڶ�����������Ҫ���е����֣��ÿո���"<<endl;
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
