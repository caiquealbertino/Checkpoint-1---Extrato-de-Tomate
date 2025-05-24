#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tabela;
    printf("\nEscolha uma opcao de A a D: ");
    tabela = getchar();
    switch (tabela)
    {
    case 'A': {
        int pesot;
        printf("\nQual o peso dos tomates? ");
        scanf("%d", &pesot);
        float carbo1 = pesot / 32.25;
        printf("\nQuantidade de carboidratos do saco de tomate: %.2f", carbo1);
        break;}
    case 'B':{
        printf("\nQuantidade de carboidrato em 1 colher de sopa (15g) de extrato de tomate: 2g");
        break;}
    case 'C':{
        int peso_t;
        printf("\nQuantidade de tomate utilizado em gramas: ");
        scanf("%d", &peso_t);
        int peso_e;
        printf("\nQuantidade de extrato utilizado em gramas: ");
        scanf("%d", &peso_e);
        float carbo1, carbo2, carbot;
        carbo1 = peso_t * 0.031;
        carbo2 = peso_e * 0.133;
        carbot = carbo1 + carbo2;
        printf("\nTotal de carboidratos no molho: %.1fg", carbot);
        if (carbo1>carbo2){
            printf("\nO tomate contribui para a maior parte dos carboidratos do molho");
        } else{
            printf("\nO extrato de tomate contribuiu para a maior parte dos carboidratos do molho");
        } 
        break;}
    case 'D': {
        int capacidade_r;
        printf("\nCapacidade do recipiente em gramas: ");
        scanf("%d", &capacidade_r);
        int quantidade_t;
        quantidade_t = 6 * capacidade_r;
        printf("\nSerao necessarios aproximadamente %dg de tomates para fazer %dg de extrato artesanal", quantidade_t, capacidade_r);
        break;}
    default:
        break;
    }
    return 0;   
}
