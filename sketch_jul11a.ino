int led = 8;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH); // Liga o LED
    delay(100);              // Espera 100 milissegundos
    digitalWrite(led, LOW);  // Desliga o LED
    delay(500);              // Espera 500 milissegundos
}
