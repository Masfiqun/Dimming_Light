int PWM1=3;
int PWM2=5;
int PWM3=6;
void setup() {

  pinMode(PWM1, OUTPUT);

  pinMode(PWM2, OUTPUT);

  pinMode(PWM3, OUTPUT);

}

void loop() {

// fade in from min to max in increments of 1 point:
for(int i=0; i<=255; i++){
  analogWrite(PWM1,i);
// delay(10);

  analogWrite(PWM2,i);
// delay(10);

  analogWrite(PWM3,i);
 delay(10);
}
delay(1000);

for(int i=255; i>=0; i--){
  analogWrite(PWM1,i);
// delay(10);

  analogWrite(PWM2,i);
// delay(10);

  analogWrite(PWM3,i);
delay(10);

}



}