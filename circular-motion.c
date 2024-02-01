//      Mouvement circulaire d’une particule Brownienne
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
int  i,j,pas,x,com=0,A=0,B=0,a=1,b=2,c=3;
char T[16][16];
srand(time(0));
printf(" donner un pas  strictement  positif ");
scanf("%d",&pas);


while(pas < 1)
{
   printf(" donner un nouvel pas ");
    scanf("%d",&pas);
}

for(i=1;i<=15;i++)
{
       printf("\n");
          
          
          for(j=1;j<=15;j++)
            {
               printf("%c ",T[i][j]='.');
            }
}



i=2;
j=8;
printf("%c ",T[i][j]='o');



while(com <= pas)
{
       x=rand()%3;

       if(x==0)
          {
                printf("%c ",T[i][j]='.');
                printf("%c ",T[i][j]='o');
                com++;
         }



      if(x==1)
       {
           switch(A)
                {
                  case 0:

                      printf("%c ",T[i][j]='.');
                      i=i+a;
                      j=j-c;
                      printf("%c ",T[i][j]='o');
                      com++;
                      A++;
                      B--;
                      break;



              case 1:
             case -11:

                      printf("%c ",T[i][j]='.');
                      i=i+b;
                      j=j-b;
                      printf("%c ",T[i][j]='o');
                      com++;
                      A++;
                      B--;
                      break;



             case 2:
            case -10:
                      printf("%c ",T[i][j]='.');
                      i=i+c;
                      j=j-a;
                      printf("%c ",T[i][j]='o');
                      com++;
                      A++;
                      B--;
                      break;




          case 3:
         case -9:
                      printf("%c ",T[i][j]='.');
                      i=i+c;
                      j=j+a;
                      printf("%c ",T[i][j]='o');
                      com++;
                      A++;
                      B--;
                      break;




       case 4:
       case -8:
                  printf("%c ",T[i][j]='.');
                  i=i+b;
                  j=j+b;
                  printf("%c ",T[i][j]='o');
                  com++;
                  A++;
                  B--;
                 break;



      case 5:
      case -7:

             printf("%c ",T[i][j]='.');
             i=i+a;
             j=j+c;
             printf("%c ",T[i][j]='o');
             com++;
             A++;
             B--;
             break;
case 6:
case -6:
             printf("%c ",T[i][j]='.');
             i=i-a;
             j=j+c;
             printf("%c ",T[i][j]='o');
             com++;
             A++;
             B--;
             break;


case 7:
case -5:
             printf("%c ",T[i][j]='.');
             i=i-b;
             j=j+b;
             printf("%c ",T[i][j]='o');
             com++;
             A++;
             B--;
             break;


case 8:
case -4:
             printf("%c ",T[i][j]='.');
             i=i-c;
             j=j+a;
             printf("%c ",T[i][j]='o');
             com++;
             A++;
             B--;
             break;




case 9:
case -3:
             printf("%c ",T[i][j]='.');
             i=i-c;
             j=j-a;
             printf("%c ",T[i][j]='o');
             com++;
             A++;
             B--;
             break;



case 10:
case -2:
             printf("%c ",T[i][j]='.');
             i=i-b;
             j=j-b;
             printf("%c ",T[i][j]='o');
             com++;
             A++;
             B--;
             break;




case -1:
             printf("%c ",T[i][j]='.');
             i=i-a;
             j=j-c;
             printf("%c ",T[i][j]='o');
             com++;
             A++;
             B--;
             break;




case 11:
             printf("%c ",T[i][j]='.');
             i=i-a;
             j=j-c;
             printf("%c ",T[i][j]='o');
             com++;
             A=0;
             B=0;
             break;


default:
           break;
      }
}









if(x==2)
{
    switch(B)
         {


case 0:
             printf("%c ",T[i][j]='.');
             i=i+a;
             j=j+c;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;




case 1:
case -11:
             printf("%c ",T[i][j]='.');
             i=i+b;
             j=j+b;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;




case 2:
case -10:
             printf("%c ",T[i][j]='.');
             i=i+c;
             j=j+a;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;



case 3:
case -9:
             printf("%c ",T[i][j]='.');
             i=i+c;
             j=j-a;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;



case 4:
case -8:

             printf("%c ",T[i][j]='.');
             i=i+b;
             j=j-b;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;
             



case 5:
case -7:
             printf("%c ",T[i][j]='.');
             i=i+a;
             j=j-c;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;





case 6:
case -6:
             printf("%c ",T[i][j]='.');
             i=i-a;
             j=j-c;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;



case 7:
case -5:
             printf("%c ",T[i][j]='.');
             i=i-b;
             j=j-b;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;




case 8:
case -4:
             printf("%c ",T[i][j]='.');
             i=i-c;
             j=j-a;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;


case 9:
case -3:
             printf("%c ",T[i][j]='.');
             i=i-c;
             j=j+a;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;



case 10:
case -2:

             printf("%c ",T[i][j]='.');
             i=i-b;
             j=j+b;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;



case -1:
             printf("%c ",T[i][j]='.');
             i=i-a;
             j=j+c;
             printf("%c ",T[i][j]='o');
             com++;
             B++;
             A--;
             break;



case 11:
             printf("%c ",T[i][j]='.');
             i=i-a;
             j=j+c;
             printf("%c ",T[i][j]='o');
             com++;
             A=0;
             B=0;
             break;
default:
    break;
  }


}

}





}