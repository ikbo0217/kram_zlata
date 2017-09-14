#include <stdio.h>
#include <stdlib.h>

void convert_scale(double data, char type)
{
  double dataC;
  double dataK;
  double dataF;

  if (type == 'C')
    {
        if(data <= -273.15)
        {
            printf("Incorrect data");
        }
        else
        {
            dataK = data + 273.15;
            dataF = (data * 9/5) + 32;
            printf("%.2f C:\n", data);
            printf("%.2f K\n", dataK);
            printf("%.2f F\n", dataF);
        }
    }

    if (type == 'F') {
        if (data <= -459.67) {
            printf ("Incorrect data");
        } else {
          dataC = (data - 32) * 5 / 9;
          dataK = ((data - 32)/ (9/5)) + 273.15;

          printf("%.2f F:\n", data);
          printf("%.2f C\n", dataC);
          printf("%.2f K\n", dataK);
    }
    }

    if (type == 'K') {
        if (data <= 0) {
            printf ("Incorrect data");
        } else {
          dataC = data - 273.15;
          dataF = ((data - 273.15) * 9/5) + 32;

          printf("%.2f K:\n", data);
          printf("%.2f C\n", dataC);
          printf("%.2f F\n", dataF);
    }
    }
}

void convert (double data)
{
    printf("%.2f %c:\n", data, 'C');
    convert_scale(data, 'C');
    printf("\n");
    printf("%.2f %c:\n", data, 'F');
    convert_scale(data, 'F');
    printf("\n");
    printf("%.2f %c:\n", data, 'K');
    convert_scale(data, 'K');
}


int main(int argc, char *argv[])
{
    if (argc==3)
    {
        convert_scale(atof(argv[1]), *argv[2]);
    }

    if (argc==2)
    {
        convert (atof(argv[1]));
    }

    return 0;
}
