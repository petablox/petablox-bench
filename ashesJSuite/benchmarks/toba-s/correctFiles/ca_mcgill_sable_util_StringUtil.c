/*  ca_mcgill_sable_util_StringUtil.c -- from Java class ca.mcgill.sable.util.StringUtil  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_StringUtil.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_StringUtil.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_util_StringUtil[];
extern const void *st_ca_mcgill_sable_util_StringUtil[];
extern Class xt_padLeft_Si_YfP2U[];
extern Class xt_padRight_Si_H1yUt[];
extern Class xt_init__FYj8m[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_StringUtil.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_StringUtil.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_StringUtil.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_StringUtil.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','t','r','i','n','g','U','t','i','l'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
static const Char nmsm_0[] = {
'p','a','d','L','e','f','t'};
static const Char sgsm_0[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmsm_1[] = {
'p','a','d','R','i','g','h','t'};
static const Char sgsm_1[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
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
    {TMIT_native_code, (Void(*)())padLeft_Si_YfP2U,
	(const Char *)&nmsm_0,7,(const Char *)&sgsm_0,39,
	1,0x9,0,xt_padLeft_Si_YfP2U},
    {TMIT_native_code, (Void(*)())padRight_Si_H1yUt,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,39,
	1,0x9,1,xt_padRight_Si_H1yUt},
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
} inr_ca_mcgill_sable_util_StringUtil = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_StringUtil.C.classclass, 0};

struct cl_ca_mcgill_sable_util_StringUtil cl_ca_mcgill_sable_util_StringUtil = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_StringUtil),
    12,
    2,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_util_StringUtil,
    st_ca_mcgill_sable_util_StringUtil,
    0,
    init__FYj8m,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_StringUtil,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__FYj8m,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,2,xt_init__FYj8m},
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
    } /* end of methodsigs */
};


/*M padLeft_Si_YfP2U: ca.mcgill.sable.util.StringUtil.padLeft(Ljava/lang/String;I)Ljava/lang/String; */

Class xt_padLeft_Si_YfP2U[] = { 0 };

Object padLeft_Si_YfP2U(Object p1, Int p2)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av3;
Int i0, i1, i2, i3, i4, i5;
Int iv1, iv2, iv4;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		length__rpuzQ.f(a1);
	i2 = iv1;
	if (i1 < i2)
		GOTO(5,L1);
	a1 = av0;
	return a1;

L1:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		length__rpuzQ.f(a2);
	i1 = i1 - i2;
	iv2 = i1;
	i1 = iv2;
	a1 = anewarray(&cl_char,i1);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(24,L3);

L2:	a1 = av3;
	i2 = iv4;
	i3 = 32;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct carray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct carray*)a1)->data[i2] = i3;
	iv4 += 1;
L3:	i1 = iv4;
	i2 = iv2;
	if (i1 < i2)
		GOBACK(39,L2);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = new(&cl_java_lang_String.C);
	a4 = a3;
	a5 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_ac_ippqA(a4,a5);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M padRight_Si_H1yUt: ca.mcgill.sable.util.StringUtil.padRight(Ljava/lang/String;I)Ljava/lang/String; */

Class xt_padRight_Si_H1yUt[] = { 0 };

Object padRight_Si_H1yUt(Object p1, Int p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av3;
Int i0, i1, i2, i3, i4;
Int iv1, iv2, iv4;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		length__rpuzQ.f(a1);
	i2 = iv1;
	if (i1 < i2)
		GOTO(5,L1);
	a1 = av0;
	return a1;

L1:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		length__rpuzQ.f(a2);
	i1 = i1 - i2;
	iv2 = i1;
	i1 = iv2;
	a1 = anewarray(&cl_char,i1);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(24,L3);

L2:	a1 = av3;
	i2 = iv4;
	i3 = 32;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct carray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct carray*)a1)->data[i2] = i3;
	iv4 += 1;
L3:	i1 = iv4;
	i2 = iv2;
	if (i1 < i2)
		GOBACK(39,L2);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = new(&cl_java_lang_String.C);
	a3 = a2;
	a4 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_ac_ippqA(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__FYj8m: ca.mcgill.sable.util.StringUtil.<init>()V */

Class xt_init__FYj8m[] = { 0 };

Void init__FYj8m(Object p0)
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



const Char ch_ca_mcgill_sable_util_StringUtil[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','t','r','i','n','g','U','t','i','l'};

const void *st_ca_mcgill_sable_util_StringUtil[] = {
    ch_ca_mcgill_sable_util_StringUtil+31,	/* 0. ca.mcgill.sable.util.StringUtil */
    0};
