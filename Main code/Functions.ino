//Motor Control Functions
void FWD(int Speed)
{
  digitalWrite(M1A, 0);
  digitalWrite(M1B, 1);
  analogWrite(M1PWM, Speed);

  digitalWrite(M2A, 0);
  digitalWrite(M2B, 1);
  analogWrite(M2PWM, Speed);
  Serial.println("FWD");
}

void back(int Speed)
{
  digitalWrite(M1A, 1);
  digitalWrite(M1B, 0);
  analogWrite(M1PWM, Speed);

  digitalWrite(M2A, 1);
  digitalWrite(M2B, 0);
  analogWrite(M2PWM, Speed);
  Serial.println("back");
}

void Left(int M1Speed, int M2Speed)
{
  if (M1Speed == 0)
  {
    digitalWrite(M1A, 0);
    digitalWrite(M1B, 0);
  }
  else
  {
    digitalWrite(M1A, 0);
    digitalWrite(M1B, 1);
    analogWrite(M1PWM, M1Speed);

    digitalWrite(M2A, 1);
    digitalWrite(M2B, 0);
    analogWrite(M2PWM, M2Speed);
    Serial.println("Left");
  }
}

void Right(int M1Speed, int M2Speed)
{
  if (M1Speed == 0)
  {
    digitalWrite(M1A, 0);
    digitalWrite(M1B, 0);
  }
  else
  {
    digitalWrite(M1A, 1);
    digitalWrite(M1B, 0);
    analogWrite(M1PWM, M1Speed);

    digitalWrite(M2A, 0);
    digitalWrite(M2B, 1);
    analogWrite(M2PWM, M2Speed);
    Serial.println("Right");
  }
}

//Sensors Control Function
void reading()
{
  // Reading and displaying the readings of the ULTRASONIC SENSOR
  Serial.print("ULTRASONIC SENSOR READINGS: ");
  digitalWrite(Triga, 0);
  delay(5);
  digitalWrite(Triga, 1);
  delay(10);
  digitalWrite(Triga, 0);
  Duration = pulseIn(Eco, HIGH, 1500);
  Distance = (Duration) * 0.0343 / 2;
  Serial.println(Distance);
  
  // Reading and displaying the readings of the Light sensors
  R3 = digitalRead(NS);
  R2 = digitalRead(s1);
  R1 = digitalRead(s2);
  M = digitalRead(s3);
  L1 = digitalRead(s4);
  L2 = digitalRead(s5);
  L3 = digitalRead(NS2);

  Serial.print(L3); Serial.print("... ");
  Serial.print(L2); Serial.print("... ");
  Serial.print(L1); Serial.print("..MID.. ");
  Serial.print(R1); Serial.print("... ");
  Serial.print(R2); Serial.print("... ");
  Serial.println(R3 + "... ");
  
  // LED lamps to display the reading of each sensor
  digitalWrite(led1, R2);
  digitalWrite(led2, R1);
  digitalWrite(led3, L1);
  digitalWrite(led4, L2);
}
