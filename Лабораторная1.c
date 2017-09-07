#include <stdio.h>
#include <math.h>
int main(){
char a;
float b;
scanf("%f%c",&b,&a);
switch(a)
{case'C':printf("F=%.2f""\nK=%.2f",(b*1.8+32),b+273.15);
break;
 case'F':printf("C=%.2f""\nK=%.2f",(b-32)/1.8,((b-32)/1.8)+273.15);
 break;
 case'K':printf("C=%.2f""\nF=%.2f",(b-273.15),((b-273.15)*1.8)+32);
 break;
 default:printf("\nC=%.2f""\nF=%.2f""\nK=%.2f\n",b,((b*1.8)+32),(b+273.15));
         printf("\nF=%.2f""\nC=%.2f""\nK=%.2f\n",b,((b-32)/1.8),(((b-32)/1.8)+273.15));
         printf("\nK=%.2f""\nC=%.2f""\nF=%.2f\n",b,(b-273.15),((b-273.15)*1.8)+32);
  break;
}


return 0;
}


