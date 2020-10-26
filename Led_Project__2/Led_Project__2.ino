int LED1 = 8;
int LED2 = 9;
int LED3 = 10;
int LED4 = 11;
int LED5 = 12;
int LED6 = 13;

int ButtonValue = 1;
int Button = 7;
int ButtonCount = 0;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
   pinMode(LED6, OUTPUT);
   pinMode(Button, INPUT);
}


void loop() {
  //Set the button value to the Button being Pressed
  ButtonValue = digitalRead(Button);

  //if the button is pressed Go to the next Pattern
    if (ButtonValue != 0){
      ButtonCount = ButtonCount + 1;
    }

    //how to cycle through the patterns
    if(ButtonCount == 0){
      Pattern1();
    }else if (ButtonCount == 1){
      Pattern2();
    }else if (ButtonCount == 2){
      Pattern3();
    }
}

void Pattern1(){
  //Turn on 6 Leds
  digitalWrite(LED1, HIGH);   delay(50);                
  digitalWrite(LED2, HIGH);   delay(50);                       
  digitalWrite(LED3, HIGH);    delay(50);                  
  digitalWrite(LED4, HIGH);   delay(50);                 
  digitalWrite(LED5, HIGH);    delay(50);                     
  digitalWrite(LED6, HIGH);   delay(50);
  
  //Turn of 6 Leds            
  digitalWrite(LED1, LOW);   delay(50);                 
  digitalWrite(LED2, LOW);    delay(50);                 
  digitalWrite(LED3, LOW);   delay(50);
  digitalWrite(LED4, LOW);    delay(50);                  
  digitalWrite(LED5, LOW);     delay(50);                 
  digitalWrite(LED6, LOW);     delay(50);
  
  //Turn on 6 Leds Reversed
  digitalWrite(LED6, HIGH);   delay(50);                  
  digitalWrite(LED5, HIGH);    delay(50);                        
  digitalWrite(LED4, HIGH);    delay(50);           
  digitalWrite(LED3, HIGH);   delay(50);                  
  digitalWrite(LED2, HIGH);    delay(50);                        
  digitalWrite(LED1, HIGH);    delay(50);
  
  //Turn of 6 Leds Reversed
  digitalWrite(LED6, LOW);    delay(50);                  
  digitalWrite(LED5, LOW);     delay(50);                  
  digitalWrite(LED4, LOW);     delay(50);  
  digitalWrite(LED3, LOW);    delay(50);                  
  digitalWrite(LED2, LOW);     delay(50);                  
  digitalWrite(LED1, LOW);     delay(50); 
}

void Pattern2(){
  digitalWrite(LED6, HIGH);   delay(50);
  digitalWrite(LED1, HIGH);   delay(50);
  digitalWrite(LED5, HIGH);   delay(50);
  digitalWrite(LED2, HIGH);   delay(50);
  digitalWrite(LED4, HIGH);   delay(50);
  digitalWrite(LED3, HIGH);   delay(50);

  digitalWrite(LED6, LOW);   delay(50);
  digitalWrite(LED1, LOW);   delay(50);
  digitalWrite(LED5, LOW);   delay(50);
  digitalWrite(LED2, LOW);   delay(50);
  digitalWrite(LED4, LOW);   delay(50);
  digitalWrite(LED3, LOW);   delay(50);
}

void Pattern3(){
  digitalWrite(LED6, HIGH);
  digitalWrite(LED5, HIGH);   
  delay(100);
  digitalWrite(LED6, LOW);
  digitalWrite(LED5, LOW);
  delay(100);

  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, HIGH);  
  delay(100);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, LOW);   
  delay(100);
  
  digitalWrite(LED4, HIGH);
  digitalWrite(LED3, HIGH);   
  delay(100);
  digitalWrite(LED4, LOW);
  digitalWrite(LED3, LOW);   
  delay(100);
}
