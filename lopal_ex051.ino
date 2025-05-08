void setup() {
  Serial.begin(9600); // Inicia a comunicacao serial
  Serial.println("Digite uma medida em centimetros:");
}

void loop() {
  
  //entrada
  if (Serial.available() > 0) {
    float centimetros = Serial.parseFloat(); // Ler o valor digitado
    float polegadas = centimetros / 2.54;    // Converte para polegadas

    //processamento
    Serial.print(centimetros);
    Serial.print(" cm equivale a ");
    Serial.print(polegadas, 2); // Mostra 2 casas decimais
    Serial.println(" polegadas");

    //saida
    Serial.println("Digite outra medida em centimetros:");
    delay(500); // Pequena pausa para evitar leituras duplicadas
  }
}
