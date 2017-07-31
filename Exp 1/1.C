#include<stdio.h>
#include<graphics.h>

int main(){
	int gd=DETECT,gm;
	int xm=640,ym=480;
	int i,ch;
	clrscr();

	printf("-------BASIC SIGNALS-------\
		\n1. Unit Ramp Signal.\
		\n2. Unit Impulse.\
		\n3. Unit Step Signal.\
		\nChoice: ");
	scanf("%d",&ch);
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	// DRAW AXES

	line(0,240,640,240);
	line(320,0,320,480);

	// SET COLOR TO DIFFERENTIATE SIGNAL FROM AXES

	setcolor(RED);
	switch(ch)
	{       case 1:
		for(i=0;i<100;i+=10)
			line(xm/2+i,ym-240,xm/2+i,ym-240-i); //RAMP
		break;
		case 2:
		for(i=0;i<100;i+=10)
			line(xm/2+i,ym-240,xm/2+i,ym-280);  //UNIT
		break;
		case 3:
		line(xm/2,ym/2,xm/2,ym/2-ym/8);
		break;
		default:
			outtextxy(xm/2-50,ym/2,"Invalid Choice");
		break;
	}

	getch();
	closegraph();
	return 0;
}