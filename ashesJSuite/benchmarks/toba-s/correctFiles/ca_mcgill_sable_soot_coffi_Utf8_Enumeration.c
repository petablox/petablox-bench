/*  ca_mcgill_sable_soot_coffi_Utf8_Enumeration.c -- from Java class ca.mcgill.sable.soot.coffi.Utf8_Enumeration  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_Utf8_Enumeration.h"
#include "java_util_Enumeration.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_java_util_Enumeration.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_coffi_Utf8_Enumeration[];
extern const void *st_ca_mcgill_sable_soot_coffi_Utf8_Enumeration[];
extern Class xt_init__S6oss[];
extern Class xt_init_ab_Dkn7l[];
extern Class xt_reset_ab_8um6Y[];
extern Class xt_hasMoreElements__u9gJ7[];
extern Class xt_nextElement__5z215[];

#define HASHMASK 0xf
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  3.  a091a143  (3)  hasMoreElements  */
/*  a.  66471fba  (a)  nextElement  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
static const struct ihash htable[17] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.M.clone__dslwm,
    -1601068733, &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.M.hasMoreElements__u9gJ7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1715937210, &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.M.nextElement__5z215,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(43) nmchars = {&acl_char, 0, 43, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','U','t','f','8','_','E','n','u','m',
'e','r','a','t','i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 43 };
static const Char nmiv_0[] = {
'c'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'c','u','r','i','n','d','e','x'};
static const Char sgiv_1[] = {
'S'};
static const Char nmiv_2[] = {
'l','e','n','g','t','h'};
static const Char sgiv_2[] = {
'S'};
static const Char nmiv_3[] = {
'b','y','t','e','s'};
static const Char sgiv_3[] = {
'[','B'};
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
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','[','B',')','V'};
static const Char nmim_13[] = {
'r','e','s','e','t'};
static const Char sgim_13[] = {
'(','[','B',')','V'};
static const Char nmim_14[] = {
'h','a','s','M','o','r','e','E','l','e','m','e','n','t','s'};
static const Char sgim_14[] = {
'(',')','Z'};
static const Char nmim_15[] = {
'n','e','x','t','E','l','e','m','e','n','t'};
static const Char sgim_15[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration, c), 0,(const Char *)&nmiv_0,1,(const Char *)&sgiv_0,1,1,0x1,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration, curindex), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,1,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration, length), 0,(const Char *)&nmiv_2,6,(const Char *)&sgiv_2,1,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration, bytes), 0,(const Char *)&nmiv_3,5,(const Char *)&sgiv_3,2,1,0x2,3}, 
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
} inr_ca_mcgill_sable_soot_coffi_Utf8_Enumeration = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration),
    16,
    0,
    4,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_Utf8_Enumeration,
    st_ca_mcgill_sable_soot_coffi_Utf8_Enumeration,
    0,
    init__S6oss,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_Utf8_Enumeration,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__S6oss,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__S6oss},
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
	{TMIT_native_code, init_ab_Dkn7l,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,5,1,0x1,1,xt_init_ab_Dkn7l},
	{TMIT_native_code, reset_ab_8um6Y,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,5,1,0x1,2,xt_reset_ab_8um6Y},
	{TMIT_native_code, hasMoreElements__u9gJ7,(const Char *)&nmim_14,15,
	(const Char *)&sgim_14,3,1,0x8001,3,xt_hasMoreElements__u9gJ7},
	{TMIT_native_code, nextElement__5z215,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,20,1,0x8001,4,xt_nextElement__5z215},
    } /* end of methodsigs */
};


/*M init__S6oss: ca.mcgill.sable.soot.coffi.Utf8_Enumeration.<init>()V */

Class xt_init__S6oss[] = { 0 };

Void init__S6oss(Object p0)
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

/*M init_ab_Dkn7l: ca.mcgill.sable.soot.coffi.Utf8_Enumeration.<init>([B)V */

Class xt_init_ab_Dkn7l[] = { 0 };

Void init_ab_Dkn7l(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->bytes = a2;
	a1 = av0;
	i2 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->curindex = i2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a2)->bytes;
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct barray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct barray*)a2)->data[i3];
	i3 = 255;
	i2 = i2 & i3;
	i3 = 8;
	i2 = i2 << (i3 & 31);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->bytes;
	i4 = 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct barray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct barray*)a3)->data[i4];
	i4 = 255;
	i3 = i3 & i4;
	i2 = i2 + i3;
	i3 = 2;
	i2 = i2 + i3;
	i2 = (Short)i2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->length = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M reset_ab_8um6Y: ca.mcgill.sable.soot.coffi.Utf8_Enumeration.reset([B)V */

Class xt_reset_ab_8um6Y[] = { 0 };

Void reset_ab_8um6Y(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->bytes = a2;
	a1 = av0;
	i2 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->curindex = i2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a2)->bytes;
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct barray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct barray*)a2)->data[i3];
	i3 = 255;
	i2 = i2 & i3;
	i3 = 8;
	i2 = i2 << (i3 & 31);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->bytes;
	i4 = 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct barray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct barray*)a3)->data[i4];
	i4 = 255;
	i3 = i3 & i4;
	i2 = i2 + i3;
	i3 = 2;
	i2 = i2 + i3;
	i2 = (Short)i2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->length = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasMoreElements__u9gJ7: ca.mcgill.sable.soot.coffi.Utf8_Enumeration.hasMoreElements()Z */

Class xt_hasMoreElements__u9gJ7[] = { 0 };

Boolean hasMoreElements__u9gJ7(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->curindex;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a2)->length;
	if (i1 >= i2)
		GOTO(8,L1);
	i1 = 1;
	return i1;

L1:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M nextElement__5z215: ca.mcgill.sable.soot.coffi.Utf8_Enumeration.nextElement()Ljava/lang/Object; */

Class xt_nextElement__5z215[] = { 0 };

Object nextElement__5z215(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
Int i0, i1, i2, i3, i4, i5;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->bytes;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->curindex;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	i4 = (Short)i4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->curindex = i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	iv1 = i1;
	i1 = iv1;
	i2 = -128;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(23,L1);
	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->c = i2;
	GOTO(31,L3);

L1:	i1 = iv1;
	i2 = -32;
	i1 = i1 & i2;
	i2 = 192;
	if (i1 != i2)
		GOTO(41,L2);
	a1 = av0;
	i2 = iv1;
	i3 = 31;
	i2 = i2 & i3;
	i3 = 6;
	i2 = i2 << (i3 & 31);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->c = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->bytes;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->curindex;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	i4 = (Short)i4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->curindex = i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	iv1 = i1;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a2)->c;
	i3 = iv1;
	i4 = 63;
	i3 = i3 & i4;
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->c = i2;
	GOTO(86,L3);

L2:	a1 = av0;
	i2 = iv1;
	i3 = 15;
	i2 = i2 & i3;
	i3 = 12;
	i2 = i2 << (i3 & 31);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->c = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->bytes;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->curindex;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	i4 = (Short)i4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->curindex = i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	iv1 = i1;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a2)->c;
	i3 = iv1;
	i4 = 63;
	i3 = i3 & i4;
	i4 = 6;
	i3 = i3 << (i4 & 31);
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->c = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->bytes;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->curindex;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	i4 = (Short)i4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a3)->curindex = i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	iv1 = i1;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a2)->c;
	i3 = iv1;
	i4 = 63;
	i3 = i3 & i4;
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->c = i2;
L3:	a1 = av0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_Utf8_Enumeration[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','U','t','f','8','_','E','n','u','m',
'e','r','a','t','i','o','n'};

const void *st_ca_mcgill_sable_soot_coffi_Utf8_Enumeration[] = {
    ch_ca_mcgill_sable_soot_coffi_Utf8_Enumeration+43,	/* 0. ca.mcgill.sable.soot.coffi.Utf8_Enumerat */
    0};
