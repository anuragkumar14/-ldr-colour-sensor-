int redled=2;
int blueled=3;
int greenled=4;

int value=A0;
int red;
int blue;
int green;

int redvalue;
int greenvalue;
int bluevalue;

int redout=8;
int blueout=9;
int greenout=10;

void setup() {
  // put your setup code here, to run once:
pinMode(redled , OUTPUT);
pinMode(greenled , OUTPUT);
pinMode(blueled , OUTPUT);

pinMode(value , INPUT);

pinMode(redout , OUTPUT);
pinMode(greenout , OUTPUT);
pinMode(blueout , OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redled,HIGH);
delay(50);
red=analogRead(value);
delay(10);
Serial.print("REDA=");
Serial.println(red);
digitalWrite(redled,LOW);

digitalWrite(greenled,HIGH);
delay(50);
green=analogRead(value);
delay(10);
Serial.print("GREEN=");
Serial.println(green);
digitalWrite(greenled,LOW);

digitalWrite(blueled,HIGH);
delay(50);
blue=analogRead(value);
delay(10);
Serial.print("BLUE=");
Serial.println(blue);
digitalWrite(blueled,LOW);

if(red>green && red>blue)
{
  redvalue=HIGH;
}
else
{ 
  redvalue=LOW;
}
if(green>red && green>blue)
{
  greenvalue=HIGH;
}
else
{ 
  greenvalue=LOW;
}

if(blue>red && blue>green)
{
  bluevalue=HIGH;
}
else
{ 
  bluevalue=LOW;
}
digitalWrite(redout,redvalue);
digitalWrite(greenout,greenvalue);

digitalWrite( blueout,bluevalue);
}
