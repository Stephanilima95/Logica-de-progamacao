void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Digite uma medida em polegadas:");
}

void loop() {
  if (Serial.available() > 0) {
    float polegadas = Serial.parseFloat(); // Lê o valor digitado
    float centimetros = polegadas * 2.54;  // Converte para centímetros

    // Saída formatada
    Serial.print(polegadas);
    Serial.print(" polegada(s) equivale a ");
    Serial.print(centimetros, 2); // Mostra com 2 casas decimais
    Serial.println(" cm");

    // Repetição
    Serial.println("Digite outra medida em polegadas:");
    delay(500); // Evita múltiplas leituras rápidas
  }
}
