 int l=8;
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
digitalWrite(l,LOW);
digitalWrite(p,HIGH);
digitalWrite(r,LOW);
delay(1000);
digitalWrite(l,HIGH);
digitalWrite(p,HIGH);
digitalWrite(r,LOW);
delay(1000);

}
