#define LED_PIN 2
int SW = 3;

void setup() {
  pinMode(LED_PIN, INPUT);
  pinMode(SW, OUTPUT);
}

void loop(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  delay(1000);
}