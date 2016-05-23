#include "cban_handler.h"

#include <openag_am2315.h>
String am2315_1_parameters[] = {};
Am2315 am2315_1("am2315_1", am2315_1_parameters);

#include <openag_ds18b20.h>
String ds18b20_1_parameters[] = {"22"};
Ds18b20 ds18b20_1("ds18b20_1", ds18b20_1_parameters);

CbanHandler::CbanHandler() {
	_num_peripherals = 2;
	_peripheral_array = new Peripheral*[2];
	_peripheral_array[0] = &am2315_1;
	_peripheral_array[1] = &ds18b20_1;
}
