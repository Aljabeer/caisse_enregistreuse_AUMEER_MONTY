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
	int  r2000, r1000, r500, r200,  r100, r50, r20, r25, r10, r5 , r1, x; 
  while(ex >= 2000) 
  { 
    r2000 = ex / 2000 ; 
    ex = ex % 2000;
    printf("\nTotal Number Of 2000 Rupees Notes used : %d\n", r2000) ;
    break ; 
   
  }
   while(ex >= 1000) 
  { 
    r1000 = ex / 1000 ; 
    ex = ex % 1000 ;
    printf("\nTotal Number Of 1000 Rupees Notes used : %d\n", r1000) ;
    break ; 
  }
 while(ex >= 500) 
  { 
    r500 = ex/ 500 ; 
    ex = ex % 500;
    printf("\nTotal Number Of 500 Rupees Notes used : %d\n", r500) ;
    break ; 
  } 
  while(ex >= 200) 
  { 
    r200 = ex / 200 ; 
    ex = ex % 200;
    printf("\nTotal Number Of 200 Rupees Notes used : %d\n", r200) ;
    break ; 
   
  }
  while(ex >= 100) 
  { 
    r100 = ex / 100 ; 
    ex = ex % 100;
    printf("\nTotal Number Of 100 Rupees Notes used : %d\n", r100) ;
    break ; 
  } 
  while(ex >= 50) 
  { 
    r50 = ex / 50 ;
    ex = ex % 50; 
    printf("\nTotal Number Of 50 Rupees Notes used : %d\n", r50) ; 
  break ; 
  }  
   while(ex >= 25) 
  { 
    r25 = ex / 25 ; 
    ex = ex % 25;
    printf("\nTotal Number Of 25 Rupees notes used : %d\n", r25) ; 
    break ; 
  } 
  while(ex >= 20) 
  { 
    r20 = ex / 20 ; 
    ex = ex % 20;
    printf("\nTotal Number Of 20 Rupees coins used : %d\n", r20) ; 
    break ; 
  }  
  while(ex >= 10) 
  { 
    r10 = ex / 10 ; 
    ex = ex % 10;
    printf("\nTotal Number Of 10 Rupees coins used : %d\n", r10) ; 
    break ; 
  } 
  while(ex >= 5) 
  { 
    r5 = ex / 5 ; 
    ex = ex % 5;
    printf("\nTotal Number Of 5 Rupees Coin used : %d\n", r5) ; 
    break ; 
  } 

  while(ex >= 1) 
  { 
    r1 = ex / 1 ; 
    ex = ex % 1;
    printf("\nTotal Number Of 1 Rupees  Coin used : %d\n", r1) ; 
    break ; 
  }
    

  
 return 0;  
    


}