int segundos=0;
int segun2=0;
int tiempo;

void setup(){
  Serial.begin(9600);
  segundos = millis();
}

void loop(){
  segun2 = millis();
  if(segun2>(segundos+1000)){
    segundos = millis();
    tiempo = segundos/1000;
    Serial.print("han pasado ");
    Serial.print(tiempo);
    Serial.print(" segundos"); }
}