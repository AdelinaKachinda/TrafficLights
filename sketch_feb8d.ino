// char* myString[] = {"adelina", "is", "chosen"};
int red = 1;
int yellow = 2;
int green = 3;
int Delay = 10000;


void setup() {
  // put your setup code here, to run once:
  // Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(Delay);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(Delay);
  digitalWrite(red, LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green, LOW);
  delay(Delay);


}
