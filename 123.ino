int l=12;
int p=7;
int r=2;
void setup() {
  // put your setup code here, to run once:
pinMode(l,OUTPUT);
pinMode(p,OUTPUT);
pinMode(r,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(l,HIGH);
digitalWrite(p,LOW);
digitalWrite(r,LOW);
delay(1000);
digitalWrite(l,LOW);
digitalWrite(p,HIGH);
digitalWrite(r,LOW);
delay(1000);
digitalWrite(l,LOW);
digitalWrite(p,LOW);
digitalWrite(r,HIGH);
delay(1000);
}
