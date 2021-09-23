const int ledPin = 3;
const int flexPin = A0;

int value;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  value = analogRead(flexPin);
  Serial.println(value);
  value = map(value, 700, 900, 0, 255);
  analogWrite(ledPin, value);
  delay(100); 
}