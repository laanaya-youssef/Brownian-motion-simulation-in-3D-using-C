//Mouvement de translation d’une particule Brownienne sur un axe

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()	
{
int  i, L,pas,com=0,V,S=-1,x,a,b;

char  T[L+1];
srand(time(0) );
printf(" donner un pas  strictement  positif ");
scanf("%d",&pas);

while(pas < 1)
{
         printf(" donner un nouvel pas "); scanf("%d",&pas);
}
         printf(" donner un nombre pair pour les abscisses "); 
         scanf("%d",&L);


while(L%2 !=0)
{
   printf(" donner une nouvelle valeur "); 
   scanf("%d",&L);
}

    printf("choisir une position entre 1 et %d",L); 
    scanf("%d",&V);


while(V < 1 && V > L)
{
   printf(" donner une nouvelle position "); 
   scanf("%d",&V);
}

for(i=1;i<=L;i++)
{
     printf("%c",T[i]='.');
}
i= V;

printf("%c",T[i]='o');

while(com <= pas)
{
   if(i !=1 ||  i !=L)
      {
        printf("%c",T[i]='.');
       x=(rand()%(1-S+1))+S;
         i=i+x;
         printf("%c",T[i]='o');
           com++;
        if(i==1)
        {
              printf("%c",T[i]='.');
              a=(rand()%(1-0+1) )+0;
              i=i+a; 
              printf("%c",T[i]='o'); 
              com++;
        }


       if(i==L)
        {
          printf("%c",T[i]='.');
         b=(rand()%(0-S+1) )+S;
         i=i+b;
          printf("%c",T[i]='o');
           com++;
        }
      }
}




}