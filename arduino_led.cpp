// C++ code
//
// Este programa pisca o LED embutido (conectado ao pino 13 do Arduino)

/*
  Descrição do Programa:
  Este programa faz o LED embutido do Arduino (localizado no pino 13)
  piscar repetidamente. O LED é ligado por 1 segundo e depois desligado
  por 1 segundo, em um loop contínuo.
*/

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); // Configura o pino do LED embutido (LED_BUILTIN) como saída
}

void loop()
{
  // Liga o LED embutido (HIGH é o nível de tensão alto)
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(1000); // Aguarda por 1000 milissegundos (1 segundo) com o LED ligado
  
  // Desliga o LED embutido (LOW é o nível de tensão baixo)
  digitalWrite(LED_BUILTIN, LOW); 
  delay(1000); // Aguarda por 1000 milissegundos (1 segundo) com o LED desligado
}