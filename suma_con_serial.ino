
char calSignal;

int x;

int y;

long resultado;




void setup(){
  
Serial.begin(9600);
  
  Serial.println("introduce una suma en el monitor serie");
  
  Serial.println();
  
  
}




void loop(){
  
    while(Serial.available() > 0){
      x = Serial.parseInt();
      
       calSignal = Serial.read(); 
      
      y = Serial.parseInt();
      

      cuentas();
 
      
    Serial.print("el resultado de la suma es: "); 
      
    Serial.println(resultado);
      
    Serial.println();
      
      
  }
  
  
}




  void cuentas(){

  switch (calSignal){

    case '+' :
    resultado = x + y;
    break; 

    
  }
    
    
  }
