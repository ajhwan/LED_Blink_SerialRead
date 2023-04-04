const int LED = 6;
const int button = 7;





void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(button, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    char num = Serial.read();
    Serial.print(alphabet);
    if (num == '1')
    {
      digitalWrite(LED, HIGH);
      delay(500);
      digitalWrite(LED, LOW);
      delay(500);
    }
    if (num == '2')
    {
      digitalWrite(LED, HIGH);
      delay(500);
      digitalWrite(LED, LOW);
      delay(500);
      digitalWrite(LED, HIGH);
      delay(500);
      digitalWrite(LED, LOW);
      delay(500);
    }
  }

}
