/*  ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.c -- from Java class ca.mcgill.sable.soot.jimple.PrintJimpleBodyOption  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption[];
extern const void *st_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption[];
extern Class xt_init__6M6Uo[];
extern Class xt_useAbbreviations_i_bsXhQ[];
extern Class xt_debugMode_i_bJZlB[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(49) nmchars = {&acl_char, 0, 49, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','P','r','i','n','t','J','i','m',
'p','l','e','B','o','d','y','O','p','t','i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 49 };
static const Char nmcv_0[] = {
'U','S','E','_','A','B','B','R','E','V','I','A','T','I','O','N','S'};
static const Char sgcv_0[] = {
'I'};
static const Char nmcv_1[] = {
'D','E','B','U','G','_','M','O','D','E'};
static const Char sgcv_1[] = {
'I'};
static const Char nmsm_0[] = {
'u','s','e','A','b','b','r','e','v','i','a','t','i','o','n','s'};
static const Char sgsm_0[] = {
'(','I',')','Z'};
static const Char nmsm_1[] = {
'd','e','b','u','g','M','o','d','e'};
static const Char sgsm_1[] = {
'(','I',')','Z'};
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

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.V.USE_ABBREVIATIONS,(const Char *)&nmcv_0,17,(const Char *)&sgcv_0,1,1,0x19,0}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.V.DEBUG_MODE,(const Char *)&nmcv_1,10,(const Char *)&sgcv_1,1,1,0x19,1}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())useAbbreviations_i_bsXhQ,
	(const Char *)&nmsm_0,16,(const Char *)&sgsm_0,4,
	1,0x9,1,xt_useAbbreviations_i_bsXhQ},
    {TMIT_native_code, (Void(*)())debugMode_i_bJZlB,
	(const Char *)&nmsm_1,9,(const Char *)&sgsm_1,4,
	1,0x9,2,xt_debugMode_i_bJZlB},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.V.USE_ABBREVIATIONS = 1;
   }
   {
   cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.V.DEBUG_MODE = 2;
   }
}

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption),
    12,
    2,
    0,
    2,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption,
    st_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption,
    0,
    init__6M6Uo,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__6M6Uo,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x4,0,xt_init__6M6Uo},
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
    } /* end of methodsigs */
};


/*M init__6M6Uo: ca.mcgill.sable.soot.jimple.PrintJimpleBodyOption.<init>()V */

Class xt_init__6M6Uo[] = { 0 };

Void init__6M6Uo(Object p0)
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

/*M useAbbreviations_i_bsXhQ: ca.mcgill.sable.soot.jimple.PrintJimpleBodyOption.useAbbreviations(I)Z */

Class xt_useAbbreviations_i_bsXhQ[] = { 0 };

Boolean useAbbreviations_i_bsXhQ(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 1;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(3,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M debugMode_i_bJZlB: ca.mcgill.sable.soot.jimple.PrintJimpleBodyOption.debugMode(I)Z */

Class xt_debugMode_i_bJZlB[] = { 0 };

Boolean debugMode_i_bJZlB(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 2;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(3,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','P','r','i','n','t','J','i','m',
'p','l','e','B','o','d','y','O','p','t','i','o','n'};

const void *st_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption[] = {
    ch_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption+49,	/* 0. ca.mcgill.sable.soot.jimple.PrintJimpleB */
    0};
