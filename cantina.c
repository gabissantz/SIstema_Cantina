#include <stdio.h>

void novo_pedido(void);
void calculadora(void);
void simular_desconto(void);
void mostrar_relatorio(void);

int main(void) {
	int opcao;


	do {
		printf("\n---- Salvatore ----\n");
		printf("1. Novo Pedido\n");
		printf("2. Calculadora\n");
		printf("3. Simular Desconto\n");
		printf("4. Mostrar Relatorio\n");
		printf("0. Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		if (opcao == 1) {
			novo_pedido();
		}
		else if (opcao == 2) {
			calculadora();
		}
		else if (opcao == 3) {
			simular_desconto();
		}
		else if (opcao == 4) {
			mostrar_relatorio();
		}
		else if (opcao == 0) {
			printf("Saindo do programa...\n");
		}
		else {
			printf("Opção inválida. Tente novamente.\n");
		}
	} while (opcao != 0);

	return 0;
}



void novo_pedido(void) {
	int opcao_produto;
	int quantidade;
	float preco_unitario = 0.0;
	float total_pedido = 0.0;

	printf("\n--- CARDAPIO ---\n");
	printf("1. Hamburguer - R$ 15.00\n");
	printf("2. Batata Frita - R$ 10.00\n");
	printf("3. Refrigerante - R$ 5.00\n");
	printf("Escolha o produto (1 a 3): ");
	scanf("%d", &opcao_produto);

	switch (opcao_produto) {
	case 1:
		preco_unitario = 15.00;
		break;
	case 2:
		preco_unitario = 10.00;
		break;
	case 3:
		preco_unitario = 5.00;
		break;
	default:
		printf("Opcao de produto invalida!\n");
		return;
	}

	printf("Digite a quantidade que deseja: ");
	scanf("%d", &quantidade);

	total_pedido = preco_unitario * quantidade;

	printf("\nPedido realizado com sucesso!\n");
	printf("Valor total a pagar: R$ %.2f\n", total_pedido);
}

void calculadora(void) {
	printf("[Sistema]: Calculadora ainda nao implementada.\n");
}

void simular_desconto(void) {
	printf("[Sistema]: Simulador de desconto ainda nao implementado.\n");
}

void mostrar_relatorio(void) {
	printf("[Sistema]: Relatorio ainda nao implementado.\n");
}
