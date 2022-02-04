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
static const char *ng0 = "C:/Documents and Settings/Administrador/Mis documentos/Arquitectura/Procesador/ALU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1306069469_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_3798478767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_43738421_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t32[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
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
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 3438);
    t4 = xsi_mem_cmp(t1, t2, 6U);
    if (t4 == 1)
        goto LAB3;

LAB14:    t5 = (t0 + 3444);
    t7 = xsi_mem_cmp(t5, t2, 6U);
    if (t7 == 1)
        goto LAB4;

LAB15:    t8 = (t0 + 3450);
    t10 = xsi_mem_cmp(t8, t2, 6U);
    if (t10 == 1)
        goto LAB5;

LAB16:    t11 = (t0 + 3456);
    t13 = xsi_mem_cmp(t11, t2, 6U);
    if (t13 == 1)
        goto LAB6;

LAB17:    t14 = (t0 + 3462);
    t16 = xsi_mem_cmp(t14, t2, 6U);
    if (t16 == 1)
        goto LAB7;

LAB18:    t17 = (t0 + 3468);
    t19 = xsi_mem_cmp(t17, t2, 6U);
    if (t19 == 1)
        goto LAB8;

LAB19:    t20 = (t0 + 3474);
    t22 = xsi_mem_cmp(t20, t2, 6U);
    if (t22 == 1)
        goto LAB9;

LAB20:    t23 = (t0 + 3480);
    t25 = xsi_mem_cmp(t23, t2, 6U);
    if (t25 == 1)
        goto LAB10;

LAB21:    t26 = (t0 + 3486);
    t28 = xsi_mem_cmp(t26, t2, 6U);
    if (t28 == 1)
        goto LAB11;

LAB22:    t29 = (t0 + 3492);
    t31 = xsi_mem_cmp(t29, t2, 6U);
    if (t31 == 1)
        goto LAB12;

LAB23:
LAB13:    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 1768);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 1724);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(49, ng0);
    t33 = (t0 + 592U);
    t34 = *((char **)t33);
    t33 = (t0 + 3296U);
    t35 = (t0 + 684U);
    t36 = *((char **)t35);
    t35 = (t0 + 3312U);
    t37 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t32, t34, t33, t36, t35);
    t38 = (t32 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB25;

LAB26:    t42 = (t0 + 1768);
    t43 = (t42 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    memcpy(t46, t37, 32U);
    xsi_driver_first_trans_fast_port(t42);
    goto LAB2;

LAB4:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB27;

LAB28:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB33;

LAB34:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_2592010699_sub_3798478767_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB35;

LAB36:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB9:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB37;

LAB38:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB10:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_2592010699_sub_1306069469_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB39;

LAB40:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB11:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB41;

LAB42:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB12:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3296U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3312U);
    t6 = ieee_p_2592010699_sub_43738421_503743352(IEEE_P_2592010699, t32, t2, t1, t5, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB43;

LAB44:    t9 = (t0 + 1768);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB24:;
LAB25:    xsi_size_not_matching(32U, t40, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(32U, t40, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(32U, t40, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(32U, t40, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(32U, t40, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(32U, t40, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(32U, t40, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(32U, t40, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(32U, t40, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(32U, t40, 0);
    goto LAB44;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/TB_alu_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
