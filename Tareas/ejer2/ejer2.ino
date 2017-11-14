int led1=8;
int pushButton1=2;
int led2=911;
int pushButton2=5; 
int pinzumbador = 13;    // pin del zumbador
int frecuencia = 220;
  
void setup() {
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
}

void loop() {
   if(digitalRead(pushButton1)==1){
    digitalWrite(led1,HIGH);
    delay(1000);
   }else{
    digitalWrite(led1,LOW);
    }

   if(digitalRead(pushButton2)==1){
    digitalWrite(led2,HIGH);
    delay(1000);
   }else{
    digitalWrite(led2,LOW);
    }

    if ((pushButton2)==1)&& (pushButton1)==1)){
      tone(pinzumbador,frecuencia);    // inicia el zumbido
      delay(2000);
    }else{                    
      noTone(pinzumbador);               // lo detiene a los dos segundos
      delay(1000);
    }
}
