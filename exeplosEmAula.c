-------------------------------------------------------
Aula 03
-------------------------------------------------------
//Calcular a área do triângulo
#include<stdio.h>
int main(){
  float base, altura;
  scanf("%f %f", &base, &altura);
  printf("%f", base*altura/2);
  return 0;
}


//Ler e imprimir uma variável
int main(){
  int idade;
  float salario;
  scanf("%d %f", &idade, &salario);
  printf("%d %f", idade, salario);
  return 0;
}


//Formatadores do printf
int main(){
  int valor;
  scanf("%i",&valor);
  printf("Em decimal: %d\n", valor);
  printf("Em octal: %o\n", valor);
  printf("Em hexa minu: %x\n", valor);
  printf("Em hexa maiu: %X\n", valor);
  return 0;
}
-------------------------------------------------------
Aula 04
-------------------------------------------------------
//Utilização do operador de resto
#include<stdio.h>
int main(){
  double a;
  int reais, centavos;
  while(scanf("%lf",&a)){

    reais = (int)a;
    centavos = ((int)(a*100))%100;

    printf("%d %d\n", reais, centavos);
  }
  return 0;
}

//Notas e Moedas
//Enunciado do exercício:
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1021
#include<stdio.h>
int main(){
  float n;
  int q, resto;
  scanf("%f", &n);
  resto = (int)(100*n);
  printf("NOTAS:\n");
  q = resto / 10000;
  resto = resto % 10000;
  printf("%d nota(s) de R$ 100.00\n", q);
  q = resto / 5000;
  resto = resto % 5000;
  printf("%d nota(s) de R$ 50.00\n", q);
  q = resto / 2000;
  resto = resto % 2000;
  printf("%d nota(s) de R$ 20.00\n", q);
  q = resto / 1000;
  resto = resto % 1000;
  printf("%d nota(s) de R$ 10.00\n", q);
  q = resto / 500;
  resto = resto % 500;
  printf("%d nota(s) de R$ 5.00\n", q);
  q = resto / 200;
  resto = resto % 200;
  printf("%d nota(s) de R$ 2.00\n", q);
  printf("MOEDAS:\n");
  q = resto / 100;
  resto = resto % 100;
  printf("%d moeda(s) de R$ 1.00\n", q);
  q = resto / 50;
  resto = resto % 50;
  printf("%d moeda(s) de R$ 0.50\n", q);
  q = resto / 25;
  resto = resto % 25;
  printf("%d moeda(s) de R$ 0.25\n", q);
  q = resto / 10;
  resto = resto % 10;
  printf("%d moeda(s) de R$ 0.10\n", q);
  q = resto / 5;
  resto = resto % 5;
  printf("%d moeda(s) de R$ 0.05\n", q);
  printf("%d moeda(s) de R$ 0.01\n", resto);

  return 0;
}
-------------------------------------------------------
Aula 06
-------------------------------------------------------
//Criar um programa para ler dois fracionários
//divisor e dividendo e retornar a divisão.
#include<stdio.h>
int main(){
  float divisor, dividendo, resultado;
  scanf("%f%f", &dividendo, &divisor);

  if(divisor == 0){
    printf("Divisão por zero não definida nos reais.\n");
    scanf("%f",&divisor);
  }
  else{
    resultado = dividendo / divisor;
    printf("%f", resultado);
  }

  return 0;
}

//Criar um programa para verificar se
//um natural é par.
//Caso seja informado um valor negativo,
//exibir a mensagem “Valor inválido”.
#include<stdio.h>
int main(){
  int valor;
  scanf("%d",&valor);
  if(valor < 0){
    printf("Valor inválido!\n");
  }
  else{
    if(valor%2 == 0){
      printf("%d é par!\n",valor);
    }
    else{
      printf("%d é ímpar!\n",valor);
    }
  }
  return 0;
}


//Imposto em Lisarb (Problema URI 1051)
#include<stdio.h>
int main(){
  float valor;
  scanf("%f", &valor);
  if(valor <= 2000){
    printf("Isento\n");
  }
  else if(valor <= 3000){
    printf("%.2f", (valor-2000)*0.08);
  }
  else if(valor <= 4500){
    printf("%.2f", (valor-3000)*0.18 + 80);
  }
  else{
    printf("%.2f", (valor-4500)*0.28 + 80 + 270);
  }
  return 0;
}
-------------------------------------------------------
Aula 07
-------------------------------------------------------
//Verificar se letra digitada é vogal ou consoante
#include<stdio.h>
int main(){
  char letra;
  scanf("%c", &letra);
  switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
              printf("Vogal\n");
              break;
    default: printf("Cosoante\n");
  }
  return 0;
}


//Imprimir mês do ano
#include<stdio.h>
int main(){
  int mes;
  //printf("Insira o mês: ");
  scanf("%d",&mes);
  switch(mes){
    case 1: printf("January\n");
            break;
    case 2: printf("February\n");
            break;
    case 3: printf("March\n");
            break;
    case 4: printf("April\n");
            break;
    case 5: printf("May\n");
            break;
    case 6: printf("June\n");
            break;
    case 7: printf("July\n");
            break;
    case 8: printf("August\n");
            break;
    case 9: printf("September\n");
            break;
    case 10: printf("October\n");
            break;
    case 11: printf("November\n");
            break;
    case 12: printf("December\n");
  }

  return 0;
}


//Imprimir trimestre do mês inserido
#include<stdio.h>
int main(){
  int mes;
  //printf("Insira o mês: ");
  scanf("%d",&mes);
  switch(mes){
    case 1: printf("Janeiro\n");
    case 2: printf("Fevereiro\n");
    case 3: printf("Março\n");
            printf("Este é o primeiro trimestre.\n");
            break;
    case 4: printf("Abril\n");
    case 5: printf("Maio\n");
    case 6: printf("Junho\n");
            printf("Este é o segundo trimestre.\n");
            break;
    case 7: printf("Julho\n");
    case 8: printf("Agosto\n");
    case 9: printf("Setembro\n");
            printf("Este é o terceiro trimestre.\n");
            break;
    case 10: printf("Outubro\n");
    case 11: printf("Novembro\n");
    case 12: printf("Dezembro\n");
            printf("Este é o quarto trimestre.\n");
            break;
    default: printf("Mês invalido.\n");
  }

  return 0;
}


//Classificar nadador de acordo com a idade
#include<stdio.h>
int main(){
  int idade;
  scanf("%d", &idade);
  if(idade < 0) printf("Você tá louco!\n");
  else{
    switch(idade){
      case 0 ... 7: printf("Newborn\n");
                    break;
      case 8 ... 12: printf("Nemo\n");
                     break;
      case 13 ... 14:
      case 16 ... 17: printf("Juvenil\n");
                      break;
      case 15: printf("Promoção\n");
               break;
      case 18 ... 29: printf("Adulto\n");
                      break;
      case 30 ... 50: printf("Profissa\n");
                      break;
      default: printf("Senior\n");
    }
  }
  return 0;
}


//Programa para conversão com múltipla escolha (incompleto)
#include<stdio.h>
int main(){
  int op;
  float valor1, valor2;
  printf("PROGRAMA PARA CONVERSÃO\n");
  printf("1 - Polegadas para Cm\n");
  printf("2 - Cm para Polegadas\n");
  printf("3 - Metros para Km\n");
  printf("4 - Km para Metro\n");
  printf("Escolha sua opção: ");
  scanf("%d", &op);
  switch(op){
    case 1:
      printf("Entre com o valor em polegadas: ");
      scanf("%f", &valor1);
      printf("%.2f polegadas são %.2fcm!\n", valor1, valor1*2.54);
      break;
    case 2:
      printf("Entre com o valor em centimetros: ");
      scanf("%f", &valor1);
      printf("%.2fcm são %.2f polegadas!\n", valor1, valor1/2.54);
      break;
    case 3:
    case 4:
    default: printf("Falta fazer\n");
  }
  return 0;
}


//Pequena calculadora
#include<stdio.h>
int main(){
  float num1, num2, result;
  char op;
  scanf("%f %f %c", &num1, &num2, &op);
  switch(op){
    case '+': result = num1 + num2;
              break;
    case '-': result = num1 - num2;
              break;
    case '*': result = num1 * num2;
              break;
    case '/': result = num1 / num2;
              break;
    default:  printf("Operação inválida\n");
              result = 0;
  }
  printf("%.2f\n", result);
  return 0;
}



//Exemplo 1 de utilização operador ternário
#include<stdio.h>
int main(){
  int valor;
  scanf("%d", &valor);
  valor%2==0?printf("Par\n"):printf("Ímpar\n");
  return 0;
}

//Exemplo 2 de utilização operador ternário
int main(){
  int n1, n2, maior;
  scanf("%d %d", &n1, &n2);
  maior = (n1 > n2) ? n1 : n2;
  printf("%d\n", maior);
  // (n1 > n2) ? printf("%d\n", n1) : printf("%d\n", n2);
  // printf("%d\n", (n1>n2)?n1:n2);
  return 0;
}
-------------------------------------------------------
Aula 08
-------------------------------------------------------
//Encontrar maior valor em lista de números
#include<stdio.h>
int main(){
  int valor, n, maior;

  maior = -999999;
  printf("Quantos valores serão lidos? ");
  scanf("%d", &n);

  do{

    printf("Entre com um valor: ");
    scanf("%d", &valor);
    if(valor > maior) maior = valor;
    n--;

  } while(n != 0);

  printf("O maior valor inserido foi: %d\n", maior);

  return 0;
}

//Exibir menu e validar escolha
int main(){
  int op;

  do{
    printf("1 - Inserir aluno\n");
    printf("2 - Remover aluno\n");
    printf("3 - Alterar cadastro do aluno\n");
    printf("4 - Sair\n");
    printf("Digite a opção [1..4]: ");

    scanf("%d", &op);

  } while(op < 1 || op > 4);


  if(op == 4) printf("Tchaaaau!\n");
  else printf("Voce escolheu a opcao %d\n",op);

  return 0;
}

//Validar senha
#include<stdio.h>
int main(){
  #define senha 2002
  int valor;
  scanf("%d", &valor);

  while(valor != senha){
    printf("Senha invalida\n");
    scanf("%d", &valor);
  }

  printf("Acesso permitido\n");

  return 0;
}


//Exemplo de validação de entrada
#include<stdio.h>
int main(){
  int entrada;

  printf("Entre com o valor: ");
  scanf("%d", &entrada);

  while(entrada < 0 || entrada > 100){
    printf("Opa, tu é besta? Digite entre 0 e 100, amigo: ");
    scanf("%d", &entrada);
  }

  printf("Valeu!\n");

  return 0;
}


//Imprimir pares entre dois valores
#include<stdio.h>
int main(){
  int pares;
  int final;
  printf("Usuário, onde começa? ");
  scanf("%d", &pares);
  printf("Usuário, até onde vai? ");
  scanf("%d", &final);
  if(pares%2!=0) pares++;
  while(pares <= final){
    printf("%d ", pares);
    pares+=2;
  }
  printf("\n");
  return 0;
}
-------------------------------------------------------
Aula 9
-------------------------------------------------------
//Média de lista de valores recebidos em n dias (versão 1)
#include<stdio.h>
int main(){
  int i, dias;
  float valor, media = 0;
  printf("Quantos dias? ");
  scanf("%d", &dias);
  for(i=1; i<=dias; i++){
    printf("Informe o valor do %do. dia: ", i);
    scanf("%f", &valor);
    media += valor;
    //media = media + valor;
  }
  printf("A média é %.2f\n", media/dias);
  return 0;
}



//Média de lista de valores recebidos em n dias (versão 2)
#include<stdio.h>
int main(){
  int i, n;
  float valor, soma = 0, media;
  printf("Quantos dias? ");
  scanf("%d", &n);
  for(i=1; i<=n; i=i+1){
    printf("Entre com o valor do %do. dia: ", i);
    scanf("%f", &valor);
    soma = soma + valor;
  }
  media = soma / n;
  printf("A média é: %.2f\n", media);
  return 0;
}


//Exemplo de tilização da constante INT_MIN (maior valor em conjunto de inteiros)
#include<stdio.h>
#include<limits.h>
int main(){
  int i, valor, maior, n;
  maior = INT_MIN;
  printf("Quantos valores você quer digitar? ");
  scanf("%d", &n);

  for(i=1; i<=n; i++){
    printf("Entre com o %do. valor: ", i);
    scanf("%d", &valor);
    if(valor > maior) maior = valor;
  }

  printf("O maior valor é %d.\n", maior);
  return 0;
}


//Calcular o fatorial de um número
#include<stdio.h>
int main(){
  int valor, fatorial;
  scanf("%d", &valor);
  fatorial = 1;
  while(valor >= 1){
    fatorial = fatorial * valor;
    valor--;
  }
  printf("%d\n", fatorial);
  return 0;
}

//Contar pares em um conjunto de 5 números
#include<stdio.h>
int main(){
  int valor, contador = 1, pares = 0;
  while(contador <= 5){
    scanf("%d", &valor);
    if(valor%2==0) pares++;
    contador++;
  }
  printf("%d valores pares\n", pares);
  return 0;
}

//Tabuada (problema do URI proposto em slide)
#include<stdio.h>
int main(){
  int valor, cont = 1;
  scanf("%d", &valor);
  while(cont <= 10){
    printf("%d x %d = %d\n", cont, valor, cont * valor);
    cont++;
  }
  //do{
  //  printf("%d x %d = %d\n", cont, valor, cont * valor);
  //  cont++;
  //} while(cont <= 10);
  return 0;
}
-------------------------------------------------------
Aula 10
-------------------------------------------------------
//Exemplo de vetores 1 (ler os valores e imprimir na ordem inversa de leitura)
#include<stdio.h>
int main(){
  int i, n;
  float precos[1000];
  printf("Quantos preços você quer? ");
  scanf("%d", &n);
  printf("Entre com os %d valores: ",n);
  for(i = n-1; i >= 0; i--){
    scanf("%f", &precos[i]);
  }
  printf("Os valores na ordem inversa são:\n");
  for(i = 0; i < n; i++){
    printf("%.2f ", precos[i]);
  }
  return 0;
}

//Exemplo de vetores 2 (calcular média de 4 notas) - acumulador!
#include<stdio.h>
int main(){
  float notas[4], media=0;
  int i;
  for(i=0; i<4; i++){
    printf("Entre com a nota: ");
    scanf("%f", &notas[i]);
    media += notas[i];
  }
  media = media / 4;
  for(i=0; i<4; i++){
    printf("Nota %d = %.2f\n", i+1, notas[i]);
  }
  printf("Media = %.2f\n", media);
  return 0;
}


//Imprimir a soma de todos valores múltiplos de 13 em um intervalo informado
#include<stdio.h>
int main(){
  int i, x, y, soma = 0, j;
  scanf("%d %d", &x, &y);

  for(i = x, j = 1; i <= y; i++, j++){
    if(i % 13 != 0) soma += i;
  }

  printf("%d\n", soma);
  return 0;
}
-------------------------------------------------------
Aula 11
-------------------------------------------------------
//Imprimir valores de 1 a Y, quebrando linha a cada X
#include<stdio.h>
int main(){
  int x, y, i, cont;
  scanf("%d %d", &x, &y);

  cont = 0;
  for(i=1; i<=y; i++){
    printf("%d ", i);
    cont++;
    if(cont == x){
      printf("\n");
      cont = 0;
    }
  }

  return 0;
}

//Soma e produto de um intervalo
#include<stdio.h>
int main(){
  int i, soma, produto, inicial, final, aux;
  scanf("%d %d", &inicial, &final);
  soma = 0;
  produto = 1;
  if(final < inicial){
    aux = inicial;
    inicial = final;
    final = aux;
  }
  if(inicial == 0) inicial++;
  for(i = inicial; i<=final; i++){
    soma = soma + i;
    produto = produto * i;
  }
  printf("A soma de %d a %d é igual a %d.\n", inicial, final, soma);
  printf("O produto acumulado de %d a %d é %d.\n", inicial, final, produto);
  return 0;
}

//Testar se Dado é viciado
#define TAM 1000
#include<stdio.h>
int main(){
  int i, lancamento[TAM], faces[6]={0,0,0,0,0,0};

  for(i=0; i<TAM; i++){
    scanf("%d", &lancamento[i]);
    scanf("%d", &idade)
    if(lancamento[i] == 0) break;
    else faces[lancamento[i]-1]++;
  }

  for(i=0; i<6; i++){
    printf("Face %d apareceu %d vezes.\n", i+1, faces[i]);
  }
  return 0;
}
-------------------------------------------------------
Aula 12
-------------------------------------------------------
//Contar espaços em string
#include<stdio.h>
int main(){
  char msg[100];
  int i, cont;

  printf("Entre com a mensagem: ");
  scanf(" %[^\n]", msg);

  for(i = 0, cont = 0; msg[i]!='\0'; i++){
    if(msg[i]==' ') cont++;
  }

  printf("Sua mensagem tem %d espacos.\n", cont);

  return 0;
}

//Contar caracter em string
#include<stdio.h>
int main(){
  char frase[100], caracter;
  int i, cont = 0;

  printf("Entre com a frase:\n");
  scanf("%[^\n]", frase);
  scanf("%c", &frase[99]);


  printf("Entre com o caracter desejado: ");
  caracter = getc(stdin);

  for(i = 0; frase[i] != '\0'; i++){
    if(frase[i] == caracter) cont++;
  }

  printf("A frase contem %d %c\n",cont, caracter);
  return 0;
}

//Contar número de caracteres em string
#include<stdio.h>
#include<string.h>
int main(){
  char frase[100];
  int i;

  printf("Entre com a frase:\n");
  scanf("%[^\n]", frase);

  //for(i = 0; i < 100 && frase[i] != '\0'; i++){}
  i = strlen(frase);

  printf("A frase é:\n%s",frase);
  printf("\nEsta frase tem %d caracteres.\n", i);
  return 0;
}
-------------------------------------------------------
Aula 13
-------------------------------------------------------
//Leitura e escrita de matriz com validação de dimensões
#include<stdio.h>
int main(){
  int matriz[10][10], n, m, linha, coluna;

  printf("Quais as dimensões da matriz [1-10]? ");
  scanf("%d %d", &n, &m);

  do{
    if( n<1 || n>10){
      printf("Você digitou um valor inválido para as linhas, tente novamente: ");
      scanf("%d", &n);
    }
    if(m<1 || m > 10){
      printf("Você digitou um valor inválido para as colunas, tente novamente: ");
      scanf("%d", &m);
    }
  } while( n<1 || n>10 || m<1 || m > 10 );

  for(linha = 0; linha < n; linha++){
    for(coluna = 0; coluna < m; coluna++){
      scanf("%d", &matriz[linha][coluna]);
    }
  }

  printf("A matriz é:\n");
  for(linha = 0; linha < n; linha++){
    for(coluna = 0; coluna < m; coluna++){
      printf("%d \t", matriz[linha][coluna]);
    }
    printf("\n");
  }
  return 0;
}
-------------------------------------------------------
Aula 14
-------------------------------------------------------
//Atividade: nomes e médias
#include<stdio.h>
#define MAX 5
int main(){
  char nomes[MAX][100];
  float medias[MAX][5];
  int i, j;

  for(i = 0; i < MAX; i++){
    medias[i][4] = 0;
  }

  for(i = 0; i < MAX; i++){
    printf("Entre com o nome do %do. aluno: ", i+1);
    scanf(" %[^\n]", nomes[i]);
    printf("Agora entre com as notas: ");
    for(j = 0; j < MAX-1; j++){
      scanf("%f", &medias[i][j]);
      medias[i][4] += medias[i][j];
    }
    medias[i][4] /= 4;
  }

  printf("NOME \t\t N1\t N2\t N3\t N4\t FINAL\n");

  for(i = 0; i < MAX; i++){
    printf("%s\t\t", nomes[i]);
    for(j = 0; j < MAX; j++){
      printf("%.1f\t", medias[i][j]);
    }
    printf("\n");
  }

  return 0;
}
-------------------------------------------------------
Aula 15
-------------------------------------------------------
//Verificar se strings são iguais sem considerar maiúsculas e minísculas
#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
int main(){
  char palavra1[50], palavra2[50];
  int i, iguais = FALSE;
  scanf(" %[^\n] %[^\n]", palavra1, palavra2);

  iguais = strcasecmp(palavra1, palavra2);

  for(i = 0; palavra1[i]==palavra2[i]  ||
             palavra1[i]==palavra2[i]-32 ||
             palavra1[i]==palavra2[i]+32; i++){
    if(palavra1[i]=='\0'){
      iguais = TRUE;
      break;
    }
  }

  if(!iguais) printf("São iguais!\n");
  else printf("São diferentes!\n");

  return 0;
}

//Atividade: calcular soma ou média de linha da matriz
#include<stdio.h>
#define MAX 12
int main(){
  float matriz[MAX][MAX], resultado = 0;
  char op;
  int i, j, L;
  scanf("%d", &L);
  scanf(" %c", &op);
  for(i = 0; i<MAX; i++){
    for(j=0; j<MAX; j++){
      scanf("%f", &matriz[i][j]);
    }
  }
  for(j = 0; j<MAX; j++){
    resultado += matriz[L][j];
  }
  if(op == 'S') printf("%.2f", resultado);
  else printf("%.2f", resultado/MAX);
  return 0;
}

//Atividade: calcular soma ou média do triângulo superior na matriz
#include<stdio.h>
#define MAX 12
int main(){
  float matriz[MAX][MAX], resultado = 0;
  char op;
  int i, j, cont=0;
  scanf(" %c", &op);
  for(i = 0; i<MAX; i++){
    for(j=0; j<MAX; j++){
      scanf("%f", &matriz[i][j]);
    }
  }
  for(i = 0; i<5; i++){
    for(j = i+1; j <= 10 - i; j++){
      resultado += matriz[i][j];
      cont++;
    }
  }
  if(op == 'S') printf("%.2f", resultado);
  else printf("%.2f", resultado/cont);
  return 0;
}

//Atividade: concatenar duas strings
#include<stdio.h>
int main(){
  char frase1[50], frase2[50], resultado[100];
  int i, j;
  printf("Entre com a primeira string:\n");
  scanf(" %[^\n]", frase1);
  printf("Entre com a segunda string:\n");
  scanf(" %[^\n]", frase2);

  for(i = 0; frase1[i]!='\0'; i++){
    resultado[i] = frase1[i];
  }

  for(j = 0; frase2[j]!='\0'; j++, i++){
    resultado[i] = frase2[j];
  }

  resultado[i] = '\0';

  printf("A frase concatenada é:\n%s\n",resultado);
  return 0;

}
-------------------------------------------------------
Aula 16
-------------------------------------------------------
//Aula de funções 1

#include<stdio.h>

float plcm(float polegadas){
  float centimetros;
  centimetros = polegadas*2.54;
   return centimetros;
}

int maiorInt(int n1, int n2){
  int maior = n1>n2?n1:n2;
  return maior;
}
//int maiorInt(int n1, int n2){ return n1>n2?n1:n2; }

float aplicarDesconto(float preco, float desconto){
  preco = preco * (1 - desconto/100);
  return preco;
}

int potencia(int a, int b){
  int i, pow = 1;
  for(i = 1; i<=b; i++){
    pow *= a;
  }
  return pow;
}

int main(){
  char str1[50] = "Olá";
  char str2[50] = ", tudo bom?";
  char str3[100];
  int i, j;

  for(i = 0; str1[i]!='\0'; i++){
    str3[i] = str1[i];
  }
  for(j = 0; str2[j]!='\0'; j++, i++){
    str3[i] = str2[j];
  }
  st3[i]='\0';

  return 0;
}
-------------------------------------------------------
Aula 18 - 30min a mais no matutino (reposição)
-------------------------------------------------------
//Preencher matriz com valores específicos
#include<stdio.h>
int main(){
  int n, matriz[101][101], i, j;
  scanf("%d", &n);
  while(n!=0){
    for(i=0; i<n; i++){
      for(j=0; j<n; j++){
        if(i>= n/3 && i<n-(n/3) && j>= n/3 && j<n-(n/3)) matriz[i][j] = 1;
        else if(i+j == n-1) matriz[i][j] = 3;
        else if(i == j) matriz[i][j] = 2;
        else matriz[i][j] = 0;
        matriz[n/2][n/2] = 4;
        printf("%d", matriz[i][j]);
        if(j < n) printf(" ");
      }
      printf("\n");
    }

    scanf("%d", &n);
  }
  return 0;
}
