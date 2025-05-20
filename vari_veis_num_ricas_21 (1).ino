// C++ code
//

void setup()
{
  Serial.begin(9600);
}

//inicialização de Variáveis
int caixaPequena = 0;// -32768 atè 32768 (faixa inicial e final do int)
long caixaGrande = 0;//-2147483648 atè 2147483647 (faixa inicial e final do long)

void loop()
{
 caixaPequena = 32768;
 caixaGrande = 32768098;
  
 Serial.println(caixaPequena);
 Serial.println(caixaGrande);
  
  delay(20000);//20 segundos
}