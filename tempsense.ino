int temp=0;
void setup() 
{
 Serial.begin(9600);
}

void loop() 
{
  int rv=analogRead(temp);
  float mv=(rv/1024.0);
  float c=mv/10;
  Serial.println(c);
  Serial.print("celsius");
  Serial.println((c*9)/5+32);
  Serial.print("Degree fahrenheit");
  delay(1000);

}
