int led = 4;
int bot = 6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(bot, INPUT);
  digitalWrite(led, HIGH);
}

void loop() {
 
  
    digitalWrite(4, HIGH); 
    delay(2000);
   digitalWrite(4, LOW);
   delay(2000);
   digitalWrite(4, HIGH); 
    delay(1500);
   digitalWrite(4, LOW); 
  	delay(1500);
  digitalWrite(4, HIGH); 
    delay(1000);
   digitalWrite(4, LOW); 
  	delay(1000);
  digitalWrite(4, HIGH); 
    delay(500);
   digitalWrite(4, LOW); 
  	delay(500);
  digitalWrite(4, HIGH); 
    delay(100);
   digitalWrite(4, LOW); 
  	delay(100);
  }