// C++ code
//
/*
  Button
  Turns on and off a light emitting diode (LED)
  connected to digital pin 13 when pressing a
  pushbutton attached to pin 2.

  The circuit:
  * LED attached from pin 13 to ground
  * Pushbutton attached to pin 2 from +5V
  * 10K resistor attached to pin 2 from ground
  * Note: on most Arduinos, there is already an LED
    on the board attached to pin 13.

  Created in 2005 by DojoDave <http://www.0j0.org>

  Modified 30 Aug 2011 by Tom Igoe

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Button
*/

int buttonState = 0; // Declara a variável 'buttonState' para armazenar o estado atual do botão (0 = LOW, 1 = HIGH)

void setup()
{
  pinMode(2, INPUT); // Configura o pino digital 2 como entrada, para ler o estado do botão
  pinMode(LED_BUILTIN, OUTPUT); // Configura o pino do LED embutido (geralmente pino 13) como saída
}

void loop()
{
  // Lê o estado atual do botão (HIGH ou LOW)
  buttonState = digitalRead(2);
  
  // Verifica se o botão está pressionado. Se estiver, o 'buttonState' será HIGH
  if (buttonState == HIGH) {
    // Liga o LED embutido
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    // Desliga o LED embutido
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  delay(10); // Aguarda 10 milissegundos para melhorar o desempenho da simulação
}