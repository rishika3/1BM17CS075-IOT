int ledPin=13;
int analogPin=0;
int buzzer=8;
int sensorValue=0;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(analogPin,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue=analogRead(analogPin);
  Serial.println("SENSED VALUE:");
  Serial.print(sensorValue);
  Serial.println();
  if(sensorValue<100) 
   {
      digitalWrite(ledPin,HIGH);
      digitalWrite(buzzer,HIGH);
  }
   else
   {
    digitalWrite(ledPin,LOW);
    digitalWrite(buzzer,LOW);
  }
   delay(1000);
 

}
