// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// -------------------------------------------------- //

#pragma once

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

// -------- //
// w1_reset //
// -------- //

#define w1_reset_wrap_target 4
#define w1_reset_wrap 4

#define w1_reset_cycle 350
#define w1_reset_od_cycle 40

static const uint16_t w1_reset_program_instructions[] = {
    0xed81, //  0: set    pindirs, 1      side 0 [13]
    0xf180, //  1: set    pindirs, 0      side 1 [1] 
    0x5001, //  2: in     pins, 1         side 1     
    0xb942, //  3: nop                    side 1 [9] 
            //     .wrap_target
    0x9020, //  4: push   block           side 1     
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program w1_reset_program = {
    .instructions = w1_reset_program_instructions,
    .length = 5,
    .origin = -1,
};

static inline pio_sm_config w1_reset_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + w1_reset_wrap_target, offset + w1_reset_wrap);
    sm_config_set_sideset(&c, 1, false, false);
    return c;
}
#endif

// --------- //
// w1_touch0 //
// --------- //

#define w1_touch0_wrap_target 4
#define w1_touch0_wrap 4

#define w1_touch0_cycle 30
#define w1_touch0_od_cycle 4
#define w1_touch0_strong 61441
#define w1_touch0_weak 61568

static const uint16_t w1_touch0_program_instructions[] = {
    0xef81, //  0: set    pindirs, 1      side 0 [15]
    0x83a0, //  1: pull   block           side 0 [3] 
    0x70f0, //  2: out    exec, 16        side 1     
    0x5061, //  3: in     null, 1         side 1     
            //     .wrap_target
    0x9020, //  4: push   block           side 1     
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program w1_touch0_program = {
    .instructions = w1_touch0_program_instructions,
    .length = 5,
    .origin = -1,
};

static inline pio_sm_config w1_touch0_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + w1_touch0_wrap_target, offset + w1_touch0_wrap);
    sm_config_set_sideset(&c, 1, false, false);
    return c;
}
#endif

// --------- //
// w1_touch1 //
// --------- //

#define w1_touch1_wrap_target 5
#define w1_touch1_wrap 5

#define w1_touch1_cycle 20
#define w1_touch1_od_cycle 2
#define w1_touch1_strong 65409
#define w1_touch1_weak 48962

static const uint16_t w1_touch1_program_instructions[] = {
    0xe081, //  0: set    pindirs, 1      side 0     
    0x80a0, //  1: pull   block           side 0     
    0xf380, //  2: set    pindirs, 0      side 1 [3] 
    0x5901, //  3: in     pins, 1         side 1 [9] 
    0x70f0, //  4: out    exec, 16        side 1     
            //     .wrap_target
    0x9020, //  5: push   block           side 1     
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program w1_touch1_program = {
    .instructions = w1_touch1_program_instructions,
    .length = 6,
    .origin = -1,
};

static inline pio_sm_config w1_touch1_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + w1_touch1_wrap_target, offset + w1_touch1_wrap);
    sm_config_set_sideset(&c, 1, false, false);
    return c;
}
#endif

