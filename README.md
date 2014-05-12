[BlinkM][1] Smart LED and Spark Core.
------------------------------------------------
----------
BlinkM Smart LED Library for Spark Core

###Wiring###
 1. TMP006 Vcc to 3.3V
 2. TMP006 GND to GND 
 3. TMP006 SCL to D1 (with pullup resistor)
 4. TMP006 SDA to D0 (with pullup resistor)
 
###Sample Application###
Sample application is simple one to display a color and to blink. The application defines two Spark function ***setcolor*** and ***setblinking*** to set the color and start/stop blink the LED.

###Web Page###
The Web Page displays a color picker to select color and a checkbox to strt/stop the blinking. [Sepctrum][2] is used for the Color Picker. Edit ***index.html*** and replace the tokens ***deviceid*** and ***access token*** with actual values.


  [1]: http://thingm.com/products/blinkm/
  [2]: http://bgrins.github.io/spectrum/