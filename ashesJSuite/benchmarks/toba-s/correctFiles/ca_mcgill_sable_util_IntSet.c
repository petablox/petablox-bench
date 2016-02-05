/*  ca_mcgill_sable_util_IntSet.c -- from Java class ca.mcgill.sable.util.IntSet  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_IntSet.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_IntSet.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_util_IntSet[];
extern const void *st_ca_mcgill_sable_util_IntSet[];
extern Class xt_init__Xr1fY[];
extern Class xt_init_I_GbIIb[];
extern Class xt_grow__Ehi6c[];
extern Class xt_and_I_rPf5t[];
extern Class xt_clear_i_TaGYy[];
extern Class xt_clone__4jRwz[];
extern Class xt_equals_O_qq4hZ[];
extern Class xt_get_i_CreqQ[];
extern Class xt_hashCode__RMJ1V[];
extern Class xt_or_I_bGKQH[];
extern Class xt_set_i_QWmXU[];
extern Class xt_size__hGMbe[];
extern Class xt_toString__1VKpG[];
extern Class xt_xor_I_TcwJs[];
extern Class xt_elementCount__Dvjwu[];
extern Class xt_elements__yaEeZ[];

#define HASHMASK 0x0
static const struct ihash htable[1] = {
    0, 0,
};

static const CARRAY(27) nmchars = {&acl_char, 0, 27, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','I','n','t','S','e','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 27 };
static const Char nmiv_0[] = {
'e','l','e','m','e','n','t','s'};
static const Char sgiv_0[] = {
'[','I'};
static const Char nmiv_1[] = {
's','i','z','e'};
static const Char sgiv_1[] = {
'I'};
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
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','I','n','t','S','e','t',';',')','V'};
static const Char nmim_13[] = {
'g','r','o','w'};
static const Char sgim_13[] = {
'(',')','V'};
static const Char nmim_14[] = {
'a','n','d'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','I','n','t','S','e','t',';',')','V'};
static const Char nmim_15[] = {
'c','l','e','a','r'};
static const Char sgim_15[] = {
'(','I',')','V'};
static const Char nmim_16[] = {
'g','e','t'};
static const Char sgim_16[] = {
'(','I',')','Z'};
static const Char nmim_17[] = {
'o','r'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','I','n','t','S','e','t',';',')','V'};
static const Char nmim_18[] = {
's','e','t'};
static const Char sgim_18[] = {
'(','I',')','V'};
static const Char nmim_19[] = {
's','i','z','e'};
static const Char sgim_19[] = {
'(',')','I'};
static const Char nmim_20[] = {
'x','o','r'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','I','n','t','S','e','t',';',')','V'};
static const Char nmim_21[] = {
'e','l','e','m','e','n','t','C','o','u','n','t'};
static const Char sgim_21[] = {
'(',')','I'};
static const Char nmim_22[] = {
'e','l','e','m','e','n','t','s'};
static const Char sgim_22[] = {
'(',')','[','I'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_IntSet, elements), 0,(const Char *)&nmiv_0,8,(const Char *)&sgiv_0,2,1,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_IntSet, size), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,1,1,0x2,1}, 
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
} inr_ca_mcgill_sable_util_IntSet = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_IntSet.C.classclass, 0};

struct cl_ca_mcgill_sable_util_IntSet cl_ca_mcgill_sable_util_IntSet = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_IntSet),
    23,
    0,
    2,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_util_IntSet,
    st_ca_mcgill_sable_util_IntSet,
    0,
    init__Xr1fY,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_IntSet,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__Xr1fY,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__Xr1fY},
	{TMIT_native_code, clone__4jRwz,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x1,5,xt_clone__4jRwz},
	{TMIT_native_code, equals_O_qq4hZ,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,6,xt_equals_O_qq4hZ},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__RMJ1V,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x1,8,xt_hashCode__RMJ1V},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__1VKpG,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,12,xt_toString__1VKpG},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_I_GbIIb,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,32,1,0x2,1,xt_init_I_GbIIb},
	{TMIT_native_code, grow__Ehi6c,(const Char *)&nmim_13,4,
	(const Char *)&sgim_13,3,1,0x2,2,xt_grow__Ehi6c},
	{TMIT_native_code, and_I_rPf5t,(const Char *)&nmim_14,3,
	(const Char *)&sgim_14,32,1,0x1,3,xt_and_I_rPf5t},
	{TMIT_native_code, clear_i_TaGYy,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,4,1,0x1,4,xt_clear_i_TaGYy},
	{TMIT_native_code, get_i_CreqQ,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,4,1,0x1,7,xt_get_i_CreqQ},
	{TMIT_native_code, or_I_bGKQH,(const Char *)&nmim_17,2,
	(const Char *)&sgim_17,32,1,0x1,9,xt_or_I_bGKQH},
	{TMIT_native_code, set_i_QWmXU,(const Char *)&nmim_18,3,
	(const Char *)&sgim_18,4,1,0x1,10,xt_set_i_QWmXU},
	{TMIT_native_code, size__hGMbe,(const Char *)&nmim_19,4,
	(const Char *)&sgim_19,3,1,0x1,11,xt_size__hGMbe},
	{TMIT_native_code, xor_I_TcwJs,(const Char *)&nmim_20,3,
	(const Char *)&sgim_20,32,1,0x1,13,xt_xor_I_TcwJs},
	{TMIT_native_code, elementCount__Dvjwu,(const Char *)&nmim_21,12,
	(const Char *)&sgim_21,3,1,0x1,14,xt_elementCount__Dvjwu},
	{TMIT_native_code, elements__yaEeZ,(const Char *)&nmim_22,8,
	(const Char *)&sgim_22,4,1,0x1,15,xt_elements__yaEeZ},
    } /* end of methodsigs */
};


/*M init__Xr1fY: ca.mcgill.sable.util.IntSet.<init>()V */

Class xt_init__Xr1fY[] = { 0 };

Void init__Xr1fY(Object p0)
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
	i2 = 0;
	a2 = anewarray(&cl_int,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->size = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_I_GbIIb: ca.mcgill.sable.util.IntSet.<init>(Lca/mcgill/sable/util/IntSet;)V */

Class xt_init_I_GbIIb[] = { 0 };

Void init_I_GbIIb(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
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
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->class->M.
		elements__yaEeZ.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements = a2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->size = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M grow__Ehi6c: ca.mcgill.sable.util.IntSet.grow()V */

Class xt_grow__Ehi6c[] = { 0 };

Void grow__Ehi6c(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	av1 = a1;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 2;
	i2 = i2 * i3;
	i3 = 1;
	i2 = i2 + i3;
	a2 = anewarray(&cl_int,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements = a2;
	a1 = av1;
	i2 = 0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_IntSet*)a3)->elements;
	i4 = 0;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct aarray*)a5)->length;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M and_I_rPf5t: ca.mcgill.sable.util.IntSet.and(Lca/mcgill/sable/util/IntSet;)V */

Class xt_and_I_rPf5t[] = { 0 };

Void and_I_rPf5t(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2, iv3, iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (a1 != a2)
		GOTO(2,L1);
	return;

L1:	i1 = 0;
	iv2 = i1;
	i1 = 0;
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	GOTO(13,L5);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 >= i2)
		GOTO(29,L3);
	iv3 += 1;
	GOTO(35,L5);

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 != i2)
		GOTO(51,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv2;
	iv2 += 1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_IntSet*)a3)->elements;
	i4 = iv3;
	iv3 += 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv4 += 1;
	GOTO(75,L5);

L4:	iv4 += 1;
L5:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 >= i2)
		GOTO(86,L6);
	i1 = iv4;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(95,L2);
L6:	a1 = av0;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->size = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear_i_TaGYy: ca.mcgill.sable.util.IntSet.clear(I)V */

Class xt_clear_i_TaGYy[] = { 0 };

Void clear_i_TaGYy(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1, iv2;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		get_i_CreqQ.f(a1,i2);
	if (i1 == 0)
		GOTO(5,L4);
	i1 = 0;
	iv2 = i1;
	GOTO(10,L3);

L1:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 >= i2)
		GOTO(20,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv2;
	i3 = 1;
	i2 = i2 - i3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_IntSet*)a3)->elements;
	i4 = iv2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
L2:	iv2 += 1;
L3:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(45,L1);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->size = i2;
L4:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clone__4jRwz: ca.mcgill.sable.util.IntSet.clone()Ljava/lang/Object; */

Class xt_clone__4jRwz[] = { 0 };

Object clone__4jRwz(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a2 = a1;
	a3 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_I_GbIIb(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_qq4hZ: ca.mcgill.sable.util.IntSet.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_qq4hZ[] = { 0 };

Boolean equals_O_qq4hZ(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (a1 != 0)
		GOTO(1,L1);
	i1 = 0;
	return i1;

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Object*)a1)->class->M.
		getClass__zh19H.f(a1);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Object*)a2)->class->M.
		getClass__zh19H.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(17,L2);
	i1 = 0;
	return i1;

L2:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_IntSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->size;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 == i2)
		GOTO(35,L3);
	i1 = 0;
	return i1;

L3:	i1 = 0;
	iv3 = i1;
	GOTO(42,L6);

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 == i2)
		GOTO(57,L5);
	i1 = 0;
	return i1;

L5:	iv3 += 1;
L6:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(70,L4);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_i_CreqQ: ca.mcgill.sable.util.IntSet.get(I)Z */

Class xt_get_i_CreqQ[] = { 0 };

Boolean get_i_CreqQ(Object p0, Int p1)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1, iv2, iv3, iv4;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->size;
	i2 = 1;
	i1 = i1 - i2;
	iv3 = i1;
	GOTO(9,L4);

L1:	i1 = iv2;
	i2 = iv3;
	i1 = i1 + i2;
	i2 = 2;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 / i2;
	iv4 = i1;
	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 >= i2)
		GOTO(27,L2);
	i1 = iv4;
	i2 = 1;
	i1 = i1 - i2;
	iv3 = i1;
	GOTO(35,L4);

L2:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 != i2)
		GOTO(46,L3);
	i1 = 1;
	return i1;

L3:	i1 = iv4;
	i2 = 1;
	i1 = i1 + i2;
	iv2 = i1;
L4:	i1 = iv2;
	i2 = iv3;
	if (i1 <= i2)
		GOBACK(58,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__RMJ1V: ca.mcgill.sable.util.IntSet.hashCode()I */

Class xt_hashCode__RMJ1V[] = { 0 };

Int hashCode__RMJ1V(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1, iv2;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	i1 = 0;
	iv2 = i1;
	GOTO(4,L2);

L1:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	i1 = i1 + i2;
	iv1 = i1;
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(24,L1);
	i1 = iv1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M or_I_bGKQH: ca.mcgill.sable.util.IntSet.or(Lca/mcgill/sable/util/IntSet;)V */

Class xt_or_I_bGKQH[] = { 0 };

Void or_I_bGKQH(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3, iv4, iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (a1 != a2)
		GOTO(2,L1);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	av2 = a1;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_IntSet*)a3)->size;
	i2 = i2 + i3;
	a2 = anewarray(&cl_int,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements = a2;
	i1 = 0;
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	i1 = 0;
	iv5 = i1;
	GOTO(34,L7);

L2:	i1 = iv5;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 == i2)
		GOTO(43,L3);
	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 == i2)
		GOTO(52,L4);
	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 >= i2)
		GOTO(66,L4);
L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv3;
	iv3 += 1;
	a3 = av2;
	i4 = iv4;
	iv4 += 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	GOTO(85,L7);

L4:	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 == i2)
		GOTO(94,L5);
	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 <= i2)
		GOTO(108,L6);
L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv3;
	iv3 += 1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_IntSet*)a3)->elements;
	i4 = iv5;
	iv5 += 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	GOTO(130,L7);

L6:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv3;
	iv3 += 1;
	a3 = av2;
	i4 = iv4;
	iv4 += 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv5 += 1;
L7:	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(158,L2);
	i1 = iv5;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(167,L2);
	a1 = av0;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->size = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M set_i_QWmXU: ca.mcgill.sable.util.IntSet.set(I)V */

Class xt_set_i_QWmXU[] = { 0 };

Void set_i_QWmXU(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
Int i0, i1, i2, i3, i4, i5;
Int iv1, iv2;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		get_i_CreqQ.f(a1,i2);
	if (i1 != 0)
		GOTO(5,L5);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	i3 = 1;
	i2 = i2 + i3;
	i3 = i2;
	a2 = a1;
	i1 = i3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a2)->size = i3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 <= i2)
		GOTO(24,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	grow__Ehi6c(a1);
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->size;
	i2 = 1;
	i1 = i1 - i2;
	iv2 = i1;
L2:	i1 = iv2;
	if (i1 == 0)
		GOTO(39,L3);
	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv2;
	i4 = 1;
	i3 = i3 - i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 <= i2)
		GOTO(51,L4);
L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv2;
	i3 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	return;

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv2;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_IntSet*)a3)->elements;
	i4 = iv2;
	i5 = 1;
	i4 = i4 - i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv2 += -1;
	GOBACK(79,L2);

L5:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__hGMbe: ca.mcgill.sable.util.IntSet.size()I */

Class xt_size__hGMbe[] = { 0 };

Int size__hGMbe(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->size;
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	i2 = 1;
	i1 = i1 + i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__1VKpG: ca.mcgill.sable.util.IntSet.toString()Ljava/lang/String; */

Class xt_toString__1VKpG[] = { 0 };

Object toString__1VKpG(Object p0)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2, iv3;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av1 = a1;
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_IntSet[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	i1 = 0;
	iv2 = i1;
	i1 = 0;
	iv3 = i1;
	GOTO(19,L4);

L1:	i1 = iv2;
	if (i1 == 0)
		GOTO(23,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_IntSet[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(33,L3);

L2:	i1 = 1;
	iv2 = i1;
L3:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_i_ZQIqx.f(a1,i2);
	iv3 += 1;
L4:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(57,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_IntSet[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
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

/*M xor_I_TcwJs: ca.mcgill.sable.util.IntSet.xor(Lca/mcgill/sable/util/IntSet;)V */

Class xt_xor_I_TcwJs[] = { 0 };

Void xor_I_TcwJs(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3, iv4, iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (a1 != a2)
		GOTO(2,L1);
	a1 = av0;
	i2 = 0;
	a2 = anewarray(&cl_int,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->size = i2;
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	av2 = a1;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_IntSet*)a3)->size;
	i2 = i2 + i3;
	a2 = anewarray(&cl_int,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements = a2;
	i1 = 0;
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	i1 = 0;
	iv5 = i1;
	GOTO(46,L7);

L2:	i1 = iv5;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 == i2)
		GOTO(55,L3);
	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 == i2)
		GOTO(64,L4);
	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 >= i2)
		GOTO(78,L4);
L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv3;
	iv3 += 1;
	a3 = av2;
	i4 = iv4;
	iv4 += 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	GOTO(97,L7);

L4:	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 == i2)
		GOTO(106,L5);
	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->elements;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 <= i2)
		GOTO(120,L6);
L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = iv3;
	iv3 += 1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_IntSet*)a3)->elements;
	i4 = iv5;
	iv5 += 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	GOTO(142,L7);

L6:	iv4 += 1;
	iv5 += 1;
L7:	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(157,L2);
	i1 = iv5;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->size;
	if (i1 < i2)
		GOBACK(166,L2);
	a1 = av0;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->size = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M elementCount__Dvjwu: ca.mcgill.sable.util.IntSet.elementCount()I */

Class xt_elementCount__Dvjwu[] = { 0 };

Int elementCount__Dvjwu(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->size;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M elements__yaEeZ: ca.mcgill.sable.util.IntSet.elements()[I */

Class xt_elements__yaEeZ[] = { 0 };

Object elements__yaEeZ(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->size;
	a1 = anewarray(&cl_int,i1);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->elements;
	i2 = 0;
	a3 = av1;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_util_IntSet*)a5)->size;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_IntSet[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','I','n','t','S','e','t','{',',',' ','}'};

const void *st_ca_mcgill_sable_util_IntSet[] = {
    ch_ca_mcgill_sable_util_IntSet+27,	/* 0. ca.mcgill.sable.util.IntSet */
    ch_ca_mcgill_sable_util_IntSet+28,	/* 1. { */
    ch_ca_mcgill_sable_util_IntSet+30,	/* 2. ,  */
    ch_ca_mcgill_sable_util_IntSet+31,	/* 3. } */
    0};
