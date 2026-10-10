#include <stdio.h>
#include <ctype.h>

int main() {
	int opcao;
	double num1, num2, resultado;
	char continuar;
	int executar = 1;

	while (executar) {
		printf("=================================\n");
		printf("Calculadora Simples\n");
		printf("=================================\n");
		printf("Selecione uma operação:\n");
		printf("1. Adição\n");
		printf("2. Subtração\n");
		printf("3. Multiplicação\n");
		printf("4. Divisão\n");
		printf("5. Sair\n");
		printf("Opção: ");

	if (scanf("%d", &opcao) != 1) {
		printf("\nOpção inválida! Por favor, digite um número inteiro entre 1 e 5.\n\n");
		while (getchar() != '\n');
		continue;
	}

	while (getchar() != '\n');

	if (opcao < 1 || opcao > 5) {
		printf("\nOpção inválida! Por favor, digite um número inteiro entre 1 e 5.\n\n");
		continue;
	}

	if (opcao == 5) {
		printf("\nObrigada por usar a calculadora! Até a próxima.\n");
		break;
	}

	printf("\nDigite o primeiro número: ");
	scanf("%lf", &num1);
	while (getchar() != '\n');

	printf("\nDigite o segundo número: ");
	scanf("%lf", &num2);
	while (getchar() != '\n');

	int operacao_valida = 1;
	switch (opcao) {
	case 1:
		resultado = num1 + num2;
		printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
		break;
	case 2:
		resultado = num1 - num2;
		printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
		break;
	case 3:
		resultado = num1 * num2;
		printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
		break;
	case 4:
		if (num2 != 0) {
			resultado = num1 / num2;
			printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
		} else {
			printf("Erro: Divisão por zero não é permitida.\n");
			operacao_valida = 0;
		}
		break;
	}

	while (1) {
		printf("\nDeseja realizar outra operação? (s/n): ");
		scanf(" %c", &continuar);
		while (getchar() != '\n');

		continuar = tolower(continuar);

		if (continuar == 's') {
			printf("\n");
			break;
		} else if (continuar == 'n') {
			printf("\nObrigada por usar a calculadora! Até a próxima.\n");
			executar = 0;
			break;
		} else {
			printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
		}
	}
}

return 0;
}