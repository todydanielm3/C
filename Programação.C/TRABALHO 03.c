/*
TRABALHO 03
data{
                int dia;
                int mes;
                int ano;
};

horario{
                int hora;
                int minuto;
};

passagem{
                int codigo;
                char origem[20];
                char destino[20];
                char tipo; //A-aerea, T-terrestre, M-maritima
                int nrAssento;
                DATA dtEmbarque;
                HORA hrEmbarque;
                float valor;
                float valorPromocao;
};
Escrever um programa em Linguagem C para armazenar os registros as passagens de uma empresa de turismo em um arquivo texto. Seu programa deve ter um menu de op��es e possuir as seguintes fun��es:
Cabe�alho (com o nome dos componentes do grupo)
entrada de dados,
relat�rio.
Na fun��o de entrada de dados, o programa deve receber todos os campos, exceto o campo valorPromocao que dever� ser calculado em reais conforme o seguinte:
Passagem comprada com at� 180 dias de anteced�ncia, desconto de 60%;
Passagem comprada com at� 120 dias de anteced�ncia, desconto de 50%;
Passagem comprada com 90 dias de anteced�ncia, desconto de 40%;
Passagem comprada com 60 dias de anteced�ncia, desconto de 20%;
Passagem comprada com menos de 60 dias de anteced�ncia, desconto de zero por cento;
valorPromocao = valor � desconto;
Sua fun��o de relat�rio deve receber um valor inteiro que indica a quantidade de dias que de antecipa��o das passagens que deseja imprimir, se a fun��o receber -1 dever� imprimir todas as passagens.
*/

