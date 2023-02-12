int count=1;
int l=13;
int q=2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(l,OUTPUT);
pinMode(q,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(count%2==0)
{
  digitalWrite(l,HIGH);
  digitalWrite(q,LOW);
  Serial.print("The number is");
  Serial.println(count);
}
//if(count%2!=0)
else
{
  digitalWrite(l,LOW);
  digitalWrite(q,HIGH);
  Serial.print("The number is");
  Serial.println(count);
}

delay(2000);
 digitalWrite(l,HIGH);
 digitalWrite(q,HIGH); 
 delay(2000);
 digitalWrite(l,LOW);
 digitalWrite(q,LOW); 
 delay(2000);
count=count+1;
}
