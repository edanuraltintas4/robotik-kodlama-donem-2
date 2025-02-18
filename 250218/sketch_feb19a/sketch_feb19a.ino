void setup() {
 Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(A0,INPUT);

}

void loop() {
  int LDR = analogRead(A0);
  Serial.println(LDR);
  if (LDR <50){
 digitalWrite(3,1); 
  }

  else if(LDR<90) {
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,0);
    }

    else if(LDR<162) {
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,1);
    }
}
