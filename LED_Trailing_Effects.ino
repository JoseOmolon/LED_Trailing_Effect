int BASE = 2;
int NUM = 6;
void setup()
{
for (int i = BASE; i < BASE + NUM; i ++)
{
pinMode(i, OUTPUT); //set port ‘i’ as an output port
}
}
void loop()
{
for (int i = BASE; i < BASE + NUM; i ++)
{
digitalWrite(i, LOW);
delay(200);
}
for (int i = BASE; i < BASE + NUM; i ++)
{
digitalWrite(i, HIGH);
delay(200);
}
}