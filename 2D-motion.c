///Mouvement de translation d’une particule Brownienne en 2 dimensions (réseau carré)

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
int  i,j,L,col,pas,com=0,v,w,S=-1,x,y,a,b,c,d;
char  T[L+1] [col+1];
 srand(time(0) );
 printf(" donner un pas  strictement  positif ");
 scanf("%d",&pas);

while(pas < 1)
{
  printf(" donner un nouvel pas "); 
  scanf("%d",&pas);
}


printf(" donner un nombre pair pour les abscisses et pour les ordonnées respectivement(dimesions d/'un reseau carré) ");
scanf("%d %d ",&L, &col);

while(L%2  !=0 || col%2  !=0 ||  L  != col)
{
   printf(" donner des nouvelles valeurs ");
    scanf("%d %d ",&L, &col);
}
  printf("choisir une position entre 1 et %d et 1 et %d ",L,col);
   scanf("%d %d ",&v, &w);


while(v || w < 1 &&  v || w > L)
{
   printf(" donner une nouvelle position ");
    scanf("%d %d ",&v, &w);
}

for(i=1;i<=L;i++)
{
   printf("\n");
    for(j=1;j<=col;j++)
     {
      printf("%c",T[i] [j]='.');
     }
}

i=v;
j=w;
while(com <= pas)
{
   if(i||j !=1 || i||j !=L)
     {
        printf("%c",T[i] [j]='.');
        x=(rand()%(1-S+1))+S;
        y=(rand()%(1-S+1))+S;
        i=i+x; j=j+y; 
        printf("%c",T[i] [j]='o'); 
        com++;
     }


     if(i==1 &&  j !=1 || j !=col )
     {
       printf("%c",T[i] [j]='.');
        x = (rand()%(1-S+1))+S;
        a = (rand()%(1-0+1))+0;
        i=i+a; 
        j=j+x; 
        printf("%c",T[i] [j]='o');
         com++;
     }
        else 
           {
               if (i==1 &&  j ==1)
                  {
                     printf("%c",T[i] [j]='.');
                      a=(rand()%(1-0+1))+0;
                      c=(rand()%(1-0+1))+0;
                      i=i+a; j=j+c; 
                      printf("%c",T[i] [j]='o'); 
                      com++;
                   }
                     else
                        {
                         j=col; 
                         printf("%c",T[i] [j]='.');
                        a=(rand()%(1-0+1))+0;
                         b=(rand()%(0-S+1))+S;
                        i=i+a; j=j+b; printf("%c",T[i] [j]='o');
                         com++;
                       }
             }




    if(j==1 &&  i !=1 || i !=L)
      {
        printf("%c",T[i] [j]='.');
        x=(rand()%(1-S+1))+S;
         a=(rand()%(1-0+1))+0;
         i=i+x; j=j+a;
          printf("%c",T[i] [j]='o'); 
         com++;
      }
        else
             {
               if (j==1 &&  i ==1)
                  {
                      printf("%c",T[i] [j]='.');
                      a=(rand()%(1-0+1))+0;
                      c=(rand()%(1-0+1))+0;
                      i=i+a; j=j+c; 
                      printf("%c",T[i] [j]='o'); 
                      com++;
                    }
                     else
                          {
                              i=L;
                              printf("%c",T[i] [j]='.');
                             a=(rand()%(1-0+1))+0;
                             b=(rand()%(0-S+1))+S;
                             i=i+b; j=j+a; 
                             printf("%c",T[i] [j]='o'); 
                             com++;
                             }
             }



   if(i==L &&  j !=1 || j != col)
     {
         printf("%c",T[i] [j]='.');
         x=(rand()%(1-S+1))+S;
         b=(rand()%(0-S+1))+S;
         i=i+b; 
        j=j+x; 
        printf("%c",T[i] [j]='o');
        com++;
      }
         else
               {
                  if(i==L &&  j ==1)
                     {
                          printf("%c",T[i] [j]='.');
                           a=(rand()%(1-0+1))+0;
                            b=(rand()%(0-S+1))+S;
                          i=i+b; 
                          j=j+a; 
                          printf("%c",T[i] [j]='o');
                           com++;
                       }
                         else
                             {
                               j=col;
                                 printf("%c",T[i] [j]='.');
                                  b=(rand()%(0-S+1))+S;
                                  d=(rand()%(0-S+1))+S;
                                  i=i+b; 
                                  j=j+d;
                                   printf("%c",T[i] [j]='o'); 
                                   com++;
                              }
                 }





    if(j==col  &&  i !=1 || i !=L)
        {
        printf("%c",T[i] [j]='.');
        x=(rand()%(1-S+1))+S;
        b=(rand()%(0-S+1))+S;
        i=i+x;
        j=j+b;
        printf("%c",T[i] [j]='o'); 
        com++;
        }
          else
                {
                    if(j==col  &&  i ==1)
                      {
                        printf("%c",T[i] [j]='.');
                        a=(rand()%(1-0+1))+0;
                        b=(rand()%(0-S+1))+S;
                         i=i+a;
                          j=j+b;
                           printf("%c",T[i] [j]='o'); 
                           com++;
                     }
                      else
                           {
                           i=L; 
                           printf("%c",T[i] [j]='.');
                           b=(rand()%(0-S+1))+S;
                           d=(rand()%(0-S+1))+S;
                           i=i+b; 
                           j=j+d;
                           printf("%c",T[i] [j]='o');
                             com++;
                           }
                    }
   }





}
