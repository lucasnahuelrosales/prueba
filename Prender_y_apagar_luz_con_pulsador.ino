int PULSADOR = 2;
int LED = 3;
int ESTADO = LOW;

void setup (){ 
  pinMode(PULSADOR, INPUT);              //Defino pulsador como entrada
  pinMode(LED, OUTPUT);                  //Defino LED como salida
}

void loop(){ 
  while(digitalRead(PULSADOR == LOW){   //Si el pulsador esta en baja no hacer nada
  }
  ESTADO = digitalRead(LED);            //leo el estado del LED
  digitalWrite(LED, !ESTADO);           //escribo el valor contrario
  while(digitalRead(PULSADOR) == HIGH){ //antirebote
    
  }
}
