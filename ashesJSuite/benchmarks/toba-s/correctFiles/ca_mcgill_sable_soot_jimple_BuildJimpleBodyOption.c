/*  ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.c -- from Java class ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption[];
extern const void *st_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption[];
extern Class xt_noTyping_i_kptnC[];
extern Class xt_noRenaming_i_63pxN[];
extern Class xt_noSplitting_i_VulE9[];
extern Class xt_noCleanup_i_32ZQT[];
extern Class xt_noPacking_i_MiLiL[];
extern Class xt_noAggregating_i_3mlsA[];
extern Class xt_init__Bd1Al[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(49) nmchars = {&acl_char, 0, 49, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','B','u','i','l','d','J','i','m',
'p','l','e','B','o','d','y','O','p','t','i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 49 };
static const Char nmcv_0[] = {
'N','O','_','T','Y','P','I','N','G'};
static const Char sgcv_0[] = {
'I'};
static const Char nmcv_1[] = {
'N','O','_','R','E','N','A','M','I','N','G'};
static const Char sgcv_1[] = {
'I'};
static const Char nmcv_2[] = {
'N','O','_','S','P','L','I','T','T','I','N','G'};
static const Char sgcv_2[] = {
'I'};
static const Char nmcv_3[] = {
'N','O','_','C','L','E','A','N','U','P'};
static const Char sgcv_3[] = {
'I'};
static const Char nmcv_4[] = {
'N','O','_','P','A','C','K','I','N','G'};
static const Char sgcv_4[] = {
'I'};
static const Char nmcv_5[] = {
'N','O','_','A','G','G','R','E','G','A','T','I','N','G'};
static const Char sgcv_5[] = {
'I'};
static const Char nmsm_0[] = {
'n','o','T','y','p','i','n','g'};
static const Char sgsm_0[] = {
'(','I',')','Z'};
static const Char nmsm_1[] = {
'n','o','R','e','n','a','m','i','n','g'};
static const Char sgsm_1[] = {
'(','I',')','Z'};
static const Char nmsm_2[] = {
'n','o','S','p','l','i','t','t','i','n','g'};
static const Char sgsm_2[] = {
'(','I',')','Z'};
static const Char nmsm_3[] = {
'n','o','C','l','e','a','n','u','p'};
static const Char sgsm_3[] = {
'(','I',')','Z'};
static const Char nmsm_4[] = {
'n','o','P','a','c','k','i','n','g'};
static const Char sgsm_4[] = {
'(','I',')','Z'};
static const Char nmsm_5[] = {
'n','o','A','g','g','r','e','g','a','t','i','n','g'};
static const Char sgsm_5[] = {
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
    {0,&cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_TYPING,(const Char *)&nmcv_0,9,(const Char *)&sgcv_0,1,1,0x19,0}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_RENAMING,(const Char *)&nmcv_1,11,(const Char *)&sgcv_1,1,1,0x19,1}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_SPLITTING,(const Char *)&nmcv_2,12,(const Char *)&sgcv_2,1,1,0x19,2}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_CLEANUP,(const Char *)&nmcv_3,10,(const Char *)&sgcv_3,1,1,0x19,3}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_PACKING,(const Char *)&nmcv_4,10,(const Char *)&sgcv_4,1,1,0x19,4}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_AGGREGATING,(const Char *)&nmcv_5,14,(const Char *)&sgcv_5,1,1,0x19,5}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())noTyping_i_kptnC,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,4,
	1,0x9,0,xt_noTyping_i_kptnC},
    {TMIT_native_code, (Void(*)())noRenaming_i_63pxN,
	(const Char *)&nmsm_1,10,(const Char *)&sgsm_1,4,
	1,0x9,1,xt_noRenaming_i_63pxN},
    {TMIT_native_code, (Void(*)())noSplitting_i_VulE9,
	(const Char *)&nmsm_2,11,(const Char *)&sgsm_2,4,
	1,0x9,2,xt_noSplitting_i_VulE9},
    {TMIT_native_code, (Void(*)())noCleanup_i_32ZQT,
	(const Char *)&nmsm_3,9,(const Char *)&sgsm_3,4,
	1,0x9,3,xt_noCleanup_i_32ZQT},
    {TMIT_native_code, (Void(*)())noPacking_i_MiLiL,
	(const Char *)&nmsm_4,9,(const Char *)&sgsm_4,4,
	1,0x9,4,xt_noPacking_i_MiLiL},
    {TMIT_native_code, (Void(*)())noAggregating_i_3mlsA,
	(const Char *)&nmsm_5,13,(const Char *)&sgsm_5,4,
	1,0x9,5,xt_noAggregating_i_3mlsA},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_TYPING = 1;
   }
   {
   cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_RENAMING = 2;
   }
   {
   cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_SPLITTING = 4;
   }
   {
   cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_CLEANUP = 8;
   }
   {
   cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_PACKING = 16;
   }
   {
   cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.V.NO_AGGREGATING = 32;
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
} inr_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption),
    12,
    6,
    0,
    6,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption,
    st_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption,
    0,
    init__Bd1Al,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__Bd1Al,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,6,xt_init__Bd1Al},
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


/*M noTyping_i_kptnC: ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption.noTyping(I)Z */

Class xt_noTyping_i_kptnC[] = { 0 };

Boolean noTyping_i_kptnC(Int p1)
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

/*M noRenaming_i_63pxN: ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption.noRenaming(I)Z */

Class xt_noRenaming_i_63pxN[] = { 0 };

Boolean noRenaming_i_63pxN(Int p1)
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

/*M noSplitting_i_VulE9: ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption.noSplitting(I)Z */

Class xt_noSplitting_i_VulE9[] = { 0 };

Boolean noSplitting_i_VulE9(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 4;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(3,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M noCleanup_i_32ZQT: ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption.noCleanup(I)Z */

Class xt_noCleanup_i_32ZQT[] = { 0 };

Boolean noCleanup_i_32ZQT(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 8;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M noPacking_i_MiLiL: ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption.noPacking(I)Z */

Class xt_noPacking_i_MiLiL[] = { 0 };

Boolean noPacking_i_MiLiL(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 16;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M noAggregating_i_3mlsA: ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption.noAggregating(I)Z */

Class xt_noAggregating_i_3mlsA[] = { 0 };

Boolean noAggregating_i_3mlsA(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 32;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M init__Bd1Al: ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption.<init>()V */

Class xt_init__Bd1Al[] = { 0 };

Void init__Bd1Al(Object p0)
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



const Char ch_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','B','u','i','l','d','J','i','m',
'p','l','e','B','o','d','y','O','p','t','i','o','n'};

const void *st_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption[] = {
    ch_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption+49,	/* 0. ca.mcgill.sable.soot.jimple.BuildJimpleB */
    0};
