int count=1;
int l=6;
int q=2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(l,OUTPUT);
pinMode(q,OUTPUT);
}
void loop()
{
  Serial.print("build");
for(int i=0;i<=250;i++)
{
  Serial.println(i);
  analogWrite(l,i);
  delay(30);  
}
Serial.print("dectruct");
digitalWrite(q,HIGH);
delay(50);
digitalWrite(q,LOW);
for(int i=250;i>=0;i--)
{
  Serial.println(i);
  analogWrite(l,i);
  delay(30);  
}
digitalWrite(q,HIGH);
delay(50);
digitalWrite(q,LOW);

}
