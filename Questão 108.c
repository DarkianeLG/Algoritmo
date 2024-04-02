#include<stdio.h>
#include<stdio.h>
const int QUANTIDADE=3;
void main (){
	int candi_pt=0;
	int candi_ptb=0;
	int candi_pmdb=0;
	int candi_dem=0;
	int candi_psdb=0;
	int candi_pcdob=0;
	int num, k;
	  for(k=1; k<=QUANTIDADE; k++){
	  	printf("Informe o numero do candidato eleito: ");
	  	scanf("%d", &num);
	  	 int valor=num/1000;
	  	  switch(valor){
	  	  	 case 13: candi_pt= candi_pt+1; break;
	  	  	 case 14: candi_ptb= candi_ptb+1; break;
	  	  	 case 15: candi_pmdb= candi_pmdb+1; break;
	  	  	 case 25: candi_dem= candi_dem+1; break;
	  	  	 case 45: candi_psdb= candi_psdb+1; break;
	  	  	 case 65: candi_pcdob= candi_pcdob+1; break;
		   }
	   }
	     printf("O PT elegeou %d candidatos\n", candi_pt);
	     printf("O PTB elegeou %d candidatos\n", candi_ptb);
	     printf("O PMDB elegeou %d candidatos\n", candi_pmdb);
	     printf("O DEM elegeou %d candidatos\n", candi_dem);
	     printf("O PSDB elegeou %d candidatos\n", candi_psdb);
	     printf("O PCdoB elegeou %d candidatos", candi_pcdob);
 getch ();
}
