//---------------------------------------------------------------------------
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
double a,b,h,s,y,x,t,Sum,u;
    int n,k;
    printf ("Input a,b,h,n ");
    scanf("%lf%lf%lf%d", &a,&b,&h,&n);
     for(x = a; x<=b; x+=h) {
       Sum=0;

     for (k=1; k<=n; k++){

       t= pow(-1,(k+1))*pow(x,2*k);
       s=t/(2*k*(2*k-1));
       Sum+=s;

      }
   y= (-log(sqrt(1+pow(x,2))))+x*atan(x);
      u= fabs(y-Sum);
    printf("\nx= %3.1lf \tsum=%8.6lf \ty=%8.6lf \t|Y(x)-S(x)|=%8.6lf",x,Sum,y,u);


    }
       puts("\nPress any key ...");
    getch();
        return 0;
}
//---------------------------------------------------------------------------
 