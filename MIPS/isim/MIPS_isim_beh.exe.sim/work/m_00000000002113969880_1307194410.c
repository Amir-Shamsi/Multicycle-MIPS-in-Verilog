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
static const char *ng0 = "C:/Users/emir/homework/ProgramCounter/Fetch.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {2147483647U, 2147483647U};
static int ng4[] = {5, 0};
static int ng5[] = {4, 0};
static int ng6[] = {3, 0};
static unsigned int ng7[] = {536936449U, 0U};
static unsigned int ng8[] = {606208008U, 0U};
static int ng9[] = {2, 0};
static unsigned int ng10[] = {675479555U, 0U};
static unsigned int ng11[] = {744751108U, 0U};
static unsigned int ng12[] = {814022661U, 0U};
static unsigned int ng13[] = {883294214U, 0U};
static unsigned int ng14[] = {939524104U, 0U};
static unsigned int ng15[] = {1140850697U, 0U};
static unsigned int ng16[] = {1023934472U, 0U};
static unsigned int ng17[] = {1093206018U, 0U};
static unsigned int ng18[] = {1229586433U, 0U};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_51_1(char *t0)
{
    char t6[8];
    char t19[8];
    char t35[8];
    char t43[8];
    char t83[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t84;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 6152);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t43, t6, 8);

LAB12:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng3)));
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = (t17 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB14;

LAB13:    if (t31 != 0)
        goto LAB15;

LAB16:    memset(t35, 0, 8);
    t36 = (t19 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t36) != 0)
        goto LAB19;

LAB20:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t6 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB14:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t35) = 1;
    goto LAB20;

LAB19:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB21:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t6 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB23;

LAB24:    xsi_set_current_line(53, ng0);
    t81 = (t0 + 1208U);
    t82 = *((char **)t81);
    t81 = ((char*)((ng1)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t82, 32, t81, 32);
    t84 = (t0 + 2888);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 32);
    goto LAB26;

}

static void Always_56_2(char *t0)
{
    char t8[8];
    char t32[8];
    char t56[8];
    char t57[8];
    char t59[8];
    char t88[8];
    char t89[8];
    char t94[8];
    char t126[8];
    char t127[8];
    char t132[8];
    char t164[8];
    char t165[8];
    char t170[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6168);
    *((int *)t2) = 1;
    t3 = (t0 + 5616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 2888);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 5, t5, 32);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);

LAB12:    goto LAB2;

LAB8:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);

LAB13:    xsi_set_current_line(60, ng0);
    t28 = (t0 + 3688);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB17;

LAB14:    if (t44 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t32) = 1;

LAB17:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(66, ng0);

LAB22:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB26;

LAB23:    if (t19 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t8) = 1;

LAB26:    memset(t32, 0, 8);
    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t22) != 0)
        goto LAB29;

LAB30:    t29 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB31;

LAB32:    memcpy(t59, t32, 8);

LAB33:    t82 = (t59 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t59);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB104;

LAB101:    if (t19 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t8) = 1;

LAB104:    memset(t32, 0, 8);
    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t22) != 0)
        goto LAB107;

LAB108:    t29 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB109;

LAB110:    memcpy(t59, t32, 8);

LAB111:    t82 = (t59 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t59);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB182;

LAB179:    if (t19 != 0)
        goto LAB181;

LAB180:    *((unsigned int *)t8) = 1;

LAB182:    memset(t32, 0, 8);
    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB183;

LAB184:    if (*((unsigned int *)t22) != 0)
        goto LAB185;

LAB186:    t29 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB187;

LAB188:    memcpy(t59, t32, 8);

LAB189:    t82 = (t59 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t59);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB202;

LAB203:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB258;

LAB257:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB258;

LAB261:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB259;

LAB260:    t22 = (t8 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB262;

LAB263:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB264:
LAB204:
LAB126:
LAB48:
LAB20:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 5, t5, 32);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    goto LAB12;

LAB16:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(60, ng0);

LAB21:    xsi_set_current_line(61, ng0);
    t54 = ((char*)((ng2)));
    t55 = (t0 + 3688);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 5);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 5, t5, 32);
    t6 = (t0 + 3848);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 5, t5, 32);
    t6 = (t0 + 4008);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB20;

LAB25:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t32) = 1;
    goto LAB30;

LAB29:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB31:    t30 = (t0 + 4008);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng6)));
    memset(t56, 0, 8);
    t47 = (t33 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB35;

LAB34:    t48 = (t34 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB36;

LAB37:    memset(t57, 0, 8);
    t55 = (t56 + 4);
    t38 = *((unsigned int *)t55);
    t39 = (~(t38));
    t40 = *((unsigned int *)t56);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t55) != 0)
        goto LAB41;

LAB42:    t43 = *((unsigned int *)t32);
    t44 = *((unsigned int *)t57);
    t45 = (t43 & t44);
    *((unsigned int *)t59) = t45;
    t60 = (t32 + 4);
    t61 = (t57 + 4);
    t62 = (t59 + 4);
    t46 = *((unsigned int *)t60);
    t49 = *((unsigned int *)t61);
    t50 = (t46 | t49);
    *((unsigned int *)t62) = t50;
    t51 = *((unsigned int *)t62);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t54 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t56) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t57) = 1;
    goto LAB42;

LAB41:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB42;

LAB43:    t53 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t62);
    *((unsigned int *)t59) = (t53 | t63);
    t64 = (t32 + 4);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t32);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t57);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t78 & t76);
    t79 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t76);
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t77);
    goto LAB45;

LAB46:    xsi_set_current_line(67, ng0);

LAB49:    xsi_set_current_line(68, ng0);
    t90 = (t0 + 3688);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng2)));
    memset(t94, 0, 8);
    t95 = (t92 + 4);
    t96 = (t93 + 4);
    t97 = *((unsigned int *)t92);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = *((unsigned int *)t95);
    t101 = *((unsigned int *)t96);
    t102 = (t100 ^ t101);
    t103 = (t99 | t102);
    t104 = *((unsigned int *)t95);
    t105 = *((unsigned int *)t96);
    t106 = (t104 | t105);
    t107 = (~(t106));
    t108 = (t103 & t107);
    if (t108 != 0)
        goto LAB53;

LAB50:    if (t106 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t94) = 1;

LAB53:    memset(t89, 0, 8);
    t110 = (t94 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t94);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t110) != 0)
        goto LAB56;

LAB57:    t117 = (t89 + 4);
    t118 = *((unsigned int *)t89);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB58;

LAB59:    t122 = *((unsigned int *)t89);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t117) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t89) > 0)
        goto LAB64;

LAB65:    memcpy(t88, t126, 8);

LAB66:    t203 = (t0 + 2248);
    xsi_vlogvar_assign_value(t203, t88, 0, 0, 32);
    goto LAB48;

LAB52:    t109 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t89) = 1;
    goto LAB57;

LAB56:    t116 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB57;

LAB58:    t121 = ((char*)((ng7)));
    goto LAB59;

LAB60:    t128 = (t0 + 3688);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t131 = ((char*)((ng1)));
    memset(t132, 0, 8);
    t133 = (t130 + 4);
    t134 = (t131 + 4);
    t135 = *((unsigned int *)t130);
    t136 = *((unsigned int *)t131);
    t137 = (t135 ^ t136);
    t138 = *((unsigned int *)t133);
    t139 = *((unsigned int *)t134);
    t140 = (t138 ^ t139);
    t141 = (t137 | t140);
    t142 = *((unsigned int *)t133);
    t143 = *((unsigned int *)t134);
    t144 = (t142 | t143);
    t145 = (~(t144));
    t146 = (t141 & t145);
    if (t146 != 0)
        goto LAB70;

LAB67:    if (t144 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t132) = 1;

LAB70:    memset(t127, 0, 8);
    t148 = (t132 + 4);
    t149 = *((unsigned int *)t148);
    t150 = (~(t149));
    t151 = *((unsigned int *)t132);
    t152 = (t151 & t150);
    t153 = (t152 & 1U);
    if (t153 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t148) != 0)
        goto LAB73;

LAB74:    t155 = (t127 + 4);
    t156 = *((unsigned int *)t127);
    t157 = *((unsigned int *)t155);
    t158 = (t156 || t157);
    if (t158 > 0)
        goto LAB75;

LAB76:    t160 = *((unsigned int *)t127);
    t161 = (~(t160));
    t162 = *((unsigned int *)t155);
    t163 = (t161 || t162);
    if (t163 > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t155) > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t127) > 0)
        goto LAB81;

LAB82:    memcpy(t126, t164, 8);

LAB83:    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t88, 32, t121, 32, t126, 32);
    goto LAB66;

LAB64:    memcpy(t88, t121, 8);
    goto LAB66;

LAB69:    t147 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t147) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t127) = 1;
    goto LAB74;

LAB73:    t154 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB74;

LAB75:    t159 = ((char*)((ng8)));
    goto LAB76;

LAB77:    t166 = (t0 + 3688);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    t169 = ((char*)((ng9)));
    memset(t170, 0, 8);
    t171 = (t168 + 4);
    t172 = (t169 + 4);
    t173 = *((unsigned int *)t168);
    t174 = *((unsigned int *)t169);
    t175 = (t173 ^ t174);
    t176 = *((unsigned int *)t171);
    t177 = *((unsigned int *)t172);
    t178 = (t176 ^ t177);
    t179 = (t175 | t178);
    t180 = *((unsigned int *)t171);
    t181 = *((unsigned int *)t172);
    t182 = (t180 | t181);
    t183 = (~(t182));
    t184 = (t179 & t183);
    if (t184 != 0)
        goto LAB87;

LAB84:    if (t182 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t170) = 1;

LAB87:    memset(t165, 0, 8);
    t186 = (t170 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t170);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t186) != 0)
        goto LAB90;

LAB91:    t193 = (t165 + 4);
    t194 = *((unsigned int *)t165);
    t195 = *((unsigned int *)t193);
    t196 = (t194 || t195);
    if (t196 > 0)
        goto LAB92;

LAB93:    t198 = *((unsigned int *)t165);
    t199 = (~(t198));
    t200 = *((unsigned int *)t193);
    t201 = (t199 || t200);
    if (t201 > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t193) > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t165) > 0)
        goto LAB98;

LAB99:    memcpy(t164, t202, 8);

LAB100:    goto LAB78;

LAB79:    xsi_vlog_unsigned_bit_combine(t126, 32, t159, 32, t164, 32);
    goto LAB83;

LAB81:    memcpy(t126, t159, 8);
    goto LAB83;

LAB86:    t185 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t185) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t165) = 1;
    goto LAB91;

LAB90:    t192 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB91;

LAB92:    t197 = ((char*)((ng10)));
    goto LAB93;

LAB94:    t202 = ((char*)((ng11)));
    goto LAB95;

LAB96:    xsi_vlog_unsigned_bit_combine(t164, 32, t197, 32, t202, 32);
    goto LAB100;

LAB98:    memcpy(t164, t197, 8);
    goto LAB100;

LAB103:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB104;

LAB105:    *((unsigned int *)t32) = 1;
    goto LAB108;

LAB107:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB108;

LAB109:    t30 = (t0 + 4008);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng6)));
    memset(t56, 0, 8);
    t47 = (t33 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB113;

LAB112:    t48 = (t34 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB113;

LAB116:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB114;

LAB115:    memset(t57, 0, 8);
    t55 = (t56 + 4);
    t38 = *((unsigned int *)t55);
    t39 = (~(t38));
    t40 = *((unsigned int *)t56);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t55) != 0)
        goto LAB119;

LAB120:    t43 = *((unsigned int *)t32);
    t44 = *((unsigned int *)t57);
    t45 = (t43 & t44);
    *((unsigned int *)t59) = t45;
    t60 = (t32 + 4);
    t61 = (t57 + 4);
    t62 = (t59 + 4);
    t46 = *((unsigned int *)t60);
    t49 = *((unsigned int *)t61);
    t50 = (t46 | t49);
    *((unsigned int *)t62) = t50;
    t51 = *((unsigned int *)t62);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB121;

LAB122:
LAB123:    goto LAB111;

LAB113:    t54 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB115;

LAB114:    *((unsigned int *)t56) = 1;
    goto LAB115;

LAB117:    *((unsigned int *)t57) = 1;
    goto LAB120;

LAB119:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB120;

LAB121:    t53 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t62);
    *((unsigned int *)t59) = (t53 | t63);
    t64 = (t32 + 4);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t32);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t57);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t78 & t76);
    t79 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t76);
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t77);
    goto LAB123;

LAB124:    xsi_set_current_line(73, ng0);

LAB127:    xsi_set_current_line(74, ng0);
    t90 = (t0 + 3688);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng2)));
    memset(t94, 0, 8);
    t95 = (t92 + 4);
    t96 = (t93 + 4);
    t97 = *((unsigned int *)t92);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = *((unsigned int *)t95);
    t101 = *((unsigned int *)t96);
    t102 = (t100 ^ t101);
    t103 = (t99 | t102);
    t104 = *((unsigned int *)t95);
    t105 = *((unsigned int *)t96);
    t106 = (t104 | t105);
    t107 = (~(t106));
    t108 = (t103 & t107);
    if (t108 != 0)
        goto LAB131;

LAB128:    if (t106 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t94) = 1;

LAB131:    memset(t89, 0, 8);
    t110 = (t94 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t94);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t110) != 0)
        goto LAB134;

LAB135:    t117 = (t89 + 4);
    t118 = *((unsigned int *)t89);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB136;

LAB137:    t122 = *((unsigned int *)t89);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t117) > 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t89) > 0)
        goto LAB142;

LAB143:    memcpy(t88, t126, 8);

LAB144:    t203 = (t0 + 2248);
    xsi_vlogvar_assign_value(t203, t88, 0, 0, 32);
    goto LAB126;

LAB130:    t109 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB131;

LAB132:    *((unsigned int *)t89) = 1;
    goto LAB135;

LAB134:    t116 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB135;

LAB136:    t121 = ((char*)((ng12)));
    goto LAB137;

LAB138:    t128 = (t0 + 3688);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t131 = ((char*)((ng1)));
    memset(t132, 0, 8);
    t133 = (t130 + 4);
    t134 = (t131 + 4);
    t135 = *((unsigned int *)t130);
    t136 = *((unsigned int *)t131);
    t137 = (t135 ^ t136);
    t138 = *((unsigned int *)t133);
    t139 = *((unsigned int *)t134);
    t140 = (t138 ^ t139);
    t141 = (t137 | t140);
    t142 = *((unsigned int *)t133);
    t143 = *((unsigned int *)t134);
    t144 = (t142 | t143);
    t145 = (~(t144));
    t146 = (t141 & t145);
    if (t146 != 0)
        goto LAB148;

LAB145:    if (t144 != 0)
        goto LAB147;

LAB146:    *((unsigned int *)t132) = 1;

LAB148:    memset(t127, 0, 8);
    t148 = (t132 + 4);
    t149 = *((unsigned int *)t148);
    t150 = (~(t149));
    t151 = *((unsigned int *)t132);
    t152 = (t151 & t150);
    t153 = (t152 & 1U);
    if (t153 != 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t148) != 0)
        goto LAB151;

LAB152:    t155 = (t127 + 4);
    t156 = *((unsigned int *)t127);
    t157 = *((unsigned int *)t155);
    t158 = (t156 || t157);
    if (t158 > 0)
        goto LAB153;

LAB154:    t160 = *((unsigned int *)t127);
    t161 = (~(t160));
    t162 = *((unsigned int *)t155);
    t163 = (t161 || t162);
    if (t163 > 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t155) > 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t127) > 0)
        goto LAB159;

LAB160:    memcpy(t126, t164, 8);

LAB161:    goto LAB139;

LAB140:    xsi_vlog_unsigned_bit_combine(t88, 32, t121, 32, t126, 32);
    goto LAB144;

LAB142:    memcpy(t88, t121, 8);
    goto LAB144;

LAB147:    t147 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t147) = 1;
    goto LAB148;

LAB149:    *((unsigned int *)t127) = 1;
    goto LAB152;

LAB151:    t154 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB152;

LAB153:    t159 = ((char*)((ng13)));
    goto LAB154;

LAB155:    t166 = (t0 + 3688);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    t169 = ((char*)((ng9)));
    memset(t170, 0, 8);
    t171 = (t168 + 4);
    t172 = (t169 + 4);
    t173 = *((unsigned int *)t168);
    t174 = *((unsigned int *)t169);
    t175 = (t173 ^ t174);
    t176 = *((unsigned int *)t171);
    t177 = *((unsigned int *)t172);
    t178 = (t176 ^ t177);
    t179 = (t175 | t178);
    t180 = *((unsigned int *)t171);
    t181 = *((unsigned int *)t172);
    t182 = (t180 | t181);
    t183 = (~(t182));
    t184 = (t179 & t183);
    if (t184 != 0)
        goto LAB165;

LAB162:    if (t182 != 0)
        goto LAB164;

LAB163:    *((unsigned int *)t170) = 1;

LAB165:    memset(t165, 0, 8);
    t186 = (t170 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t170);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t186) != 0)
        goto LAB168;

LAB169:    t193 = (t165 + 4);
    t194 = *((unsigned int *)t165);
    t195 = *((unsigned int *)t193);
    t196 = (t194 || t195);
    if (t196 > 0)
        goto LAB170;

LAB171:    t198 = *((unsigned int *)t165);
    t199 = (~(t198));
    t200 = *((unsigned int *)t193);
    t201 = (t199 || t200);
    if (t201 > 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t193) > 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t165) > 0)
        goto LAB176;

LAB177:    memcpy(t164, t202, 8);

LAB178:    goto LAB156;

LAB157:    xsi_vlog_unsigned_bit_combine(t126, 32, t159, 32, t164, 32);
    goto LAB161;

LAB159:    memcpy(t126, t159, 8);
    goto LAB161;

LAB164:    t185 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t185) = 1;
    goto LAB165;

LAB166:    *((unsigned int *)t165) = 1;
    goto LAB169;

LAB168:    t192 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB169;

LAB170:    t197 = ((char*)((ng14)));
    goto LAB171;

LAB172:    t202 = ((char*)((ng15)));
    goto LAB173;

LAB174:    xsi_vlog_unsigned_bit_combine(t164, 32, t197, 32, t202, 32);
    goto LAB178;

LAB176:    memcpy(t164, t197, 8);
    goto LAB178;

LAB181:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB182;

LAB183:    *((unsigned int *)t32) = 1;
    goto LAB186;

LAB185:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB186;

LAB187:    t30 = (t0 + 4008);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng6)));
    memset(t56, 0, 8);
    t47 = (t33 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB191;

LAB190:    t48 = (t34 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB191;

LAB194:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB192;

LAB193:    memset(t57, 0, 8);
    t55 = (t56 + 4);
    t38 = *((unsigned int *)t55);
    t39 = (~(t38));
    t40 = *((unsigned int *)t56);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t55) != 0)
        goto LAB197;

LAB198:    t43 = *((unsigned int *)t32);
    t44 = *((unsigned int *)t57);
    t45 = (t43 & t44);
    *((unsigned int *)t59) = t45;
    t60 = (t32 + 4);
    t61 = (t57 + 4);
    t62 = (t59 + 4);
    t46 = *((unsigned int *)t60);
    t49 = *((unsigned int *)t61);
    t50 = (t46 | t49);
    *((unsigned int *)t62) = t50;
    t51 = *((unsigned int *)t62);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB199;

LAB200:
LAB201:    goto LAB189;

LAB191:    t54 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB193;

LAB192:    *((unsigned int *)t56) = 1;
    goto LAB193;

LAB195:    *((unsigned int *)t57) = 1;
    goto LAB198;

LAB197:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB198;

LAB199:    t53 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t62);
    *((unsigned int *)t59) = (t53 | t63);
    t64 = (t32 + 4);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t32);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t57);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t78 & t76);
    t79 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t76);
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t77);
    goto LAB201;

LAB202:    xsi_set_current_line(79, ng0);

LAB205:    xsi_set_current_line(80, ng0);
    t90 = (t0 + 3688);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng2)));
    memset(t94, 0, 8);
    t95 = (t92 + 4);
    t96 = (t93 + 4);
    t97 = *((unsigned int *)t92);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = *((unsigned int *)t95);
    t101 = *((unsigned int *)t96);
    t102 = (t100 ^ t101);
    t103 = (t99 | t102);
    t104 = *((unsigned int *)t95);
    t105 = *((unsigned int *)t96);
    t106 = (t104 | t105);
    t107 = (~(t106));
    t108 = (t103 & t107);
    if (t108 != 0)
        goto LAB209;

LAB206:    if (t106 != 0)
        goto LAB208;

LAB207:    *((unsigned int *)t94) = 1;

LAB209:    memset(t89, 0, 8);
    t110 = (t94 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t94);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB210;

LAB211:    if (*((unsigned int *)t110) != 0)
        goto LAB212;

LAB213:    t117 = (t89 + 4);
    t118 = *((unsigned int *)t89);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB214;

LAB215:    t122 = *((unsigned int *)t89);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB216;

LAB217:    if (*((unsigned int *)t117) > 0)
        goto LAB218;

LAB219:    if (*((unsigned int *)t89) > 0)
        goto LAB220;

LAB221:    memcpy(t88, t126, 8);

LAB222:    t203 = (t0 + 2248);
    xsi_vlogvar_assign_value(t203, t88, 0, 0, 32);
    goto LAB204;

LAB208:    t109 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB209;

LAB210:    *((unsigned int *)t89) = 1;
    goto LAB213;

LAB212:    t116 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB213;

LAB214:    t121 = ((char*)((ng16)));
    goto LAB215;

LAB216:    t128 = (t0 + 3688);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t131 = ((char*)((ng1)));
    memset(t132, 0, 8);
    t133 = (t130 + 4);
    t134 = (t131 + 4);
    t135 = *((unsigned int *)t130);
    t136 = *((unsigned int *)t131);
    t137 = (t135 ^ t136);
    t138 = *((unsigned int *)t133);
    t139 = *((unsigned int *)t134);
    t140 = (t138 ^ t139);
    t141 = (t137 | t140);
    t142 = *((unsigned int *)t133);
    t143 = *((unsigned int *)t134);
    t144 = (t142 | t143);
    t145 = (~(t144));
    t146 = (t141 & t145);
    if (t146 != 0)
        goto LAB226;

LAB223:    if (t144 != 0)
        goto LAB225;

LAB224:    *((unsigned int *)t132) = 1;

LAB226:    memset(t127, 0, 8);
    t148 = (t132 + 4);
    t149 = *((unsigned int *)t148);
    t150 = (~(t149));
    t151 = *((unsigned int *)t132);
    t152 = (t151 & t150);
    t153 = (t152 & 1U);
    if (t153 != 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t148) != 0)
        goto LAB229;

LAB230:    t155 = (t127 + 4);
    t156 = *((unsigned int *)t127);
    t157 = *((unsigned int *)t155);
    t158 = (t156 || t157);
    if (t158 > 0)
        goto LAB231;

LAB232:    t160 = *((unsigned int *)t127);
    t161 = (~(t160));
    t162 = *((unsigned int *)t155);
    t163 = (t161 || t162);
    if (t163 > 0)
        goto LAB233;

LAB234:    if (*((unsigned int *)t155) > 0)
        goto LAB235;

LAB236:    if (*((unsigned int *)t127) > 0)
        goto LAB237;

LAB238:    memcpy(t126, t164, 8);

LAB239:    goto LAB217;

LAB218:    xsi_vlog_unsigned_bit_combine(t88, 32, t121, 32, t126, 32);
    goto LAB222;

LAB220:    memcpy(t88, t121, 8);
    goto LAB222;

LAB225:    t147 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t147) = 1;
    goto LAB226;

LAB227:    *((unsigned int *)t127) = 1;
    goto LAB230;

LAB229:    t154 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB230;

LAB231:    t159 = ((char*)((ng17)));
    goto LAB232;

LAB233:    t166 = (t0 + 3688);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    t169 = ((char*)((ng9)));
    memset(t170, 0, 8);
    t171 = (t168 + 4);
    t172 = (t169 + 4);
    t173 = *((unsigned int *)t168);
    t174 = *((unsigned int *)t169);
    t175 = (t173 ^ t174);
    t176 = *((unsigned int *)t171);
    t177 = *((unsigned int *)t172);
    t178 = (t176 ^ t177);
    t179 = (t175 | t178);
    t180 = *((unsigned int *)t171);
    t181 = *((unsigned int *)t172);
    t182 = (t180 | t181);
    t183 = (~(t182));
    t184 = (t179 & t183);
    if (t184 != 0)
        goto LAB243;

LAB240:    if (t182 != 0)
        goto LAB242;

LAB241:    *((unsigned int *)t170) = 1;

LAB243:    memset(t165, 0, 8);
    t186 = (t170 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t170);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB244;

LAB245:    if (*((unsigned int *)t186) != 0)
        goto LAB246;

LAB247:    t193 = (t165 + 4);
    t194 = *((unsigned int *)t165);
    t195 = *((unsigned int *)t193);
    t196 = (t194 || t195);
    if (t196 > 0)
        goto LAB248;

LAB249:    t198 = *((unsigned int *)t165);
    t199 = (~(t198));
    t200 = *((unsigned int *)t193);
    t201 = (t199 || t200);
    if (t201 > 0)
        goto LAB250;

LAB251:    if (*((unsigned int *)t193) > 0)
        goto LAB252;

LAB253:    if (*((unsigned int *)t165) > 0)
        goto LAB254;

LAB255:    memcpy(t164, t202, 8);

LAB256:    goto LAB234;

LAB235:    xsi_vlog_unsigned_bit_combine(t126, 32, t159, 32, t164, 32);
    goto LAB239;

LAB237:    memcpy(t126, t159, 8);
    goto LAB239;

LAB242:    t185 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t185) = 1;
    goto LAB243;

LAB244:    *((unsigned int *)t165) = 1;
    goto LAB247;

LAB246:    t192 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB247;

LAB248:    t197 = ((char*)((ng18)));
    goto LAB249;

LAB250:    t202 = ((char*)((ng2)));
    goto LAB251;

LAB252:    xsi_vlog_unsigned_bit_combine(t164, 32, t197, 32, t202, 32);
    goto LAB256;

LAB254:    memcpy(t164, t197, 8);
    goto LAB256;

LAB258:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB260;

LAB259:    *((unsigned int *)t8) = 1;
    goto LAB260;

LAB262:    xsi_set_current_line(86, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2248);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    goto LAB264;

}

static void Cont_127_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6184);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002113969880_1307194410_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_51_1,(void *)Always_56_2,(void *)Cont_127_3};
	xsi_register_didat("work_m_00000000002113969880_1307194410", "isim/MIPS_isim_beh.exe.sim/work/m_00000000002113969880_1307194410.didat");
	xsi_register_executes(pe);
}
