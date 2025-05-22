/*
  Função que 
*///funções
void desenhaCabecalho()
{
  Serial.println("------- PROGRAMA JOGO DE DADOS --------");
  Serial.println();
  Serial.println();
}
void desenhaPontinhos(int qtdPontos = 5, int tempo  = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {Serial.print(".");
   delay(700);
  }
}
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
}
void loop()
{
 desenhaCabecalho();
  
  //Penguntar ao usu[ario quantas vezes ele quer jogar
  //criar os vetores baseados na quantidade de rodadas 
  //jogar apenas esa quantidade ( laco de repeticao)
  
  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();
  
  //criar os arrays de estatísticas para o relatório final
  //os Vetores do tamanho da quantidade de rodadas 
  int vetPalpites[qtdRodadas];
  int vetResultados[qtdRodadas];
  
  
  for(int r = 0; r < qtdRodadas; r++)
  {
   Serial.println("Escolha um numero de 1 a 6: ");
  while(!Serial.available());//espera o usu[ario digitar
  int palpite = Serial.parseInt();//guarda o palpite do usu[ario
    
  //jogar o dado - sorteia um numero randomico/aleatorio de 1 ate 7 - 1, ou seja, 6
    int numeroSorteado = random(1, 7);//numero entre 1 e 6
    
    //Exibir o palpite do usu[ario
    vetPalpites[r] = palpite;
    vetResultados[r] = numeroSorteado;
    
    Serial.print("Jogando o dado");
    
    desenhaPontinhos();
  
    Serial.println("Seu palpite :" + String(palpite));
    Serial.println("Numero Sorteado :" + String(numeroSorteado));
  
  if(palpite == numeroSorteado){
  Serial.println("Parabens, voce acertou!!1" );
  } else {
  Serial.println("Que pena, tente outra vez!!" );
  }
   
    //Exibir o numero sorteado
    
 
  
  delay(700); 
  }
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println();
  for(int i = 0; i < qtdRodadas; i++)
  {
  Serial.println("Rodada" + String(i) + ".");
    Serial.println("   Palpite: " + String(vetPalpites[i]));
    Serial.println("   Dado: " + String(vetPalpites[i]));
    Serial.println("   Resultado: : " + String(vetResultados[i] == vetPalpites [i] ? "Acertuou!" : "Errou!"));
    Serial.println("-----------------------------------");
    Serial.println();
  }
  
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  desenhaPontinhos(3, 500);
  delay(3000);
  
}

