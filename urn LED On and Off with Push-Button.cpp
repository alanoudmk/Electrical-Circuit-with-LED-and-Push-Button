// C++ code

int led = 12;
int button = 7;

void setup()
{
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  int buttonStatus = digitalRead( button );
  
  
  if( buttonStatus == HIGH ){
    digitalWrite( led , HIGH );
    
  }else{
    digitalWrite( led , LOW );
  }
}
