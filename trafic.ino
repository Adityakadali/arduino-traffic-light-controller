#define r 13
#define y 12
#define g 11
void setup() {
  
pinMode(r,OUTPUT);
pinMode(y,OUTPUT);
pinMode(g,OUTPUT);
}

void loop() {
 digitalWrite(g,HIGH);
 delay(9000);
 digitalWrite(y,HIGH);
 delay(1000);
 digitalWrite(g,LOW);
 digitalWrite(y,LOW);
 digitalWrite(r,HIGH);
 delay(4000);
 digitalWrite(y,HIGH);
 delay(1000);
 digitalWrite(r,LOW);
 digitalWrite(y,LOW);
 

}
