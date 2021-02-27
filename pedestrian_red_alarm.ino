/* 2020/08/25 produced by JunWoo LEE */

int data;
int distance;
int motor;

void setup() {
  Serial.begin(9600);  //
  pinMode(A0,INPUT);  //
  pinMode(motor,OUTPUT);  //
}

void loop() {
  data=map(analogRead(A0),0,1023,0,5000);

  distance = (27.61 / (data- 0.1696))*1000;
  Serial.print(distance);
  Serial.println("cm");
  digitalWrite(motor,LOW);
  if (distance<=30)
  {
    digitalWrite(motor,HIGH);

    delay(30);

    digitalWrite(motor,LOW);

    delay(30);

    digitalWrite(motor,HIGH);

    delay(30);

    digitalWrite(motor,LOW);

    delay(30);

    digitalWrite(motor,HIGH);

    digitalWrite(motor,LOW);

    delay(30);

    digitalWrite(motor,LOW);

    digitalWrite(motor,HIGH);

    digitalWrite(motor,LOW);

    delay(30);
  }

  else {
    digitalWrite(motor,LOW);

    delay(15);
  }
}
