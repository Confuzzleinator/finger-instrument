#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();

// First thing that runs
void setup() {
  MIDI.begin(); // Get MIDI output ready
  Serial.begin(115200); // Open the USB connection to the computer

  MIDI.sendNoteOn(42, 100, 1); // Send test note
}

void loop() {
  
}
