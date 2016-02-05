/*  ca_mcgill_sable_soot_jimple_StmtSwitch.c -- from Java class ca.mcgill.sable.soot.jimple.StmtSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_StmtSwitch.h"
#include "ca_mcgill_sable_util_Switch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Switch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_StmtSwitch[];
extern const void *st_ca_mcgill_sable_soot_jimple_StmtSwitch[];
extern Class xt_caseBreakpointStmt_B_g7ceG[];
extern Class xt_caseInvokeStmt_I_s4jAK[];
extern Class xt_caseAssignStmt_A_QnUf7[];
extern Class xt_caseIdentityStmt_I_QMQwF[];
extern Class xt_caseEnterMonitorStmt_E_8KgtY[];
extern Class xt_caseExitMonitorStmt_E_abZM7[];
extern Class xt_caseGotoStmt_G_I3o9V[];
extern Class xt_caseIfStmt_I_spAil[];
extern Class xt_caseLookupSwitchStmt_L_aJn07[];
extern Class xt_caseNopStmt_N_2EeUf[];
extern Class xt_caseRetStmt_R_aegpI[];
extern Class xt_caseReturnStmt_R_IuEyJ[];
extern Class xt_caseReturnVoidStmt_R_QO2pQ[];
extern Class xt_caseTableSwitchStmt_T_ifcRp[];
extern Class xt_caseThrowStmt_T_8GQDo[];
extern Class xt_defaultCase_O_8zSll[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','m','t','S','w','i','t',
'c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
static const Char nmim_0[] = {
'<','i','n','i','t','>'};
static const Char sgim_0[] = {
'(',')','V'};
static const Char nmim_1[] = {
'c','l','o','n','e'};
static const Char sgim_1[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_2[] = {
'e','q','u','a','l','s'};
static const Char sgim_2[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_3[] = {
'f','i','n','a','l','i','z','e'};
static const Char sgim_3[] = {
'(',')','V'};
static const Char nmim_4[] = {
'g','e','t','C','l','a','s','s'};
static const Char sgim_4[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','C','l','a','s','s',
';'};
static const Char nmim_5[] = {
'h','a','s','h','C','o','d','e'};
static const Char sgim_5[] = {
'(',')','I'};
static const Char nmim_6[] = {
'n','o','t','i','f','y'};
static const Char sgim_6[] = {
'(',')','V'};
static const Char nmim_7[] = {
'n','o','t','i','f','y','A','l','l'};
static const Char sgim_7[] = {
'(',')','V'};
static const Char nmim_8[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_8[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_9[] = {
'w','a','i','t'};
static const Char sgim_9[] = {
'(',')','V'};
static const Char nmim_10[] = {
'w','a','i','t'};
static const Char sgim_10[] = {
'(','J',')','V'};
static const Char nmim_11[] = {
'w','a','i','t'};
static const Char sgim_11[] = {
'(','J','I',')','V'};
static const Char nmim_12[] = {
'c','a','s','e','B','r','e','a','k','p','o','i','n','t','S','t','m','t'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','B','r','e','a','k','p',
'o','i','n','t','S','t','m','t',';',')','V'};
static const Char nmim_13[] = {
'c','a','s','e','I','n','v','o','k','e','S','t','m','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','v','o','k','e',
'S','t','m','t',';',')','V'};
static const Char nmim_14[] = {
'c','a','s','e','A','s','s','i','g','n','S','t','m','t'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','s','s','i','g','n',
'S','t','m','t',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','I','d','e','n','t','i','t','y','S','t','m','t'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','d','e','n','t','i',
't','y','S','t','m','t',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','E','n','t','e','r','M','o','n','i','t','o','r','S','t',
'm','t'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','n','t','e','r','M',
'o','n','i','t','o','r','S','t','m','t',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','E','x','i','t','M','o','n','i','t','o','r','S','t','m',
't'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','x','i','t','M','o',
'n','i','t','o','r','S','t','m','t',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','G','o','t','o','S','t','m','t'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','o','t','o','S','t',
'm','t',';',')','V'};
static const Char nmim_19[] = {
'c','a','s','e','I','f','S','t','m','t'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','f','S','t','m','t',
';',')','V'};
static const Char nmim_20[] = {
'c','a','s','e','L','o','o','k','u','p','S','w','i','t','c','h','S','t',
'm','t'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','o','k','u','p',
'S','w','i','t','c','h','S','t','m','t',';',')','V'};
static const Char nmim_21[] = {
'c','a','s','e','N','o','p','S','t','m','t'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','o','p','S','t','m',
't',';',')','V'};
static const Char nmim_22[] = {
'c','a','s','e','R','e','t','S','t','m','t'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','S','t','m',
't',';',')','V'};
static const Char nmim_23[] = {
'c','a','s','e','R','e','t','u','r','n','S','t','m','t'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'S','t','m','t',';',')','V'};
static const Char nmim_24[] = {
'c','a','s','e','R','e','t','u','r','n','V','o','i','d','S','t','m','t'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'V','o','i','d','S','t','m','t',';',')','V'};
static const Char nmim_25[] = {
'c','a','s','e','T','a','b','l','e','S','w','i','t','c','h','S','t','m',
't'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','a','b','l','e','S',
'w','i','t','c','h','S','t','m','t',';',')','V'};
static const Char nmim_26[] = {
'c','a','s','e','T','h','r','o','w','S','t','m','t'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','r','o','w','S',
't','m','t',';',')','V'};
static const Char nmim_27[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_27[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_undefined}
};

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_jimple_StmtSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_StmtSwitch cl_ca_mcgill_sable_soot_jimple_StmtSwitch = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_StmtSwitch),
    28,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_StmtSwitch,
    st_ca_mcgill_sable_soot_jimple_StmtSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_StmtSwitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__8wJNW,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x8101,6,0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_abstract, 0,(const Char *)&nmim_12,18,
	(const Char *)&sgim_12,47,1,0x401,0,xt_caseBreakpointStmt_B_g7ceG},
	{TMIT_abstract, 0,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,43,1,0x401,1,xt_caseInvokeStmt_I_s4jAK},
	{TMIT_abstract, 0,(const Char *)&nmim_14,14,
	(const Char *)&sgim_14,43,1,0x401,2,xt_caseAssignStmt_A_QnUf7},
	{TMIT_abstract, 0,(const Char *)&nmim_15,16,
	(const Char *)&sgim_15,45,1,0x401,3,xt_caseIdentityStmt_I_QMQwF},
	{TMIT_abstract, 0,(const Char *)&nmim_16,20,
	(const Char *)&sgim_16,49,1,0x401,4,xt_caseEnterMonitorStmt_E_8KgtY},
	{TMIT_abstract, 0,(const Char *)&nmim_17,19,
	(const Char *)&sgim_17,48,1,0x401,5,xt_caseExitMonitorStmt_E_abZM7},
	{TMIT_abstract, 0,(const Char *)&nmim_18,12,
	(const Char *)&sgim_18,41,1,0x401,6,xt_caseGotoStmt_G_I3o9V},
	{TMIT_abstract, 0,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x401,7,xt_caseIfStmt_I_spAil},
	{TMIT_abstract, 0,(const Char *)&nmim_20,20,
	(const Char *)&sgim_20,49,1,0x401,8,xt_caseLookupSwitchStmt_L_aJn07},
	{TMIT_abstract, 0,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,40,1,0x401,9,xt_caseNopStmt_N_2EeUf},
	{TMIT_abstract, 0,(const Char *)&nmim_22,11,
	(const Char *)&sgim_22,40,1,0x401,10,xt_caseRetStmt_R_aegpI},
	{TMIT_abstract, 0,(const Char *)&nmim_23,14,
	(const Char *)&sgim_23,43,1,0x401,11,xt_caseReturnStmt_R_IuEyJ},
	{TMIT_abstract, 0,(const Char *)&nmim_24,18,
	(const Char *)&sgim_24,47,1,0x401,12,xt_caseReturnVoidStmt_R_QO2pQ},
	{TMIT_abstract, 0,(const Char *)&nmim_25,19,
	(const Char *)&sgim_25,48,1,0x401,13,xt_caseTableSwitchStmt_T_ifcRp},
	{TMIT_abstract, 0,(const Char *)&nmim_26,13,
	(const Char *)&sgim_26,42,1,0x401,14,xt_caseThrowStmt_T_8GQDo},
	{TMIT_abstract, 0,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,21,1,0x401,15,xt_defaultCase_O_8zSll},
    } /* end of methodsigs */
};


/*M caseBreakpointStmt_B_g7ceG: ca.mcgill.sable.soot.jimple.StmtSwitch.caseBreakpointStmt(Lca/mcgill/sable/soot/jimple/BreakpointStmt;)V */

Class xt_caseBreakpointStmt_B_g7ceG[] = { 0 };

/*M caseInvokeStmt_I_s4jAK: ca.mcgill.sable.soot.jimple.StmtSwitch.caseInvokeStmt(Lca/mcgill/sable/soot/jimple/InvokeStmt;)V */

Class xt_caseInvokeStmt_I_s4jAK[] = { 0 };

/*M caseAssignStmt_A_QnUf7: ca.mcgill.sable.soot.jimple.StmtSwitch.caseAssignStmt(Lca/mcgill/sable/soot/jimple/AssignStmt;)V */

Class xt_caseAssignStmt_A_QnUf7[] = { 0 };

/*M caseIdentityStmt_I_QMQwF: ca.mcgill.sable.soot.jimple.StmtSwitch.caseIdentityStmt(Lca/mcgill/sable/soot/jimple/IdentityStmt;)V */

Class xt_caseIdentityStmt_I_QMQwF[] = { 0 };

/*M caseEnterMonitorStmt_E_8KgtY: ca.mcgill.sable.soot.jimple.StmtSwitch.caseEnterMonitorStmt(Lca/mcgill/sable/soot/jimple/EnterMonitorStmt;)V */

Class xt_caseEnterMonitorStmt_E_8KgtY[] = { 0 };

/*M caseExitMonitorStmt_E_abZM7: ca.mcgill.sable.soot.jimple.StmtSwitch.caseExitMonitorStmt(Lca/mcgill/sable/soot/jimple/ExitMonitorStmt;)V */

Class xt_caseExitMonitorStmt_E_abZM7[] = { 0 };

/*M caseGotoStmt_G_I3o9V: ca.mcgill.sable.soot.jimple.StmtSwitch.caseGotoStmt(Lca/mcgill/sable/soot/jimple/GotoStmt;)V */

Class xt_caseGotoStmt_G_I3o9V[] = { 0 };

/*M caseIfStmt_I_spAil: ca.mcgill.sable.soot.jimple.StmtSwitch.caseIfStmt(Lca/mcgill/sable/soot/jimple/IfStmt;)V */

Class xt_caseIfStmt_I_spAil[] = { 0 };

/*M caseLookupSwitchStmt_L_aJn07: ca.mcgill.sable.soot.jimple.StmtSwitch.caseLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/LookupSwitchStmt;)V */

Class xt_caseLookupSwitchStmt_L_aJn07[] = { 0 };

/*M caseNopStmt_N_2EeUf: ca.mcgill.sable.soot.jimple.StmtSwitch.caseNopStmt(Lca/mcgill/sable/soot/jimple/NopStmt;)V */

Class xt_caseNopStmt_N_2EeUf[] = { 0 };

/*M caseRetStmt_R_aegpI: ca.mcgill.sable.soot.jimple.StmtSwitch.caseRetStmt(Lca/mcgill/sable/soot/jimple/RetStmt;)V */

Class xt_caseRetStmt_R_aegpI[] = { 0 };

/*M caseReturnStmt_R_IuEyJ: ca.mcgill.sable.soot.jimple.StmtSwitch.caseReturnStmt(Lca/mcgill/sable/soot/jimple/ReturnStmt;)V */

Class xt_caseReturnStmt_R_IuEyJ[] = { 0 };

/*M caseReturnVoidStmt_R_QO2pQ: ca.mcgill.sable.soot.jimple.StmtSwitch.caseReturnVoidStmt(Lca/mcgill/sable/soot/jimple/ReturnVoidStmt;)V */

Class xt_caseReturnVoidStmt_R_QO2pQ[] = { 0 };

/*M caseTableSwitchStmt_T_ifcRp: ca.mcgill.sable.soot.jimple.StmtSwitch.caseTableSwitchStmt(Lca/mcgill/sable/soot/jimple/TableSwitchStmt;)V */

Class xt_caseTableSwitchStmt_T_ifcRp[] = { 0 };

/*M caseThrowStmt_T_8GQDo: ca.mcgill.sable.soot.jimple.StmtSwitch.caseThrowStmt(Lca/mcgill/sable/soot/jimple/ThrowStmt;)V */

Class xt_caseThrowStmt_T_8GQDo[] = { 0 };

/*M defaultCase_O_8zSll: ca.mcgill.sable.soot.jimple.StmtSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_8zSll[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_StmtSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','m','t','S','w','i','t',
'c','h'};

const void *st_ca_mcgill_sable_soot_jimple_StmtSwitch[] = {
    ch_ca_mcgill_sable_soot_jimple_StmtSwitch+38,	/* 0. ca.mcgill.sable.soot.jimple.StmtSwitch */
    0};
