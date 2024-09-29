void setup()
{

  Serial.begin(9600);

  pinMode(s1, INPUT); //light sensor(1)
  pinMode(s2, INPUT); //light sensor(2)
  pinMode(s3, INPUT); //light sensor(3)
  pinMode(s4, INPUT); //light sensor(4)
  pinMode(s5, INPUT); //light sensor(5)
  pinMode(NS, INPUT); //light sensor(6)
  pinMode(NS2, INPUT); //light sensor(7)
  
  pinMode(27,OUTPUT); //Triga
  pinMode(29,INPUT); //Eco
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(M1A, OUTPUT);
  pinMode(M1B, OUTPUT);
  pinMode(M1En, OUTPUT);
  pinMode(M1PWM, OUTPUT);

  pinMode(M2A, OUTPUT);
  pinMode(M2B, OUTPUT);
  pinMode(M2En, OUTPUT);
  pinMode(M2PWM, OUTPUT);

  digitalWrite(M1En, HIGH);
  digitalWrite(M2En, HIGH);

    for (int i = 0 ; i <= 255 ; i++)
  {
    analogWrite(9, i);
    analogWrite(10, i);
  }
  
  Serial.println("SETUP verified %100");
  delay(2000);
  Serial.println("CODE STARTED :)");
}
