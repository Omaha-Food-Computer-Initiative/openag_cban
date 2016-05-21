#include "cban_handler.h"

void CbanHandler::begin(void) {
  for (int i=0; i<_num_peripherals; i++) {
  	_peripheral_array[i]->begin();
  }
}

String CbanHandler::get(String id, String key) {
  for (int i=0; i<_num_peripherals; i++) { // find
		if (id == _peripheral_array[i]->id) {
			return _peripheral_array[i]->get(key);
		}
	}
  return String(id + ":" + key + ":error");
}

String CbanHandler::set(String id, String key, String value) {
  for (int i=0; i<_num_peripherals; i++) { // find
		if (id == _peripheral_array[i]->id) {
			return _peripheral_array[i]->set(key, value);
		}
	}
  return String(id + ":" + key + ":error");
}