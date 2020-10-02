
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);//verde prendido
    digitalWrite(8, HIGH);//rojo prendido
  delay(5000);
  digitalWrite(13, LOW);  //verde apagado                     
  digitalWrite(12, HIGH);  //amarillo prendido
  delay(500);                       
  digitalWrite(12, LOW);    //amarillo apagado
  delay(500);
  digitalWrite(12, HIGH);  //amarillo prendido
  delay(500);                       
  digitalWrite(12, LOW);    //amarillo apagado
  delay(500);
  digitalWrite(12, HIGH);  //amarillo prendido 
  delay(500);                       
  digitalWrite(12, LOW);    //amarillo apagado
  delay(500);
  digitalWrite(8, LOW);  //rojo apagado
  digitalWrite(11, HIGH);   //rojo prendido
  digitalWrite(10, HIGH);//verde prendido
  delay(5000);                       
  digitalWrite(10, LOW);  //verde apagado
  //delay(5000);
    digitalWrite(9, HIGH);  //amarillo prendido
  delay(500);                       
  digitalWrite(9, LOW);    //amarillo apagado
  delay(500);
  digitalWrite(9, HIGH);  //amarillo prendido
  delay(500);                       
  digitalWrite(9, LOW);    //amarillo apagado
  delay(500);
  digitalWrite(9, HIGH);  //amarillo prendido 
  delay(500);                       
  digitalWrite(9, LOW);    //amarillo apagado
  delay(500);
  digitalWrite(11, LOW);    //rojo apagado
  
                 
}
