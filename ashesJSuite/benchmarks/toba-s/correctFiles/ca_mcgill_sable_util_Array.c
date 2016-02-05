/*  ca_mcgill_sable_util_Array.c -- from Java class ca.mcgill.sable.util.Array  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_Array.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Array.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_util_Array[];
extern const void *st_ca_mcgill_sable_util_Array[];
extern Class xt_clear__gb602[];
extern Class xt_init__fJahH[];
extern Class xt_doubleCapacity__AC9Kp[];
extern Class xt_addElement_O_qCucH[];
extern Class xt_insertElementAt_Oi_M2o14[];
extern Class xt_contains_O_ye462[];
extern Class xt_size__dc1II[];
extern Class xt_elementAt_i_ZO9Fg[];
extern Class xt_removeElementAt_i_9280s[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0, -1992104095, &cl_ca_mcgill_sable_util_Array.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_Array.M.clone__dslwm, 0, 0, 0, 0,
    0, 0, -1028981426, &cl_ca_mcgill_sable_util_Array.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_Array.M.toString__4d9OF, 0, 0,
};

static const CARRAY(26) nmchars = {&acl_char, 0, 26, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','r','r','a','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 26 };
static const Char nmcv_0[] = {
'D','E','F','A','U','L','T','_','S','I','Z','E'};
static const Char sgcv_0[] = {
'I'};
static const Char nmiv_0[] = {
'n','u','m','E','l','e','m','e','n','t','s'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'm','a','x','E','l','e','m','e','n','t','s'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'e','l','e','m','e','n','t','s'};
static const Char sgiv_2[] = {
'[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';'};
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
'c','l','e','a','r'};
static const Char sgim_12[] = {
'(',')','V'};
static const Char nmim_13[] = {
'd','o','u','b','l','e','C','a','p','a','c','i','t','y'};
static const Char sgim_13[] = {
'(',')','V'};
static const Char nmim_14[] = {
'a','d','d','E','l','e','m','e','n','t'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_15[] = {
'i','n','s','e','r','t','E','l','e','m','e','n','t','A','t'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','I',')','V'};
static const Char nmim_16[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_16[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_17[] = {
's','i','z','e'};
static const Char sgim_17[] = {
'(',')','I'};
static const Char nmim_18[] = {
'e','l','e','m','e','n','t','A','t'};
static const Char sgim_18[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_19[] = {
'r','e','m','o','v','e','E','l','e','m','e','n','t','A','t'};
static const Char sgim_19[] = {
'(','I',')','V'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_util_Array.V.DEFAULT_SIZE,(const Char *)&nmcv_0,12,(const Char *)&sgcv_0,1,1,0x1a,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Array, numElements), 0,(const Char *)&nmiv_0,11,(const Char *)&sgiv_0,1,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_Array, maxElements), 0,(const Char *)&nmiv_1,11,(const Char *)&sgiv_1,1,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_Array, elements), 0,(const Char *)&nmiv_2,8,(const Char *)&sgiv_2,19,1,0x2,3}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_undefined}
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_util_Array.V.DEFAULT_SIZE = 8;
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
} inr_ca_mcgill_sable_util_Array = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Array.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Array cl_ca_mcgill_sable_util_Array = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Array),
    20,
    0,
    3,
    1,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_util_Array,
    st_ca_mcgill_sable_util_Array,
    0,
    init__fJahH,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Array,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__fJahH,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,1,xt_init__fJahH},
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
	{TMIT_native_code, clear__gb602,(const Char *)&nmim_12,5,
	(const Char *)&sgim_12,3,1,0x1,0,xt_clear__gb602},
	{TMIT_native_code, doubleCapacity__AC9Kp,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,3,1,0x2,2,xt_doubleCapacity__AC9Kp},
	{TMIT_native_code, addElement_O_qCucH,(const Char *)&nmim_14,10,
	(const Char *)&sgim_14,21,1,0x1,3,xt_addElement_O_qCucH},
	{TMIT_native_code, insertElementAt_Oi_M2o14,(const Char *)&nmim_15,15,
	(const Char *)&sgim_15,22,1,0x1,4,xt_insertElementAt_Oi_M2o14},
	{TMIT_native_code, contains_O_ye462,(const Char *)&nmim_16,8,
	(const Char *)&sgim_16,21,1,0x1,5,xt_contains_O_ye462},
	{TMIT_native_code, size__dc1II,(const Char *)&nmim_17,4,
	(const Char *)&sgim_17,3,1,0x1,6,xt_size__dc1II},
	{TMIT_native_code, elementAt_i_ZO9Fg,(const Char *)&nmim_18,9,
	(const Char *)&sgim_18,21,1,0x1,7,xt_elementAt_i_ZO9Fg},
	{TMIT_native_code, removeElementAt_i_9280s,(const Char *)&nmim_19,15,
	(const Char *)&sgim_19,4,1,0x1,8,xt_removeElementAt_i_9280s},
    } /* end of methodsigs */
};


/*M clear__gb602: ca.mcgill.sable.util.Array.clear()V */

Class xt_clear__gb602[] = { 0 };

Void clear__gb602(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__fJahH: ca.mcgill.sable.util.Array.<init>()V */

Class xt_init__fJahH[] = { 0 };

Void init__fJahH(Object p0)
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
	init__AAyKx(a1);
	a1 = av0;
	i2 = 8;
	a2 = anewarray(&cl_java_lang_Object.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->elements = a2;
	a1 = av0;
	i2 = 8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->maxElements = i2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M doubleCapacity__AC9Kp: ca.mcgill.sable.util.Array.doubleCapacity()V */

Class xt_doubleCapacity__AC9Kp[] = { 0 };

Void doubleCapacity__AC9Kp(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->maxElements;
	i2 = 2;
	i1 = i1 * i2;
	iv1 = i1;
	i1 = iv1;
	a1 = anewarray(&cl_java_lang_Object.C,i1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->elements;
	i2 = 0;
	a3 = av2;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_util_Array*)a5)->numElements;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->elements = a2;
	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->maxElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addElement_O_qCucH: ca.mcgill.sable.util.Array.addElement(Ljava/lang/Object;)V */

Class xt_addElement_O_qCucH[] = { 0 };

Void addElement_O_qCucH(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->numElements;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Array*)a2)->maxElements;
	if (i1 != i2)
		GOTO(8,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	doubleCapacity__AC9Kp(a1);
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->elements;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_Array*)a3)->numElements;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a3)->numElements = i4;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M insertElementAt_Oi_M2o14: ca.mcgill.sable.util.Array.insertElementAt(Ljava/lang/Object;I)V */

Class xt_insertElementAt_Oi_M2o14[] = { 0 };

Void insertElementAt_Oi_M2o14(Object p0, Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->numElements;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Array*)a2)->maxElements;
	if (i1 != i2)
		GOTO(8,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	doubleCapacity__AC9Kp(a1);
L1:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Array*)a2)->numElements;
	if (i1 != i2)
		GOTO(20,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->elements;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_Array*)a3)->numElements;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a3)->numElements = i4;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	return;

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->elements;
	i2 = iv2;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Array*)a3)->elements;
	i4 = iv2;
	i5 = 1;
	i4 = i4 + i5;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_util_Array*)a5)->numElements;
	i6 = iv2;
	i5 = i5 - i6;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->elements;
	i2 = iv2;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Array*)a2)->numElements;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M contains_O_ye462: ca.mcgill.sable.util.Array.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_ye462[] = { 0 };

Boolean contains_O_ye462(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	GOTO(2,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->elements;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(15,L2);
	i1 = 1;
	return i1;

L2:	iv2 += 1;
L3:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Array*)a2)->numElements;
	if (i1 < i2)
		GOBACK(28,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__dc1II: ca.mcgill.sable.util.Array.size()I */

Class xt_size__dc1II[] = { 0 };

Int size__dc1II(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->numElements;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M elementAt_i_ZO9Fg: ca.mcgill.sable.util.Array.elementAt(I)Ljava/lang/Object; */

Class xt_elementAt_i_ZO9Fg[] = { 0 };

Object elementAt_i_ZO9Fg(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->elements;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeElementAt_i_9280s: ca.mcgill.sable.util.Array.removeElementAt(I)V */

Class xt_removeElementAt_i_9280s[] = { 0 };

Void removeElementAt_i_9280s(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Array*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 != i2)
		GOTO(7,L1);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Array*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->numElements = i2;
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Array*)a1)->elements;
	i2 = iv1;
	i3 = 1;
	i2 = i2 + i3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Array*)a3)->elements;
	i4 = iv1;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_util_Array*)a5)->numElements;
	i6 = iv1;
	i7 = 1;
	i6 = i6 + i7;
	i5 = i5 - i6;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Array*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Array*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Array[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','r','r','a','y'};

const void *st_ca_mcgill_sable_util_Array[] = {
    ch_ca_mcgill_sable_util_Array+26,	/* 0. ca.mcgill.sable.util.Array */
    0};
