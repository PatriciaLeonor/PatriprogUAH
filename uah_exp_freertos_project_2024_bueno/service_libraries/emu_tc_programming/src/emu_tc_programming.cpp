/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>


#define FT_UAH_EXP_SERV_129_0020
#define FT_SOLO_EPD_ICU_SERV_3_UPDATE_INTERVAL_TC_0010


//TODO



// envio de tc que pone la frecuencia de SID10 a 5, como se especifica en las diapos
#ifdef FT_SOLO_EPD_ICU_SERV_3_UPDATE_INTERVAL_TC_0010

#define FT_SOLO_EPD_ICU_SERV_3_0010_TIME_step0 (UNITIME_AFTER_POWER_ON + 10)


EmuGSS_TCProgram3_31 prog_FT_0010_step_0(FT_SOLO_EPD_ICU_SERV_3_0010_TIME_step0,
		"FT_SOLO_EPD_ICU_SERV_3_0050 step 0, Update SID 10 Rate to 5",10,5);




#endif


//tc  129,1 y 129,2 con las nuevas velocidades y constantes
#ifdef FT_UAH_EXP_SERV_129_0020


EmuGSS_TCProgram129_1 prog_FT_0020_step_0(UNITIME_AFTER_POWER_ON + 20,
		"FT_UAH_EXP_SERV_129_00XX step 0, Set Command Vx and Vy ", 0.5, 0.5);

EmuGSS_TCProgram129_2 prog_FT_0020_step_1(UNITIME_AFTER_POWER_ON + 30,
					"FT_UAH_EXP_SERV_129_00XX step 0, Set Kp"
					, 0.45, 0.45);

#endif
