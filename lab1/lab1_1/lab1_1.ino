
int flag = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13 , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // // put your main code here, to run repeatedly:
  if(Serial.available()){
    flag = Serial.read()-'0';
  }

  if(flag==1){
    digitalWrite(13 , HIGH);
  }
  else if(flag==0){
    digitalWrite(13 , LOW);
  }
}
