// C++ code
//variaveis globais
/* Cria cada vetor tamanho 4,
  fazendo parte do mesmo cadastro
 */

String convidados[4];
int idadeConvidados[4];//Camel case
String emailConvidados[4];

//Funcoes
void desenhaCabecalho()
{
  Serial.println("______________________________");
  Serial.println("");
  Serial.println("*** Churrasco dos amigos ***");
  Serial.println("");
  Serial.println("______________________________");
  Serial.println("");
  Serial.println("");
}


void setup()
{
 Serial.begin(9600);
}

void loop()
{
  desenhaCabecalho();
  for(int i = 0; i < 4; i++) 
  {
  Serial.println("Informe " +String(i + 1)+ "o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    
     Serial.println("Informe a idade de " +  convidados[i] );
    while(!Serial.available());
    idadeConvidados[4] = Serial.parseInt();
    
      Serial.println("Informe o email de " + convidados[i]);
    while(!Serial.available());
    emailConvidados[4] = Serial.readString();
  }
  
  Serial.println("Exibindo convidados eleitos para a festa");
  Serial.println();
  Serial.println();
  
  for(int i = 0; i < 3; i++) 
 {
    if(idadeConvidados[i] >= 18)
    {
 Serial.println("Nome:" + convidados[i]);
 Serial.println("Idade" + String(idadeConvidados[i]));
 Serial.println("Email: " + emailConvidados[i]);
 Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de idade"));
      
 Serial.println("__________");
 Serial.println();
    }
    
  }
 Serial.println();
  
  
  delay(2000);
}