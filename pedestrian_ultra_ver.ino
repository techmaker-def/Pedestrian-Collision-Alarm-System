/* 2020/08/25 produced by JunWoo LEE */

int motor = 13;

void setup() {
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(motor,OUTPUT);
}

void loop()  {
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delayMicroseconds(2);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);

  digitalWrite(9,LOW);

  unsigned long duration = pulseIn(8,HIGH)
  float distance = ((float)(340*duration)/10000)/2;

  Serial.print(distance);
  Serial.println("cm");
  digitalWrite(motor,LOW);

 if (distance<=30)
 {
  digitalWrite(motor,HIGH);

  delay(30);

  digitalWrite(motor,LOW)
 }

  else {
    digitalWrite(motor,LOW)
    delay(15)
  }
}
