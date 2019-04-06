#include<stdio.h>
#include<stdlib.h>
int main()
{
	int queue[5000],n,c,head,diff,dist;
	printf("Enter the size of queue= ");
	scanf("%d",&n);
	printf("Enter the element in the queue=");
	for (int i=0;i<n;i++)
	{
	scanf("%d",&queue[n]);
    }
	printf("Enter the head position=");
	scanf("%d",&c);
	queue[0]=head;
	for(int j=0;j<n;j++)
	{
		diff=abs(queue[j+1]-queue[j]);
		dist=dist+diff;
	}
	printf("Total distance=%d",dist);
	
}

