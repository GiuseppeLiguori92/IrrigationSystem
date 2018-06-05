# IrrigationSystem [Arduino UNO]

With this project i am trying to build a full automatic irrigation system for a small field/indoor growing trying to reduce as much as possible the human work.
Technologies
I am going to use an Arduino UNO as unit control, a smartphone/website to check the status and Internet to store all data.

#### Arduino UNO
Based on my experience is a cheap, well developed and supported board.
Is possible to connect as much as you like electronic components as sensors and motors.
Objective of this component is through measurements got from sensors activate a pump that will start to irrigate the field. It will also have a monitor where it will be possible to read data and with a control panel configure it. 

#### Mobile phone/Website
iOS and Android are the most popular in the market and i am going to build a mobile application and a website to reach the board to read data and set parameters. 

#### Internet
There will be a connection between the board and the wi-fi router in order to exchange data and set parameters. All data will be store in an online database, in this case i will use Firebase. 

#### Components
Basic
Arduino UNO
Pump 
Relay
Display
Battery
Resistors, leds, wires etc..

#### Sensors
A sensor is an electronic component that measures a physical property.
The value obtained can be analog or digital and we can simplify the difference saying that the first is when we have a range of infinite values between for instance -100 and +100, the digital one is a value that is expressed in either 0 or 1 (On/Off).
Moisture
Temperature 
Light
Water level

###### Version 1.0
The board will turn on/off the pump with a simple switch, it will be visible the status of the pump through a led.

###### Version 2.0
Add moisture and water sensor.
Activate with fixed parameters in the code the right moisture level when activate the pump with water. 
Inform with a red blinking led (or maybe buzzer) that the tank needs to be refilled.
Show values on a computer with serial port. 

*if is a vertical growing system i would advise to add a fan

###### Version 3.0
LCD Monitor showing time, status ON/OFF, moisture humidity and water level.

###### Version 4.0
Add light sensor, i might want to irrigate only when is the sunset. 
Sunset is detect through this sensor and time.

###### Version 5.0
Add memory
Store data in a memory, detect measurements each hour and store them on a file on an sd card.

###### Version 6.0
Add wifi module and website.
Through internet connection send data got from the sd card to a website and store it on database.
This data will be showed on a sample table on a web page.

###### Version 7.0
Inform user that water tank is empty!
When water sensor detect a predefined value of water percentage send immediately through the wifi module to the website an alert. This will redirect the info to the user with an email. 
At the same time a buzzer will start to buzz for N second every N minutes.
