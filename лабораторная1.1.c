#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
char a;
float b;
 b=atof(argv[1]);
 a=argv[2];
 if(argc==1){
    printf("Enter number and first letter of temperature");
 }
 else
 if (argc==2){
    printf("\nC=%.2f""\nF=%.2f""\nK=%.2f\n",b,((b*1.8)+32),(b+273.15));
    printf("\nF=%.2f""\nC=%.2f""\nK=%.2f\n",b,((b-32)/1.8),(((b-32)/1.8)+273.15));
    printf("\nK=%.2f""\nC=%.2f""\nF=%.2f\n",b,(b-273.15),((b-273.15)*1.8)+32);
 }
else{
switch(a){
case'C':case'c':
if (b>-273)
 printf("F=%.2f""\nK=%.2f",(b*1.8+32),b+273.15);
 else
    printf("temperature doesnt exist\n");
break;

case'F':case'f':
if (b>-454)
 printf("C=%.2f""\nK=%.2f",(b-32)/1.8,((b-32)/1.8)+273.15);
 else
    printf("temperature doesnt exist\n");
 break;

 case'K':case'k':
if(b>0)
 printf("C=%.2f""\nF=%.2f",(b-273.15),((b-273.15)*1.8)+32);
 else
    printf("temperature doesnt exist\n");
break;

default:

    printf("\nC=%.2f""\nF=%.2f""\nK=%.2f\n",b,((b*1.8)+32),(b+273.15));
    printf("\nF=%.2f""\nC=%.2f""\nK=%.2f\n",b,((b-32)/1.8),(((b-32)/1.8)+273.15));
    printf("\nK=%.2f""\nC=%.2f""\nF=%.2f\n",b,(b-273.15),((b-273.15)*1.8)+32);
 break;
}}


return 0;
}

