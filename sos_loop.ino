int LED = 13;
int s = 100;
int o = 800;

void setup() {
    pinMode(LED, OUTPUT);
}

void litera(int speed) {
  digitalWrite(LED, HIGH);
  delay(speed);
  digitalWrite(LED, LOW);
  delay(300);
}

void loop() {
   for (int x = 1; x <= 3; x++) {
    litera(s);
  }
  delay(100);
  for (int x = 1; x <= 3; x++) {
    litera(o);
  }
  delay(100);
  for (int x = 1; x <= 3; x++) {
    litera(s);
  }
  delay(2000);
}
