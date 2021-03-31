#include "clarice.h"

void keyboard_pre_init_kb() {
    setPinOutput(B15);
    setPinOutput(B14);
    setPinOutput(B13);
    
    keyboard_pre_init_user();
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(B15, led_state.caps_lock);
        writePin(B14, led_state.num_lock);
        writePin(B13, led_state.scroll_lock);
    }
    return res;
}
