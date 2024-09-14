// C++ code
//
int moisture = 0; // Declara a variável 'moisture' para armazenar a leitura do sensor de umidade do solo

void setup()
{
  pinMode(A0, OUTPUT); // Configura o pino analógico A0 como saída (para alimentar o sensor de umidade)
  pinMode(A1, INPUT);  // Configura o pino analógico A1 como entrada (para ler os dados do sensor de umidade)
  Serial.begin(9600);  // Inicializa a comunicação serial a 9600 bps para enviar dados ao monitor serial
  pinMode(8, OUTPUT);  // Configura o pino digital 8 como saída (para controle de um LED ou outro indicador)
  pinMode(9, OUTPUT);  // Configura o pino digital 9 como saída
  pinMode(10, OUTPUT); // Configura o pino digital 10 como saída
  pinMode(11, OUTPUT); // Configura o pino digital 11 como saída
  pinMode(12, OUTPUT); // Configura o pino digital 12 como saída
}

void loop()
{
  // Aplica energia ao sensor de umidade do solo
  digitalWrite(A0, HIGH); // Define o pino A0 como HIGH, ligando o sensor de umidade
  delay(10); // Aguarda 10 milissegundos para estabilizar o sensor
  moisture = analogRead(A1); // Lê o valor analógico do sensor de umidade conectado ao pino A1
  // Desliga o sensor para reduzir a corrosão do metal ao longo do tempo
  digitalWrite(A0, LOW); // Define o pino A0 como LOW, desligando o sensor de umidade
  Serial.println(moisture); // Envia o valor lido do sensor para o monitor serial
  digitalWrite(8, LOW); // Desliga o LED ou indicador conectado ao pino 8
  digitalWrite(9, LOW); // Desliga o LED ou indicador conectado ao pino 9
  digitalWrite(10, LOW); // Desliga o LED ou indicador conectado ao pino 10
  digitalWrite(11, LOW); // Desliga o LED ou indicador conectado ao pino 11
  digitalWrite(12, LOW); // Desliga o LED ou indicador conectado ao pino 12

  // Condições para acender o LED correspondente com base no nível de umidade
  if (moisture < 200) {
    digitalWrite(12, HIGH); // Liga o LED no pino 12 se a umidade estiver abaixo de 200
  } else {
    if (moisture < 400) {
      digitalWrite(11, HIGH); // Liga o LED no pino 11 se a umidade estiver entre 200 e 399
    } else {
      if (moisture < 600) {
        digitalWrite(10, HIGH); // Liga o LED no pino 10 se a umidade estiver entre 400 e 599
      } else {
        if (moisture < 800) {
          digitalWrite(9, HIGH); // Liga o LED no pino 9 se a umidade estiver entre 600 e 799
        } else {
          digitalWrite(8, HIGH); // Liga o LED no pino 8 se a umidade estiver acima de 800
        }
      }
    }
  }
  delay(100); // Aguarda 100 milissegundos antes de repetir o loop
}