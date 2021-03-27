#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 int main() {
  int c, n, mont, ex;

   srand(time(0));

  for (c = 1; c <=1; c++) {
    n = rand() % 10000;
    printf("Bill to be paid: Rs %d\n", n);
    }
   printf("Enter your money please: Rs ");
    scanf("%d", &mont);

    if(mont>n){
      ex = mont - n;
    printf("Yourbill to be paid is: Rs %d\n",n);
    printf( "You entered: Rs %d\n", mont) ;
    printf("Your change is: Rs %d\n", ex);
  }
  else if(mont<n){
    ex = n - mont;
    printf("Your bill to be paid is: Rs %d\n",n);
    printf( "You entered: Rs %d\n", mont);
    printf("plz Enter the remaining: Rs %d\n", ex);
  
  }
  else{
    printf("Mercii");

  }
  
   int  r2000=0, r1000=0, r500=0, r200=0,  r100=0, r50=0, r20=0, r25=0, r10=0, r5=0 , r1=0, x=0; 

  
  
 while(ex >= 2000) 
  { 
    r2000 = ex / 2000 ; 
    ex = ex % 2000;
    
    printf("\nTotal Number Of 2000 Rupees Notes used : %d", r2000) ;
    break ; 
   
  }
   while(ex >= 1000) 
  { 
    r1000 = ex / 1000 ; 
    ex = ex % 1000 ;
    
    printf("\nTotal Number Of 1000 Rupees Notes used : %d", r1000) ;
    break ; 
  }
 while(ex >= 500) 
  { 
    r500 = ex / 500 ; 
    ex = ex % 500;
    printf("\nTotal Number Of 500 Rupees Notes used : %d", r500) ;
    break ; 
  } 
  while(ex >= 200) 
  { 
    r200 = ex / 200 ; 
    ex = ex % 200;
   printf("\nTotal Number Of 200 Rupees Notes used : %d", r200) ;
    break ; 
   
  }
  while(ex >= 100) 
  { 
    r100 = ex / 100 ; 
    ex = ex % 100;
    printf("\nTotal Number Of 100 Rupees Notes used : %d", r100) ;
    break ; 
  } 
  while(ex >= 50) 
  { 
    r50 = ex / 50 ;
    ex = ex % 50; 
    printf("\nTotal Number Of 50 Rupees Notes used : %d", r50) ; 
  break ; 
  }  
  while(ex >= 25) 
  { 
    r25 = ex / 25 ;
    ex = ex % 25; 
    printf("\nTotal Number Of 25 Rupees Notes used : %d", r25) ; 
  break ; 
  }  
  while(ex >= 20) 
  { 
    r20 = ex / 20 ; 
    ex = ex % 20;
    printf("\nTotal Number Of 20 Rupees coins used : %d", r20) ; 
    break ; 
  }  
  while(ex >= 10) 
  { 
    r10 = ex / 10 ; 
    ex = ex % 10;
    printf("\nTotal Number Of 10 Rupees coins used : %d", r10) ; 
    break ; 
  } 
  while(ex >= 5) 
  { 
    r5 = ex / 5 ; 
    ex = ex % 5;
    printf("\nTotal Number Of 5 Rupees Coin used : %d", r5) ; 
    break ; 
  } 

  while(ex >= 1) 
  { 
    r1 = ex / 1 ; 
    ex = ex % 1;
    printf("\nTotal Number Of 1 Rupees  Coin used : %d", r1) ; 
    break ; 
  }
  int n2000, n1000, n500, n200, n100, n50, n25, n20, n10, n5, n1,z;


    n2000=10;
   x = n2000 - r2000;
        switch (x) {
          case 0:
               printf("\n Rs 2000 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n2000);
           break;
           default:
           printf("\nNumber of 2000 notes remaining: %d\n", x );
  }

        
  
     n1000=10;
     x = n1000 - r1000;
        switch (x) {

           case 0:
               printf("\n Rs 1000 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n1000);
           break;
           default:
           printf("\nNumber of 1000 notes remaining: %d\n", x );
  }

     n500=10;
      x = n500 - r500;
        switch (x) {

           case 0:
               printf("\n Rs 500 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n500);
           break;
           default:
           printf("\nNumber of 500 notes remaining: %d\n", x );
  }

    n200=10;
           x = n200 - r200;
        switch (x) {

           case 0:
               printf("\n Rs 200 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n200);
           break;
           default:
           printf("\nNumber of 200 notes remaining: %d\n", x );
  }

 n100=10;
           x = n100 - r100;
        switch (x) {

           case 0:
               printf("\n Rs 100 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n100);
           break;
           default:
           printf("\nNumber of 100 notes remaining: %d\n", x );
  }

   n50=10;
           x = n50 - r50;
        switch (x) {

           case 0:
               printf("\n Rs 50 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n50);
           break;
           default:
           printf("\nNumber of 50 notes remaining: %d\n", x );
  }
        n25=10;
           x = n25 - r25;
        switch (x) {

           case 0:
               printf("\n Rs 25 notes have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de billets svp: \n");
                 scanf("%d", &n25);
           break;
           default:
           printf("\nNumber of 25 notes remaining: %d\n", x );
  }

        n20=10;
           x = n20 - r20;
        switch (x) {

           case 0:
               printf("\n Rs 20 coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de coins svp: \n");
                 scanf("%d", &n20);
           break;
           default:
           printf("\nNumber of 20 coins remaining: %d\n", x );
  }
        n10=10;
           x = n10 - r10;
        switch (x) {

           case 0:
               printf("\n Rs 10 coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de coins svp: \n");
                 scanf("%d", &n10);
           break;
           default:
           printf("\nNumber of 10 coins remaining: %d\n", x );
  }
        n5=10;
           x = n5 - r5;
        switch (x) {

           case 0:
               printf("\n Rs 5 coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de coins svp: \n");
                 scanf("%d", &n5);
           break;
           default:
           printf("\nNumber of 5 coins remaining: %d\n", x );
  }

          n1=10;
           x = n1 - r1;
        switch (x) {

           case 0:
               printf("\n Rs 1 coins have finished: \n ");
                 printf("Enter 0 to stop the program or 1 to refill:  \n");
                 scanf("%d", &z);
                 if(z==0)
                exit(0);
              else
                 printf("Inserer le nombre de coins svp: \n");
                 scanf("%d", &n1);
           break;
           default:
           printf("\nNumber of 1 coins remaining: %d\n", x );
  }


  }
