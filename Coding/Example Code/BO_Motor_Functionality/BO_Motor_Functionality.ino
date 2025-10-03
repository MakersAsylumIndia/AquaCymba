// ---------- Motor Driver 1 (Motors A & B) ----------
int enA = 9;   // PWM
int in1 = 8;
int in2 = 7;

int enB = 10;  // PWM
int in3 = 6;
int in4 = 5;

// ---------- Motor Driver 2 (Motors C & D) ----------
int enC = 11;  // PWM
int in5 = 4;
int in6 = 2;

int enD = 3;   // PWM
int in7 = 12;
int in8 = 13;

void setup() {
  // Motor A & B pins
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Motor C & D pins
  pinMode(enC, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);

  pinMode(enD, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);

  // ---------- Run all motors forward ----------
  // Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);

  // Motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 200);

  // Motor C
  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);
  analogWrite(enC, 200);

  // Motor D
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
  analogWrite(enD, 200);
}

void loop() {
  // Motors keep running forward
}
