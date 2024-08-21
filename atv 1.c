#include <stdio.h> // entrada e saidas

double soma(double n1, double n2);
double subt(double n1, double n2);
double divi(double n1, double n2);
double mult(double n1, double n2);
double media(double n1, double n2);
double porcento(double n1, double n2);

int main(){ //função "mãe"
	double valor1, valor2;
	char operacao;
	printf("Escolha uma operacao.\n+ adicao\n- sbtracao\n/ divisao\n* multiplicacao\n$ media\n~ porcento\n");
	scanf("%c",&operacao);
	printf("Digite o numero 1: ");
	scanf("%lf",&valor1);
	printf("Digite o numero 2: ");
	scanf("%lf",&valor2);
	
	if(operacao == '+'){
		printf("R. Soma = %f",soma(valor1,valor2));
	}
	else if(operacao == '-'){
		printf("R. SubT = %f",subt(valor1,valor2));
	}
	else if(operacao == '/'){
		printf("R. Divi = %f",divi(valor1,valor2));
	}
	else if(operacao == '*'){
		printf("R. Mult = %f",mult(valor1,valor2));
	}
	else if(operacao == '$'){
		printf("R. Media = %f",media(valor1,valor2));
	}
	else if(operacao == '~'){
		printf("R. porcento = %f ",porcento(valor1, valor2));
	}
	else{
		printf("Operacao %c invalida.",operacao);
	}
}
double soma(double n1, double n2){
	return n1 + n2;
}
double subt(double n1, double n2){
	return n1 - n2;
}
double divi(double n1, double n2){
	return n1 / n2;
}
double mult(double n1, double n2){
	return n1 * n2;
}
double media(double n1, double n2){
	return (n1 + n2) / 2;
}
double porcento(double n1, double n2){
	return (n1 * n2) / 100;
}


