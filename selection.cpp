#include<iostream>
using namespace std;
void selection(int arr[],int len)
{
	int j;
for(int i=0;i<len;i++)

{
	int chotu=i;
	for (int j=i;j<len-1;j++)

	{
		if(arr[chotu]>arr[j+1])
		{
			chotu=j+1;
		}
	}
	if(chotu!=i)
	{
		int tmp;
		tmp=arr[i];
		arr[i]=arr[chotu];
		arr[chotu]=tmp;
		}
}
for (int i=0;i<len;i++)
{
	cout<<arr[i]<<"\t";
}
}
int main(){
	int arr[]={ 4,5,8,9,1,2};
	int s=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<s;i++)
	{
		cout<<arr[i]<<"\t";
	}
		cout<<"\nafter selection"<<"\n";
		selection(arr,s);
	}