# Gesture_Controlled_Trolley_System

This project is to design a trolley system which can be controlled just by using simple hand gestures. Our main motive behind this is to reduce the hard work of carrying heavy loads from one place to another. It can also be used by handicapped people who cannot do locomotive moments. In this way, they don’t need to move from their place, they can make their goods reach themselves just with basic hand gestures.

# Project Description

Basically, we are making “Gesture Controlled Trolley System” where the 	accelerometer detects our hand movement and wirelessly operate the Trolley using the 	RF433 module. The transmitter will be placed on our hand, through which the signal will be 	transmitted by the accelerometer depending on our hand movements. The receiver is 	placed on the Trolley that will receive this signal and hence make the trolley move according to our choice. In between, these values received by the accelerometer is 	encoded into transmitter and receiver compatible form which is hence decoded by the 	decoder to convert it back into a compatible form for the motor driver to drive the motor.

# Hardware Components :

1. Arduino Uno

2. Accelerometer  GY-61

3. RF 433 Module (Transmitter & Receiver)

4. HT12E and HT12D 

5. Motor driver L293DNE 

6. BO Motor - 2

7. Wheels - 2

8. Bread Board - 2 

9. Battery 9V & 12V

10. Voltage Regulator 7805

11. Resistors

12. LEDs

13. Connecting Wires

# Software Components : 

1- Setup() : initialises all the Input (x, y, z, Vcc, Gnd) and Output (Q1, Q2, Q3, Q4) pins.

2- Loop() : sending output as per the hand gesture via RF module to the trolley.

3- Stop() : stops the trolley as per the hand gesture position received by the RF module.

4- Forward() : moves the trolley forward as per the hand gesture position received by the RF module.

5- Backward() : moves the trolley backward as per the hand gesture position received by the RF module.

6- Right() : moves the trolley towards right as per the hand gesture position received by the RF module.

7- Left() : moves the trolley towards left as per the hand gesture position received by the RF module.


# Working

The Arduino board is connected to the laptop for power and serial output display. The accelerometer draws 5V power from the Arduino and sends its x, y and z values to it. This x, y and z values varies with the different gestures of hand. The Arduino software compares the received x, y and z values with the x, y and z values at stable position and accordingly decides whether it is forward, backward, right, left or stop position. According to the position decided by the software, different outputs are sent to the encoder via the 4 output pins Q1, Q2, Q3, Q4  that is, pin 10, 11, 12, 13 of Arduino. The outputs are sent to the encoder which encodes the received data by the Arduino to convert it into a compatible form for the RF433 Transmitter module. The RF433 transmitter module transmits the data wirelessly. The RF433 receiver module receives the transmitted data and sends it to the decoder which in turn decodes the data into a compatible form with the motor driver. The motor driver drives the 2 motors in the desired direction according the received values as per the hand gesture. Hence, this way, we can make a gesture controlled trolley system to ease the human labour.

# Algorithm:

1)	The Arduino board is connected to the laptop for power and serial output display.
2)	The accelerometer draws 5V power from the Arduino and sends its x, y and z values to it.
3)	This x, y and z values varies with the different gestures of hand.
4)	The Arduino software compares the received x, y and z values with the x, y and z values at stable position and accordingly decides whether it is forward, backward, right, left or stop position.
5)	According to the position decided by the software, different outputs are sent to the encoder via the 4 output pins Q1, Q2, Q3, Q4 that is, pin 10, 11, 12, 13 of Arduino.
6)	The outputs are sent to the encoder.
7)	The encoder encodes the received data by the Arduino to convert it into a compatible form for the RF433 transmitter module.
8)	The encoder then sends the data to the RF433 transmitter module.
9)	The RF433 transmitter module transmits the data wirelessly.
10)	The RF433 receiver module receives the transmitted data.
11)	The received data is sent to the decoder.
12)	The decoder decodes the data into a compatible form with the motor driver.
13)	The decoder then sends the data to the motor driver.
14)	The motor driver drives the 2 motors in the desired direction according the received values as per the hand gesture.

# Inference:

1)	By using the paired HT12E encoder and HT12D decoder we can easily transmit and receive 12 bits of parallel data serially. It simply converts 12 bit parallel data in to serial output which can be transmitted through a RF transmitter. These 12 bit parallel data is divided in to 8 address bits and 4 data bits. By using these address pins we can provide 8 bit security code for data transmission and multiple receivers may be addressed using the same transmitter.
2)	The transmitter draws no power when transmitting logic zero while fully suppressing the carrier frequency thus consume significantly low power in battery operation. When logic one is sent carrier is fully on to about 4.5mA with a 3volts power supply. The data is sent serially from the transmitter which is received by the tuned receiver. Transmitter and the receiver are duly interfaced to two microcontrollers for data transfer.
3)	L293D IC  is a typical Motor Driver IC which allows the DC motor to drive on any direction. This IC consists of  16-pins which are used to control a set of two DC motors instantaneously in any direction. It means, by using a L293D IC we can control two DC motors. As well, this IC can drive small and quiet big motors.

# Concepts Learned:

1)	We understood the working of GY-61 accelerometer that is how the movements are decided based on the values of x, y and z.
2)	We got to know the working of RF433 transmitter and receiver module.
3)	We understood the basic working of L293D motor, how the two motors rotate on receiving different values.

# Applications:

1- We can use it in flights for automatic catering for the passengers.

2- In shopping complex, customers won’t have to drag their trolley everywhere. They can control it using just their hand gestures.

3- During shopping, customers just need to select their goods on an electronic machine and then their goods can be delivered to them via these trolleys.

# Difficulties faced:

1)	On giving more 12V to other ICs along with motor driver burned all the other ICs.
2)	We couldn’t check the output with motors and LEDs at same time because LEDs also took a lot of power.
3)	The receiver was not receiving the values without proper antenna.
4)	The circuit took a lot of power, so we had to charge the 12V battery again and again.


