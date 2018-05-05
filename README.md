# Proximity Sensing Cap for the Visually Impaired
### 24th April 2018
## OVERVIEW
Good vision is a precious gift but unfortunately loss of vision is becoming common nowadays. Our aim is to build a fully functional prototype of a proximity sensing cap for the aid of visually impaired individuals for navigation and obstacle/surrounding detection. This cap is in it’s initial prototyping, we have used a development board with a microcontroller chip embedded on it to control all the sensors on the prototype. 
## MATERIALS USED
1.	Development Board with Microcontroller chip embedded on it - Arduino Uno
2.	Ultrasonic Sensors - “HC-SR04” x 3
3.	LRA Vibrators x 2
4.	Buzzer (for frontal navigation/detection) x 1
5.	9V Battery



## SPECIFICATIONS/WORKING
1.	The Design Philosophy is as follows :
    * 3 Ultrasonic Sensors placed on the front, right and left of the Cap
    * 2 LRA Vibrators placed on the right and left part of the cap to notify if there is any obstruction/approaching object from the above mentioned directions respectively.
    * The buzzer placed in the front notifies the user of any obstruction/approaching object and changes frequency and the sound based on the distance of the object from the individual.

2.	When any object/individual approaches the visually impaired individual from the front, at a safe distance of above 178 cm from the individual, the buzzer is silent.
3.	Once the threshold safe distance is reached, we get a continuous beep with delay of 100 Microseconds until the approaching entity is too close to the user (i.e. 100cm). Once this limit is reached, we notify the user with a constant beep sound that urges the user to change direction or move in a way that is away from the approaching target.
4.	But not only front, vibrators on the either side of the cap vibrate when the distance from the target approaching from left/right direction is less than 70cm.
5.	How does the Ultrasonic Sensor Work?
    * Well, when the sensor sends a Ultrasonic wave, it is said that the sensor has Triggered the signal.
    * When the sensor receives the signal after the wave collides with any object, this is called as Echo.
    * Arduino calculates the the duration, so the duration is the time taken for the wave getting triggered from the sensor and reaching the object + time taken for the wave to return back. So we calculate the distance as follows.

            + Distance = (time/2)*(Speed of Wave)
            + Distance = (duration/2)/29.1
            + Speed of Wave = 340 m/s

## SCHEMATICS
Sensor 1
* Trig Pin 1 - Digital Pin 2
* Echo Pin 1  - Digital Pin 3


Sensor 2
* Trig Pin 2 - Digital Pin 4
* Echo Pin 2  - Digital Pin 5


Sensor 3
* Trig Pin 3 - Digital Pin 6
* Echo Pin 3  - Digital Pin 7


Left Vibrator
* Vcc - Digital Pin 9
* GND  - Arduino GND


Right Vibrator
* Vcc - Digital Pin 10
* GND  - Arduino GND


Buzzer
* Vcc - Digital Pin 13
* GND  - Arduino GND

