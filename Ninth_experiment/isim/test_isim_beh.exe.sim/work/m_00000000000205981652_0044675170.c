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
static const char *ng0 = "F:/Desktop/FPGA/ninth_experiment/OP_Func.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {32U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {34U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {37U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {38U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {39U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {43U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {8U, 0U};
static int ng19[] = {100, 0};
static unsigned int ng20[] = {12U, 0U};
static unsigned int ng21[] = {14U, 0U};
static int ng22[] = {10, 0};
static unsigned int ng23[] = {11U, 0U};
static int ng24[] = {110, 0};
static unsigned int ng25[] = {35U, 0U};



static void Always_31_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);

LAB40:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB41:    t2 = ((char*)((ng18)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng20)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng21)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng23)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng25)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng15)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB52;

LAB53:
LAB54:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t26 = (t0 + 1208U);
    t27 = *((char **)t26);

LAB14:    t26 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t26, 6);
    if (t28 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB12;

LAB15:    xsi_set_current_line(43, ng0);

LAB32:    xsi_set_current_line(43, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 1608);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB31;

LAB17:    xsi_set_current_line(44, ng0);

LAB33:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB19:    xsi_set_current_line(45, ng0);

LAB34:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB21:    xsi_set_current_line(46, ng0);

LAB35:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB23:    xsi_set_current_line(47, ng0);

LAB36:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB25:    xsi_set_current_line(48, ng0);

LAB37:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB27:    xsi_set_current_line(49, ng0);

LAB38:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB29:    xsi_set_current_line(50, ng0);

LAB39:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB31;

LAB42:    xsi_set_current_line(56, ng0);

LAB55:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng19)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB54;

LAB44:    xsi_set_current_line(57, ng0);

LAB56:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB54;

LAB46:    xsi_set_current_line(58, ng0);

LAB57:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng22)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB54;

LAB48:    xsi_set_current_line(59, ng0);

LAB58:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng24)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB54;

LAB50:    xsi_set_current_line(60, ng0);

LAB59:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng19)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB54;

LAB52:    xsi_set_current_line(61, ng0);

LAB60:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng19)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB54;

}


extern void work_m_00000000000205981652_0044675170_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000000205981652_0044675170", "isim/test_isim_beh.exe.sim/work/m_00000000000205981652_0044675170.didat");
	xsi_register_executes(pe);
}
