int l=A2;
int rv;
float v2;
void setup() {
  pinMode(7,OUTPUT);
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 rv=analogRead(l);
 v2=(5./1023.)*rv;
 Serial.println(v2);
 if(v2>2 && v2<3)
 {
  Serial.println("HIGH");
  digitalWrite(7,HIGH);
  }
  if(v2<2 && v2>3)
 {
  Serial.println("low");
  digitalWrite(7,LOW);
  }
  
delay(500);
}
