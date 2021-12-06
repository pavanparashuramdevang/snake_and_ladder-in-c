//this is the game on snake ladder
//here we use random number generator based on time 
#include <stdio.h>
#include<stdlib.h>
#include<time.h>


//the board only takes the input and random number and only prints the board
//logic is in main function

int board(int a,int b,int ran)
{int i,j;
	system("clear");
	printf("the random number is %d\n",ran);
	for(i=0;i<10;i++)
	{
		for (j=0;j<10;j++)
		
		{
			if(a==((10*i)+j)&& b==((10*i)+j))
			{printf("\t&");}

		else if(a==((10*i)+j))
			{printf("\t#");}
		else if(b==((10*i)+j))
			{printf("\t$");} 
	 	else  if((((14)==(10*i)+j)||(37==10*i+j)||(56==10*i+j)||(91==10*i+j)))
				{printf("\t^");}
		else if(((10*i)+j)==(9)||(25==10*i+j)||(52==10*i+j)||(79==10*i+j))
				{printf("\t:");}


		else
			{printf("\t@");}
		}
		printf("\n\n");
	}
}



int main()
{
int ran,a=0,b=0,flag=0;
char ch;
srand(time(NULL));
while(a!=100&&b!=100)

{
	ran=(rand()%(6-1+1))+1;

	if (flag==0)
	{	printf("its first person turn\nenter anything to roll dice\n");
		scanf("%c",&ch);
	
		if(ch=='\n')
		{

		a=a+ran;
		flag=1;
		if(a>100)
		{a=a-ran;}
		else
		{
		switch (a)
		{
			case 15:a=a-10;
				break;
			case 38:a=a-13;
				break;
			case 57:a=a-26;
				break;
			case 92:a=a-57;
				    break;
			case 10:a=a+17;
				break;
			case 26:a=a+17;
				break;
			case 53:a=a+17;
				break;

			case 80:a=a+16;
				break;
				
			default :a=a;
				 break;
		}}

	}

	}
	else
	{
		printf("its second persons turn\nenter anything to continue\n");
		scanf("%c",&ch);
		if(ch=='\n')
		{
		b=b+ran;
		flag=0;
		if(b>100)
		{b=b-ran;}
		else
		{
		switch(b)
		{
			case 15:b=b-10;
				break;
			case 38:b=b-13;
				break;
			case 57:b=b-26;
				break;
			case 92:b=b-57;
				    break;
			case 10:b=b+17;
				break;
			case 26:b=b+17;
				break;
			case 53:b=b+17;
				break;

			case 80:b=b+16;
				break;
			default : b=b;
				  break;
		}}
	}
	
	}
	board(a-1,b-1,ran);
}
if (flag==0)
	printf("the winner is second person,i.e $\n");
else
	printf("the winner is first  person,i.e #\n");


}
	
