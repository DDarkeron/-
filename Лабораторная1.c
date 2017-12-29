#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

void hoarasort(double* mas1, int first, int last)
{int ii, jj, x, temp;

if(first<last)
{
  x=first;
  ii=first;
  jj=last;
while(ii<jj)
{
while(mas1[ii]<=mas1[x]&&ii<last)
ii++;
while(mas1[jj]>mas1[x])
jj--;
if(ii<jj){
temp=mas1[ii];
mas1[ii]=mas1[jj];
mas1[jj]=temp;
}
}
temp=mas1[x];
mas1[x]=mas1[jj];
mas1[jj]=temp;
hoarasort(mas1,first,jj-1);
hoarasort(mas1,jj+1,last);
}
}

int main()
{
	srand((unsigned) time (NULL) );
	int i,c,cas,k;
	char j;
	double mas[j],mas1[j];
    float a;
	char d[20];
	int temp;
	char Nmax,Nmin;
	printf("Enter how many elemets do you want, not more than 100 and not less than 2\n");
do
{
	scanf("%s", &d);
	c=atof(d);
	if(c<2)
	printf("Enter bigger number\n");
	if(c>100)
	printf("Enter smaller number\n");
}while(c<2 || c>100);

  	printf("Enter 1, if you want to fill the stack by hand \n");
  	printf("Enter 2, if you want the stack to be filled automaticly\n");
   do
   {
   	
  	printf("Count must be 1 or 2\n");
  	scanf("%s", &d);
  	cas=atof(d);
  	
   }while(cas<1 || cas>2);
    switch(cas){
	
    case 1:	for(j=0;j<c;j++)
		{
			printf("Enter %c element of stack\n", j+1);
			scanf("%s", &d);
			a=atof(d);
			mas[j]=a;
			
		}
		break;
	case 2:
		for(j=0;j<c;j++)
		{
			a= -1000 + rand() % ((1000 + 1) + 1000);;
			mas[j]=a;
			
		}
		break;}
 	printf("\nYour stack is\n\n");
	for(j=0;j<c;j++)
	{
		
	printf("%c element of stack is %.0f\n",j+1 ,mas[j] );
	}
    printf("Enter 1, if want to delete same elements\n");
    printf("Enter 2, if don't want to delete same elements\n");
   do
   {
   	
  	printf("Count must be 1 or 2\n");
  	scanf("%s", &d);
  	cas=atof(d);
  	
   }while(cas<1 || cas>2);
   switch(cas){
   	case 1:

	
	for(i=0;i<c;i++){
	for(j=i+1;j<c;)
    {
    	if(mas[j]==mas[i])
    	{
    		
    		for(k=j;k<c;k++)
			{
    			mas[k]=mas[k+1];
    			c--;
			}
		}else j++;
	}
}
    break;
    case 2:break;  
}
    printf("\nYour stack is\n\n");
	for(j=0;j<c;j++)
	{
		
	printf("%c element of stack is %.0f\n",j+1 ,mas[j] );
	}
	printf("Enter 1, if you want to sort stack by bubble\n");
	printf("Enter 2, if you want to sort stack by Hoara's method\n");
   do
   {
   	
  	printf("Count must be 1 or 2\n");
  	scanf("%s", &d);
  	cas=atof(d);
  	
   }while(cas<1 || cas>2);
   switch(cas)
   {
   	case 1:
   		for(i=c-1;i>=0; i--)
   		{
   			for(j=0; j<1; j++)
   			{
   				if(mas[j]>mas[j+1])
   				{
				temp = mas[j];
   				mas[j]=mas[j+1];
   				mas[j+1]=temp;
				   }
			   }
		   }
   	break;
   	case 2:
	hoarasort(mas, 0, c-1);
   	break;
   }
   	
	printf("\nYour stack is\n\n");
	for(j=0;j<c;j++)
	{
		
	printf("%.0f\t",mas[j] );

	}
		printf("\n");
	printf("Enter number of max count\n");
   do
   {	
  	printf("Number must be bigger than 0 and smaller than max number of elemets\n");
  	scanf("%s", &d);
  	Nmax=atof(d);
  	
   }while(Nmax<0 || Nmax>c);
   
   printf("Enter number of min count\n");
   do
   {	
  	printf("Number must be bigger than 0 and smaller than max number of elemets\n");
  	scanf("%s", &d);
  	Nmin=atof(d);
  	
   }while(Nmin<0 || Nmin>c);
   
 	printf("\nYour stack is\n\n");
	for(j=0;j<c;j++)
	{
		
	printf("%.0f\t",mas[j] );
	}
		printf("\n");
   printf("Your max number is %d\n",mas[c-Nmax]);	
   printf("Your min number is %d\n",mas[Nmin-1]);	
return 0;
}
