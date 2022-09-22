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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/Desktop/FPGA/Fourth_experiment/RegisterFile.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {983055U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {252645120U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4042322160U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4294967295U, 0U};



static void Always_30_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(53, ng0);

LAB42:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 5);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);

LAB43:    t2 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB50;

LAB51:
LAB52:
LAB30:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);

LAB13:    xsi_set_current_line(34, ng0);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);

LAB14:    t19 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t19, 2);
    if (t21 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    xsi_set_current_line(35, ng0);

LAB24:    xsi_set_current_line(35, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 3048);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(36, ng0);

LAB25:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(37, ng0);

LAB26:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB23;

LAB21:    xsi_set_current_line(38, ng0);

LAB27:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    goto LAB23;

LAB28:    xsi_set_current_line(43, ng0);

LAB31:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB32:    t2 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t21 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t21 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t21 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t21 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB30;

LAB33:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 2008U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t13 = (t0 + 2568);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    goto LAB41;

LAB35:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 2008U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 8);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 8);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t13 = (t0 + 2568);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    goto LAB41;

LAB37:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 2008U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 16);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t13 = (t0 + 2568);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    goto LAB41;

LAB39:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 2008U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 24);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 24);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t13 = (t0 + 2568);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    goto LAB41;

LAB44:    xsi_set_current_line(56, ng0);
    t6 = (t0 + 2168U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 8);
    goto LAB52;

LAB46:    xsi_set_current_line(57, ng0);
    t6 = (t0 + 2168U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 8);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 8);
    goto LAB52;

LAB48:    xsi_set_current_line(58, ng0);
    t6 = (t0 + 2168U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 16);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 8);
    goto LAB52;

LAB50:    xsi_set_current_line(59, ng0);
    t6 = (t0 + 2168U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 24);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 24);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 8);
    goto LAB52;

}


extern void work_m_00000000000575464989_3674772129_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000000575464989_3674772129", "isim/RegisterFile_isim_beh.exe.sim/work/m_00000000000575464989_3674772129.didat");
	xsi_register_executes(pe);
}
