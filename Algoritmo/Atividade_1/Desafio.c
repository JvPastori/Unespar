#include <stdio.h>

#define NUM_OBJETOS 10

int main() {
    double valor_unitario[NUM_OBJETOS];
    int quantidade_vendida[NUM_OBJETOS];

    for (int i = 0; i < NUM_OBJETOS; i++) {
        printf("Digite o valor unitario do objeto %d: ", i + 1);
        scanf("%lf", &valor_unitario[i]);
        printf("Digite a quantidade vendida do objeto %d: ", i + 1);
        scanf("%d", &quantidade_vendida[i]);
    }

    double salario_base = 545.0;
    double valor_total_vendas = 0.0;
    int objeto_mais_vendido = 0;
    int quantidade_mais_vendida = quantidade_vendida[0];

    for (int i = 0; i < NUM_OBJETOS; i++) {
        double valor_total_objeto = valor_unitario[i] * quantidade_vendida[i];
        valor_total_vendas += valor_total_objeto;

        if (quantidade_vendida[i] > quantidade_mais_vendida) {
            objeto_mais_vendido = i;
            quantidade_mais_vendida = quantidade_vendida[i];
        }
    }

    double comissao = valor_total_vendas * 0.05;
    double salario_total = salario_base + comissao;


    printf("\nRELATORIO DE VENDAS\n");
    printf("--------------------\n");
    for (int i = 0; i < NUM_OBJETOS; i++) {
        double valor_total_objeto = valor_unitario[i] * quantidade_vendida[i];
        printf("Objeto %d: Quantidade vendida: %d, Valor unitario: R$ %.2lf, Valor total: R$ %.2lf\n",
            i + 1, quantidade_vendida[i], valor_unitario[i], valor_total_objeto);
    }

    printf("\nValor geral das vendas: R$ %.2lf\n", valor_total_vendas);
    printf("Valor da comissao do vendedor: R$ %.2lf\n", comissao);
    printf("Objeto mais vendido: %d, Quantidade vendida: %d\n",
        objeto_mais_vendido + 1, quantidade_mais_vendida);

    return 0;

}