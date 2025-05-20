void setup() {
  Serial.begin(9600);
}

void loop() {
  // WHILE
  int contadorWhile = 1; // variável local

  while (contadorWhile <= 5) {
    Serial.println("Contador While: " + String(contadorWhile));
    contadorWhile++; // importante: se não incrementar, vira loop infinito
  }

  delay(1000); // esperar 1 segundo

  // DO WHILE
  int contadorDoWhile = 1;

  do {
    Serial.println("Contador Do While: " + String(contadorDoWhile));
    contadorDoWhile++; // também precisa ser incrementado!
  } while (contadorDoWhile <= 5);

  delay(1200); // esperar 2 segundos antes de repetir tudo
}
