
This is just a dump of the code I used to test ESP8266 webserver performance while SPI communication is taking place using ESPAsyncWebserver.

* esp8266_main is the code and data for the ESP8266
* arduino_spi_test is the code for running on a 3.3v arduino as an SPI slave

You will need to install the ESP8266 addon for the Arduino IDE to upload the firmware. See [this guide](https://learn.sparkfun.com/tutorials/esp8266-thing-hookup-guide/installing-the-esp8266-arduino-addon).

To upload the html/css/javascript assets you will need to install the arduino-esp8266fs-plugin. Download the latest zip [from here](https://github.com/esp8266/arduino-esp8266fs-plugin/releases/tag/0.2.0) then extract and copy the `.jar` file into `<your_arduino_ide_dir>/tools/ESP8266FS/tool/`. Restart the Arduino IDE. The IDE will now have a new option `Tools -> ESP8266 Sketch Data Upload` which will generate a SPIFFS image from everything in the `data/` directory of the current project and upload it to the ESP8266.



