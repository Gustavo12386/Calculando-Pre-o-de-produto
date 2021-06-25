#include<stdio.h>

int main(){
	float total=0, totalfinal=0, preco[5];
	int i=0, qtde, cont=-1, confirma=1, item;
	printf("digite o preco dos itens\n\n");
	for(i=0; i < 5; i++){
	printf("item[%d]:", i+1);
	scanf("%f", &preco[i]);
	
	}	
	while(confirma == 1){
	printf("\ndigite o codigo do item");
	scanf("%d", &item);
	printf("\npreco do item:%.2f", preco[item-1]);
	printf("digite a quantidade do item");
	scanf("%d", &qtde);
	total=qtde*preco[item-1];
	totalfinal+=total;
	printf("\ntotal do item:%.2f", item);
	printf("digite 1 para continuar", confirma);
	scanf("%d", &confirma);
	i++;
	printf("\ntotal da conta e igual: %.2f", totalfinal);
	}
		
	
	
}
