int data;

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();
  }

  if (data == '1') {
    digitalWrite(11, HIGH);
    digitalWrite(13, LOW);
  } else if (data == '2') {
    digitalWrite(11, LOW);
    digitalWrite(13, HIGH);
  } else if (data == '0') {
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  }
}
