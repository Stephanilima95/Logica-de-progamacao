// Variáveis
int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemana = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  // Cabeçalho - 2 pipes + 30 tracinhos
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX 02        |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");

  Serial.println(); // pula uma linha
  Serial.println(); // pula outra linha

  // Entrada
  Serial.println("Digite o ano de nascimento:");
  while (!Serial.available());
  anoNascimento = Serial.parseInt();

  while (Serial.available()) Serial.read(); // Limpa o buffer

  Serial.println("Digite o ano atual:");
  while (!Serial.available());
  anoAtual = Serial.parseInt();

  while (Serial.available()) Serial.read();

  // Processamento
  idade = anoAtual - anoNascimento;
  idadeSemana = idade * 52; // estimativa aproximada

  // Saída
  Serial.println("Sua idade: " + String(idade));
  Serial.println("Sua idade em semanas (aproximada): " + String(idadeSemana));

  delay(10000); // Espera 10000 milissegundos (10 segundos) antes de reiniciar o loop
}
