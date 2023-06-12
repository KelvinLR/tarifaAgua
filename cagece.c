#include <stdio.h>

int roundValor(double valor){
	valor = valor+0.5;
	return valor;
}

float calculaTarifa(int leitura, int isAgua){
	float qtdAgua, qtdEsgoto, qtdFaixa1, qtdFaixa2, qtdFaixa3, qtdFaixa4, qtdFaixa5, tarifaTotal, tarifaFaixa1, tarifaFaixa2, tarifaFaixa3, tarifaFaixa4, tarifaFaixa5;
	if(isAgua == 1){		
		if(leitura >= 10){
			qtdFaixa1 = 10;
			leitura = leitura - 10;
			tarifaFaixa1 = 10*4.99;
		} else {
			tarifaFaixa1 = leitura*4.99;
		}
		if(leitura > 5){
			qtdFaixa2 = 5;
			leitura = leitura - 5;
			tarifaFaixa2 = 5*6.48;
		}
		else {
			tarifaFaixa2 = qtdFaixa2*6.48;
		}
		if(leitura > 5){
			qtdFaixa3 = 5;
			leitura = leitura - 5;
			tarifaFaixa3 = 5*7.00;
		}
		else {
			tarifaFaixa3 = qtdFaixa3*7.00;
		}
		if(leitura > 30){
			qtdFaixa4 = 30;
			leitura = leitura - 30;
			tarifaFaixa4 = 30*12.02;
		} else {
			tarifaFaixa4 = qtdFaixa4*12.02;
		}
		
		qtdFaixa5 = leitura;
		tarifaFaixa5 = leitura*21.23;

		printf("\nFaixa 1: %f\nFaixa 2: %f\nFaixa 3: %f\nFaixa 4: %f\nFaixa 5: %f\n", qtdFaixa1, qtdFaixa2, qtdFaixa3, qtdFaixa4, qtdFaixa5);
	}
	else if(isAgua == 0) {	
			if(leitura >= 10){
			qtdFaixa1 = 10;
			leitura = leitura - 10;
			tarifaFaixa1 = 10*5.54;
		} else {
			tarifaFaixa1 = leitura*5.54;
		}
		if(leitura > 5){
			qtdFaixa2 = 5;
			leitura = leitura - 5;
			tarifaFaixa2 = 5*7.09;
		}
		else {
			tarifaFaixa2 = qtdFaixa2*7.09;
		}
		if(leitura > 5){
			qtdFaixa3 = 5;
			leitura = leitura - 5;
			tarifaFaixa3 = 5*7.69;
		}
		else {
			tarifaFaixa3 = qtdFaixa3*7.69;
		}
		if(leitura > 30){
			qtdFaixa4 = 30;
			leitura = leitura - 30;
			tarifaFaixa4 = 30*13.20;
		} else {
			tarifaFaixa4 = qtdFaixa4*13.20;
		}
		
		qtdFaixa5 = leitura;
		tarifaFaixa5 = leitura*23.34;

		printf("\nFaixa 1: %f\nFaixa 2: %f\nFaixa 3: %f\nFaixa 4: %f\nFaixa 5: %f\n", qtdFaixa1, qtdFaixa2, qtdFaixa3, qtdFaixa4, qtdFaixa5);
	}
	
	tarifaTotal = tarifaFaixa1+tarifaFaixa2+tarifaFaixa3+tarifaFaixa4+tarifaFaixa5;
	return tarifaTotal;
}

int main(void){
	int leitura, roundEsgoto;
	float qtdEsgoto, tarifaTotal, tarifaAgua, tarifaEsgoto;
	
	printf("Informe a leitura do hidrometro: ");
	scanf("%d", &leitura);
	
	qtdEsgoto = 0.8*leitura;
	roundEsgoto = roundValor(qtdEsgoto);
	
	printf("Tipo de tarifa: Residencial Normal\n");
	printf("Leitura agua: %d\n", leitura);
	printf("Leitura esgoto: %d\n", roundEsgoto);
	
	tarifaAgua = calculaTarifa(leitura, 1);
	printf("Tarifa Agua: %.2f\n", tarifaAgua);
	tarifaEsgoto = calculaTarifa(roundEsgoto, 0);
	printf("Tarifa Esgoto: %.2f\n", tarifaEsgoto);
	
	tarifaTotal = tarifaAgua + tarifaEsgoto;
	printf("\nTarifa Total: %.2f ", tarifaTotal);
	
	return 0;
}
