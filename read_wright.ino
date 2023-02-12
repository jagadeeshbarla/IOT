int w=7;
int g=8;
int b=13;
int r=2;
int x;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(b,OUTPUT);
pinMode(r,OUTPUT);
pinMode(w,OUTPUT);
pinMode(g,OUTPUT);
}

void loop() {
  Serial.print("Enter the number");
  while(Serial.available()==0)
  {
  }
x=Serial.parseInt();
switch(x)
{
  case 1:
  Serial.println("::1::BLUE");
  digitalWrite(b,HIGH);
  break;
  case 2:
  Serial.println("::2::RED");
  digitalWrite(r,HIGH);
  break;
  case 3:
  Serial.println("::3::WHITE");
  digitalWrite(w,HIGH);
  break;
  case 4:
  Serial.println("::4::GREEN");
  digitalWrite(g,HIGH);
  break;
 } 
delay(500);
 digitalWrite(b,HIGH);
 digitalWrite(r,HIGH);
 digitalWrite(w,HIGH);
 digitalWrite(g,HIGH);
 delay(500);
 digitalWrite(b,LOW);
 digitalWrite(r,LOW); 
 digitalWrite(w,LOW);
 digitalWrite(g,LOW); 
}
