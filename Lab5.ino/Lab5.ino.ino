const int green=11;

const int yellow=12;

const int red=13;

const int green1=3;

const int yellow1=5;

const int red1=7;


void setup() {

  pinMode(red,OUTPUT);

  pinMode(green,OUTPUT);

  pinMode(yellow,OUTPUT);

  pinMode(red1,OUTPUT);

  pinMode(green1,OUTPUT);

  pinMode(yellow1,OUTPUT);
}

void loop() {

  digitalWrite(red,HIGH);
  digitalWrite(green1,HIGH);

  delay(5000);

  digitalWrite(yellow,HIGH);
  digitalWrite(yellow1,HIGH);
  
  digitalWrite(green1,LOW);

  delay(3000);

  digitalWrite(green,HIGH);
  digitalWrite(red1,HIGH);
  
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(yellow1,LOW);

  delay(5000);

  digitalWrite(yellow,HIGH);
  digitalWrite(yellow1,HIGH);  

  digitalWrite(green,LOW);

  delay(3000);     

  digitalWrite(red1,LOW);  
  digitalWrite(yellow,LOW);
  digitalWrite(yellow1,LOW);

}
