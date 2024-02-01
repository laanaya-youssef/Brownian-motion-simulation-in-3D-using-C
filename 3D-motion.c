//Mouvement de translation d’une particule Brownienne en 3 dimensions (réseau cubique)

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
 int i,j,k,L,col,h,pas,com=0,v,w,m,S=-1,x,y,z,a,b,c,d,e,f;
 char T[L+1][col+1][h+1];
srand(time(0));
printf(" donner un pas  strictement  positif ");
scanf("%d",&pas);




while(pas < 1)
{
       printf(" donner un nouvel pas ");
        scanf("%d",&pas);
}



printf(" donner trois nombres pairs identiques (dimesions d/'un reseau cubique) ");
scanf("%d %d %d",&L,&col,&h);


while(L%2  !=0 || col%2 || h%2 !=0 ||  L!=col || L !=h)
{
       printf(" donner des nouvelles valeurs ");
       scanf("%d %d %d",&L,&col,&h);
}



printf("choisir une position entre 1 et %d et 1 et %d 1 et %d ",L,col,h);
scanf("%d %d %d",&v,&w,&m);

while(v || w || m < 1   &&   v || w || m > L)
{
       printf(" donner une nouvelle position ");
       scanf("%d %d %d",&v,&w,&m);
}



for(i=1;i<=L;i++)
{
     printf("\n");



      for(j=1;j<=col;j++)
         {
            printf("\n");
           
           
            for(k=1;k<=h;k++)
               {
                  printf("%c",T[i][j][k]='.');
                }
          }
}


i=v;
j=w;
k=m;
printf("%c",T[i][j][k]='o');



while(com <= pas)
{
     /*part 1*/
       if(i || j || k !=1   ||     i || j || k != L)
         {
              printf("%c ",T[i][j][k]='.');
              x=(rand()%(1-S+1))+S;
              y=(rand()%(1-S+1))+S;
              z=(rand()%(1-S+1))+S;
              i=i+x;
              j=j+y; 
              k=k+z; 
              printf("%c",T[i][j][k]='o'); 
              com++;
           }

        /* part 2*/
       if(j==1 && i || k !=1 || k !=L)
         {
            printf("%c",T[i][j][k]='.');
            a=(rand()%(1-0+1))+0;
            x=(rand()%(1-S+1))+S;
            y=(rand()%(1-S+1))+S;
            i=i+a; 
            j=j+x; 
            k=k+y; 
            printf("%c",T[i][j][k]='o'); 
            com++;
         }
          else
              {
                if(j==1 && k==1 && i !=1 || L)
                  {
                      printf("%c",T[i][j][k]='.');
                      a=(rand()%(1-0+1))+0;
                      x=(rand()%(1-S+1))+S;
                      c=(rand()%(1-0+1))+0;
                      i=i+x; 
                      j=j+a;
                       k=k+c;
                        printf("%c",T[i][j][k]='o'); 
                        com++;
                   }
                       else
                            {
                                  if(j==1 && k==1&& i==1)
                                     {
                                        printf("%c",T[i][j][k]='.');
                                       a=(rand()%(1-0+1))+0;
                                       c=(rand()%(1-0+1))+0;
                                       e=(rand()%(1-0+1))+0;
                                       i=i+a; 
                                       j=j+c; 
                                       k=k+e;
                                        printf("%c",T[i][j][k]='o');
                                         com++;
                                      }
                                         else
                                             {
                                                i=L; printf("%c",T[i][j][k]='.');
                                                a=(rand()%(1-0+1))+0;
                                                b=(rand()%(0-S+1))+S;
                                                c=(rand()%(1-0+1))+0;
                                                i=i+b;
                                                 j=j+a; 
                                                 k=k+c; 
                                                 printf("%c",T[i][j][k]='o'); 
                                                 com++;
                                               }
                            }
              }  /*  end  if ?*/

             





 
           /*part 3*/


            if(j==1 && i==L && k!=1 || k !=h)
              {
                       printf("%c",T[i][j][k]='.');
                       a=(rand()%(1-0+1))+0;
                       b=(rand()%(0-S+1))+S;
                       x=(rand()%(1-S+1))+S;
                         i=i+b;
                        j=j+a;
                        k=k+x;
                         printf("%c",T[i][j][k]='o'); 
                        com++;
              }
                else
                    {
                           if(j==1 && i==L && k==1)
                             {
                                   printf("%c",T[i][j][k]='.');
                                   a=(rand()%(1-0+1))+0;
                                   b=(rand()%(0-S+1))+S;
                                   c=(rand()%(1-0+1))+0;
                                   i=i+b; 
                                   j=j+a; 
                                   k=k+c; 
                                   printf("%c",T[i][j][k]='o');
                                    com++;
                               }
                                 else
                                     {
                                       k=h; 
                                       printf("%c",T[i][j][k]='.');
                                        a=(rand()%(1-0+1))+0;
                                        b=(rand()%(0-S+1))+S;
                                        d=(rand()%(0-S+1))+S;
                                         i=i+b; 
                                         j=j+a; 
                                         k=k+d; 
                                         printf("%c",T[i][j][k]='o');
                                          com++;
                                     }
                        }




  if(j==1 && k==h && i !=1 || i !=L)
    {
            printf("%c",T[i][j][k]='.');
            x=(rand()%(1-S+1))+S;
            a=(rand()%(1-0+1))+0;
            b=(rand()%(0-S+1))+S;
            i=i+x;
             j=j+a;
            k=k+b;
            printf("%c",T[i][j][k]='o'); 
            com++;
      }
          else
               {
                     if(j==1 && k==h && i==1)
                       {
                           printf("%c",T[i][j][k]='.');
                            a=(rand()%(1-0+1))+0;
                            b=(rand()%(0-S+1))+S;
                            c=(rand()%(1-0+1))+0;
                            i=i+a;
                            j=j+c;
                            k=k+b;
                            printf("%c",T[i][j][k]='o');
                            com++;
                        }
                         else
                              {
                                 i=L;
                                 printf("%c",T[i][j][k]='.');
                                 a=(rand()%(1-0+1))+0;
                                 b=(rand()%(0-S+1))+S;
                                 d=(rand()%(0-S+1))+S;
                                  i=i+b;
                                  j=j+a;
                                   k=k+d;
                                   printf("%c",T[i][j][k]='o'); 
                                   com++;

                                 }
                  }




  if(j ==1 && i ==1 && k !=1 || k !=h)
     {
          printf("%c",T[i][j][k]='.');
          a=(rand()%(1-0+1))+0;
          c=(rand()%(1-0+1))+0;
          x=(rand()%(1-S+1))+S;
          i=i+a; 
          j=j+c; 
          k=k+x; 
          printf("%c",T[i][j][k]='o');
           com++;
     }
          else
              {
                  if(j==1 && i==1 && k==1)
                    {
                        printf("%c",T[i][j][k]='.');
                         a=(rand()%(1-0+1))+0;
                         c=(rand()%(1-0+1))+0;
                         e=(rand()%(1-0+1))+0;
                         i=i+a; 
                         j=j+c;
                         k=k+e;
                         printf("%c",T[i][j][k]='o');
                          com++;
                     }
                         else
                              {
                                 k=h; 
                                 printf("%c",T[i][j][k]='.');
                                 a=(rand()%(1-0+1))+0;
                                 b=(rand()%(0-S+1))+S;
                                 c=(rand()%(1-0+1))+0;

                                 i=i+a; 
                                 j=j+c; 
                                 k=k+b; 
                                 printf("%c",T[i][j][k]='o');
                                 com++;
                              }
              }




   if(j==col && i||k !=1 || k !=L)
      {
        printf("%c",T[i][j][k]='.');
        x=(rand()%(1-S+1))+S;
        y=(rand()%(1-S+1))+S;
        b=(rand()%(0-S+1))+S;
        i=i+x;
         j=j+b;
         k=k+y;
         printf("%c",T[i][j][k]='o'); 
         com++;
     }
       else
            {
                if(j==col && i==1 && k !=1 || k !=h)
                   {
                      printf("%c",T[i][j][k]='.');
                      a=(rand()%(1-0+1))+0;
                      b=(rand()%(0-S+1))+S;
                      x=(rand()%(1-S+1))+S;
                      i=i+a; 
                      j=j+b; 
                      k=k+x; 
                      printf("%c",T[i][j][k]='o'); 
                      com++;
                    }
                       else
                             {
                                  if(j==col && i==1 && k==1)
                                      {
                                          printf("%c",T[i][j][k]='.');
                                          a=(rand()%(1-0+1))+0;
                                          b=(rand()%(0-S+1))+S;
                                          c=(rand()%(1-0+1))+0;
                                          i=i+a;
                                          j=j+b;
                                          k=k+c;
                                          printf("%c",T[i][j][k]='o'); 
                                          com++;
                                        }
                                          else {
                                                     k=h;
                                                     printf("%c",T[i][j][k]='.');
                                                     a=(rand()%(1-0+1))+0;
                                                     b=(rand()%(0-S+1))+S;
                                                     d=(rand()%(0-S+1))+S;
                                                     i=i+a;
                                                     j=j+b;
                                                     k=k+d;
                                                     printf("%c",T[i][j][k]='o'); 
                                                     com++;
                                                  }
                               }

           /*end else ?*/

      if(j==col && k==1 && i !=1 || i !=L)
        {
                printf("%c",T[i][j][k]='.');
                x=(rand()%(1-S+1))+S;
                a=(rand()%(1-0+1))+0;
                 b=(rand()%(0-S+1))+S;
                 i=i+x; 
                 j=j+b; 
                 k=k+a; 
                 printf("%c",T[i][j][k]='o'); 
                 com++;
         }
              else
                   {
                      if(j==col && k==1 && i==1)
                        {
                           printf("%c",T[i][j][k]='.');
                          a=(rand()%(1-0+1))+0;
                          b=(rand()%(0-S+1))+S;
                          c=(rand()%(1-0+1))+0;
                          i=i+a;
                          j=j+b;
                          k=k+c;
                          printf("%c",T[i][j][k]='o');
                          com++;
                        }
                          else
                                {
                                    i=L; 
                                    printf("%c",T[i][j][k]='.');
                                     a=(rand()%(1-0+1))+0;
                                     b=(rand()%(0-S+1))+S;
                                     d=(rand()%(0-S+1))+S;
                                     i=i+d;
                                     j=j+b;
                                     k=k+a;
                                     printf("%c",T[i][j][k]='o'); 
                                     com++;
                                  }
                 }







     if(j==col && i==L && k !=1 || k !=h)
       {
              printf("%c",T[i][j][k]='.');
              x=(rand()%(1-S+1))+S;
              b=(rand()%(0-S+1))+S;
              d=(rand()%(0-S+1))+S;
              i=i+d;
              j=j+b;
              k=k+x;
              printf("%c",T[i][j][k]='o');
              com++;
      }
         else
            {
              if(j==col && i==L && k==1)
                {
                     printf("%c",T[i][j][k]='.');
                     a=(rand()%(1-0+1))+0;
                     b=(rand()%(0-S+1))+S;
                     d=(rand()%(0-S+1))+S;
                     i=i+d; 
                     j=j+b; 
                     k=k+a; 
                     printf("%c",T[i][j][k]='o');
                      com++;
                }
                   else
                         {
                            k=h;
                            printf("%c",T[i][j][k]='.');
                            b=(rand()%(0-S+1))+S;
                            d= (rand()%(0-S+1))+S;
                            f=(rand()%(0-S+1))+S;
                            i=i+d;
                            j=j+b;
                            k=k+f;
                            printf("%c",T[i][j][k]='o'); 
                            com++;
                          }
             }




   if(j==col && k==h && i !=1 || i !=L)
        {
              printf("%c",T[i][j][k]='.');
              x=(rand()%(1-S+1))+S;
              b=(rand()%(0-S+1))+S;
              d=(rand()%(0-S+1))+S;
              i=i+x;
              j=j+b; 
              k=k+d;
              printf("%c",T[i][j][k]='o');
              com++;
         }
           else
                {
                    if(j==col && k==h && i==1)
                      {
                        printf("%c",T[i][j][k]='.');
                         a=(rand()%(1-0+1))+0;
                         b=(rand()%(0-S+1))+S;
                         d=(rand()%(0-S+1))+S;
                         i=i+a;
                         j=j+b;
                         k=k+d; 
                         printf("%c",T[i][j][k]='o'); 
                         com++;
                       }
                          else
                               {
                                    i=L; 
                                    printf("%c",T[i][j][k]='.');
                                    b=(rand()%(0-S+1))+S;

                                     d=(rand()%(0-S+1))+S;
                                     f=(rand()%(0-S+1))+S;
                                     i=i+d;
                                      j=j+b; 
                                      k=k+f; 
                                     printf("%c",T[i][j][k]='o'); 
                                     com++;
                                 }
               }



if(i==1 && j || k !=1 || k !=L)
   {
          printf("%c",T[i][j][k]='.');
          a=(rand()%(1-0+1))+0;
          x=(rand()%(1-S+1))+S;
          y=(rand()%(1-S+1))+S;
          i=i+a;
          j=j+x;
          k=k+y;
          printf("%c",T[i][j][k]='o'); 
          com++;
    }
      else
           {
              if(i==1 && j==1 && k !=1 || k!=h)
                 {
                    printf("%c",T[i][j][k]='.');
                    a=(rand()%(1-0+1))+0;
                    c=(rand()%(1-0+1))+0;
                    x=(rand()%(1-S+1))+S;
                    i=i+a;
                    j=j+c;
                     k=k+x;
                    printf("%c",T[i][j][k]='o');
                     com++;
                 }
                    else
                        {
                            if(i==1 && j==1 && k==1)
                              {
                                   printf("%c",T[i][j][k]='.');
                                  a=(rand()%(1-0+1))+0;
                                  c=(rand()%(1-0+1))+0;
                                  e=(rand()%(0-S+1))+S;
                                  i=i+a; 
                                  j=j+c; 
                                  k=k+e; 
                                  printf("%c",T[i][j][k]='o'); 
                                  com++;
                               }
                                   else
                                      {
                                            k=h;
                                            printf("%c",T[i][j][k]='.');
                                            a=(rand()%(1-0+1))+0;
                                            b=(rand()%(0-S+1))+S;
                                            c=(rand()%(1-0+1))+0;
                                            i=i+a; 
                                            j=j+c; 
                                            k=k+b; 
                                            printf("%c",T[i][j][k]='o');
                                             com++;
                                       }
                           }





          if(i==1 && k==1 && j !=1 || j !=col)
            {
                   printf("%c",T[i][j][k]='.');
                   a=(rand()%(1-0+1))+0;
                   x=(rand()%(1-S+1))+S;
                  c=(rand()%(1-0+1))+0;
                  i=i+a; 
                  j=j+x; 
                  k=k+c; 
                  printf("%c",T[i][j][k]='o'); 
                  com++;
             }
                  else
                         {
                            if(i==1 && k==1 && j==1)
                              {
                                   printf("%c",T[i][j][k]='.');
                                   a=(rand()%(1-0+1))+0;
                                   c=(rand()%(1-0+1))+0;
                                   f=(rand()%(0-S+1))+S;
                                   i=i+a;
                                   j=j+c;
                                   k=k+f;
                                   printf("%c",T[i][j][k]='o'); 
                                   com++;
                               }
                                  else
                                     {
                                          j=col;
                                          printf("%c",T[i][j][k]='.');
                                          a=(rand()%(1-0+1))+0;
                                          b=(rand()%(0-S+1))+S;
                                          c=(rand()%(1-0+1))+0;
                                          i=i+a;
                                          j=j+b;
                                          k=k+c;
                                           printf("%c",T[i][j][k]='o');
                                           com++;
                                      }
                        }




          if(i==1 && j==col && k !=1 || k !=h)
             {
                    printf("%c",T[i][j][k]='.');
                    a=(rand()%(1-0+1))+0;
                    b=(rand()%(0-S+1))+S;
                    x=(rand()%(1-S+1))+S;
                    i=i+a; 
                    j=j+b; 
                    k=k+x;
                     printf("%c",T[i][j][k]='o'); 
                     com++;
             }
                    else
                        {
                           if(i==1 && j==col && k==1)
                            {
                              printf("%c",T[i][j][k]='.');
                               a=(rand()%(1-0+1))+0;
                               b=(rand()%(0-S+1))+S;
                               c=(rand()%(1-0+1))+0;
                               i=i+a;
                                j=j+b;
                                k=k+c;
                               printf("%c",T[i][j][k]='o'); com++;
                            }
                              else
                                   {
                                    k=h;
                                     printf("%c",T[i][j][k]='.');
                                     a=(rand()%(1-0+1))+0;
                                     b=(rand()%(0-S+1))+S;
                                     d=(rand()%(0-S+1))+S;
                                     i=i+a;
                                     j=j+b;
                                     k=k+d;
                                     printf("%c",T[i][j][k]='o'); 
                                     com++;
                                    }


                        if(i==1 && k==h && j !=1 || j !=col)
                          {
                                    printf("%c",T[i][j][k]='.');
                                    a=(rand()%(1-0+1))+0;
                                    b=(rand()%(0-S+1))+S;
                                    x=(rand()%(1-S+1))+S;
                                    i=i+a;
                                     j=j+x; 
                                     k=k+b; 
                                     printf("%c",T[i][j][k]='o');
                                      com++;
                            }
                                    else
                                       {
                                           if(i==1 && k==h && j==1)
                                             {
                                                 printf("%c",T[i][j][k]='.');
                                                 a=(rand()%(1-0+1))+0;
                                                 b=(rand()%(0-S+1))+S;
                                                 c=(rand()%(1-0+1))+0;
                                                 i=i+a; 
                                                 j=j+c;
                                                  k=k+b;
                                                  printf("%c",T[i][j][k]='o'); 
                                                   com++;
                                                }
                                                  else
                                                      {
                                                         j=col;
                                                          printf("%c",T[i][j][k]='.');
                                                          a=(rand()%(1-0+1))+0;
                                                          b=(rand()%(0-S+1))+S;
                                                          d=(rand()%(0-S+1))+S;
                                                          i=i+a;
                                                           j=j+b;
                                                           k=k+d;
                                                          printf("%c",T[i][j][k]='o'); 
                                                            com++;
                                                         }
                                        }

                            }







      if(i==L && j || k !=1 || k !=L)
        {
           printf("%c",T[i][j][k]='.');
           x=(rand()%(1-S+1))+S;
            y=(rand()%(1-S+1))+S;
            b=(rand()%(0-S+1))+S;
            i=i+b;
            j=j+x;
            k=k+y;
            printf("%c",T[i][j][k]='o'); 
            com++;
       }
          else
                 {
                        if(i==L && j==1 && k !=1 || k !=h)
                          {
                            printf("%c",T[i][j][k]='.');
                            x=(rand()%(1-S+1))+S;
                            a=(rand()%(1-0+1))+0;
                            b=(rand()%(0-S+1))+S;
                            i=i+b; 
                            j=j+a;
                             k=k+x;
                            printf("%c",T[i][j][k]='o');
                             com++;
                         }
                               else
                                    {
                                           if(i==L && j==1 && k==1)
                                             {
                                                 printf("%c",T[i][j][k]='.');
                                                 c=(rand()%(1-0+1))+0;
                                                 a=(rand()%(1-0+1))+0;
                                                 b=(rand()%(0-S+1))+S;
                                                 i=i+b;
                                                 j=j+a;
                                                 k=k+c; 
                                                 printf("%c",T[i][j][k]='o'); 
                                                 com++;
                                               }
                                                    else
                                                         {
                                                              k=h; 
                                                              printf("%c",T[i][j][k]='.');
                                                              d=(rand()%(0-S+1))+S;
                                                              a=(rand()%(1-0+1))+0;
                                                              b=(rand()%(0-S+1))+S;
                                                              i=i+b;
                                                              j=j+a;
                                                               k=k+d; 
                                                               printf("%c",T[i][j][k]='o');
                                                                com++;
                                                            }
                                  }


             if(i==L && k==1 && j !=1 || j !=col)
                 {
                    printf("%c",T[i][j][k]='.');
                    x=(rand()%(1-S+1))+S;
                    a=(rand()%(1-0+1))+0;
                    b=(rand()%(0-S+1))+S;
                    i=i+b; 
                    j=j+x; 
                    k=k+a; 
                    printf("%c",T[i][j][k]='o');
                     com++;
                  }
                         else
                              {
                                if(i==L && k==1 && j==1)
                                  {
                                     printf("%c",T[i][j][k]='.');
                                     a=(rand()%(1-0+1))+0;
                                     b=(rand()%(0-S+1))+S;
                                     c=(rand()%(1-0+1))+0;
                                     i=i+b;
                                     j=j+a;
                                     k=k+c;
                                     printf("%c",T[i][j][k]='o');
                                     com++;
                                 }
                                     else
                                            {
                                               j=col; 
                                               printf("%c",T[i][j][k]='.');
                                              a=(rand()%(1-0+1))+0;
                                              b=(rand()%(0-S+1))+S;
                                              d=(rand()%(0-S+1))+S;
                                              i=i+b; 
                                              j=j+d; 
                                              k=k+a; 
                                              printf("%c",T[i][j][k]='o');
                                               com++;
                                             }
                           }






            if(i==L && j==col && k !=1 || k !=h)
                {
                      printf("%c",T[i][j][k]='.');
                       x=(rand()%(1-S+1))+S;
                      b=(rand()%(0-S+1))+S;
                      d=(rand()%(0-S+1))+S;
                      i=i+b;
                       j=j+d; 
                       k=k+x; 
                       printf("%c",T[i][j][k]='o'); 
                       com++;
                }
                     else
                         {
                            if(i==L && j==col && k==1)
                             {
                                printf("%c",T[i][j][k]='.');
                                a=(rand()%(1-0+1))+0;
                                b=(rand()%(0-S+1))+S;
                                d=(rand()%(0-S+1))+S;
                                i=i+b;
                                j=j+d;
                                k=k+a; 
                                printf("%c",T[i][j][k]='o'); 
                                com++;
                              }
                                else
                                      {
                                          k=h; 
                                          printf("%c",T[i][j][k]='.');
                                          b=(rand()%(0-S+1))+S;
                                          d=(rand()%(0-S+1))+S;
                                          f=(rand()%(0-S+1))+S;
                                          i=i+b;
                                          j=j+d;
                                          k=k+f;
                                          printf("%c",T[i][j][k]='o'); 
                                          com++;
                                      }
                         }




                 if(i==L && k==h && j !=1 || j !=col)
                     {
                               printf("%c",T[i][j][k]='.');
                               b=(rand()%(0-S+1))+S;
                               d=(rand()%(0-S+1))+S;
                               x=(rand()%(1-S+1))+S;
                               i=i+b; 
                               j=j+x;
                                k=k+d;
                                printf("%c",T[i][j][k]='o'); 
                                com++;
                       }
                          else
                                {
                                    if(i==L && k==h && j==1)
                                      {
                                           printf("%c",T[i][j][k]='.');
                                           b= (rand()%(0-S+1))+S;
                                           d=(rand()%(0-S+1))+S;
                                           a=(rand()%(1-0+1))+0;
                                           i=i+b;
                                           j=j+a;
                                           k=k+d; 
                                           printf("%c",T[i][j][k]='o'); 
                                           com++;
                                       }
                                          else
                                               {
                                                   j=col; 
                                                   printf("%c",T[i][j][k]='.');
                                                   b=(rand()%(0-S+1))+S;
                                                   d=(rand()%(0-S+1))+S;
                                                   a=(rand()%(1-0+1))+0;
                                                   i=i+b;
                                                   j=j+d;
                                                   k=k+f; 
                                                   printf("%c",T[i][j][k]='o');
                                                    com++;
                                                }
                                 }
                   }







     if(k==1 && i || j !=1 || j !=L)
         {
                printf("%c",T[i][j][k]='.');
                a=(rand()%(1-0+1))+0;
                x=(rand()%(1-S+1))+S;
                y=(rand()%(1-S+1))+S;
                i=i+x;
                j=j+y;
                k=k+a;
                printf("%c",T[i][j][k]='o'); 
                 com++;
         }
             else
                  {
                   if(k==1 && j==1 && i !=1 || i !=L)
                     {
                        printf("%c",T[i][j][k]='.');
                        x=(rand()%(1-S+1))+S;
                        a=(rand()%(1-0+1))+0;
                        c=(rand()%(1-0+1))+0;
                        i=i+x;
                        j=j+a;
                        k=k+c;
                        printf("%c",T[i][j][k]='o'); 
                        com++;
                      }
                        else
                                {
                                   if(k==1 && j==1 && i==1)
                                     {
                                        printf("%c",T[i][j][k]='.');
                                        a=(rand()%(1-0+1))+0;
                                         c=(rand()%(1-0+1))+0;
                                        e=(rand()%(0-S+1))+S;
                                        i=i+a; 
                                        j=j+c; 
                                        k=k+e; 
                                        printf("%c",T[i][j][k]='o');
                                         com++;
                                    }
                                       else
                                           {
                                               i=L;
                                                printf("%c",T[i][j][k]='.');
                                                a=(rand()%(1-0+1))+0;
                                                b=(rand()%(0-S+1))+S;
                                                c=(rand()%(1-0+1))+0;
                                                i=i+b; 
                                                j=j+a; 
                                                k=k+c;
                                                 printf("%c",T[i][j][k]='o');
                                                  com++;
                                            }
                              }






         if(k==1 && i==L && j !=1 || j !=col)
             {
                    printf("%c",T[i][j][k]='.');
                    a=(rand()%(1-0+1))+0;
                    b=(rand()%(0-S+1))+S;
                   x=(rand()%(1-S+1))+S;
                   i=i+b; 
                   j=j+x; 
                   k=k+a; 
                   printf("%c",T[i][j][k]='o'); 
                   com++;
            }
              else
                  {
                     if(k==1 && i==L && j==1)
                        {
                             printf("%c",T[i][j][k]='.');
                              a=(rand()%(1-0+1))+0;
                             b=(rand()%(0-S+1))+S;
                             c=(rand()%(1-0+1))+0;
                             i=i+b;
                             j=j+c;
                              k=k+a;
                              printf("%c",T[i][j][k]='o');
                              com++;
                          }
                              else
                                    {
                                        j=col; 
                                        printf("%c",T[i][j][k]='.');
                                       a=(rand()%(1-0+1))+0;
                                       b=(rand()%(0-S+1))+S;
                                       d=(rand()%(0-S+1))+S;
                                       i=i+b;
                                       j=j+d;
                                       k=k+a;
                                       printf("%c",T[i][j][k]='o');
                                        com++;
                                     }
                    }










       if(k==1 && j==col && i !=1 || i !=L)
           {
                printf("%c",T[i][j][k]='.');
                 a=(rand()%(1-0+1))+0;
                 b=(rand()%(0-S+1))+S;
                 x=(rand()%(1-S+1))+S;
                 i=i+x; 
                 j=j+b; 
                 k=k+a; 
                 printf("%c",T[i][j][k]='o'); 
                 com++;
            }
                else
                       {
                            if(k==1 && j==col && i==0)
                               {
                                    i=1; 
                                    printf("%c",T[i][j][k]='.');
                                    a=(rand()%(1-0+1))+0;
                                   b=(rand()%(0-S+1))+S;
                                   c=(rand()%(1-0+1))+0;
                                    i=i+a;
                                    j=j+b; 
                                    k=k+c;
                                     printf("%c",T[i][j][k]='o');
                                      com++;
                                }
                                   else
                                         {
                                             i=L;
                                              printf("%c",T[i][j][k]='.');
                                              a=(rand()%(1-0+1))+0;
                                              b=(rand()%(0-S+1))+S;
                                              d=(rand()%(0-S+1))+S;
                                               i=i+b;
                                                j=j+d; 
                                                k=k+a; 
                                                printf("%c",T[i][j][k]='o'); 
                                                com++;
                                           }
                        }





         if(k==1 && i==1 && j !=1 || j !=col)
            {
                 printf("%c",T[i][j][k]='.');
                 a=(rand()%(1-0+1))+0;
                 c=(rand()%(1-0+1))+0;
                 x=(rand()%(1-S+1))+S;
                 i=i+a;
                 j=j+x;
                 k=k+c;
                 printf("%c",T[i][j][k]='o'); 
                 com++;
             }
                 else
                    {

                       if(k==1 && i==1 && j==1)
                          {
                             printf("%c",T[i][j][k]='.');
                             a=(rand()%(1-0+1))+0;
                             c=(rand()%(1-0+1))+0;
                             e=(rand()%(0-S+1))+S;
                             i=i+a; 
                             j=j+c; 
                             k=k+e; 
                             printf("%c",T[i][j][k]='o'); 
                             com++;
                        }
                             else
                                {
                                   j=col; 
                                   printf("%c",T[i][j][k]='.');
                                   a=(rand()%(1-0+1))+0;
                                   b=(rand()%(0-S+1))+S;
                                   c=(rand()%(1-0+1))+0;
                                   i=i+a;
                                   j=j+b;
                                   k=k+c; 
                                   printf("%c",T[i][j][k]='o'); 
                                   com++;
                               }
                    }
            }






            /*part*/
        if(k==h && i || j !=1 || j !=L)
           {
                printf("%c",T[i][j][k]='.');
                x=(rand()%(1-S+1))+S;
                y=(rand()%(1-S+1))+S;
                b=(rand()%(0-S+1))+S;
                i=i+x;
                j=j+y; 
                k=k+b; 
                printf("%c",T[i][j][k]='o');
                com++;
           }
              else
                      {
                           if(k==h && j==1 && i !=1 || i !=L)
                              {
                                   printf("%c",T[i][j][k]='.');
                                   x=(rand()%(1-S+1))+S;
                                   a=(rand()%(1-0+1))+0;
                                   b= (rand()%(0-S+1))+S;
                                   i=i+x;
                                   j=j+a;
                                   k=k+b;
                                   printf("%c",T[i][j][k]='o'); 
                                    com++;
                               }
                                  else
                                         {
                                           if(k==h && j==1 && i==1)
                                             {
                                                printf("%c",T[i][j][k]='.');
                                                a=(rand()%(1-0+1))+0;
                                                b=(rand()%(0-S+1))+S;
                                                c=(rand()%(1-0+1))+0;
                                                i=i+a; 
                                                j=j+c; 
                                                k=k+b; 
                                                printf("%c",T[i][j][k]='o'); 
                                                com++;
                                              }
                                                 else
                                                        {
                                                            i=L;
                                                             printf("%c",T[i][j][k]='.');
                                                             a=(rand()%(1-0+1))+0;
                                                             b=(rand()%(0-S+1))+S;
                                                             d=(rand()%(0-S+1))+S;
                                                            i=i+b; 
                                                            j=j+a; 
                                                            k=k+d; 
                                                            printf("%c",T[i][j][k]='o'); 
                                                            com++;
                                                        }
                                         }



                 if(k==h && i==L && j !=1 || j !=col)
                     {
                           printf("%c",T[i][j][k]='.');
                           x=(rand()%(1-S+1))+S;
                           b=(rand()%(0-S+1))+S;
                           d=(rand()%(0-S+1))+S;
                          i=i+b; 
                          j=j+x; 
                          k=k+d; 
                          printf("%c",T[i][j][k]='o'); 
                          com++;
                   }
                       else
                            {
                              if(k==h && i==L && j==1)
                                 {
                                    printf("%c",T[i][j][k]='.');
                                    b=(rand()%(0-S+1))+S;
                                    a=(rand()%(1-0+1))+0;
                                    d=(rand()%(0-S+1))+S;
                                    i=i+b;
                                    j=j+a;
                                    k=k+d;
                                    printf("%c",T[i][j][k]='o');
                                     com++;
                                }
                                   else
                                       {
                                         j=col; 
                                         printf("%c",T[i][j][k]='.');
                                         b=(rand()%(0-S+1))+S;
                                         d=(rand()%(0-S+1))+S;
                                         f=(rand()%(0-S+1))+S;
                                         i=i+b;
                                         j=j+d;
                                         k=k+f; 
                                         printf("%c",T[i][j][k]='o');
                                          com++;
                                       }
                          }


         if(k==h && j==col && i !=1 || i !=L)
             {
                   printf("%c",T[i][j][k]='.');
                   b=(rand()%(0-S+1))+S;
                   d=(rand()%(0-S+1))+S;
                   x=(rand()%(1-S+1))+S;
                  i=i+x; 
                  j=j+b; 
                  k=k+d; 
                  printf("%c",T[i][j][k]='o');
                   com++;
           }
               else
                      {
                            if(k==h && j==col && i==1)
                              {
                                  printf("%c",T[i][j][k]='.');
                                  a=(rand()%(1-0+1))+0;
                                  b=(rand()%(0-S+1))+S;
                                  d=(rand()%(0-S+1))+S;
                                  i=i+a;
                                  j=j+b;
                                  k=k+d;
                                  printf("%c",T[i][j][k]='o');
                                   com++;
                             }
                                else
                                      {
                                           i=L;
                                            printf("%c",T[i][j][k]='.');
                                            b=(rand()%(0-S+1))+S;
                                            d=(rand()%(0-S+1))+S;
                                           f=(rand()%(0-S+1))+S;
                                           i=i+b; 
                                           j=j+d; 
                                           k=k+f; 
                                           printf("%c",T[i][j][k]='o'); 
                                           com++;
                                       }
                 }



       if(k==h && i==1 && j !=1 || j !=col)
          {
                 printf("%c",T[i][j][k]='.');
                 a=(rand()%(1-0+1))+0;
                 b=(rand()%(0-S+1))+S;
                 x=(rand()%(1-S+1))+S;
                 i=i+a; 
                 j=j+x; 
                 k=k+b; 
                 printf("%c",T[i][j][k]='o'); 
                 com++;
           }
              else
                     {
                        if(k==h && i==1 && j==1)
                          {
                             printf("%c",T[i][j][k]='.');
                              a=(rand()%(1-0+1))+0;
                              b=(rand()%(0-S+1))+S;
                              c=(rand()%(1-0+1))+0;
                             i=i+a; 
                             j=j+c; 
                             k=k+b; 
                             printf("%c",T[i][j][k]='o'); 
                             com++;
                         }
                           else
                                  {
                                     j=col; 
                                     printf("%c",T[i][j][k]='.');
                                     a=(rand()%(1-0+1))+0;
                                    b=(rand()%(0-S+1))+S;
                                    d=(rand()%(0-S+1))+S;
                                    i=i+a;
                                    j=j+b;
                                    k=k+d; 
                                    printf("%c",T[i][j][k]='o'); 
                                    com++;
                                 }
                     }
               }
}
}
}
}