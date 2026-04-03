# Calculadora de Média Ponderada da faculdade (N1, N2, AI)

Sistema em C para cálculo de média e simulação de notas conforme regras de avaliação (N1 e AI com peso 0.4, N2 com peso 0.6). O programa informa se o aluno foi aprovado (média >= 6.0) ou reprovado, mostrando a diferença para a média. Permite também calcular a nota necessária na N2 para atingir a média, considerando ou não a nota da AI.

## Funcionalidades

- **Opção 1 – Calcular/Simular N1, N2 e AI**  
  Lê as três notas, calcula a média ponderada e exibe:
  - "Parabéns!" e quantos pontos acima da média (se aprovado).
  - "REPROVADO" e quantos pontos abaixo da média (se reprovado).

- **Opção 2 – Verificar quanto preciso na N2**  
  - Lê a nota N1.
  - Pergunta se o aluno já tem nota da AI.
    - Se sim, lê AI e calcula a nota necessária em N2 considerando a AI.
    - Se não, calcula a nota necessária em N2 sem considerar a AI.
  - Exibe o valor necessário para atingir a média 6.0.

- **Validação de opção inválida** – Se o usuário digitar opção diferente de 1 ou 2, exibe mensagem e repete o menu.

- **Loop contínuo** – Após cada operação, pergunta se deseja fazer outra (S/N).
