#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int i,low,high;
	cout<<"enter lower number: ";
	cin>>low;
	cout<<"enter higher bound: ";
	cin>>high;
	for(i=low;i<=high;i++)
	{
		if(sqrt(i)==(int)sqrt(i))
		{
			if(i==100)
			{
				//continue;
				break;
			}
			cout<<i<<"   ";
		}
	}
	
}

