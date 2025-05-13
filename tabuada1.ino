int tabuadaEscolhida = 0;

void setup() {
  
  Serial.begin(9600);
  Serial.println("Digite um numero para ver a tabuada:");
}

void loop() {
  while(Serial.available()) {
    tabuadaEscolhida = Serial.parseInt();

    Serial.print("Tabuada do ");
    Serial.println(tabuadaEscolhida);

    for (int i = 1; i <= 10; i++) {
      Serial.print(tabuadaEscolhida);
      Serial.print(" * ");
      Serial.print(i);
      Serial.print(" = ");
      Serial.println(tabuadaEscolhida * i);
    }

    Serial.println("Digite outro numero para ver outra tabuada:");
  }
}
