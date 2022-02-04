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
static const char *ng0 = "C:/Documents and Settings/Administrador/Mis documentos/Arquitectura/procesador4/Procesador4/UC.vhd";



static void work_a_2425904575_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    int t38;
    char *t39;
    int t41;
    char *t42;
    int t44;
    char *t45;
    int t47;
    char *t48;
    int t50;
    char *t51;
    int t53;
    char *t54;
    int t56;
    char *t57;
    int t59;
    char *t60;
    int t62;
    char *t63;
    int t65;
    char *t66;
    int t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3228);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(89, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)3, 6U);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);

LAB3:    t1 = (t0 + 1632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t8 = (t0 + 684U);
    t9 = *((char **)t8);
    t8 = (t0 + 3230);
    t11 = xsi_mem_cmp(t8, t9, 6U);
    if (t11 == 1)
        goto LAB12;

LAB33:    t12 = (t0 + 3236);
    t14 = xsi_mem_cmp(t12, t9, 6U);
    if (t14 == 1)
        goto LAB13;

LAB34:    t15 = (t0 + 3242);
    t17 = xsi_mem_cmp(t15, t9, 6U);
    if (t17 == 1)
        goto LAB14;

LAB35:    t18 = (t0 + 3248);
    t20 = xsi_mem_cmp(t18, t9, 6U);
    if (t20 == 1)
        goto LAB15;

LAB36:    t21 = (t0 + 3254);
    t23 = xsi_mem_cmp(t21, t9, 6U);
    if (t23 == 1)
        goto LAB16;

LAB37:    t24 = (t0 + 3260);
    t26 = xsi_mem_cmp(t24, t9, 6U);
    if (t26 == 1)
        goto LAB17;

LAB38:    t27 = (t0 + 3266);
    t29 = xsi_mem_cmp(t27, t9, 6U);
    if (t29 == 1)
        goto LAB18;

LAB39:    t30 = (t0 + 3272);
    t32 = xsi_mem_cmp(t30, t9, 6U);
    if (t32 == 1)
        goto LAB19;

LAB40:    t33 = (t0 + 3278);
    t35 = xsi_mem_cmp(t33, t9, 6U);
    if (t35 == 1)
        goto LAB20;

LAB41:    t36 = (t0 + 3284);
    t38 = xsi_mem_cmp(t36, t9, 6U);
    if (t38 == 1)
        goto LAB21;

LAB42:    t39 = (t0 + 3290);
    t41 = xsi_mem_cmp(t39, t9, 6U);
    if (t41 == 1)
        goto LAB22;

LAB43:    t42 = (t0 + 3296);
    t44 = xsi_mem_cmp(t42, t9, 6U);
    if (t44 == 1)
        goto LAB23;

LAB44:    t45 = (t0 + 3302);
    t47 = xsi_mem_cmp(t45, t9, 6U);
    if (t47 == 1)
        goto LAB24;

LAB45:    t48 = (t0 + 3308);
    t50 = xsi_mem_cmp(t48, t9, 6U);
    if (t50 == 1)
        goto LAB25;

LAB46:    t51 = (t0 + 3314);
    t53 = xsi_mem_cmp(t51, t9, 6U);
    if (t53 == 1)
        goto LAB26;

LAB47:    t54 = (t0 + 3320);
    t56 = xsi_mem_cmp(t54, t9, 6U);
    if (t56 == 1)
        goto LAB27;

LAB48:    t57 = (t0 + 3326);
    t59 = xsi_mem_cmp(t57, t9, 6U);
    if (t59 == 1)
        goto LAB28;

LAB49:    t60 = (t0 + 3332);
    t62 = xsi_mem_cmp(t60, t9, 6U);
    if (t62 == 1)
        goto LAB29;

LAB50:    t63 = (t0 + 3338);
    t65 = xsi_mem_cmp(t63, t9, 6U);
    if (t65 == 1)
        goto LAB30;

LAB51:    t66 = (t0 + 3344);
    t68 = xsi_mem_cmp(t66, t9, 6U);
    if (t68 == 1)
        goto LAB31;

LAB52:
LAB32:    xsi_set_current_line(86, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);

LAB11:    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    xsi_set_current_line(46, ng0);
    t69 = (t0 + 3350);
    t71 = (t0 + 1676);
    t72 = (t71 + 32U);
    t73 = *((char **)t72);
    t74 = (t73 + 40U);
    t75 = *((char **)t74);
    memcpy(t75, t69, 6U);
    xsi_driver_first_trans_fast_port(t71);
    goto LAB11;

LAB13:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3356);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB14:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3362);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB15:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3368);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB16:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 3374);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB17:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3380);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB18:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3386);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB19:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3392);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB20:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3398);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB21:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3404);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB22:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3410);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB23:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3416);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB24:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3422);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB25:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3428);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB26:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3434);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB27:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3440);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB28:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3446);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB29:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3452);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB30:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3458);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB31:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3464);
    t3 = (t0 + 1676);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB11;

LAB53:;
}


extern void work_a_2425904575_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2425904575_3212880686_p_0};
	xsi_register_didat("work_a_2425904575_3212880686", "isim/TB_procesador_isim_beh.exe.sim/work/a_2425904575_3212880686.didat");
	xsi_register_executes(pe);
}
