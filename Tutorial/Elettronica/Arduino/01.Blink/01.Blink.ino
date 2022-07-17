/*
  * Name file:   01.Blink.ino
  * Author:      Morgan
  * 
  * Descrzione: semplice programma per far  
  * lampeggiare un led
*/

#define led 13              //definiamo la parola "led" come "13" il pin che useremo 

void setup()
{
  pinMode(led, OUTPUT);     //Inizializziamo il pin come un pin di OUTPUT
}

void loop()
{
  digitalWrite(led, HIGH);  //Settiamo il pin al livello logico "alto" (+5 V)
  delay(1000);              //Il programma fa una pausa di 1000 millisecondi (1 secondo)
  digitalWrite(led, LOW);   //Settiamo il pin al livello logico "basso" (0 V)
  delay(1000);              //Il programma fa una pausa di 1000 millisecondi (1 secondo)  
}
