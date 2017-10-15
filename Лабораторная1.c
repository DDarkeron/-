#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

float b;

 if(argc==1){
    printf("Enter number and first letter of temperature");
 }
 else
 if (argc==2){
    b=atof(argv[1]);
    printf("\nC=%.2f""\nF=%.2f""\nK=%.2f\n",b,((b*1.8)+32),(b+273.15));
    printf("\nF=%.2f""\nC=%.2f""\nK=%.2f\n",b,((b-32)/1.8),(((b-32)/1.8)+273.15));
    printf("\nK=%.2f""\nC=%.2f""\nF=%.2f\n",b,(b-273.15),((b-273.15)*1.8)+32);
 }
else{
        if (strcmp(argv[2], "C")==0 || strcmp(argv[2], "c")==0){

                if (b>-273)
                printf("F=%.2f""\nK=%.2f",(b*1.8+32),b+273.15);}
                else
                printf("temperature doesnt exist\n");;
        if (strcmp(argv[2], "F")==0 || strcmp(argv[2], "f")==0){
                if (b>-454)
                printf("C=%.2f""\nK=%.2f",(b-32)/1.8,((b-32)/1.8)+273.15);
                else
                printf("temperature doesnt exist\n");
        }

        if (strcmp(argv[2], "K")==0 || strcmp(argv[2], "k")==0){
            if(b>0)
            printf("C=%.2f""\nF=%.2f",(b-273.15),((b-273.15)*1.8)+32);
            else
            printf("temperature doesnt exist\n");
        }
}


return 0;
}






