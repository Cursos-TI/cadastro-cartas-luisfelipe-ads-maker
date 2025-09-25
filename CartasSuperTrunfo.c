#include <stdio.h>

int main(){
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char nome1[20], nome2[20];
    int pontos1, pontos2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibpc1, pibpc2;
    float superpoder1;
    float superpoder2;

    //Introdução
    printf(">>>> Jogo Super Trunfo <<<<\n");
    printf("Vamos iniciar o cadastro das cartas Super Trunfo!\n");
    printf("------------------------------------------\n");

    //inclusão de dados do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta - O código de cada carta corresponde a letra inicial do estado seguido de uma numeração de 01 a 04: \n");
    scanf("%s", codigo1);

    printf("Digite a população total da cidade com números inteiros: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em quilometros quadrados incluindo ponto separador de três algarismos (exemplo: 100.000) : \n");
    scanf("%f", &area1);

    printf("Digite o PIB(Produto Interno Bruto) incluindo ponto separador de três algarismos (exemplo: 100.000) : \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontos1);

    //Cálculo da Densidade e PIB per Capita
    densidade1 = (float)populacao1 / area1;
    pibpc1 = (pib1 / populacao1) * 1000000;

    //Exibição do resultado da primeira carta
    printf("Carta 1: \n Estado: %s\n Código da Carta: %s\n Nome da Cidade: %s\n População: %.3d\n Área: %.3f km²\n PIB: %.3f milhões de reais\n Números de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais\n", estado1, codigo1, nome1, populacao1, area1, pib1, pontos1, densidade1, pibpc1);
    
    //Introdução à segunda carta
    printf("-------------------------------------\n");
    printf("Vamos cadastrar mais uma carta!\n");
    printf("-------------------------------------\n");

    //inclusão de dados do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta - O código de cada carta corresponde a letra inicial do estado seguido de uma numeração de 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Digite a população total da cidade com números inteiros: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em quilometros quadrados incluindo ponto separador de três algarismos (exemplo: 100.000) : \n");
    scanf("%f", &area2);

    printf("Digite o PIB(Produto Interno Bruto) incluindo ponto separador de três algarismos (exemplo: 100.000) : \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontos2);

    //Cálculo da Densidade e PIB per Capita
    densidade2 = (float)populacao2 / area2;
    pibpc2 = (pib2 / populacao2) * 1000000;

    //Exibição do resultado de todas as cartas
    printf("Carta 1: \n Estado: %s\n Código da Carta: %s\n Nome da Cidade: %s\n População: %.3d\n Área: %.3f km²\n PIB: %.3f milhões de reais\n Números de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais\n", estado1, codigo1, nome1, populacao1, area1, pib1, pontos1, densidade1, pibpc1);    
    printf("----------------\n");
    printf("Carta 2: \n Estado: %s\n Código da Carta: %s\n Nome da Cidade: %s\n População: %.3d\n Área: %.3f km²\n PIB: %.3f milhões de reais\n Números de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais\n", estado2, codigo2, nome2, populacao2, area2, pib2, pontos2, densidade2, pibpc2);

    //Mensagem final
    printf("---------------------------------------------------\n");
    printf("Parabéns! Acima estão as suas cartas cadastradas!\n");
    printf("---------------------------------------------------\n");

    //Batalha das Cartas
    //variável super poder
    superpoder1 = (float)populacao1 + area1 + pib1 + pibpc1 - densidade1;
    superpoder2 = (float)populacao2 + area2 + pib2 + pibpc2 - densidade2;
    int batalha1;

    //Início da Batalha
    printf("Para iniciar a batalha, abaixo segue o Super Poder total de cada uma das cartas!\n");
    printf("O super poder da Carta %s é %f\n", codigo1, superpoder1);
    printf("O super poder da Carta %s é %f\n", codigo2, superpoder2);
    printf("------------------------------------\n");

    batalha1 = superpoder1 > superpoder2;
    
    printf(" Na batalha inicial, disputando o poder total, se o resultado for 1, a carta 1 vence! Se o resultado for 0, a carta 2 vence!\n");
    printf("3, 2, 1... Let's Go!\n");
    printf("A Carta vencedora é: %d\n", batalha1);
    printf("------------------------------------\n");

    //Batalha dos atributos
    //variáveis e calculos dos atributos
    int batalhapop;
    int batalhaarea;
    int batalhapib;
    int batalhapontos;
    int batalhadensidade;
    int batalhapibpc;
    int batalhasptotal;

    
    batalhapop = populacao1 > populacao2;
    batalhaarea = area1 > area2;
    batalhapib = pib1 > pib2;
    batalhapontos = pontos1 > pontos2;
    batalhadensidade = densidade1 < densidade2;
    batalhapibpc = pibpc1 > pibpc2;
    batalhasptotal = superpoder1 > superpoder2;
    

    //Exibição da batalha dos atributos
    printf("Agora vamos ao resultado da batalha de cada atributo!\nSegue o mesmo padrão, onde 1 é vitória da Carta 1 e 0 é vitória da Carta 2!\n");
    printf("3, 2, 1... Let's Go!\n");
    printf("População: %d\nÁrea: %d\nPIB: %d\nPontos Turísticos: %d\nDensidade Populacional: %d\nPIB per Capita: %d\n",batalhapop, batalhaarea, batalhapib, batalhapontos, batalhadensidade, batalhapibpc);
    //printf("População: %d\nPontos turísticos: %d\n", populacao1 > populacao2, pontos1 > pontos2);
    printf("A Carta vencedora é: %d\n", batalha1);


    return 0;

}