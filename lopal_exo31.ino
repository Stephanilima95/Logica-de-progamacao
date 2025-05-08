// Variáveis
int numero = 0;
int dobronumero = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  // Pedir número para o usuário
  Serial.println("Digite um numero qualquer:");
  while (!Serial.available()) {} // Espera o usuário digitar e apertar Enter
  numero = Serial.parseInt();

  // Limpa o buffer para não atrapalhar próximas leituras
  while (Serial.available()) Serial.read();

  // Calcular o dobro desse número
  dobronumero = numero * 2;

  // Mostrar o dobro do número na tela
  Serial.println("O dobro do numero eh " + String(dobronumero));
  Serial.println(); // Pula uma linha
  Serial.println(); // Pula outra linha

  delay(2000); // Espera 2 segundos antes de repetir
}
