#include<stdio.h>

void drawline(int, int, int, int);
int main()
{
	int x1, y1, x2, y2;
	printf("Enter co-ordinates of first point: (X1,Y1) ");
	scanf("%d%d", &x1, &y1);
 
	printf("Enter co-ordinates of second point: (X2,Y2) ");
	scanf("%d%d", &x2, &y2);
	
	drawline(x1,y1,x2,y2);
	return 0;
}
 
void drawline(int x1, int y1, int x2, int y2)
{
	int dx=x2-x1;
	int dy=y2-y1;
 
	int x=x1;
	int y=y1;
 
	int p=2*dy-dx; //pixel parameter
 
	while(x<x2)
	{
		if(p<0)
		{
			p=p+2*dy;
			x=x+1;
		}
		else
		{
		    p=p+2*dy-2*dx;
		    x=x+1;
		    y=y+1;
		}
		printf("\n %d %d",x,y); //line drawing points
	}
}
