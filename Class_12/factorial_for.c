#include<stdio.h>

int main();
 int  i=0;
 int n=1;
 printf("CIenījamais lietotāj, lūdzu ievadi vienu veselu skaitli");
 scanf("%d", &n);
 int fact = 1;
 for(i=1 ; i<=n; i++)
 fact = fact * i;
 printf("%3d! = %15d\n", i,fact);

 return 0;
