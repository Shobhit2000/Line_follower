int r1=3;
int r2=9;
int l1=10;
int l2=11;
int i1=5; 
int i2=6;
void setup() {
pinMode(r1,OUTPUT);
pinMode(l1,OUTPUT);
pinMode(r2,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(i2,INPUT);
pinMode(i2,INPUT);
}

void loop()
{
  if(!(digitalRead(i1)) and !(digitalRead(i2)))
  {
    forward();
  }
  if(!(digitalRead(i1)) and (digitalRead(i2)))
  {
    left();
  }
  if((digitalRead(i1)) and !(digitalRead(i2)))
  {
    right();
  }
  if((digitalRead(i1)) and (digitalRead(i2)))
  {
    wait();
  }
}
void forward();
{
  analogWrite(r1,150);
  analogWrite(r2,0);
  analogWrite(l1,150);
  analogWrite(l2,0);
}
void left();
{
  analogWrite(r1,0);
  analogWrite(r2,150);
  analogWrite(l1,150);
  analogWrite(l2,0);
}
void right();
{
  analogWrite(r1,150);
  analogWrite(r2,0);
  analogWrite(l1,0);
  analogWrite(l2,150);
}
void wait();
{
  analogWrite(r1,0);
  analogWrite(r2,0);
  analogWrite(l1,0);
  analogWrite(l2,0);
}
  
