int led = 17;        // Pin donde está conectado el LED
int boton = 16;      // Pin donde está conectado el pulsador

void setup() {       
  pinMode(led,OUTPUT);          // Configura el pin del LED como salida
  pinMode(boton,INPUT_PULLUP);  // Configura el botón como entrada con resistencia pull-up interna
}

void loop() {        
  if (digitalRead(boton)== LOW){   // Si el botón está presionado (LOW)
    digitalWrite(led, HIGH);       // Enciende el LED
  } else {                         // Si el botón no está presionado
    digitalWrite(led,LOW);         // Apaga el LED
  }
}