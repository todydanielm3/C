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
Escrever um programa em Linguagem C para armazenar os registros as passagens de uma empresa de turismo em um arquivo texto. Seu programa deve ter um menu de opções e possuir as seguintes funções:
Cabeçalho (com o nome dos componentes do grupo)
entrada de dados,
relatório.
Na função de entrada de dados, o programa deve receber todos os campos, exceto o campo valorPromocao que deverá ser calculado em reais conforme o seguinte:
Passagem comprada com até 180 dias de antecedência, desconto de 60%;
Passagem comprada com até 120 dias de antecedência, desconto de 50%;
Passagem comprada com 90 dias de antecedência, desconto de 40%;
Passagem comprada com 60 dias de antecedência, desconto de 20%;
Passagem comprada com menos de 60 dias de antecedência, desconto de zero por cento;
valorPromocao = valor – desconto;
Sua função de relatório deve receber um valor inteiro que indica a quantidade de dias que de antecipação das passagens que deseja imprimir, se a função receber -1 deverá imprimir todas as passagens.
*/

