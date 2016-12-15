#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>
#include <util/delay.h>
#define POS_ADC0 ADC_CH_MUXPOS_PIN0_gc
#define POS_ADC1 ADC_CH_MUXPOS_PIN1_gc
#define POS_ADC2 ADC_CH_MUXPOS_PIN2_gc
#define POS_ADC3 ADC_CH_MUXPOS_PIN3_gc
#define POS_ADC4 ADC_CH_MUXPOS_PIN4_gc
#define POS_ADC5 ADC_CH_MUXPOS_PIN5_gc
#define POS_ADC6 ADC_CH_MUXPOS_PIN6_gc
#define POS_ADC7 ADC_CH_MUXPOS_PIN7_gc
#define POS_ADC8 ADC_CH_MUXPOS_PIN8_gc
#define POS_ADC9 ADC_CH_MUXPOS_PIN9_gc
#define POS_ADC10 ADC_CH_MUXPOS_PIN10_gc
#define POS_ADC11 ADC_CH_MUXPOS_PIN11_gc
#define POS_ADC12 ADC_CH_MUXPOS_PIN12_gc
#define POS_ADC13 ADC_CH_MUXPOS_PIN13_gc
#define POS_ADC14 ADC_CH_MUXPOS_PIN14_gc
#define POS_ADC15 ADC_CH_MUXPOS_PIN15_gc


#define NEG_ADC0 ADC_CH_MUXNEGL_PIN0_gc
#define NEG_ADC1 ADC_CH_MUXNEGL_PIN1_gc
#define NEG_ADC2 ADC_CH_MUXNEGL_PIN2_gc
#define NEG_ADC3 ADC_CH_MUXNEGL_PIN3_gc
#define NEG_ADC4 ADC_CH_MUXNEGH_PIN4_gc
#define NEG_ADC5 ADC_CH_MUXNEGH_PIN5_gc
#define NEG_ADC6 ADC_CH_MUXNEGH_PIN6_gc
#define NEG_ADC7 ADC_CH_MUXNEGH_PIN7_gc

#ifndef ADC_H
#define ADC_H

void adc_init(char pos, char neg);
void adc_pinSelect(char pos,char neg);
void adc_runContinuous();
void adc_singleSample();
void gainAdjust(int volt);
double adc_get();

#endif