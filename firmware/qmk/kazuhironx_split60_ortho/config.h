#pragma once

// Draft pinout. Confirm against the KiCad schematic before building.
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }

#define DIODE_DIRECTION COL2ROW
#define SOFT_SERIAL_PIN D2

#define SPLIT_USB_DETECT
