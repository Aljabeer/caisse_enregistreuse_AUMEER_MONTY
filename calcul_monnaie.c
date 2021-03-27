#include <stdio.h>
float a;//valeur a payer
float b;//montant donner par l'utilisateur
float m;//montant a retourner
//nombre de billet et piece
int n2000=3;
int n1000=8;
int n500=7;
int n200=12;
int n100=15;
int n50=11;
int n25=15;
int n20=30;
int n10=27;
int n5=32;
int n1=91;
int n50s=22;
int n20s=18;
int n5s=9;
float rendu_monnaie(float n)
{
int count1=0;
m=b-a;
while (m>=2000 && n2000>0)
{
	m=m-2000;
	count1=count1+1;
	n2000=n2000-1;
}
printf("%d billets de 2000\n",count1);

int count2=0;
while (m>=1000 && n1000>0)
{
	m=m-1000;
	count2=count2+1;
	n1000=n1000-1;
}	
printf("%d billets de 1000\n",count2);

int count3=0;
while (m>=500 && n500>0)
{
	m=m-500;
	count3=count3+1;
	n500=n500-1;
}
printf("%d billets de 500\n",count3);

int count4=0;
while (m>=200 && n200>0)
{
	m=m-200;
	count4=count4+1;
	n200=n200-1;
}
printf("%d billets de 200\n",count4);

int count5=0;
while (m>=100 && n100>0)
{
	m=m-100;
	count5=count5+1;
	n100=n100-1;
}
printf("%d billets de 100\n",count5);

int count6=0;
while (m>=50 && n50>0)
{
	m=m-50;
	count6=count6+1;
	n50=n50-1;
}
printf("%d billets de 50\n",count6);

int count7=0;
while (m>=25 && n25>0)
{
	m=m-25;
	count7=count7+1;
	n25=n25-1;
}
printf("%d billets de 25\n",count7);

int count8=0;
while (m>=20 && n20>0)
{
	m=m-20;
	count8=count8+1;
	n20=n20-1;
}
printf("%d pieces de 20\n",count8);

int count9=0;
while (m>=10 && n10>0)
{
	m=m-10;
	count9=count9+1;
	n10=n10-1;
}
printf("%d pieces de 10\n",count9);

int count10=0;
while (m>=5 && n5>0)
{
	m=m-5;
	count10=count10+1;
	n5=n5-1;
}
printf("%d pieces de 5\n",count10);

int count11=0;
while (m>=1 && n1>0)
{
	m=m-1;
	count11=count11+1;
	n1=n1-1;
}
printf("%d pieces de 1\n",count11);

int count12=0;
while (m>=0.5 && n5s>0)
{
	m=m-0.5;
	count12=count12+1;
	n50s=n50s-1;
}
printf("%d pieces de 0.5\n",count12);

int count13=0;
while (m>=0.2 && n20s>0)
{
	m=m-0.2;
	count13=count13+1;
	n20s=n20s-1;
}
printf("%d pieces de 0.2\n",count13);

int count14=0;
while (m>=0.05 && n5s>0)
{
	m=m-0.05;
	count14=count14+1;
	n5s=n5s-1;
}
printf("%d pieces de 0.05\n",count14);
printf("\n");
printf("Nombre de billets et pieces restant: \n");
printf("%d 2000\n",n2000);
printf("%d 1000\n",n1000);
printf("%d 500\n",n500);
printf("%d 200\n",n200);
printf("%d 100\n",n100);
printf("%d 50\n",n50);
printf("%d 25\n",n25);
printf("%d pieces 20\n",n20);
printf("%d pieces 10\n",n10);
printf("%d pieces 5\n",n5);
printf("%d pieces 1\n",n1);
printf("%d pieces de 50 sous\n",n50s);
printf("%d pieces de 20 sous\n",n20s);
printf("%d pieces de 5 sous\n",n5s);

return 0;
}

int main()
{
printf("Entrez votre valeur a payer:\n");
scanf("%f",&a);
printf("Entrez votre montant:\n");
scanf("%f",&b);

printf("%f",rendu_monnaie(m));

}
