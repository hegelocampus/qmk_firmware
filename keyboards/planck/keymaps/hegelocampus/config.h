#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#define DISABLE_SPACE_CADET_ROLLOVER

// Sound stuff
#define AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_MAX = 1000.0f
#ifdef AUDIO_ENABLE
    //#define STARTUP_SONG SONG(PLANCK_SOUND)
    #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND),   \
                                  SONG(ZELDA_TREASURE), \
                                  SONG(OVERWATCH_THEME) \
                                }
#endif


/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#endif
