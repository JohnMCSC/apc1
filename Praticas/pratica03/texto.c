


9. Criação de programa para converter tipos primitivos.

a) Dentro da pasta pratica03, crie um novo arquivo clicando no ícone New File.

b) Nomeie o arquivo como converte_tipo.c e pressione ENTER para confirmar.

c) No arquivo converte_tipo.c, insira a estrutura básica de um programa C.

d) No corpo da função main(), declare uma variável caractere do tipo char e atribua o valor 255;

char caractere = 255;

e) No corpo da função main(), declare uma variável inteiro do tipo int e atribua o valor de caractere.

int inteiro = caractere;

f) No corpo da função main(), declare uma variável flutuante do tipo float e atribua o valor de inteiro.

float flutuante = inteiro;

g) No corpo da função main(), declare uma variável duplo do tipo double e atribua o valor de flutuante.

double duplo = flutuante;

h) No corpo da função main(), insira uma chamada à função printf() para imprimir os valores das variáveis caractere, inteiro, flutuante e duplo.

printf("caractere = %i\n", caractere);
printf("inteiro = %i\n", inteiro);
printf("flutuante = %.7f\n", flutuante);
printf("duplo = %.7f\n", duplo);

i) Compile o arquivo converte_tipo.c usando o comando gcc.

j) Execute o programa a.out gerado pela compilação.

k) No corpo da função main(), atribua o valor 256.1234567 para a variável duplo.

duplo = 256.1234567;

l) No corpo da função main(), atribua o valor de duplo para a variável flutuante.

flutuante = (float) duplo;

m) No corpo da função main(), atribua o valor de flutuante para a variável inteiro.

inteiro = (int) flutuante;

n) No corpo da função main(), atribua o valor de inteiro para a variável caractere.

caractere = (char) inteiro;

o) No corpo da função main(), insira uma chamada à função printf() para imprimir os valores das variáveis caractere, inteiro, flutuante e duplo.

printf("caractere = %i\n", caractere);
printf("inteiro = %i\n", inteiro);
printf("flutuante = %.7f\n", flutuante);
printf("duplo = %.7f\n", duplo);

p) Compile novamente o arquivo converte_tipo.c usando o comando gcc.

q) Execute novamente o programa a.out gerado pela compilação.


10. Envio de alterações locais para repositório remoto do GitHub.

a) No painel esquerdo do Replit, clique em Tools e selecione Git.

b) Verifique a lista de arquivos modificados. Se estiverem corretos, clique em + Stage All.

c) No campo Message, insira o texto "Adicionando arquivos da pasta pratica03".

d) Clique em Stage and commit all changes.

e) Para enviar as alterações para o repositório remoto, clique em Push e em seguida em Confirm for this session.

f) Atualize a página do repositório do GitHub no navegador para verificar se as alterações foram enviadas.

