void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float v,x;
  delay(1000);
  v=analogRead(A0);
  Serial.println(v);
  x=(v*51)/1023;
  Serial.write(" Temperatura: ");
  Serial.println(x);

}
