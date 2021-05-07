
#define rojito1 2
#define amarillo1 3
#define verdecito1 4


#define rojito2 5
#define amarillo2 6
#define verdecito2 7



void setup()
{
 
  pinMode(rojito1, OUTPUT);
  
  pinMode(amarillo1, OUTPUT);
  
  pinMode(verdecito1, OUTPUT);
  
  pinMode(rojito2, OUTPUT);
  
  pinMode(amarillo2, OUTPUT);
  
  pinMode(verdecito2, OUTPUT);
  
  
  
  
}

void loop()
{
  
  digitalWrite(rojito1, HIGH);
  digitalWrite(verdecito2, HIGH);
  delay(10000);
  
  digitalWrite(verdecito2, LOW);
  digitalWrite(amarillo2, HIGH);
  delay(2000);
  
  digitalWrite(amarillo2, LOW);
  digitalWrite(rojito2, HIGH);
  digitalWrite(rojito1, LOW);
  digitalWrite(verdecito1, HIGH);
  delay(10000);
  
  digitalWrite(verdecito1, LOW);
  digitalWrite(amarillo1, HIGH);
  delay(2000);
  
  digitalWrite(amarillo1, LOW);
  digitalWrite(rojito2, LOW);
  
  
  
  
}