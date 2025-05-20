//Aprendendo sobre variáveis
//Resumidamente são ròtulos que podem armazenar valores
//temprariamente que podem variar com o passar do tempo
//e que tem um tipo de dado especìfico (textos, numèricos ou booleanos)

//Configuração inicial do Arduino
void setup()
{
  Serial.begin(9600);//inicia a Serial
}

//Inicializa as Variáveis
int idade = 0;

//Looping infinito - funciona atè desligar arduino
void loop()
{
  idade = idade + 1;//1
  idade = idade + 1;//2
  
  Serial.println(String(idade) );//imprime o valor de idade - converter para texto
  delay(1000);
}