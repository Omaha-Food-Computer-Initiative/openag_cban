#include "cban_handler.h"

#include <openag_am2315.h>
Am2315 am2315_1("am2315_1"), am2315_2("am2315_2");



CbanHandler::CbanHandler() {
	_num_peripherals = 2;
	_peripheral_array = new Peripheral*[2];
	_peripheral_array[0] = &am2315_1;
	_peripheral_array[1] = &am2315_2;
}