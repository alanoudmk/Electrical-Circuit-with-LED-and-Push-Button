// C++ code


int Led_Pin = 4;			// Pin number for LED
int pushbutton_Pin = 2;		// Pin number for pushbutton
int Led_State = LOW;		// Initial state of the LED

int debounce_delay = 50;  	// Debounce delay of 50 milliseconds

int last_button_state = LOW;	 // Previous state of the button
int button_state = LOW;			 // Current state of the button
  
unsigned long last_debounce_time =0;  // Time of the last button state change


void setup()
{
  pinMode(Led_Pin, OUTPUT); 
  pinMode(pushbutton_Pin, INPUT); 
}


void loop()
{
   int read_button = digitalRead(  pushbutton_Pin );	// Read the current state of the pushbutton
    
   // Call the function to handle button debouncing
  ButtonDebounce()
}




//
void ButtonDebounce(){
  
  int read_button = digitalRead(  pushbutton_Pin );	// Read the current state of the pushbutton	
  
  if( read_button != last_button_state ){	        // If the button state has changed, update the last debounce time
    last_debounce_time = millis();
  }
  
  if( millis() - last_debounce_time > debounce_delay ){	 // Check if the debounce delay has elapsed
    
    if( button_state != read_button }{	 				 // If the button state has changed, update the button_state variable
      button_state = read_button ;
      
      if( button_state == HIGH ){				     	 // If the button is now in the HIGH state (pressed)
        Led_State != Led_State;
      }
    }
  }
  digitalWrite(Led_Pin, Led_State );
  last_button_state = read_button;
}


//
void ButtonWithoutDebounce(){
  
  if( read_button == HIGH ){
    Led_State = !Led_State;
  }
  
  digitalWrite(Led_Pin, Led_State );
}
