
#define InB1 8
#define InB2 5
#define PWM 11

void setup() {
  pinMode(InB1, OUTPUT); 
  pinMode(InB2, OUTPUT);
  pinMode(PWM, OUTPUT);
}


void loop() {

      digitalWrite(InB1, HIGH);                        
      digitalWrite(InB2, LOW);
      analogWrite(PWM, 255);

      delay(1000);
      digitalWrite(InB1, LOW);                        
      digitalWrite(InB2, HIGH);
      analogWrite(PWM, 255);
      delay(1000);

      
  
}