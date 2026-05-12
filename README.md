# 🎓 Calculadora de Nota da Faculdade

<div align="center">

[![Linguagem](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Compilador](https://img.shields.io/badge/Compilador-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Plataforma](https://img.shields.io/badge/Plataforma-Linux%20%7C%20Windows%20%7C%20macOS-0078D6?style=for-the-badge&logo=linux&logoColor=white)]()
[![Status](https://img.shields.io/badge/Status-Concluído-28a745?style=for-the-badge)]()

</div>

> Calculadora de média ponderada em C com simulação de notas (N1, N2 e AI). Informa aprovação ou reprovação e calcula a nota mínima necessária na N2 para atingir média 6.0.

---

## ⚙️ Funcionalidades

### Opção 1 — Calcular/Simular N1, N2 e AI
- Lê as três notas e calcula a média ponderada:
  - N1 e AI → peso **0.4**
  - N2 → peso **0.6**
- Exibe **"Parabéns!"** e quantos pontos acima da média (se aprovado)
- Exibe **"REPROVADO"** e quantos pontos faltam (se reprovado)

### Opção 2 — Quanto preciso na N2?
- Lê a nota N1 e pergunta se o aluno já tem nota da AI
  - **Com AI:** calcula a N2 necessária considerando a AI
  - **Sem AI:** calcula a N2 necessária sem a AI
- Exibe o valor exato necessário para atingir média **6.0**

### Outros
- Validação de opção inválida com repetição do menu
- Loop contínuo — pergunta se deseja fazer outra operação (S/N)

---

## 💻 Exemplo de Saída

```
=== CALCULADORA DE NOTAS ===
1 - Calcular/Simular N1, N2 e AI
2 - Verificar quanto preciso na N2
Escolha uma opção: 1

Digite a nota N1: 7.0
Digite a nota AI: 6.5
Digite a nota N2: 5.0

Média: 5.90
REPROVADO - Faltaram 0.10 pontos para a média 6.0

Deseja fazer outra operação? (S/N): N
```

---

## 🚀 Como Compilar e Executar

### Pré-requisitos

- Compilador GCC instalado — verifique com `gcc --version`

### Passos

```bash
# 1. Clone o repositório
git clone https://github.com/IgorASB/Calculadora-de-nota-faculdade.git
cd Calculadora-de-nota-faculdade

# 2. Compile
gcc calculadora.c -o calculadora-notas

# 3. Execute
./calculadora-notas      # Linux/macOS
calculadora-notas.exe    # Windows
```

---

## 🧠 Conceitos de C Aplicados

| Conceito | Aplicação no Projeto |
|---|---|
| Variáveis `float` | Armazenamento das notas e cálculo da média ponderada |
| `scanf` / `printf` | Leitura das notas e exibição formatada (`%.2f`) |
| `switch...case` | Controle do menu de opções |
| Condicionais `if/else` | Verificação de aprovação e cálculo da nota necessária |
| Loop `do...while` | Repetição do menu até o usuário optar por sair |
| Expressões aritméticas | Fórmula da média ponderada e cálculo da nota mínima |

---

## 📁 Estrutura do Projeto

```
Calculadora-de-nota-faculdade/
├── calculadora.c   # Código-fonte principal
└── README.md
```

---

## 👤 Autor

Feito por **Igor Amaral** — Estudante de Ciência da Computação

[![GitHub](https://img.shields.io/badge/GitHub-IgorASB-181717?style=flat&logo=github)](https://github.com/IgorASB)
