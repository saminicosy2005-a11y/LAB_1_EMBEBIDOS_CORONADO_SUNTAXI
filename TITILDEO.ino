int led = 16; // Pin  donde está conectado el LED

void setup() {
  pinMode(led, OUTPUT);      // Se configura el pin del LED como salida digital   
}

void loop() {
  digitalWrite(led, HIGH);  // Se envía un nivel alto (3.3V) al pin para encender el LED
  delay(500); // Se espera 500 milisegundos 
  digitalWrite(led, LOW); // Se envia un nivel bajo (0V) para apagar el LED
  delay(500); // Se espera 500 milisegundos para repetir el ciclo
}

