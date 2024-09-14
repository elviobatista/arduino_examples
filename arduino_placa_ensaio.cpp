// C++ code
//
// Função de configuração inicial do Arduino
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); // Configura o pino do LED embutido (LED_BUILTIN) como saída
}

// Função principal que executa repetidamente em loop
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // Liga o LED embutido (coloca o pino em nível alto)
  delay(1000); // Aguarda 1000 milissegundos (1 segundo) com o LED ligado
  digitalWrite(LED_BUILTIN, LOW); // Desliga o LED embutido (coloca o pino em nível baixo)
  delay(1000); // Aguarda 1000 milissegundos (1 segundo) com o LED desligado
}