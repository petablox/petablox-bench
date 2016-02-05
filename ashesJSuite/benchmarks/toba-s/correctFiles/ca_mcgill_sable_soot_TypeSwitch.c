/*  ca_mcgill_sable_soot_TypeSwitch.c -- from Java class ca.mcgill.sable.soot.TypeSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_TypeSwitch.h"
#include "ca_mcgill_sable_util_Switch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_TypeSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Switch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_TypeSwitch[];
extern const void *st_ca_mcgill_sable_soot_TypeSwitch[];
extern Class xt_caseArrayType_A_kO2Qc[];
extern Class xt_caseBooleanType_B_OUFIT[];
extern Class xt_caseByteType_B_WcDiD[];
extern Class xt_caseCharType_C_8951U[];
extern Class xt_caseDoubleType_D_uhKoo[];
extern Class xt_caseFloatType_F_QRtel[];
extern Class xt_caseIntType_I_ODuHy[];
extern Class xt_caseLongType_L_oZuIo[];
extern Class xt_caseRefType_R_WnAlw[];
extern Class xt_caseShortType_S_2MJrs[];
extern Class xt_caseStmtAddressType_S_6w2qx[];
extern Class xt_caseUnknownType_U_Mn0wN[];
extern Class xt_caseVoidType_V_287iS[];
extern Class xt_caseNullType_N_ipySa[];
extern Class xt_caseErroneousType_E_Qb6aF[];
extern Class xt_defaultCase_T_TjmPJ[];
extern Class xt_caseDefault_T_Hrrk6[];
extern Class xt_setResult_O_mipzV[];
extern Class xt_getResult__q3qpX[];
extern Class xt_init__hEn3f[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_TypeSwitch.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_TypeSwitch.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_TypeSwitch.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_TypeSwitch.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','T','y','p','e','S','w','i','t','c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
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
'c','a','s','e','A','r','r','a','y','T','y','p','e'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','A','r','r','a','y','T','y','p','e',';',')','V'};
static const Char nmim_13[] = {
'c','a','s','e','B','o','o','l','e','a','n','T','y','p','e'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','o','o','l','e','a','n','T','y','p','e',';',')',
'V'};
static const Char nmim_14[] = {
'c','a','s','e','B','y','t','e','T','y','p','e'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','y','t','e','T','y','p','e',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','C','h','a','r','T','y','p','e'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','C','h','a','r','T','y','p','e',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','D','o','u','b','l','e','T','y','p','e'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','D','o','u','b','l','e','T','y','p','e',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','F','l','o','a','t','T','y','p','e'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','F','l','o','a','t','T','y','p','e',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','I','n','t','T','y','p','e'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','I','n','t','T','y','p','e',';',')','V'};
static const Char nmim_19[] = {
'c','a','s','e','L','o','n','g','T','y','p','e'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','L','o','n','g','T','y','p','e',';',')','V'};
static const Char nmim_20[] = {
'c','a','s','e','R','e','f','T','y','p','e'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','R','e','f','T','y','p','e',';',')','V'};
static const Char nmim_21[] = {
'c','a','s','e','S','h','o','r','t','T','y','p','e'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','h','o','r','t','T','y','p','e',';',')','V'};
static const Char nmim_22[] = {
'c','a','s','e','S','t','m','t','A','d','d','r','e','s','s','T','y','p',
'e'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','t','m','t','A','d','d','r','e','s','s','T','y',
'p','e',';',')','V'};
static const Char nmim_23[] = {
'c','a','s','e','U','n','k','n','o','w','n','T','y','p','e'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','U','n','k','n','o','w','n','T','y','p','e',';',')',
'V'};
static const Char nmim_24[] = {
'c','a','s','e','V','o','i','d','T','y','p','e'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','V','o','i','d','T','y','p','e',';',')','V'};
static const Char nmim_25[] = {
'c','a','s','e','N','u','l','l','T','y','p','e'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','N','u','l','l','T','y','p','e',';',')','V'};
static const Char nmim_26[] = {
'c','a','s','e','E','r','r','o','n','e','o','u','s','T','y','p','e'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','E','r','r','o','n','e','o','u','s','T','y','p','e',
';',')','V'};
static const Char nmim_27[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_28[] = {
'c','a','s','e','D','e','f','a','u','l','t'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_29[] = {
's','e','t','R','e','s','u','l','t'};
static const Char sgim_29[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_30[] = {
'g','e','t','R','e','s','u','l','t'};
static const Char sgim_30[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_TypeSwitch, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_TypeSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_TypeSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_TypeSwitch cl_ca_mcgill_sable_soot_TypeSwitch = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_TypeSwitch),
    31,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_TypeSwitch,
    st_ca_mcgill_sable_soot_TypeSwitch,
    0,
    init__hEn3f,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_TypeSwitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__hEn3f,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,19,xt_init__hEn3f},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
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
	{TMIT_native_code, caseArrayType_A_kO2Qc,(const Char *)&nmim_12,13,
	(const Char *)&sgim_12,35,1,0x1,0,xt_caseArrayType_A_kO2Qc},
	{TMIT_native_code, caseBooleanType_B_OUFIT,(const Char *)&nmim_13,15,
	(const Char *)&sgim_13,37,1,0x1,1,xt_caseBooleanType_B_OUFIT},
	{TMIT_native_code, caseByteType_B_WcDiD,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,34,1,0x1,2,xt_caseByteType_B_WcDiD},
	{TMIT_native_code, caseCharType_C_8951U,(const Char *)&nmim_15,12,
	(const Char *)&sgim_15,34,1,0x1,3,xt_caseCharType_C_8951U},
	{TMIT_native_code, caseDoubleType_D_uhKoo,(const Char *)&nmim_16,14,
	(const Char *)&sgim_16,36,1,0x1,4,xt_caseDoubleType_D_uhKoo},
	{TMIT_native_code, caseFloatType_F_QRtel,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,35,1,0x1,5,xt_caseFloatType_F_QRtel},
	{TMIT_native_code, caseIntType_I_ODuHy,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,33,1,0x1,6,xt_caseIntType_I_ODuHy},
	{TMIT_native_code, caseLongType_L_oZuIo,(const Char *)&nmim_19,12,
	(const Char *)&sgim_19,34,1,0x1,7,xt_caseLongType_L_oZuIo},
	{TMIT_native_code, caseRefType_R_WnAlw,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,33,1,0x1,8,xt_caseRefType_R_WnAlw},
	{TMIT_native_code, caseShortType_S_2MJrs,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,35,1,0x1,9,xt_caseShortType_S_2MJrs},
	{TMIT_native_code, caseStmtAddressType_S_6w2qx,(const Char *)&nmim_22,19,
	(const Char *)&sgim_22,41,1,0x1,10,xt_caseStmtAddressType_S_6w2qx},
	{TMIT_native_code, caseUnknownType_U_Mn0wN,(const Char *)&nmim_23,15,
	(const Char *)&sgim_23,37,1,0x1,11,xt_caseUnknownType_U_Mn0wN},
	{TMIT_native_code, caseVoidType_V_287iS,(const Char *)&nmim_24,12,
	(const Char *)&sgim_24,34,1,0x1,12,xt_caseVoidType_V_287iS},
	{TMIT_native_code, caseNullType_N_ipySa,(const Char *)&nmim_25,12,
	(const Char *)&sgim_25,34,1,0x1,13,xt_caseNullType_N_ipySa},
	{TMIT_native_code, caseErroneousType_E_Qb6aF,(const Char *)&nmim_26,17,
	(const Char *)&sgim_26,39,1,0x1,14,xt_caseErroneousType_E_Qb6aF},
	{TMIT_native_code, defaultCase_T_TjmPJ,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,30,1,0x1,15,xt_defaultCase_T_TjmPJ},
	{TMIT_native_code, caseDefault_T_Hrrk6,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,30,1,0x1,16,xt_caseDefault_T_Hrrk6},
	{TMIT_native_code, setResult_O_mipzV,(const Char *)&nmim_29,9,
	(const Char *)&sgim_29,21,1,0x1,17,xt_setResult_O_mipzV},
	{TMIT_native_code, getResult__q3qpX,(const Char *)&nmim_30,9,
	(const Char *)&sgim_30,20,1,0x1,18,xt_getResult__q3qpX},
    } /* end of methodsigs */
};


/*M caseArrayType_A_kO2Qc: ca.mcgill.sable.soot.TypeSwitch.caseArrayType(Lca/mcgill/sable/soot/ArrayType;)V */

Class xt_caseArrayType_A_kO2Qc[] = { 0 };

Void caseArrayType_A_kO2Qc(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseBooleanType_B_OUFIT: ca.mcgill.sable.soot.TypeSwitch.caseBooleanType(Lca/mcgill/sable/soot/BooleanType;)V */

Class xt_caseBooleanType_B_OUFIT[] = { 0 };

Void caseBooleanType_B_OUFIT(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseByteType_B_WcDiD: ca.mcgill.sable.soot.TypeSwitch.caseByteType(Lca/mcgill/sable/soot/ByteType;)V */

Class xt_caseByteType_B_WcDiD[] = { 0 };

Void caseByteType_B_WcDiD(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCharType_C_8951U: ca.mcgill.sable.soot.TypeSwitch.caseCharType(Lca/mcgill/sable/soot/CharType;)V */

Class xt_caseCharType_C_8951U[] = { 0 };

Void caseCharType_C_8951U(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseDoubleType_D_uhKoo: ca.mcgill.sable.soot.TypeSwitch.caseDoubleType(Lca/mcgill/sable/soot/DoubleType;)V */

Class xt_caseDoubleType_D_uhKoo[] = { 0 };

Void caseDoubleType_D_uhKoo(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseFloatType_F_QRtel: ca.mcgill.sable.soot.TypeSwitch.caseFloatType(Lca/mcgill/sable/soot/FloatType;)V */

Class xt_caseFloatType_F_QRtel[] = { 0 };

Void caseFloatType_F_QRtel(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIntType_I_ODuHy: ca.mcgill.sable.soot.TypeSwitch.caseIntType(Lca/mcgill/sable/soot/IntType;)V */

Class xt_caseIntType_I_ODuHy[] = { 0 };

Void caseIntType_I_ODuHy(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLongType_L_oZuIo: ca.mcgill.sable.soot.TypeSwitch.caseLongType(Lca/mcgill/sable/soot/LongType;)V */

Class xt_caseLongType_L_oZuIo[] = { 0 };

Void caseLongType_L_oZuIo(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRefType_R_WnAlw: ca.mcgill.sable.soot.TypeSwitch.caseRefType(Lca/mcgill/sable/soot/RefType;)V */

Class xt_caseRefType_R_WnAlw[] = { 0 };

Void caseRefType_R_WnAlw(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShortType_S_2MJrs: ca.mcgill.sable.soot.TypeSwitch.caseShortType(Lca/mcgill/sable/soot/ShortType;)V */

Class xt_caseShortType_S_2MJrs[] = { 0 };

Void caseShortType_S_2MJrs(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStmtAddressType_S_6w2qx: ca.mcgill.sable.soot.TypeSwitch.caseStmtAddressType(Lca/mcgill/sable/soot/StmtAddressType;)V */

Class xt_caseStmtAddressType_S_6w2qx[] = { 0 };

Void caseStmtAddressType_S_6w2qx(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseUnknownType_U_Mn0wN: ca.mcgill.sable.soot.TypeSwitch.caseUnknownType(Lca/mcgill/sable/soot/UnknownType;)V */

Class xt_caseUnknownType_U_Mn0wN[] = { 0 };

Void caseUnknownType_U_Mn0wN(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseVoidType_V_287iS: ca.mcgill.sable.soot.TypeSwitch.caseVoidType(Lca/mcgill/sable/soot/VoidType;)V */

Class xt_caseVoidType_V_287iS[] = { 0 };

Void caseVoidType_V_287iS(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNullType_N_ipySa: ca.mcgill.sable.soot.TypeSwitch.caseNullType(Lca/mcgill/sable/soot/NullType;)V */

Class xt_caseNullType_N_ipySa[] = { 0 };

Void caseNullType_N_ipySa(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseErroneousType_E_Qb6aF: ca.mcgill.sable.soot.TypeSwitch.caseErroneousType(Lca/mcgill/sable/soot/ErroneousType;)V */

Class xt_caseErroneousType_E_Qb6aF[] = { 0 };

Void caseErroneousType_E_Qb6aF(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		defaultCase_T_TjmPJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_T_TjmPJ: ca.mcgill.sable.soot.TypeSwitch.defaultCase(Lca/mcgill/sable/soot/Type;)V */

Class xt_defaultCase_T_TjmPJ[] = { 0 };

Void defaultCase_T_TjmPJ(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M caseDefault_T_Hrrk6: ca.mcgill.sable.soot.TypeSwitch.caseDefault(Lca/mcgill/sable/soot/Type;)V */

Class xt_caseDefault_T_Hrrk6[] = { 0 };

Void caseDefault_T_Hrrk6(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M setResult_O_mipzV: ca.mcgill.sable.soot.TypeSwitch.setResult(Ljava/lang/Object;)V */

Class xt_setResult_O_mipzV[] = { 0 };

Void setResult_O_mipzV(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->result = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getResult__q3qpX: ca.mcgill.sable.soot.TypeSwitch.getResult()Ljava/lang/Object; */

Class xt_getResult__q3qpX[] = { 0 };

Object getResult__q3qpX(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->result;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__hEn3f: ca.mcgill.sable.soot.TypeSwitch.<init>()V */

Class xt_init__hEn3f[] = { 0 };

Void init__hEn3f(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_TypeSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','T','y','p','e','S','w','i','t','c','h'};

const void *st_ca_mcgill_sable_soot_TypeSwitch[] = {
    ch_ca_mcgill_sable_soot_TypeSwitch+31,	/* 0. ca.mcgill.sable.soot.TypeSwitch */
    0};
