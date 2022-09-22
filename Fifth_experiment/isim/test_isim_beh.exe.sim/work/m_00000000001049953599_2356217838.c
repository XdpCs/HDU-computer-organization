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
static const char *ng0 = "F:/Desktop/FPGA/Fifth_experiment/RAM.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {3504U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3982209U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4294967295U, 0U};



static void Always_36_0(char *t0)
{
    char t14[8];
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
    int t11;
    char *t12;
    char *t13;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB20:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB21:    t2 = ((char*)((ng2)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t11 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t11 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t11 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng8)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t11 == 1)
        goto LAB28;

LAB29:
LAB30:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB10:    t4 = ((char*)((ng2)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t11 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t11 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t11 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB8;

LAB11:    xsi_set_current_line(43, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB17:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB22:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 255U);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 8);
    goto LAB30;

LAB24:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 8);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 255U);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 8);
    goto LAB30;

LAB26:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 16);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 16);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 255U);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 8);
    goto LAB30;

LAB28:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 24);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 24);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 255U);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 8);
    goto LAB30;

}


extern void work_m_00000000001049953599_2356217838_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000001049953599_2356217838", "isim/test_isim_beh.exe.sim/work/m_00000000001049953599_2356217838.didat");
	xsi_register_executes(pe);
}
