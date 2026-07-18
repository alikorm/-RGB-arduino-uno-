int speedtime = 250;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(speedtime);
    digitalWrite(LED_BUILTIN, LOW);
    delay(speedtime);
}