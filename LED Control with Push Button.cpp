// C++ code

int pushButton = 3;
int led = 13;


void setup()
{
  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  int buttonStatus;
  buttonStatus = digitalRead(pushButton);
  
  if( buttonStatus == 1 ){
    digitalWrite( led , HIGH);
    
  }else{ // buttonStatus == 0 
    digitalWrite( led , LOW);
  }
  
}
