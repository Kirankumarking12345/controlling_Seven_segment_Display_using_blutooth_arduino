int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int i;
void setup()
{
  for(i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop() 
{
  String cmd;
  while(Serial.available()>0)
  {
    delay(3);
    char c = Serial.read();
    cmd   +=c;
  }
  if(cmd.length()>0)
  {
    Serial.println(cmd);
    if(cmd=="0")
    {
      zero();
    }
    else if(cmd=="1")
    {
      one();
    } 
    else if(cmd=="2")
    {
      two();
    } 
    else if(cmd=="3")
    {
      three();
    } 
    else if(cmd=="4")
    {
      four();
    } 
    else if(cmd=="5")
    {
      five();
    } 
    else if(cmd=="6")
    {
      six();
    } 
    else if(cmd=="7")
    {
      seven();
    } 
    else if(cmd=="8")
    {
      eight();
    } 
    else if(cmd=="9")
    {
      nine();    
    } 
     else 
    {
      defaut();
    } 
    
}
  
   
   }
void zero()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  delay(1000);
}
void one()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  delay(1000);
}
void two()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
  delay(1000);
}
void three()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
  delay(1000);
}
void four()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void five()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void six()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void seven()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  delay(1000);
}
void eight()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void nine()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void defaut()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  delay(1000);
}
