unsigned int a=0b000000001;
void setup()
{
  DDRD = 0b11111111;
  DDRB = 0b00000011;
}
void loop()
{
  PORTD = a;
  if (a==0b10000000)
  {
  a=0b00000001;
    delay(500);
    PORTD = a;
  }
  delay(500);
  a=a<<1;
}
