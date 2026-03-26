#include <stdio.h>

int main() { 
    
    int num, i = 0; //declaração da variavel que armazenara o limite do contador, e a variavel do contador
    
    printf("=== SIMULADOR DE CRONÔMETRO ===\n");
    printf ("Digite a quantidade de passos ou zero pra sair:"); 
    scanf ("%d",&num);//input do usuario
    
    // O laço percorre de 1 até o número que o usuário escolheu
    for (i=1;i<=num; i++) { 
    // Lógica de paridade: Verifica se o resto da divisão por 2 é zero
        if (i==0) {
            break; 
        }
        
        else if (i % 2 ==0) { 
           printf("TICK\n");
        }
        
        else { 
           printf("TACK\n");
        }
    }
    printf("===============================\n");
    printf("Fim da execução.\n");
    return 0;
}

//descobri que o if break para parar foi desnecessário, pois o contador ja exclui o numero 0, sem precisar entrar no loop.
