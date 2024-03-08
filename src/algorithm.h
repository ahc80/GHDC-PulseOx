#ifndef MAXIM_FUNCTIONS_H
#define MAXIM_FUNCTIONS_H

#include <cstdint>

// Function declaration
void maxim_heart_rate_and_oxygen_saturation(uint16_t *pun_ir_buffer, int32_t n_ir_buffer_length,
                                             uint16_t *pun_red_buffer, int32_t *pn_spo2, int8_t *pch_spo2_valid,
                                             int32_t *pn_heart_rate, int8_t *pch_hr_valid);

#endif