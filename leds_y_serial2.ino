String orden;

char a;


void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop(){
  while(Serial.available()>0)
  {a=Serial.read();
  orden+=a;
}
  if (orden.equals("encender"))
   {digitalWrite(13, HIGH);
   }
  if (orden.equals("apagar"))
   {digitalWrite(13, LOW);
   }
  
  orden="";
}