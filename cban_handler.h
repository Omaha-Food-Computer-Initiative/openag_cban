#ifndef CBAN_HANDLER
#define CBAN_HANDLER

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <openag_peripheral.h>

class CbanHandler {
  public:
    // Public methods
    CbanHandler();
	void begin(void);
	String get(String id, String key);
	String set(String id, String key, String value);

  private:
  	// Private variables
  	int _num_peripherals;
  	Peripheral** _peripheral_array;


};

#endif 