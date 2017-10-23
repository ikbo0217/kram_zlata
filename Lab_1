##include <stdio.h>
#include <stdlib.h>

int convert_scale(double data, char type) /*function for calculating the temperature from two arguments (number and symbol)*/ {
    double dataC;
    double dataK;
    double dataF;

    if (type == 'C' || type == 'c') {
        if(data <= -273.15) /*Contradicts the laws of physics*/ {
            printf("Incorrect data"); /* Incorrect data exception */
        } else {
            dataK = data + 273.15; /*Translation into K*/
            dataF = (data * 9/5) + 32; /*Translation into F*/
            printf("%.2f C:\n", data);
            printf("%.2f K\n", dataK);
            printf("%.2f F\n", dataF);
        }
    }

    if (type == 'F' || type == 'f') {
        if (data <= -459.67) /*Contradicts the laws of physics*/{
            printf ("Incorrect data"); /* Incorrect data exception */
        } else {
            dataC = (data - 32) * 5 / 9; /*Translation into C*/
            dataK = ((data - 32)/ (9/5)) + 273.15; /*Translation into K*/

            printf("%.2f F:\n", data);
            printf("%.2f C\n", dataC);
            printf("%.2f K\n", dataK);
        }
    }

    if (type == 'K' || type == 'k') {
        if (data <= 0) /*Contradicts the laws of physics*/{
            printf ("Incorrect data"); /* Incorrect data exception */
        } else {
            dataC = data - 273.15; /*Translation into C*/
            dataF = ((data - 273.15) * 9/5) + 32; /*Translation into F*/

            printf("%.2f K:\n", data);
            printf("%.2f C\n", dataC);
            printf("%.2f F\n", dataF);
        }
    }

    if (!(type == 'C' || type == 'c' || type == 'F' || type == 'f' || type == 'K' || type == 'k')) {
        printf ("Type must be K, F or C"); /* Incorrect type exception */
    }

    


int main (int argc, char *argv[]) {
    /*If no units of measure are transferred*/
    int result;

    if (argc == 2) {
        double data = atof(argv[1]) /*atof converts a string to a double*/;

        result = convert_scale(data, 'C'); /*function call, count, if the unit of measure С*/}
        printf("\n");
    
        result = convert_scale(data, 'F'); /*function call, count, if the unit of measure F*/}
        printf("\n");
    
        result = convert_scale(data, 'K'); /*function call, count, if the unit of measure K*/}
    } 

        /*If both arguments are passed*/
    else
        if (argc == 3) {
            double data = atof(argv[1]) /* atof converts a string to a double*/;
            result = convert_scale(data, *argv[2]); }

    return 0;
}


