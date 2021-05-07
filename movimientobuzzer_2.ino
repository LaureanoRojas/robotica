
char onOff;

int encendido = 1;



byte rojo = 13;

byte blanco = 12;

byte azul = 11;

byte pir = 2;




void setup(){  
  
  
  Serial.begin(9600);
  
  pinMode(4, OUTPUT);
  
  pinMode(rojo, OUTPUT);
  
  pinMode(blanco, OUTPUT);
  
  pinMode(azul, OUTPUT);
  
  pinMode(pir, INPUT);
  
  
}



void loop(){
  
  
  onOff=Serial.read();
  
  if(onOff=='A'){encendido = 0;Serial.println("apagado");}
  
  if(onOff=='P'){encendido = 1;Serial.println("prendido");}
  
  

  if(digitalRead(pir) == HIGH && encendido == 1){
    
    Serial.println("Movimiento captado");
    
    digitalWrite(rojo, HIGH);
    
    digitalWrite(blanco, HIGH);
    
    digitalWrite(azul, HIGH);
    
    tone(4, 500);
    
    delay(2500);
    
    
   
    digitalWrite(rojo, LOW);
    
    digitalWrite(blanco, LOW);
    
    digitalWrite(azul, LOW);
    
    noTone(4);
    
    delay(2500);
    
    
  }
  
  
  
}