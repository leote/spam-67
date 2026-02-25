#define LASER 13
#define DOT 200
#define DASH 600
#define GAP 200
#define CHAR_GAP 600

void dot() {
  digitalWrite(LASER, HIGH);
  delay(DOT);
  digitalWrite(LASER, LOW);
  delay(GAP);
}

void dash() {
  digitalWrite(LASER, HIGH);
  delay(DASH);
  digitalWrite(LASER, LOW);
  delay(GAP);
}

void setup() {
  pinMode(LASER, OUTPUT);
}

void loop() {
  // 6 = -....
  dash(); dot(); dot(); dot(); dot();
  delay(CHAR_GAP);

  // 7 = --...
  dash(); dash(); dot(); dot(); dot();
  delay(5000); // pause before repeating
}
