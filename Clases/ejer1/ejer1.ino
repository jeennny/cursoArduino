int led=9;
int pushButton=7;  
void setup() {
  // put your setup code here, to run once:
  //recibe pin, y si es de entrada o salida
    pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* digitalWrite(led,HIGH);
   delay(1000);
   digitalWrite(led,LOW);
   delay(1000);*/

   if(digitalRead(pushButton)==1){
    digitalWrite(led,HIGH);
    delay(1000);
   }else{
    digitalWrite(led,LOW);
    }
}
