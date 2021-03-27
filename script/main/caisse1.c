#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 int main(void) {
    int c, n, mont, ex;

  srand(time(0));
   for (c = 1; c <=1; c++) {
    n = rand() % 10000;
    printf("Bill to be paid: Rs %d\n", n);
    }
   printf("Inserer  votre argent  svp: Rs ");
    scanf("%d", &mont);

    if(mont>n){
    
		printf("votre montant a payer est: Rs %d\n",n);
		printf( "Vous avez Inserer: Rs %d\n", mont) ;
	
	}
	else if(mont<n){
		
		printf("votre montant a payer est: Rs %d\n",n);
		printf( "Vous avez Inserer: Rs %d\n", mont);
		printf("Veuillez ajouter les restes svp:");
	}
	else
			printf("Mercii");
	
}