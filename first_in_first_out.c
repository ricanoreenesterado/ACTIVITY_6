// Esterado, Rica Noreen
//BSCpE 4B
// C++ code for First In First Out


int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;



void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(10000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(10000); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  delay(8000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(8000); // Wait for 1000 millisecond(s)
  digitalWrite(5, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(2000); // Wait for 1000 millisecond(s)

}