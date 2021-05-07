String saludo;

char a;



void setup(){
  Serial.begin(9600);
}

void loop(){
  while(Serial.available()>0)
  {a=Serial.read();
  saludo+=a;
  }
  if(saludo.equals("hola"))
  Serial.println("como estas bro?");
 
  
}