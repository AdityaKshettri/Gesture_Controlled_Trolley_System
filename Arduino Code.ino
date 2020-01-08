int GNDPin=A4; //Set Analog pin 4 as GND
int VccPin=A5; //Set Analog pin 5 as VCC
int xPin=A3; //X axis input
int yPin=A2; //Y axis input
int zPin=A1; //Z axis input(not used)
int Q1=10; //Output pin connected to 10 Encoder IC
int Q2=11; //Output pin connected to 11 Encoder IC
int Q3=12; //Output pin connected to 12 Encoder IC
int Q4=13; //Output pin connected to 13 Encoder IC

void setup()
{
    Serial.begin(9600); //setting the baud rate
    pinMode(xPin,INPUT);
    pinMode(yPin,INPUT);
    pinMode(zPin,INPUT);
    pinMode(Q1,OUTPUT);
    pinMode(Q2,OUTPUT);
    pinMode(Q3,OUTPUT);
    pinMode(Q4,OUTPUT);
    pinMode(GNDPin, OUTPUT);
    pinMode(VccPin, OUTPUT);
    digitalWrite(GNDPin, LOW); //Set A4 pin LOW
    digitalWrite(VccPin, HIGH); //Set A5 pin HIGH
}

void loop() 
{
    int x=analogRead(xPin);//Variabe for storing X coordinates
    int y=analogRead(yPin);//Variabe for storing Y coordinates
    int z=analogRead(zPin);//Variabe for storing Z coordinates

    if ((x>340 && x<400) && (y>340 && y<400)) //stop
    {
        Serial.println("");
        Serial.println("STOP");
        digitalWrite(Q1,HIGH);  
        digitalWrite(Q2,HIGH);   
        digitalWrite(Q3,HIGH);   
        digitalWrite(Q4,HIGH);
    } 
  
    else 
    { 
        if ((x<340) && (y>340 && y<400)) //forward
        {
           Serial.println("");
           Serial.println("Forward");
           digitalWrite(Q1,HIGH);  
           digitalWrite(Q2,LOW);   
           digitalWrite(Q3,HIGH);  
           digitalWrite(Q4,LOW);   
        }
        if ((x>400) && (y>340 && y<400)) //backward
        {
           Serial.println("");
           Serial.println("Backward");
           digitalWrite(Q1,LOW);   
           digitalWrite(Q2,HIGH);  
           digitalWrite(Q3,LOW);   
           digitalWrite(Q4,HIGH);
        }   
        if ((x>340 && x>400) && (y<340)) //right
        {
            Serial.println("");
            Serial.println("Right");
            digitalWrite(Q1,HIGH);  
            digitalWrite(Q2,LOW);   
            digitalWrite(Q3,LOW);   
            digitalWrite(Q4,HIGH);
        }
        if ((x>340 && x<400) && (y>400))//left
        {
            Serial.println("");
            Serial.println("Left");
            digitalWrite(Q1,LOW);  
            digitalWrite(Q2,LOW);   
            digitalWrite(Q3,LOW);   
            digitalWrite(Q4,LOW);
        }
    }
}
