#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int sign(float);
void main()
{
   int x1,x2,y2,y1,i,j,in,dx,dy;
   printf("enter p1 p2");
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	    dx=abs(x2-x1);
	    dy=abs(y2-y1);
	     s1=sign(x2-x1);
	     s2=sign(y2-y1);


}
int sign(float a)
{ if(a>0) return 1;
else if(a<0) return -1;
else if(a=0) return 0;
}