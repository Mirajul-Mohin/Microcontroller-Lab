const int kPinTemp = A0;
const int kPinButton = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(kPinButton, INPUT);
  digitalWrite(kPinButton, HIGH);
}

void loop()
{
  float temperatureC = getTemperatureC();

  if (digitalRead(kPinButton) == LOW)
  {
    float fr = convertToF(temperatureC);

    Serial.print(fr);
    Serial.println(" degrees F");
  }

  else
  {
    Serial.print(temperatureC);
    Serial.println(" degrees C");
  }
  delay(500);

}

float getTemperatureC()
{
  int reading = analogRead(kPinTemp);

  float voltage = (reading / 1024.0) * 5000.0;
  return (voltage / 10.0) ;

}

float convertToF(float temperatureC)
{
  return (temperatureC * 9.0 / 5.0) + 32.0;
}
