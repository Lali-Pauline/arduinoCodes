//variables
int pinSeven = 7;
int light = 125;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinSeven, OUTPUT);
 
  
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(pinSeven, light);

  
 
}
