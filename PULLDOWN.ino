int led = 23;        // Pin donde está conectado el LED 
int boton = 18;      // Pin donde está conectado el pulsador 

bool estadoLED = false;   // Variable para guardar el estado actual del LED (encendido/apagado)
int ultimoEstado = LOW;   // Guarda el estado anterior del botón p

void setup() {

  pinMode(boton, INPUT_PULLDOWN);    // Se configura el pin del botón como entrada con resistencia pull-down interna
                                     // El pin está en LOW cuando no se presiona el botón
  pinMode(led, OUTPUT);               // Se configura el pin del LED como salida 
}

void loop() {
  int lectura = digitalRead(boton);   // Se lee el estado actual del botón (HIGH o LOW)
  if (lectura == HIGH && ultimoEstado == LOW) {     // Se detecta el momento en que el botón pasa de no presionado (LOW) a presionado (HIGH)
    estadoLED = !estadoLED;   // Se cambia  el estado del LED
                              // Si estaba apagado se enciende, y si estaba encendido se apaga
    delay(200);               // Pausa para evitar rebotes 
  }
  digitalWrite(led, estadoLED);   // Se actualiza el estado del LED
  ultimoEstado = lectura;        // Se guarda el estado actual del botón para compararlo en la siguiente iteración
}