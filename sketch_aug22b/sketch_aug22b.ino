int led=13;

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode (13, OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
delay (350);
digitalWrite(13, LOW);
delay (350);


}
