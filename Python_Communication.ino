int data;
int A[5] = {3,5,7,9,11};
int i;
void setup() { 
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11,OUTPUT);
  Serial.println("Hi!, I am Arduino");
}
 
void loop() 
{
if (Serial.available()<0)
{return;
}

data = Serial.read();

for(i=0;i<5;i++)
{
 digitalWrite(A[i],data&1);
 data = data>>1;
 delay(1000);
}
 
}
