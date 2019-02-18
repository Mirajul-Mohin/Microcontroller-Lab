
int led[8] = {2,3,4,5,6,7,8,9};
int i;

void setup() {                
  
  for(i=0;i<8;i++)
  pinMode(led[i], OUTPUT);     
}


void loop() {
  for(i=0; i<8 ; i++)
  {
  digitalWrite(led[i], HIGH);   
  delay(1000); 
  digitalWrite(led[i], LOW);  
  }
  
}
