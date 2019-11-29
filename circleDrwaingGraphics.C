#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>


void main()
{  int gm,gd=DETECT;
   int i,d,j,in,x=0,y,r,lim=0,h,k;
   int dx,dy;
   initgraph(&gd,&gm,"c:\\tcp\\bgi");
   printf("enter radius");
   scanf("%d",&r);
    x=0;  y=r; i=2*(1-r);
	 h=100;k=100;
     while(y>=lim)
  {     putpixel(floor(x+h),floor(y+k),1);
	putpixel(floor(h-x),floor(y+k),2);
	putpixel(floor(h-x),floor(k-y),3);
	putpixel(floor(h+x),floor(k-y),4);
     if(i<0)
     {	d=2*(i+y)-1;

       if(d<=0)
	  { x++; i=i+(2*x)+1; }
	else
	 { x++;y--; i=i+2*(x-y+1); }
      }
       else if(i>0)
       {    d=(2*i)-(2*x)-1;

	  if(d<=0)
	   { x++;y--; i+=2*(x-y+1);}
	  else
		{  y--; i=i-2*y+1; }
      }

     else
      {   x++;y--; i+=2*(x-y+1);
      }
   } //end while
   getch();
   }