/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Documents and Settings/Administrador/Mis documentos/Arquitectura/Procesador/UC.vhd";
extern char *IEEE_P_3620187407;



static void work_a_2425904575_3212880686_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3096U);
    t3 = (t0 + 3160);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 1632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t7 = (t0 + 684U);
    t11 = *((char **)t7);
    t7 = (t0 + 3162);
    t13 = xsi_mem_cmp(t7, t11, 6U);
    if (t13 == 1)
        goto LAB6;

LAB17:    t14 = (t0 + 3168);
    t16 = xsi_mem_cmp(t14, t11, 6U);
    if (t16 == 1)
        goto LAB7;

LAB18:    t17 = (t0 + 3174);
    t19 = xsi_mem_cmp(t17, t11, 6U);
    if (t19 == 1)
        goto LAB8;

LAB19:    t20 = (t0 + 3180);
    t22 = xsi_mem_cmp(t20, t11, 6U);
    if (t22 == 1)
        goto LAB9;

LAB20:    t23 = (t0 + 3186);
    t25 = xsi_mem_cmp(t23, t11, 6U);
    if (t25 == 1)
        goto LAB10;

LAB21:    t26 = (t0 + 3192);
    t28 = xsi_mem_cmp(t26, t11, 6U);
    if (t28 == 1)
        goto LAB11;

LAB22:    t29 = (t0 + 3198);
    t31 = xsi_mem_cmp(t29, t11, 6U);
    if (t31 == 1)
        goto LAB12;

LAB23:    t32 = (t0 + 3204);
    t34 = xsi_mem_cmp(t32, t11, 6U);
    if (t34 == 1)
        goto LAB13;

LAB24:    t35 = (t0 + 3210);
    t37 = xsi_mem_cmp(t35, t11, 6U);
    if (t37 == 1)
        goto LAB14;

LAB25:    t38 = (t0 + 3216);
    t40 = xsi_mem_cmp(t38, t11, 6U);
    if (t40 == 1)
        goto LAB15;

LAB26:
LAB16:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3282);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(48, ng0);
    t41 = (t0 + 3222);
    t43 = (t0 + 1676);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    memcpy(t47, t41, 6U);
    xsi_driver_first_trans_fast_port(t43);
    goto LAB5;

LAB7:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3228);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB8:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3234);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB9:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 3240);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB10:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3246);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB11:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3252);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB12:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3258);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB13:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3264);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB14:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3270);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB15:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3276);
    t3 = (t0 + 1676);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB5;

LAB27:;
}


extern void work_a_2425904575_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2425904575_3212880686_p_0};
	xsi_register_didat("work_a_2425904575_3212880686", "isim/TB_uc_isim_beh.exe.sim/work/a_2425904575_3212880686.didat");
	xsi_register_executes(pe);
}
