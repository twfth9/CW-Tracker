#define PA6 0
#define PA7 1
#define PA3 4

void setup() {
  // put your setup code here, to run once:
  pinMode(PA6, OUTPUT);
  pinMode(PA7, OUTPUT);
  pinMode(PA3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PA7, HIGH);
  delay(100);
  digitalWrite(PA7, LOW);
  digitalWrite(PA6, HIGH);
  delay(100);
  digitalWrite(PA6, LOW);
  digitalWrite(PA3, HIGH);
  delay(100);
  digitalWrite(PA3, LOW);
}
