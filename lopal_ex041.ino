// Variáveis
String nome = "";
float peso = 0.0;
float altura = 0.0;
float imc = 0.0;

void setup() {
  Serial.begin(9600);
  while (!Serial); // Aguarda a conexão serial (útil para placas como Leonardo)

  // Entrada
  Serial.println("Digite seu nome:");
  while (Serial.available() == 0); // Aguarda a digitação
  nome = Serial.readStringUntil('\n');
  nome.trim();

  Serial.println("Digite sua altura (em metros, ex: 1.75):");
  while (Serial.available() == 0);
  altura = Serial.parseFloat();
  while (Serial.available()) Serial.read(); // Limpa buffer

  Serial.println("Digite seu peso (em kg, ex: 70.5):");
  while (Serial.available() == 0);
  peso = Serial.parseFloat();
  while (Serial.available()) Serial.read(); // Limpa buffer

  // Processamento
  imc = peso / (altura * altura);

  // Saída
  Serial.println("Seu nome é: " + nome);
  Serial.print("Seu IMC é: ");
  Serial.println(imc, 2); // 2 casas decimais
}

void loop() {
  // Faz nada aqui, já que o processo é feito uma vez no setup
}
