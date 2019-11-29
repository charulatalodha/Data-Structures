#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int sign(float);
void main()
{  int gm,gd=DETECT;
   int x1,x2,y2,y1,i=1,j,in,x,y,e,s1,s2,temp,ch;
   int dx,dy;
   initgraph(&gd,&gm,"c:\\tcp\\bgi");
   printf("enter p1 p2");
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	    dx=abs(x2-x1);
	    dy=abs(y2-y1);
	     s1=sign(x2-x1);
	     s2=sign(y2-y1); x=x1;y=y1;

      if(dx < dy)
      {  temp=dx; dx=dy; dy=temp; in=1;
      }
      else
	  in=0;

      e=2*dy-dx;
      printf("enter 1:dot 2:dash 3:simple 4:thick");
	   scanf("%d",&ch);
	 while(i!=dx)
	 {
	  switch(ch)
	    { case 1: if(i%2==0)
		   putpixel(floor(x),floor(y),RED);
		   break;
	     case 2: if(i%10!=0)
		 putpixel(floor(x),floor(y),YELLOW);
			break;
	     case 3:
		 putpixel(floor(x),floor(y),GREEN);
		  break;
	     case 4:
		 putpixel(floor(x),floor(y),RED);
		 putpixel(floor(x+1),floor(y+1),RED);
		putpixel(floor(x),floor(y+1),RED);
		  putpixel(floor(x+1),floor(y),RED);

		 break;

	      }
		  while(e>=0)
		  {  if(in==1)  x+=s1;
		      else y+=s2;
		      e=e-2*dx;
		  }

	       if(in==1) y+=s2;
	       else   x+=s1;
	       e=e+2*dy;
	       i++;
       }
      printf("done");
      getch();
}



int sign(float a)
{ if(a>0)
    return 1;
else if(a<0)
   return -1;
else
 return 0;
}