# xiao-esp32s3-I2C-bus-scan
This program is an I2C bus scanner for the ESP32-S3. It searches the I2C communication bus for connected devices and reports their addresses through the Serial Monitor. The code initializes serial communication at 115200 baud and starts the I2C bus using the board’s SDA and SCL pins. Every three seconds, the program scans all valid I2C addresses from 0x01 to 0x7E by attempting a transmission to each address using the Wire library.

If a device responds successfully, the program prints the detected hexadecimal address to the Serial Monitor in the format Found: 0xXX. A counter keeps track of how many devices are detected during the scan. If no devices respond, the program prints No I2C devices found.
