// C++ code
//
#include <Adafruit_LiquidCrystal.h> // Inclui a biblioteca Adafruit_LiquidCrystal para controle do display LCD

int seconds = 0; // Declara e inicializa a variável 'seconds' com 0, que será usada como um contador de segundos

Adafruit_LiquidCrystal lcd_1(0); // Cria um objeto 'lcd_1' da classe Adafruit_LiquidCrystal, utilizando o barramento I2C 0

void setup()
{
  lcd_1.begin(16, 2); // Inicializa o display LCD com 16 colunas e 2 linhas
  lcd_1.print("hello world"); // Exibe a mensagem "hello world" na primeira linha do display LCD
}

void loop()
{
  lcd_1.setCursor(0, 1); // Move o cursor para a coluna 0, linha 1 (segunda linha) do display
  lcd_1.print(seconds); // Exibe o valor atual de 'seconds' na posição definida pelo cursor
  lcd_1.setBacklight(1); // Liga a luz de fundo (backlight) do display LCD
  delay(500); // Aguarda 500 milissegundos (meio segundo) com o backlight ligado
  lcd_1.setBacklight(0); // Desliga a luz de fundo (backlight) do display LCD
  delay(500); // Aguarda mais 500 milissegundos (meio segundo) com o backlight desligado
  seconds += 1; // Incrementa a variável 'seconds' em 1, adicionando 1 segundo ao contador
}