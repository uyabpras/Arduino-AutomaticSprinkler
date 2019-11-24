int Relay = 8; 
int sensor = 7; 
int val; 
void setup() {
  pinMode(8,OUTPUT); //Set pin 13 sbg output pin untuk dikirimkan pada relay
  pinMode(7,INPUT); //Set pin 8 sebagai input pin untuk menerima hasil dari soil moisture

void loop() { 
  val = digitalRead(7); 
  if(val == LOW) 
  {
  digitalWrite(13,LOW); 
  }
  else
  {
  digitalWrite(13,HIGH);
  }
  delay(400);
}
