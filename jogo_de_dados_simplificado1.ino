// C++ code
// Variáveis
int palpite = 0;
int numeroSorteado = 0;
int tempo = 500;

void desenhaCabecalho() {
  Serial.println();
  Serial.println("Programa jogo de dados");
  delay(500);
}

void desenhaPontinhos(int qtdPontos = 5) {
  for (int i = 0; i < 5; i++) {
    Serial.println(".");
    delay(tempo);
  }
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  desenhaCabecalho();
  Serial.println("Digite um palpite entre 1 e 6: ");

  while (!Serial.available());
  palpite = Serial.parseInt();

  numeroSorteado = random(1, 7);

  Serial.println("O numero sorteado no dado foi: " + String(numeroSorteado));
  Serial.println("O seu palpite foi: " + String(palpite));

  if (palpite == numeroSorteado) {
    Serial.println("Parabens!! Voce acertou!!");
  } else {
    Serial.println("Que pena... Tente outra vez");
  }

  Serial.println("Reinicie o programa");
  Serial.println();

  delay(7000);
}
