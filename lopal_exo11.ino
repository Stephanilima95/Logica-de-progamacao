//Faça um programa que receba a idade de uma pessoa em anos
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Variaveis
int idade = 0;//inicia a idade
int idadeMeses = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite a sua idade");//pergunta a idade do usuario
  while( ! Serial.available() ){}//Aguarda o usuario digitar (para o loop)
  idade = Serial.parseInt();
  
  //processamento
  idadeMeses = idade * 12;
  
  //saida
  Serial.println("Sua idade em meses: " + String(idadeMeses) );
}