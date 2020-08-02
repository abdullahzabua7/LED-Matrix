#define ROW_1   5
#define ROW_2     8
#define ROW_3     3  
#define ROW_4     9
#define ROW_5     13
#define ROW_6     2
#define ROW_7     A1
#define ROW_8     10

#define COL_1    A0
#define COL_2    7
#define COL_3    6
#define COL_4    11
#define COL_5     4 
#define COL_6    12
#define COL_7    A2
#define COL_8    A3

byte smile[]={B00111100,B01000010,B10100101,B10000001,B10100101,B10011001,B01000010,B00111100};
byte heart[] = {B01100110,B11111111,B11111111,B11111111,B11111111,B01111110,B00111100,B00011000};
byte A[] = {B00011000,B00111100,B01100110,B01100110,B01111110,B01111110,B01100110,B01100110};
byte B[] = {B01111100,B01100110,B01100110,B01111100,B01111110,B01100110,B01100110,B01111100};
byte C[] = {B00111110,B01111110,B01100000,B01100000,B01100000,B01100000,B01111110,B00111110};
byte D[] = {B01111000,B01111100,B01100110,B01100110,B01100110,B01100110,B01111100,B01111000};
byte E[] = {B01111110,B01111110,B01100000,B01111110,B01111110,B01100000,B01111110,B01111110};
byte F[] = {B01111110,B01111110,B00000110,B01111110,B01111110,B00000110,B00000110,B00000110};
byte G[] = {B00111000,B01111100,B01100100,B01100000,B01101110,B01100100,B01111100,B00111000};
byte H[] = {B01100110,B01100110,B01100110,B01111110,B01111110,B01100110,B01100110,B01100110};
byte I[] = {B01111110,B01111110,B00011000,B00011000,B00011000,B00011000,B01111110,B01111110};
byte J[] = {B01111110,B01111110,B00011000,B00011000,B00011000,B00011000,B01111000,B01110000};
byte K[] = {B01100110,B01101100,B01111000,B01110000,B01110000,B01111000,B01101100,B01100110};
byte L[] = {B01100000,B01100000,B01100000,B01100000,B01100000,B01100000,B01111110,B01111110};
byte M[] = {B01000010,B01100110,B01111110,B01111110,B01100110,B01100110,B01100110,B01100110};
byte N[] = {B01000110,B01100110,B01100110,B01110110,B01111110,B01101110,B01100110,B01100110};
byte O[] = {B00111100,B01111110,B01100110,B01100110,B01100110,B01100110,B01111110,B00111100};
byte P[] = {B01111000,B01111100,B01100110,B01100110,B01111100,B01111000,B01100000,B01100000};
byte Q[] = {B00111100,B01000010,B01000010,B01000010,B01000010,B01001010,B00111100,B00000010};
byte R[] = {B01111100,B01100110,B01100110,B01101100,B01111000,B01111000,B01101100,B01100110};
byte S[] = {B00111000,B01111100,B01100000,B00110000,B00011000,B00001100,B00111100,B01111000};//{B00111000,B01111100,B01100000,B00110000,B00011000,B00001100,B00111100,B01111000};
byte T[] = {B01111110,B01111110,B00011000,B00011000,B00011000,B00011000,B00011000,B00011000};
byte U[] = {B01100110,B01100110,B01100110,B01100110,B01100110,B01100110,B01111110,B00111100};
byte V[] = {B01100110,B01100110,B01100110,B01100110,B01100110,B01100110,B00111100,B00011000};
byte W[] = {B01000010,B01000010,B01000010,B01000010,B01000010,B01011010,B01011010,B00100100};
byte X[] = {B01100110,B01100110,B01100110,B00111100,B00011000,B00111100,B01100110,B01100110};
byte Y[] = {B01100110,B01100110,B01100110,B01111110,B00111100,B00011000,B00011000,B00011000};
byte Z[] = {B01111110,B01111110,B00000110,B00001100,B00011000,B00110000,B01111110,B01111110};


byte Zero[]   = {B00111100,B01111110,B01100110,B01100110,B01100110,B01100110,B01111110,B00111100}; 
byte One[]    = {B00011000,B00111000,B01111000,B00011000,B00011000,B00011000,B01111110,B01111110}; 
byte Two[]    = {B00111100,B01111110,B01000110,B00001100,B00011000,B00110000,B01111110,B01111110};
byte Three[]  = {B01111100,B01111110,B00000110,B00111110,B00111110,B00000110,B01111110,B01111100};
byte Four[]   = {B00001100,B00011100,B00111100,B01101100,B01111110,B01111110,B00001100,B00001100};
byte Five[]   = {B01111110,B01111110,B01100000,B01111100,B00111110,B00000110,B01111110,B01111100};
byte Six[]    = {B00001100,B00011000,B00110000,B01111100,B01111110,B01100110,B01100110,B00111100};
byte Seven[]  = {B01111110,B01111110,B00000110,B00000110,B00001100,B00011000,B00110000,B01100000}; 
byte Eight[]  = {B00111100,B01100110,B01100110,B00111100,B01111110,B01100110,B01100110,B00111100}; 
byte Nine[]   = {B00111100,B01100110,B01100110,B01111110,B00111110,B00001100,B00011000,B00110000}; 

  
  
  void setup() {
    //Serial.begin(9600);
    for (byte i = 2; i <= 13; i++)
    pinMode(i, OUTPUT);
   
    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);
   
  }

  

const byte rows[] = {
    ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8
};


void  drawScreen(byte buffer2[]){
    for (byte i = 0; i < 8; i++) {
    setColumns(buffer2[i]); // Set columns for this specific row
          
    digitalWrite(rows[i], HIGH);
    delay(2); // Set this to 50 or 100 if you want to see the multiplexing effect!
    digitalWrite(rows[i], LOW);
    
        
    }
}


void setColumns(byte b) {
    digitalWrite(COL_1, (~b >> 0) & 0x01); // Get the 1st bit: 10000000
    digitalWrite(COL_2, (~b >> 1) & 0x01); // Get the 2nd bit: 01000000
    digitalWrite(COL_3, (~b >> 2) & 0x01); // Get the 3rd bit: 00100000
    digitalWrite(COL_4, (~b >> 3) & 0x01); // Get the 4th bit: 00010000
    digitalWrite(COL_5, (~b >> 4) & 0x01); // Get the 5th bit: 00001000
    digitalWrite(COL_6, (~b >> 5) & 0x01); // Get the 6th bit: 00000100
    digitalWrite(COL_7, (~b >> 6) & 0x01); // Get the 7th bit: 00000010
    digitalWrite(COL_8, (~b >> 7) & 0x01); // Get the 8th bit: 00000001
}


void loop(){
 
  // 
  
for (int i =0 ; i<100;i++){
 
  drawScreen(A);
}
for (int i =0 ; i<100;i++){
 
  drawScreen(Z);
}
for (int i=0;i<100;i++){
  drawScreen(smile); 
}
}
