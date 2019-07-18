
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_GAME 1
#define L_LOWER 4
#define L_RAISE 8
#define L_ADJUST 28
#define L_FN 32
#define L_ADJUST_TRI 14

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
    break;
  case L_GAME:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Game");
    break;
  case L_RAISE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
    break;
  case L_LOWER:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
    break;
  case L_ADJUST:
  case L_ADJUST_TRI:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
    break;
  case L_FN:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Fn");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
