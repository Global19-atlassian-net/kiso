/********************************************************************************
* Copyright (c) 2010-2019 Robert Bosch GmbH
*
* This program and the accompanying materials are made available under the
* terms of the Eclipse Public License 2.0 which is available at
* http://www.eclipse.org/legal/epl-2.0.
*
* SPDX-License-Identifier: EPL-2.0
*
* Contributors:
*    Robert Bosch GmbH - initial contribution
*
********************************************************************************/

/* header definition ******************************************************** */
#ifndef KISO_BMG160_TH_HH_
#define KISO_BMG160_TH_HH_

#include "bmg160.h"

/* mock-ups for the provided interfaces */
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_init, struct bmg160_t *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_intr_output_type, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_intr_level, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_data_X, s16 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_data_Y, s16 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_data_Z, s16 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_data_XYZ, struct bmg160_data_t *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_data_XYZI, struct bmg160_data_t *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_temp, s8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_FIFO_data_reg, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_read_register, u8, u8 *, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_burst_read, u8, u8 *, u32)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_write_register, u8, u8 *, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_intr_stat_reg_zero, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_intr_stat_reg_one, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_intr_stat_reg_two, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_intr_stat_reg_three, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifostatus_reg, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_range_reg, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_range_reg, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_high_res, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_high_res, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_bw, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_bw, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_pmu_ext_tri_select, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_pmu_ext_tri_select, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_high_bw, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_high_bw, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_shadow_dis, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_shadow_dis, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_soft_rst)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_data_enable, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_data_enable, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifo_enable, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_fifo_enable, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_offset_enable, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_offset_enable, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int_od, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int_od, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int_lvl, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int_lvl, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int1_high, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int1_high, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int1_any, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int1_any, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int_data, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int_data, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int2_offset, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int2_offset, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int1_offset, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int1_offset, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int_fifo, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int_fifo, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int2_high, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int2_high, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int2_any, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int2_any, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_offset_unfilt, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_offset_unfilt, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_unfilt_data, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_unfilt_data, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_any_th, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_any_th, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_awake_dur, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_awake_dur, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_any_dursample, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_any_dursample, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_any_en_ch, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_any_en_ch, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifo_watermark_enable, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_fifo_watermark_enable, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_reset_int, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_latch_status, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_latch_status, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_latch_int, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_latch_int, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_high_hy, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_high_hy, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_high_th, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_high_th, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_high_en_ch, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_high_en_ch, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_high_dur_ch, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_high_dur_ch, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_slow_offset_th, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_slow_offset_th, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_slow_offset_dur, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_slow_offset_dur, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_slow_offset_en_ch, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_slow_offset_en_ch, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_offset_wl, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_offset_wl, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_fast_offset_en, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fast_offset_en_ch, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_fast_offset_en_ch, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_enable_fast_offset)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_nvm_remain, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_nvm_load, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_nvm_rdy, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_nvm_prog_trig, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_nvm_prog_mode, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_nvm_prog_mode, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_i2c_wdt, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_i2c_wdt, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_spi3, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_spi3, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifo_tag, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_fifo_tag, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifo_watermarklevel, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_fifo_watermarklevel, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifo_mode, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_fifo_mode, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifo_data_sel, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_fifo_data_sel, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_offset_reset, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_gp, u8, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_gp, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifo_framecount, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_fifo_overrun, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int2_fifo, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_int1_fifo, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int2_fifo, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_int1_fifo, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_mode, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_mode, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_power_mode, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_power_mode, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_sleep_durn, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_sleep_durn, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_selftest, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_auto_sleep_durn, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_auto_sleep_durn, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_autosleepdur, u8, u8)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_get_auto_offset_enable, u8 *)
FAKE_VALUE_FUNC(BMG160_RETURN_FUNCTION_TYPE, bmg160_set_auto_offset_enable, u8)

#endif /* KISO_BMG160_TH_HH_ */

/*************************************************************************** */
