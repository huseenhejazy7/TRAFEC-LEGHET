int greenPin =5;
int yellowPin = 7;
int redPin =10;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin, OUTPUT); 
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(5000);

  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(2000);

  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(5000);
 
}