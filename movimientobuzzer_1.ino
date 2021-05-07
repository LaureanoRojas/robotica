
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

  if(digitalRead(pir) == HIGH){
    digitalWrite(rojo, HIGH);
    digitalWrite(blanco, HIGH);
    digitalWrite(azul, HIGH);
    Serial.println("Movimiento captado");
    tone(4, 500);
    delay(2500);
    
    digitalWrite(rojo, LOW);
    digitalWrite(blanco, LOW);
    digitalWrite(azul, LOW);
    noTone(4);
    delay(2500);
    
    
    
  }
  
}