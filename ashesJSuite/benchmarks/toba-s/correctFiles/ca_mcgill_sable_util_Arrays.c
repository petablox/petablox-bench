/*  ca_mcgill_sable_util_Arrays.c -- from Java class ca.mcgill.sable.util.Arrays  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_Arrays.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Arrays$ArrayList.h"
#include "ca_mcgill_sable_util_Comparator.h"
#include "java_lang_ClassCastException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Arrays.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Arra_mIE2z.C,
    &cl_ca_mcgill_sable_util_Comparator.C,
    &cl_java_lang_ClassCastException.C,
};

extern const Char ch_ca_mcgill_sable_util_Arrays[];
extern const void *st_ca_mcgill_sable_util_Arrays[];
extern Class xt_toList_aO_Ko28N[];
extern Class xt__sort_helper_aOiiC_vJaq4[];
extern Class xt_partition_aOiiC_G3Ctf[];
extern Class xt_sort_aOC_dGAsR[];
extern Class xt_init__MMJm9[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0, -1992104095, &cl_ca_mcgill_sable_util_Arrays.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_Arrays.M.clone__dslwm, 0, 0, 0, 0,
    0, 0, -1028981426, &cl_ca_mcgill_sable_util_Arrays.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_Arrays.M.toString__4d9OF, 0, 0,
};

static const CARRAY(27) nmchars = {&acl_char, 0, 27, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','r','r','a','y','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 27 };
static const Char nmsm_0[] = {
't','o','L','i','s','t'};
static const Char sgsm_0[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmsm_1[] = {
'_','s','o','r','t','_','h','e','l','p','e','r'};
static const Char sgsm_1[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';','I','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','u','t','i','l','/','C','o','m','p','a','r','a','t','o','r',
';',')','V'};
static const Char nmsm_2[] = {
'p','a','r','t','i','t','i','o','n'};
static const Char sgsm_2[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';','I','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','u','t','i','l','/','C','o','m','p','a','r','a','t','o','r',
';',')','I'};
static const Char nmsm_3[] = {
's','o','r','t'};
static const Char sgsm_3[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','C','o','m','p','a','r','a','t','o','r',';',')',
'V'};
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
    {TMIT_native_code, (Void(*)())toList_aO_Ko28N,
	(const Char *)&nmsm_0,6,(const Char *)&sgsm_0,48,
	1,0x9,0,xt_toList_aO_Ko28N},
    {TMIT_native_code, (Void(*)())_sort_helper_aOiiC_vJaq4,
	(const Char *)&nmsm_1,12,(const Char *)&sgsm_1,57,
	1,0xa,1,xt__sort_helper_aOiiC_vJaq4},
    {TMIT_native_code, (Void(*)())partition_aOiiC_G3Ctf,
	(const Char *)&nmsm_2,9,(const Char *)&sgsm_2,57,
	1,0xa,2,xt_partition_aOiiC_G3Ctf},
    {TMIT_native_code, (Void(*)())sort_aOC_dGAsR,
	(const Char *)&nmsm_3,4,(const Char *)&sgsm_3,55,
	1,0x9,3,xt_sort_aOC_dGAsR},
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
} inr_ca_mcgill_sable_util_Arrays = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Arrays.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Arrays cl_ca_mcgill_sable_util_Arrays = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Arrays),
    12,
    4,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_util_Arrays,
    st_ca_mcgill_sable_util_Arrays,
    0,
    init__MMJm9,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Arrays,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__MMJm9,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,4,xt_init__MMJm9},
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


/*M toList_aO_Ko28N: ca.mcgill.sable.util.Arrays.toList([Ljava/lang/Object;)Lca/mcgill/sable/util/List; */

Class xt_toList_aO_Ko28N[] = { 0 };

Object toList_aO_Ko28N(Object p1)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Arra_mIE2z.C);
	a2 = a1;
	a3 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_aO_Qjyyb(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M _sort_helper_aOiiC_vJaq4: ca.mcgill.sable.util.Arrays._sort_helper([Ljava/lang/Object;IILca/mcgill/sable/util/Comparator;)V */

Class xt__sort_helper_aOiiC_vJaq4[] = { &cl_java_lang_ClassCastException.C, 0 };

Void _sort_helper_aOiiC_vJaq4(Object p1, Int p2, Int p3, Object p4)
{
Object a0, a1, a2, a3, a4;
Object av0, av3;
Int i0, i1, i2, i3, i4;
Int iv1, iv2, iv4;
PROLOGUE;

	av0 = p1;
	iv1 = p2;
	iv2 = p3;
	av3 = p4;

L0:	i1 = iv1;
	i2 = iv2;
	if (i1 >= i2)
		GOTO(2,L1);
	a1 = av0;
	i2 = iv1;
	i3 = iv2;
	a4 = av3;
	i1 = partition_aOiiC_G3Ctf(a1,i2,i3,a4);
	iv4 = i1;
	a1 = av0;
	i2 = iv1;
	i3 = iv4;
	a4 = av3;
	_sort_helper_aOiiC_vJaq4(a1,i2,i3,a4);
	a1 = av0;
	i2 = iv4;
	i3 = 1;
	i2 = i2 + i3;
	i3 = iv2;
	a4 = av3;
	_sort_helper_aOiiC_vJaq4(a1,i2,i3,a4);
L1:	return;

	/*NOTREACHED*/
}

/*M partition_aOiiC_G3Ctf: ca.mcgill.sable.util.Arrays.partition([Ljava/lang/Object;IILca/mcgill/sable/util/Comparator;)I */

Class xt_partition_aOiiC_G3Ctf[] = { &cl_java_lang_ClassCastException.C, 0 };

Int partition_aOiiC_G3Ctf(Object p1, Int p2, Int p3, Object p4)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av3, av4;
Int i0, i1, i2, i3, i4;
Int iv1, iv2, iv5, iv6;
PROLOGUE;

	av0 = p1;
	iv1 = p2;
	iv2 = p3;
	av3 = p4;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av4 = a1;
	i1 = iv1;
	i2 = 1;
	i1 = i1 - i2;
	iv5 = i1;
	i1 = iv2;
	i2 = 1;
	i1 = i1 + i2;
	iv6 = i1;
	GOTO(15,L1);

L1:	iv6 += -1;
	a1 = av3;
	a2 = av0;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	a3 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1513739247)->f)(a1,a2,a3);
	if (i1 > 0)
		GOBACK(33,L1);
L2:	iv5 += 1;
	a1 = av3;
	a2 = av0;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	a3 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1513739247)->f)(a1,a2,a3);
	if (i1 < 0)
		GOBACK(51,L2);
	i1 = iv5;
	i2 = iv6;
	if (i1 >= i2)
		GOTO(58,L3);
	a1 = av0;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av4 = a1;
	a1 = av0;
	i2 = iv5;
	a3 = av0;
	i4 = iv6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av0;
	i2 = iv6;
	a3 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L3:	i1 = iv6;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M sort_aOC_dGAsR: ca.mcgill.sable.util.Arrays.sort([Ljava/lang/Object;Lca/mcgill/sable/util/Comparator;)V */

Class xt_sort_aOC_dGAsR[] = { &cl_java_lang_ClassCastException.C, 0 };

Void sort_aOC_dGAsR(Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p1;
	av1 = p2;

L0:	a1 = av0;
	i2 = 0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct aarray*)a3)->length;
	i4 = 1;
	i3 = i3 - i4;
	a4 = av1;
	_sort_helper_aOiiC_vJaq4(a1,i2,i3,a4);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__MMJm9: ca.mcgill.sable.util.Arrays.<init>()V */

Class xt_init__MMJm9[] = { 0 };

Void init__MMJm9(Object p0)
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



const Char ch_ca_mcgill_sable_util_Arrays[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','r','r','a','y','s'};

const void *st_ca_mcgill_sable_util_Arrays[] = {
    ch_ca_mcgill_sable_util_Arrays+27,	/* 0. ca.mcgill.sable.util.Arrays */
    0};
