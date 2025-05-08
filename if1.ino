// C++ code
//
float numero1 = 0.0;
float numero2 = 0.0;
float soma;
float subtracao;
float divisao;
float multiplicacao;
int escolhaDaOperacao;
int contador = 0;

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
  
   while(!Serial.available()){}//Espera o usuario digitar
   escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuario digitou na variavel
  
   Serial.println("Agora, para realizar a operacao, digite o primeiro numero:");
   while(!Serial.available()){}//Espera o usuario digitar
   numero1 = Serial.parseFloat();
  
   Serial.println("Agora, digite o segundo numero:");
   while(!Serial.available()){}//Espera o usuario digitar
   numero2 = Serial.parseFloat();
    
    
   if (escolhaDaOperacao == 1){
   soma = numero1 + numero2;
   Serial.println("WOW!!! O resultado foi:" + String(soma));
   }
       else if (escolhaDaOperacao == 2){
   subtracao = numero1 - numero2;
   Serial.println("WOW!!! O resultado foi:" + String(subtracao));
       }           
           else if (escolhaDaOperacao == 3){
   multiplicacao = numero1 * numero2;
   Serial.println("WOW!!! O resultado foi:" + String(multiplicacao));
           }            
           else if (escolhaDaOperacao == 4){
   divisao = numero1 / numero2;
   Serial.println("WOW!!! O resultado foi:" + String(divisao));

      
    }
    
    Serial.println("Voceh deseja continuar?, se sim, digite [s], se nao, digite [n]");
     while(!Serial.available()){}//Espera o usuario digitar
     
     if(Serial.readString() == "s"){
     contador ++;
     }
     else{
     contador =0;
       Serial.println("ate breve, obrigado por usar a calculadora inteligente");
        Serial.println("Caso queira voltar, reinicie o sistema.");
     }
    
  }
  while(contador != 0);
}

void loop()
{
 //sem codigo
}