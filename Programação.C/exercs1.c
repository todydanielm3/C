Elaborar um programa para calcular a quantidade de litros de combust�vel gasta em uma viagem,
utilizando-se um autom�vel que faz 12 km por litro. Para obter o c�lculo,
o usu�rio dever� fornecer o tempo gasto na viagem em horas e a velocidade m�dia durante a mesma. Desta forma,
ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia,
basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula: LITROS_USADOS � DISTANCIA / 12.
O programa dever� apresentar os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e
a quantidade de litros utilizada na viagem.

int main ()

{

float t_viagem, vmedia, distancia, litros_usados;

printf ("Qual o o tempo de viagem \n");

scanf ("%f",&t_viagem);

printf ("Qual a velocidade media na viagem \n");

scanf ("%f",&vmedia);

distancia=(t_viagem*vmedia);

litros_usados=(distancia/12);

printf("A velocidade media foi de %.2f km por horas \n",vmedia);

printf("O tempo de viagem foi de %.2f horas \n",t_viagem);

printf("A distancia percorrida na viagem foi de %.f Kilometros \n",distancia);

printf("A quantidade de combustivel utilizada na viagem foi de %.2f litros \n",litros_usados);

}
