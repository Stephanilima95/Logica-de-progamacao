// C++ code for Arduino - Cadastro de Funcionário com ajuste salarial

String nome = "", cargo = "";
float salario = 0;
float novoSalario = 0;

void setup() {
  Serial.begin(9600);
  while (!Serial); // Aguarda o Serial conectar (útil para alguns boards)
}

void loop() {
  // Entrada de dados
  Serial.println("Qual eh o nome do funcionario?");
  while (!Serial.available());
  nome = Serial.readStringUntil('\n');
  nome.trim(); // remove espaços extras ou \r

  Serial.println("Qual eh o cargo do funcionario " + nome + "?");
  while (!Serial.available());
  cargo = Serial.readStringUntil('\n');
  cargo.trim();

  Serial.println("Qual eh o salario de " + nome + "?");
  while (!Serial.available());
  salario = Serial.parseFloat(); // Correção: estava usando 'cargo = Serial.readFloat();'

  // Processamento
  novoSalario = salario * 1.10;

  // Saída formatada
  Serial.println();
  Serial.println("------------------------------");
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.print("Salario Antigo: R$ ");
  Serial.println(salario, 2);
  Serial.print("Salario Atualizado: R$ ");
  Serial.println(novoSalario, 2);
  Serial.println("------------------------------");

  Serial.println("Digite uma letra + <Enter> para continuar...");
  while (!Serial.available());
  Serial.read(); // Limpa o caractere digitado

  Serial.println();
  Serial.println();
}
