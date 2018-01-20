#define NTC0 -1  
#define NTC1 262  
#define NTC2 294  
#define NTC3 330  
#define NTC4 350  
#define NTC5 393  
#define NTC6 441  
#define NTC7 495  
  
#define NTCL1 131  
#define NTCL2 147  
#define NTCL3 165  
#define NTCL4 175  
#define NTCL5 196  
#define NTCL6 221  
#define NTCL7 248     
  
#define NTCH1 525  
#define NTCH2 589  
#define NTCH3 661  
#define NTCH4 700  
#define NTCH5 786  
#define NTCH6 882  
#define NTCH7 990  
//列出全部C调的频率  
#define WHOLE 1  
#define HALF 0.5  
#define QUARTER 0.25  
#define EIGHTH 0.25  
#define SIXTEENTH 0.625  
//列出所有节拍  
int tune[]=                 //根据简谱列出各频率  
{  
  NTC5,NTC5,NTC6,  
  NTCH1,NTC6,NTC5,NTC6,NTCH1,NTC6,NTC5,  
  NTC3,NTC3,NTC3,NTC5,  
  NTC6,NTC6,NTC5,NTCH3,NTCH3,NTCH2,NTCH1,  
  NTCH2,NTCH1,NTCH2,  
  NTCH3,NTCH3,NTCH2,NTCH3,NTCH2,NTCH1,NTCH2,NTCH1,NTC6,  
  
  NTCH2,NTCH2,NTCH2,NTCH1,NTC6,NTC5,  
  NTC6,NTC5,NTC5,NTCH1,NTC6,NTC5,NTC1,NTC3,  
  NTC2,NTC1,NTC2,  
  NTC3,NTC5,NTC5,NTC3,NTCH1,NTC7,  
  NTC6,NTC5,NTC6,NTCH1,NTCH2,NTCH3,  
  
  NTCH3,NTCH2,NTCH1,NTC5,NTCH1,NTCH2,NTCH3,  
  
  NTCH2,NTC0,NTCH3,NTCH2,  
  NTCH1,NTC0,NTCH2,NTCH1,NTC6,NTC0,  
  
  NTCH2,NTC6,NTCH1,NTCH1,NTCH1,NTC6,NTC5,NTC3,  
  NTC5,  
  NTC5,NTC6,NTCH1,NTC7,NTC6,  
  NTCH3,NTCH3,NTCH3,NTCH3,NTCH2,NTCH2,NTCH1,  
  NTC6,NTCH3,NTCH2,NTCH1,NTCH2,NTCH1,NTC6,  
  NTCH1,  
};  

int length;  
int tonepin=2;
int buttonPin_1=3;
int buttonPin_2=4;
int buttonPin_3=5;
int buttonPin_4=6;
int buttonPin_5=7;
int buttonPin_6=8;
int buttonPin_7=9;
int buttonPin_8=10;


int buttonState_1=0;
int buttonState_2=0;
int buttonState_3=0;
void setup()  
{  
  pinMode(tonepin,OUTPUT);  
  pinMode(buttonPin_1, INPUT);
  pinMode(buttonPin_2, INPUT);
  pinMode(buttonPin_3, INPUT);
  pinMode(buttonPin_4, INPUT);
  pinMode(buttonPin_5, INPUT);
  pinMode(buttonPin_6, INPUT);
  pinMode(buttonPin_7, INPUT);
  pinMode(buttonPin_8, INPUT);
}  
void loop()  
{  
  buttonState_1 = digitalRead(buttonPin_1);
  if (buttonState_1 == LOW) {
    tone(tonepin,NTC1);
  }
}  
