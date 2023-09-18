#define PIN_LED 7
int a = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, 0);
  delay(1900);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(a < 6){
    delay(100);
    digitalWrite(PIN_LED, 1);
    delay(100);
    digitalWrite(PIN_LED, 0);
    a++;
    }
  digitalWrite(PIN_LED,1);
  while(1) {}
}
