int variable = A1;
int speaker = 11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(speaker, OUTPUT);  

  Serial.println(variable);
}

void loop() {
  // put your main code here, to run repeatedly:
int potValue = analogRead(variable);
Serial.println(variable); 
tone(speaker, potValue, 50);
delay(100);
}
