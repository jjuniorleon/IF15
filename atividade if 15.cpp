    #include <stdio.h>

int main() {
	int n1;
	
	printf("escolha um numero entre 1 e 7: ");
	scanf("%d", &n1);
	
	if(n1 <= 0) {
		printf("escolha um numero entre 1 e 7.");
	}else if(n1 == 1) {
		printf("domingo");
	}else if(n1 == 2) {
		printf("segunda-feira");
	}else if(n1 == 3) {
		printf("terca-feira");
	}else if(n1 == 4) {
		printf("quarta-feira");
	}else if(n1 == 5) {
		printf("quinta-feira");
	}else if(n1 == 6) {
		printf("sexta-feira");
	}else if(n1 == 7) {
		printf("sabado");
	}else if(n1 > 8) {
		printf("escolha um numero entre 1 e 7.");
	}
}
