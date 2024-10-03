#ifndef LED_H
#define LED_H

#include <stdint.h>
#include <stdbool.h>

#define LED_STRIP_GPIO GPIO_NUM_18
#define LED_STRIP_LEN 440

void led_strip_init(void);
void led_strip_start(void);
void led_strip_stop(void);
void led_strip_stop_effect(void);
void led_strip_wave_effect(void);
void led_strip_stairs_effect(void);
void led_strip_toggle_wave_direction(void);
void led_strip_set_brightness(uint8_t brightness);
void led_strip_set_color(uint8_t r, uint8_t g, uint8_t b);
void led_strip_reset_to_rgb(void);
void led_strip_motion_effect_1(void);
void led_strip_motion_effect_2(void);
void led_strip_save_parameters(void);
void led_strip_load_parameters(void);
uint8_t led_strip_get_brightness(void);
void led_strip_get_color(uint8_t *r, uint8_t *g, uint8_t *b);
bool led_strip_get_custom_color_mode(void);
void led_strip_stairs_on(void);
void led_strip_stairs_off(void);
uint16_t led_strip_get_stairs_speed(void);
void led_strip_set_stairs_speed(uint16_t speed);
uint16_t led_strip_get_stairs_group_size(void);
void led_strip_set_stairs_group_size(uint16_t size);

#endif // LED_H
