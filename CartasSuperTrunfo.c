#include <stdio.h>
#include <string.h>

// Definição da estrutura (struct) para um Estado
// Isso agrupa todos os dados relacionados em um único tipo.
typedef struct {
    char codigo[3];   
    char nome[50];  
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
} 

Estado;
Estado estado_cadastrado;

// --- Função de Cadastro ---
void cadastrar_estado() {

    printf("--- Cadastro de Estado ---\n");
    // Lendo o NOME
    printf("Digite o nome do estado: \n");
    scanf(" %49s", estado_cadastrado.nome); 
    
    // Lendo o CÓDIGO (agora uma string/array de char)
    printf("Digite o codigo do estado (2 letras - ex: SP): \n");
    // Usamos %2s para ler exatamente 2 caracteres
    scanf(" %2s", estado_cadastrado.codigo); 
    
    // Lendo as variáveis numéricas
    printf("Digite a populacao do estado (em numero inteiro): \n");
    // Passamos o endereço da variável numérica com o & comercial
    scanf("%d", &estado_cadastrado.populacao);

    printf("Digite a area do estado (em km²): \n");
    scanf("%f", &estado_cadastrado.area);

    printf("Digite o PIB do estado (em bilhões): \n");
    scanf("%f", &estado_cadastrado.PIB);

    printf("Digite o numero de pontos turisticos do estado: \n");
    scanf("%d", &estado_cadastrado.pontos_turisticos);
    
    printf("\n--- Estado cadastrado com sucesso! ---\n");
}

// --- Função para Exibir os Dados ---
void exibir_estado() {
    printf("\n--- Dados do Estado Cadastrado ---\n");
    printf("Nome: %s\n", estado_cadastrado.nome);
    printf("Codigo: %s\n", estado_cadastrado.codigo);
    printf("Populacao: %d habitantes\n", estado_cadastrado.populacao);
    printf("Area: %.2f km²\n", estado_cadastrado.area);
    printf("PIB: %.2f bilhoes\n", estado_cadastrado.PIB);
    printf("Pontos Turisticos: %d\n", estado_cadastrado.pontos_turisticos);
    printf("------------------------------------\n");
}

// --- Função Principal (main) ---
int main() {
    // Chamada da função para iniciar o cadastro
    cadastrar_estado();
    
    // Chamada para exibir os dados após o cadastro
    exibir_estado();
    
    return 0;
}
