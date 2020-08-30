int boton = 3;
int led = 5;

void setup() {
  Serial.begin(9600);

  pinMode(boton, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  // leer el input:
  int buttonState = digitalRead(boton);
  
  //print:
  Serial.println(buttonState);
  
  delay(10);       

//prender o apagar el led:
if(digitalRead(boton)){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }

}
