
int led[8] = {2,3,4,5,6,7,8,9};
int i,j;
  
void setup() {                
  
  for(i=0;i<8;i++)
  pinMode(led[i], OUTPUT);     
}


void loop() {
  for(i=0,j=7;i<4;i++,j--)
  {
    digitalWrite(led[i], HIGH);
    digitalWrite(led[j], HIGH);
    delay(1000);
  }
   for(i=3,j=4;i>=0,j<=7;i--,j++)
  {
    digitalWrite(led[i], LOW);
    digitalWrite(led[j], LOW);
    delay(1000);
  }
  
  
  
}
