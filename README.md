[BlinkM][1] Smart LED and Spark Core.
------------------------------------------------
----------
BlinkM Smart LED Library for Spark Core

###Wiring###
 1. BlinkM Vcc to 3.3V
 2. BlinkM GND to GND 
 3. BlinkM SCL to D1 (with pullup resistor)
 4. BlinkM SDA to D0 (with pullup resistor)

![Wiring][2] 

###Sample Application###
Sample application is simple one to display a color and to blink. The application defines two Spark function ***setcolor*** and ***setblinking*** to set the color and start/stop blink the LED.

###Web Page###
The Web Page displays a color picker to select color and a checkbox to strt/stop the blinking. [Sepctrum][3] is used for the Color Picker. Edit ***index.html*** and replace the tokens ***deviceid*** and ***access token*** with actual values.

![webpage][4]


  [1]: http://thingm.com/products/blinkm/
  [2]: https://raw.githubusercontent.com/krvarma/BlinkM_SparkCore/master/wiring.jpg
  [3]: http://bgrins.github.io/spectrum/
  [4]: https://raw.githubusercontent.com/krvarma/BlinkM_SparkCore/master/webpage.jpg