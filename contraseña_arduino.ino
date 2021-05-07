String datos;

String clave = "vivaperon";

char a;



void setup(){
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(10, OUTPUT);
  
}


void loop(){
  while(Serial.available()>0)
  {a=Serial.read();
  datos+=a;}
  
  if(!datos.equals(""))
  {if(datos.equals(clave))
  
  {
   Serial.println("La contraseña es correcta");
   digitalWrite(10,HIGH);
   digitalWrite(13,LOW);
  }
  else
  {
    Serial.println("La contrasenia es incorrecta");
    digitalWrite(10,LOW);
    digitalWrite(13,HIGH);
    
  }

     }

  datos="";
  delay(500);
  
}