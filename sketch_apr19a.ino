const int reedSwitchPin =A0; 
const int buzzer = 2;
const int led = 9;


void setup() {
  pinMode(reedSwitchPin, INPUT_PULLUP); 
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT); 
  pinMode(led, OUTPUT); 
 }

void loop() {
int reedSwitchState = digitalRead(reedSwitchPin);

 if (reedSwitchState == LOW) {
 digitalWrite(buzzer, LOW);
 digitalWrite(led, LOW);
 Serial.println("Low");
} 
else {
 digitalWrite(buzzer, HIGH);
 digitalWrite(led, HIGH);
 Serial.println("HIGH");
 }
}

