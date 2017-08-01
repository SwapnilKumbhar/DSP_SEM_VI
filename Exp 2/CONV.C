#include<stdio.h>

int DEBUG = 1;

int inputSequence(int*);
void linearConvo(int*,int,int*,int,int*);
void initZero(int*,int);

void main()
{
	int x[50],y[50],z[50];
	int szX,szY;

	clrscr();

	printf("For Sequence X:\n");
	szX = inputSequence(x);

	printf("For Sequence Y:\n");
	szY = inputSequence(y);

	initZero(z,50);

	linearConvo(x,szX,y,szY,z);

	getch();

}

int inputSequence(int* x)
{
	int sz,i;
	printf("Enter the size of sequence: ");
	scanf("%d",&sz);
	printf("Enter the sequence: ");
	for(i=0;i<sz;i++)
		scanf("%d",&x[i]);
	printf("Enter start position: ");
	scanf("%d",&x[sz]);		//Save origin as last element
	return sz;
}

void linearConvo(int* x, int szX, int* y, int szY, int* z)
{
	int i,j;
	int mat[100][100];

	for(i=0;i<szY;i++)
		for(j=0;j<szX;j++)
			mat[i][j] = y[i] * x[j];

	if(DEBUG)
	{
		for(i=0;i<szY;i++)
		{
			for(j=0;j<szX;j++)
				printf("%d\t",mat[i][j]);
			printf("\n");
		}

	}

	for(i=0;i<szY;i++)
	{
		for(j=0;j<szX;j++)
		{
			z[i+j]+=mat[i][j];
		}
	}

	if(DEBUG)
	{
		printf("\n");
		for(i=0;i<szX+szY-1;i++)
			printf("%d\t",z[i]);
	}

}

void circleConvo(int* x, int szX, int* y, int szY, int* z)
{
	int i,j;

	while(szX<szY)
		x[szX++] = 0;
	while(szY<szX)
		y[szY++] = 0;

	// REVERSE TRAVERSE THE ARRAY

}

void initZero(int* x, int szX)
{
	int i;
	for(i=0;i<szX;i++)
		x[i] = 0;
}