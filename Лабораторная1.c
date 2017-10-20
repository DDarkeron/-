#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

float b;

 if(argc==1)
    {
    printf("\nEnter number and first letter of temperature/n");
 }
 else
 if (argc==2)/*types results for everything, if there wasn't mentioned any temperature*/
    {
    b=atof(argv[1]);
    printf("\nC=%.2f""\nF=%.2f""\nK=%.2f\n",b,((b*1.8)+32),(b+273.15));
    printf("\nF=%.2f""\nC=%.2f""\nK=%.2f\n",b,((b-32)/1.8),(((b-32)/1.8)+273.15));
    printf("\nK=%.2f""\nC=%.2f""\nF=%.2f\n",b,(b-273.15),((b-273.15)*1.8)+32);
 }
else
{

        if (strcmp(argv[2], "C")==0 || strcmp(argv[2], "c")==0)/*types results, if Celsius was mentioned*/
        {
                b=atof(argv[1]);
                if (b>-273)
                printf("F=%.2f""\nK=%.2f\n",(b*1.8+32),b+273.15);}
                else
                printf("\ntemperature doesnt exist\n");;
        if (strcmp(argv[2], "F")==0 || strcmp(argv[2], "f")==0)/*types results, if Fahrenheit was mentioned*/
        {
                b=atof(argv[1]);
                if (b>-454)
                printf("C=%.2f""\nK=%.2f\n",(b-32)/1.8,((b-32)/1.8)+273.15);
                else
                printf("\ntemperature doesnt exist\n");
        }

        if (strcmp(argv[2], "K")==0 || strcmp(argv[2], "k")==0)/*types results, if Kelvin was mentioned*/
        {
            b=atof(argv[1]);
            if(b>0)
            printf("C=%.2f\n""F=%.2f\n",(b-273.15),((b-273.15)*1.8)+32);
            else
            printf("\ntemperature doesnt exist\n");
        }
}


return 0;
}
