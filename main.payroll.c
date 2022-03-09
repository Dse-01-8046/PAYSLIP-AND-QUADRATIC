/*
  PAYSLIP SYSTEM
  CREATED BY KANYI GITONGA
  ON MAR 8 2022
  MIT LICENCE
  C99
  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //VARIABLE DECLARATION
   char name[100], kra[20];
   int hours, overtime, gross, tax, net;
   printf("GITONGA\'S FACTORY PAYROLL\n");
   //CAPTURE OUTPUT
   printf("ENTER NAME: ");
   gets(name);
   printf("ENTER KRA PIN: ");
   gets(kra);
   printf("HOURS WORKED: ");
   scanf("%d", &hours);
   //COMPUTATIONS
   if(hours > 40 ) {
        overtime = (hours - 40) * 1.5 * 1000;
        gross = overtime + (40*1000);
   }
    else{
        overtime =0;
        gross = hours * 1000;
    }
    tax = 0.3 * gross;
    net = gross - tax;
    //OUTPUT
    printf("EMPLOYEE NAME: %s\n", name);
    printf("GROSS INCOME: %d\n", gross);
    printf("TAX PAID: %d\n", tax);
    printf("NET INCOME: %d\n", net);
    return 0;
}
