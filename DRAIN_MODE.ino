int led = 18;  // Se define el pin GPIO 18 donde está conectado el LED

void setup() {
  pinMode(led, OUTPUT_OPEN_DRAIN);  // Se configura el pin como salida en modo Open-Drain
}

void loop() {
  digitalWrite(led, LOW);   // Conectar el pin a GND para que circule la corriente desde VCC
                            // El LED se encenderá
  delay(500);  // Esperar  500 milisegundos

  digitalWrite(led, HIGH);  // Al escribir HIGH el pin entra en estado flotante apagandolo
                            // al no circular corriente

  delay(500);  // Espera de 500 milisegundos
}