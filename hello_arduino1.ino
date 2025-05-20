// C++ code
//
void setup()
{
 Serial.begin(9600);//Configura a porta serial do arduino
  pinMode(LED_BUILTIN, OUTPUT);//Configura o led interno como saìda
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);//Acende o led
  Serial.print("Hello ");//Escreve na porta serial
  delay(1000);//Aguarda 1000 milisegundos
  
  digitalWrite(LED_BUILTIN, LOW);//Apaga o led
  Serial.println("World!");//Escreve na porta serial
  delay(1000);//Aguarda 1000 milisegundos
}