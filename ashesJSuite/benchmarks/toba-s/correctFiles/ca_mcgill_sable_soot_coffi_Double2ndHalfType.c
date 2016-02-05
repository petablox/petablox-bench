/*  ca_mcgill_sable_soot_coffi_Double2ndHalfType.c -- from Java class ca.mcgill.sable.soot.coffi.Double2ndHalfType  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_Double2ndHalfType.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "ca_mcgill_sable_util_Switchable.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_ValueObject.C,
    &cl_ca_mcgill_sable_util_Switchable.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_coffi_Double2ndHalfType[];
extern const void *st_ca_mcgill_sable_soot_coffi_Double2ndHalfType[];
extern Class xt_init__TJvN9[];
extern Class xt_v__8oEDD[];
extern Class xt_equals_T_b8QmB[];
extern Class xt_toString__FlYSv[];
extern Class xt_clinit__Kh4Lm[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  494d5bef  (7)  apply  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.M.apply_S_1raGs,
    0, 0,
};

static const CARRAY(44) nmchars = {&acl_char, 0, 44, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','D','o','u','b','l','e','2','n','d',
'H','a','l','f','T','y','p','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 44 };
static const Char nmcv_0[] = {
'c','o','n','s','t','a','n','t'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','D','o','u','b','l','e','2','n',
'd','H','a','l','f','T','y','p','e',';'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','D','o','u','b','l','e',
'2','n','d','H','a','l','f','T','y','p','e',';'};
static const Char nmsm_1[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_1[] = {
'(',')','V'};
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
'm','e','r','g','e'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','S','o','o','t',
'C','l','a','s','s','M','a','n','a','g','e','r',';',')','L','c','a','/',
'm','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/',
'T','y','p','e',';'};
static const Char nmim_13[] = {
'a','p','p','l','y'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};
static const Char nmim_14[] = {
'e','q','u','a','l','s'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','Z'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.V.constant,(const Char *)&nmcv_0,8,(const Char *)&sgcv_0,46,1,0xa,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v__8oEDD,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,48,
	1,0x9,1,xt_v__8oEDD},
    {TMIT_native_code, (Void(*)())clinit__Kh4Lm,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,4,xt_clinit__Kh4Lm},
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
} inr_ca_mcgill_sable_soot_coffi_Double2ndHalfType = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_Double2ndHalfType),
    15,
    2,
    0,
    1,
    3, supers,
    2, 0, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_Double2ndHalfType,
    st_ca_mcgill_sable_soot_coffi_Double2ndHalfType,
    clinit__Kh4Lm,
    init__TJvN9,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_Double2ndHalfType,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__TJvN9,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,0,xt_init__TJvN9},
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
	{TMIT_native_code, toString__FlYSv,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__FlYSv},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, merge_TS_yfmlv,(const Char *)&nmim_12,5,
	(const Char *)&sgim_12,95,0,0x1,2,0},
	{TMIT_native_code, apply_S_1raGs,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,32,0,0x8001,3,0},
	{TMIT_native_code, equals_T_b8QmB,(const Char *)&nmim_14,6,
	(const Char *)&sgim_14,30,1,0x1,2,xt_equals_T_b8QmB},
    } /* end of methodsigs */
};


/*M init__TJvN9: ca.mcgill.sable.soot.coffi.Double2ndHalfType.<init>()V */

Class xt_init__TJvN9[] = { 0 };

Void init__TJvN9(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__vh6sx(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M v__8oEDD: ca.mcgill.sable.soot.coffi.Double2ndHalfType.v()Lca/mcgill/sable/soot/coffi/Double2ndHalfType; */

Class xt_v__8oEDD[] = { 0 };

Object v__8oEDD(void)
{
Object a0, a1;
PROLOGUE;


	if (cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.C);

L0:	a1 = cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.V.constant;
	return a1;

	/*NOTREACHED*/
}

/*M equals_T_b8QmB: ca.mcgill.sable.soot.coffi.Double2ndHalfType.equals(Lca/mcgill/sable/soot/Type;)Z */

Class xt_equals_T_b8QmB[] = { 0 };

Boolean equals_T_b8QmB(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1;
Object av0, av1;
Int i0, i1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	return i1;

	/*NOTREACHED*/
}

/*M toString__FlYSv: ca.mcgill.sable.soot.coffi.Double2ndHalfType.toString()Ljava/lang/String; */

Class xt_toString__FlYSv[] = { 0 };

Object toString__FlYSv(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_Double2ndHalfType[1];
	return a1;

	/*NOTREACHED*/
}

/*M clinit__Kh4Lm: ca.mcgill.sable.soot.coffi.Double2ndHalfType.<clinit>()V */

Class xt_clinit__Kh4Lm[] = { 0 };

Void clinit__Kh4Lm(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__TJvN9(a2);
	cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.V.constant = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_Double2ndHalfType[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','D','o','u','b','l','e','2','n','d',
'H','a','l','f','T','y','p','e','d','o','u','b','l','e','2','n','d','h',
'a','l','f'};

const void *st_ca_mcgill_sable_soot_coffi_Double2ndHalfType[] = {
    ch_ca_mcgill_sable_soot_coffi_Double2ndHalfType+44,	/* 0. ca.mcgill.sable.soot.coffi.Double2ndHalf */
    ch_ca_mcgill_sable_soot_coffi_Double2ndHalfType+57,	/* 1. double2ndhalf */
    0};
