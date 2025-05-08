// C++ code
//
float numero1 = 0.0;
float numero2 = 0.0;
float resultado;
int escolhaDaOperacao;

void setup()
{
  Serial.begin(9600);

 do{
    Serial.println("Bem-vindo(a) a calculadora mega inteligente :D!!!");
    Serial.println("Escolha uma das operacoes/opcoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir");

    while (!Serial.available()){}//Espera o usuario digitar
    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuario digitou na variavel

    Serial.println("Agora, para realizar a operacao, digite o primeiro numero:");
    while (!Serial.available()) {}//Espera o usuario digitar
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o segundo numero:");
    while (!Serial.available()) {}//Espera o usuario digitar
    numero2 = Serial.parseFloat();

    switch (escolhaDaOperacao) {
      case 1:
        resultado = numero1 + numero2;
        Serial.println("WOW!!! O resultado foi: " + String(resultado));
        break;

      case 2:
        resultado = numero1 - numero2;
        Serial.println("WOW!!! O resultado foi: " + String(resultado));
        break;

      case 3:
        resultado = numero1 * numero2;
        Serial.println("WOW!!! O resultado foi: " + String(resultado));
        break;

      case 4:
        if (numero2 != 0) {
          resultado = numero1 / numero2;
          Serial.println("WOW!!! O resultado foi: " + String(resultado));
        } else {
    }

    Serial.println("Voce deseja continuar? Se sim, digite [s], se não, digite [n]:");
    while (!Serial.available()) {}
    resposta = Serial.readString);
    resposta.trim();

    if (resposta != "s") {
      Serial.println("Até breve, obrigado por usar a calculadora inteligente!");
      Serial.println("Caso queira voltar, reinicie o sistema.");
    }
  }
}

void loop()
{
  // sem código
}
