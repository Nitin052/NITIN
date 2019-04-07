#include<stdio.h>
#include<stdlib.h>
int main()
{
	int q[5000],n,h,d,dist=0;
	printf("Enter the size of queue= ");
	scanf("%d",&n);
	printf("Enter the element in the queue=");
	for (int i=1;i<=n;i++)
	{
	scanf("%d",&q[i]);
    }
	printf("Enter the head element=");
	scanf("%d",&h);
	q[0]=h;
	for(int j=0;j<n;j++)
	{
		d=abs(q[j+1]-q[j]);
		dist=dist+d;
	}
	printf("Total distance=%d",dist);
}
