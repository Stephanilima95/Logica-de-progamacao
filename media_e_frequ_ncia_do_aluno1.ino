// C++ code
//variaveis
float nota1 = 0;
float nota2 = 0;
float frequencia = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
Serial.println("Digite a primeira nota:");
  while (Serial.available() == 0)
  nota1 = Serial.parseFloat();

  Serial.println("Digite a segunda nota:");
  while (Serial.available() == 0)
  nota2 = Serial.parseFloat();

  Serial.println("Digite a frequência em % :");
  while (Serial.available() == 0)
  frequencia = Serial.parseFloat();
  
    media = (nota1 + nota2) / 2;

  Serial.print("Media: ");
  Serial.println(media);
  Serial.print("Frequencia: ");
  Serial.print(frequencia);
  Serial.println("%");
}
 if (media >= 6 && frequencia >= 75) 
    Serial.println("Aluno aprovado!");
}else{

    }
  void loop()
}