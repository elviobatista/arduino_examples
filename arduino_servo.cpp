// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

/*
  Este programa faz com que um servo motor se mova continuamente
  de 0 a 180 graus e de volta a 0 graus, criando um movimento de "varredura".
*/

#include <Servo.h> // Inclui a biblioteca Servo para controlar o servo motor

int pos = 0; // Declara uma variável 'pos' para armazenar a posição do servo

Servo servo_9; // Cria um objeto Servo chamado 'servo_9' para controlar o servo motor

void setup()
{
  servo_9.attach(9, 500, 2500); // Anexa o servo ao pino digital 9 e define os limites de pulso mínimo (500) e máximo (2500) em microssegundos
}

void loop()
{
  // Varre o servo de 0 a 180 graus em passos de 1 grau
  for (pos = 0; pos <= 180; pos += 1) {
    // Comanda o servo para ir para a posição armazenada na variável 'pos'
    servo_9.write(pos);
    // Aguarda 15 ms para permitir que o servo alcance a posição desejada
    delay(15); // Espera por 15 milissegundos
  }
  // Varre o servo de volta de 180 a 0 graus em passos de 1 grau
  for (pos = 180; pos >= 0; pos -= 1) {
    // Comanda o servo para ir para a posição armazenada na variável 'pos'
    servo_9.write(pos);
    // Aguarda 15 ms para permitir que o servo alcance a posição desejada
    delay(15); // Espera por 15 milissegundos
  }
}