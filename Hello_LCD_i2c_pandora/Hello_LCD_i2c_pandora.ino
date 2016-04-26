// Utilizamos a biblioteca NewliquidCrystal_1.3.4
// por F Malpartida
// disponível para download aqui:
// https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); // configuração para o modelo vendido em nossa loja


void setup()
{
  lcd.begin(16, 2); // inicializa o display

  lcd.home ();                   // vai pra primeira linha
  lcd.print("Ola, ARDUINO");
  lcd.setCursor ( 0, 1 );        // início da segunda linha
  lcd.print("PandoraLab");
  delay(1500);
}

int desloca = 0;
void loop()
{
  desloca = (desloca + 1) % 16;

  lcd.setCursor (desloca, 1 ); // escreve na segunda linha
  lcd.print (" PandoraLab ");

  lcd.noBacklight();
  delay (200);
  lcd.backlight();
  delay (200);
}
