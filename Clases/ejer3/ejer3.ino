int led=8;
int potenciometro=A0;
int brillo;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*leemos el valor del potenciometro dividido entre 4 ya que
   * solo se pueden usar valores entr 0 y 254 y 1024/4=225
   * en analogWrite porque es de 8 bits
   */
  brillo=analogRead(potenciometro)7/4;
  analogWrite(led,brillo);
}
