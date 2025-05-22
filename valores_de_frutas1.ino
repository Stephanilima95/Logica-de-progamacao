//C++



void setup()
{
  Serial.begin(9600);




  Serial.println("**** Sacolao do Zeh ****");
  Serial.println();

  String frutas[6]{};                  //cria um vetor de tamanho 6 vazio
  float  precos[6]{};

  Serial.println("oh Zeh, bora cadastrar as frutas!");
  Serial.println();



  for(int i = 0; i <= 5; i++) {

    Serial.println("informe a " + String(i + 1) + "a Fruta");
    while (! Serial.available()); 
    frutas[i] = Serial.readString(); 

    Serial.println("informe o preco da " + frutas[i]); 
    while (! Serial.available());
    precos [i] = Serial.parseFloat();

  }

  for(int numeroFruta = 0; numeroFruta < 6; numeroFruta++ ) {
    Serial.println("a " + frutas[numeroFruta] + " custa por Kg: R$ " + precos[numeroFruta]);
    Serial.println();

  }
}


void loop()
{

}
