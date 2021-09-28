//Radio com arduino

//Importação de bibliotecas
#include <Wire.h>
#include <TEA5767Radio.h>

//Instanciando um objeto
TEA5767Radio radio = TEA5767Radio();

//Declaração de variavel
float fm_freq = 104.9;

void setup(){
  Wire.begin();
}
void loop(){
  radio.setFrequency(fm_freq);
}  
