int rojo=12;
int verde=11;

int trigPin=7;
int echoPin=8;

float velocidad=0.0343;
long tiempo,manos;



void setup(){
  pinMode(rojo,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  digitalWrite (rojo,LOW);
  digitalWrite (verde,LOW);
}



void loop(){
  digitalWrite(trigPin,LOW);
  delay(500);
  digitalWrite(trigPin,HIGH);
  delay(500);
  digitalWrite(trigPin,LOW);
  tiempo=pulseIn(echoPin,HIGH);
  manos=velocidad*tiempo/2;
  
    if (manos>20){
      digitalWrite(rojo,LOW);
      digitalWrite(verde,HIGH);
      delay(20000);
      digitalWrite(rojo,LOW);
      digitalWrite(verde,LOW);
  }
   
    if(manos<20){
      digitalWrite(rojo,HIGH);
      digitalWrite(verde,LOW);
      delay(1000);
      digitalWrite(rojo,LOW);
      digitalWrite(verde,LOW);
      delay(1000);
      digitalWrite(rojo,HIGH);
      digitalWrite(verde,LOW);
      delay(1000);
      digitalWrite(rojo,LOW);
      digitalWrite(verde,LOW);
      delay(1000);
      digitalWrite(rojo,HIGH);
      digitalWrite(verde,LOW);
      delay(1000);
      digitalWrite(rojo,LOW);
      digitalWrite(verde,LOW);
      delay(1000);

  }

  
}