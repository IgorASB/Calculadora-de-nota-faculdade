#include <stdio.h>
#define pf printf
#define sf scanf

int main()
{
    float N1, N2, AI, media = 6.0, Smedia = 0.0;
    int opcao;
    char SN, CC;

    while (1) {
        pf("\t\tMENU\n");
        pf("1 - Calcular/Simular N1,N2 e AI\n");
        pf("2 - Verificar quanto preciso na N2\n");
        pf("Digite a opcao: ");
        sf("%d", &opcao);

        if (opcao != 1 && opcao != 2) {
            pf("\nOpcao invalida\n");
            continue;
        }

        switch (opcao) {
            case 1:
                pf("Digite sua nota N1: ");
                sf("%f", &N1);
                pf("Digite sua nota N2: ");
                sf("%f", &N2);
                pf("Digite sua nota AI: ");
                sf("%f", &AI);
                Smedia = (N1 + AI) * 0.4 + N2 * 0.6;
                if (Smedia >= media) {
                    pf("\n\tParabens!");
                    pf("\nSua nota e: [%.2f]\n[%.2f] pontos acima da media\n", Smedia, Smedia - media);
                } else {
                    pf("\n\tREPROVADO");
                    pf("\nSua nota e: [%.2f]\n[%.2f] pontos abaixo da media\n", Smedia, media - Smedia);
                }
                break;
            case 2:
                pf("Digite sua nota N1: ");
                sf("%f", &N1);
                pf("Voce ja tem a nota da AI? (S/N)\n");
                sf(" %c", &SN);
                if (SN == 'S' || SN == 's') {
                    pf("Digite sua AI: ");
                    sf("%f", &AI);
                    float notaN = (media - (N1 + AI) * 0.4) / 0.6;
                    pf("\nVoce precisa tirar %.2f em N2 (CONTANDO AI)\n", notaN);
                } else {
                    float notaN = (media - N1 * 0.4) / 0.6;
                    pf("\nVoce precisa tirar %.2f em N2 (SEM CONTAR AI)\n", notaN);
                }
                break;
        }

        pf("\nDeseja fazer outra operacao? (S/N)\n");
        sf(" %c", &CC);
        if (CC != 'S' && CC != 's') {
            return 0;
        }
    }
}
