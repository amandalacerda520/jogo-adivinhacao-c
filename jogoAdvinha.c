 #include <stdio.h>
int main() {
   
   
   
   printf("***************************************\n");
   printf("bem vindo ao nosso jogo de adivinhação\n");
   printf("****************************************\n");
   
   int numeroSecreto = 58; 
   
   int chute;             
   int tentativas = 1;     
  
   int pontos = 1000;     
   int (pontos - 2)* 7 /
   
   while (1) { 
       printf("tentativa %d\n", tentativas);
       
       scanf("%d", &chute);
       printf("seu chute foi %d\n", chute);
       
       if (chute < 0) {
           printf("Você não pode chutar números negativos!\n");
           continue;
       }
      int acertou = (chute == numeroSecreto);
      int maior = chute > numeroSecreto;

      if(acertou){
         printf("parabéns! você acertou!\n");
         printf("jogue de novo, você e um bom jogador ")

         break;
      }
      
      else if(maior){
         printf("seu chute foi maior que o número secreto\n ");
      }
      else{
         printf("seu chute foi menor que o número secreto\n");
      }
      
   tentativas++;
} 

     









   }

