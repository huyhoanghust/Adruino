
#define SH_CP_Hang 13
#define DS_Hang 12

#define SH_CP_Cot 4
#define DS_Cot 3

#define ST_CP 11
byte row[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};

byte chuHex[][8] ={
{0xFF,0x03,0x01,0xED,0xED,0x01,0x03,0xFF},//A
};

void setup() {
  
  pinMode(SH_CP_Cot,OUTPUT);
  pinMode(SH_CP_Hang,OUTPUT);
  pinMode(DS_Cot,OUTPUT);
  pinMode(DS_Hang,OUTPUT);
  pinMode(ST_CP,OUTPUT);
  
}

void loop() {
  for(int i=0;i<8;i++)
  {
    digitalWrite(ST_CP,0);
    shiftOut(DS_Hang,SH_CP_Hang,MSBFIRST,row[i]);
    shiftOut(DS_Cot,SH_CP_Cot,MSBFIRST,chuHex[0][i]);
    digitalWrite(ST_CP,1);
  }
}
