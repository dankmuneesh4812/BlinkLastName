void setup() 
{
// The following programme code is to blink an in-built LED in Morse Code in 'KHURANA'.
pinMode(LED_BUILTIN, OUTPUT);
}

void dot()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1200);                       // LED will glow for 1.2 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW 
}
 void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3600);                       // LED will glow for 3.6 seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW 
}
void loop()
{
/*
As per morse code convention , the space between parts of same letter is one unit while the space between 
letters is three unit so the ratio is taken as 1:3.
*/
int intraTime = 600; //time duration between dot and dashes of same letter is 0.6sec
int spaceTime = 1800; //time duration between two letters is 1.8sec

//For K Letter - dash dot dash
dash();
delay(intraTime);
dot();
delay(intraTime);
dash();
delay(spaceTime);

//For H Letter - dot dot dot dot
for(int i = 0; i < 3; i++)
{
dot();
delay(intraTime); 
}
dot();
delay(spaceTime);

//For U Letter - dot dot dash
dot();
delay(intraTime);
dot();
delay(intraTime);
dash();
delay(spaceTime);

//For R Letter - dot dash dot
dot();
delay(intraTime);
dash();
delay(intraTime);
dot();
delay(spaceTime);

//For A Letter - dot dash
dot();
delay(intraTime);
dash();
delay(spaceTime);

// For N Letter - dash dot 
dash();
delay(intraTime);
dot();
delay(spaceTime);

//For A Letter - dot dash
dot();
delay(intraTime);
dash();
delay(spaceTime);
}
