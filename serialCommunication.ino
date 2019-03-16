int data;
void setup() { 
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(12, OUTPUT); //make the LED pin (13) as output
  //digitalWrite (LED_BUILTIN, LOW);
  
  Serial.println("Hi!, I am Arduino");
}
 
void loop() {
if (Serial.available()<0){
  return;
}
data = Serial.read();

if (data == '1')
digitalWrite (12, HIGH);

else if (data == '0')
digitalWrite (12, LOW);

}

 
