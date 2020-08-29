//potenciómetro
int pot = A0;
//LED
int led = 3;

/*
Abrir el monitor en serie y el serial plotter para ver
el input del potenciómetro en números y gráfica
*/


void setup() {

/*importante: un cable del potenciómetro debe ir al pin 5V,
 * otro a analog in, y otro al ground!
*/
pinMode(pot,INPUT);
pinMode(led,OUTPUT);
  
  // initialize serial communication at 9600 bits per second:
  //Serial.begin(speed)
  Serial.begin(9600);
}


void loop() {
  // read the input on analog pin:
  int potVal = analogRead(pot);
  
  // print:
  //Serial.println(val)
  // val: the value to print. 
  Serial.println(potVal);

  //para hacer que pueda prender el LED
  //analogWrite sólo acepta números entre 0 y 255, 
  //pero analogRead valores de 0 a 1023
  analogWrite(led,potVal/4);

  //evitar que se congestione la consola
  delay(10);        // delay in between reads 
}
