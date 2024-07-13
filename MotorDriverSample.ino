//abnegative2904
#define InA1 8 
#define InA2 5
#define PWM 11

void setup() {
  pinMode(InA1, OUTPUT); 
  pinMode(InA2, OUTPUT);
  pinMode(PWM, OUTPUT);
}


void loop() {

      digitalWrite(InA1, HIGH);   //forward                     
      digitalWrite(InA2, LOW);
      analogWrite(PWM, 255);

      delay(1000);

      digitalWrite(InA1, LOW);   //reverse                      
      digitalWrite(InA2, HIGH);
      analogWrite(PWM, 255);
      delay(1000);

      
  
}