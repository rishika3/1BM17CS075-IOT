const int analogpinIn=A0;
const int analogpinOut=11;
int sensorvalue=0;
int outputvalue=0;

void setup() {
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue=analogRead(analogpinIn);
  outputvalue=map(sensorvalue,0,1023,0,255);
  analogWrite(analogpinOut,outputvalue);
  Serial.print("sensor=");
  Serial.print(sensorvalue);
  Serial.print("output=");
  Serial.print(outputvalue);
  delay(3);
}
