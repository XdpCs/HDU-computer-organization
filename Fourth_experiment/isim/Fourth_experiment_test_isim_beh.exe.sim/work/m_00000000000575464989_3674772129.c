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
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {983055U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {252645120U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4042322160U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4294967295U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    unsigned int t17;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(55, ng0);

LAB38:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);

LAB39:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB46;

LAB47:
LAB48:
LAB26:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t11, 2);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB8;

LAB11:    xsi_set_current_line(37, ng0);

LAB20:    xsi_set_current_line(37, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 3048);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(38, ng0);

LAB21:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(39, ng0);

LAB22:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB17:    xsi_set_current_line(40, ng0);

LAB23:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB24:    xsi_set_current_line(45, ng0);

LAB27:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 5);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB28:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB26;

LAB29:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t16 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 255U);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 8);
    goto LAB37;

LAB31:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t16 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 8);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 255U);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 8);
    goto LAB37;

LAB33:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t16 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 16);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 16);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 255U);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 8);
    goto LAB37;

LAB35:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t16 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 24);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 24);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 255U);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 8);
    goto LAB37;

LAB40:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 2168U);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 255U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 8);
    goto LAB48;

LAB42:    xsi_set_current_line(59, ng0);
    t5 = (t0 + 2168U);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 8);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 8);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 255U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 8);
    goto LAB48;

LAB44:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 2168U);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 16);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 16);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 255U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 8);
    goto LAB48;

LAB46:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 2168U);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 24);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 24);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 255U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 8);
    goto LAB48;

}


extern void work_m_00000000000575464989_3674772129_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_32_1};
	xsi_register_didat("work_m_00000000000575464989_3674772129", "isim/Fourth_experiment_test_isim_beh.exe.sim/work/m_00000000000575464989_3674772129.didat");
	xsi_register_executes(pe);
}
