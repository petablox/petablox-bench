/*  ca_mcgill_sable_soot_coffi_TypeArray.c -- from Java class ca.mcgill.sable.soot.coffi.TypeArray  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_TypeArray.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_coffi_UnusuableType.h"
#include "java_io_PrintStream.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_TypeArray.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_ValueObject.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_coffi_UnusuableType.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_TypeArray[];
extern const void *st_ca_mcgill_sable_soot_coffi_TypeArray[];
extern Class xt_setClassManager_S_Mo5jD[];
extern Class xt_init__Uc95y[];
extern Class xt_v_i_1Owbj[];
extern Class xt_get_i_eKxg0[];
extern Class xt_set_iT_UiPfB[];
extern Class xt_equals_O_Dhry7[];
extern Class xt_merge_T_eVa4T[];
extern Class xt_print_P_ZvL9d[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_TypeArray.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_TypeArray.M.clone__dslwm,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_TypeArray.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','T','y','p','e','A','r','r','a','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
static const Char nmcv_0[] = {
'c','m'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a','g',
'e','r',';'};
static const Char nmiv_0[] = {
't','y','p','e','s'};
static const Char sgiv_0[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';'};
static const Char nmsm_0[] = {
's','e','t','C','l','a','s','s','M','a','n','a','g','e','r'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';',')','V'};
static const Char nmsm_1[] = {
'v'};
static const Char sgsm_1[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e','A',
'r','r','a','y',';'};
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
'g','e','t'};
static const Char sgim_12[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_13[] = {
's','e','t'};
static const Char sgim_13[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c',
'g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','c','o',
'f','f','i','/','T','y','p','e','A','r','r','a','y',';'};
static const Char nmim_14[] = {
'm','e','r','g','e'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','T','y','p','e','A','r','r',
'a','y',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e',
'A','r','r','a','y',';'};
static const Char nmim_15[] = {
'p','r','i','n','t'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','S','t','r',
'e','a','m',';',')','V'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_TypeArray.V.cm,(const Char *)&nmcv_0,2,(const Char *)&sgcv_0,39,1,0xa,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_TypeArray, types), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,28,1,0x2,1}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())setClassManager_S_Mo5jD,
	(const Char *)&nmsm_0,15,(const Char *)&sgsm_0,42,
	1,0x9,0,xt_setClassManager_S_Mo5jD},
    {TMIT_native_code, (Void(*)())v_i_1Owbj,
	(const Char *)&nmsm_1,1,(const Char *)&sgsm_1,41,
	1,0x9,2,xt_v_i_1Owbj},
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
} inr_ca_mcgill_sable_soot_coffi_TypeArray = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_TypeArray.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_TypeArray cl_ca_mcgill_sable_soot_coffi_TypeArray = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_TypeArray),
    16,
    2,
    1,
    1,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    9, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_TypeArray,
    st_ca_mcgill_sable_soot_coffi_TypeArray,
    0,
    init__Uc95y,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_TypeArray,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__Uc95y,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,1,xt_init__Uc95y},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_Dhry7,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,5,xt_equals_O_Dhry7},
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
	{TMIT_native_code, get_i_eKxg0,(const Char *)&nmim_12,3,
	(const Char *)&sgim_12,30,1,0x1,3,xt_get_i_eKxg0},
	{TMIT_native_code, set_iT_UiPfB,(const Char *)&nmim_13,3,
	(const Char *)&sgim_13,68,1,0x1,4,xt_set_iT_UiPfB},
	{TMIT_native_code, merge_T_eVa4T,(const Char *)&nmim_14,5,
	(const Char *)&sgim_14,78,1,0x1,6,xt_merge_T_eVa4T},
	{TMIT_native_code, print_P_ZvL9d,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,24,1,0x1,7,xt_print_P_ZvL9d},
    } /* end of methodsigs */
};


/*M setClassManager_S_Mo5jD: ca.mcgill.sable.soot.coffi.TypeArray.setClassManager(Lca/mcgill/sable/soot/SootClassManager;)V */

Class xt_setClassManager_S_Mo5jD[] = { 0 };

Void setClassManager_S_Mo5jD(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	cl_ca_mcgill_sable_soot_coffi_TypeArray.V.cm = a1;
	return;

	/*NOTREACHED*/
}

/*M init__Uc95y: ca.mcgill.sable.soot.coffi.TypeArray.<init>()V */

Class xt_init__Uc95y[] = { 0 };

Void init__Uc95y(Object p0)
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

/*M v_i_1Owbj: ca.mcgill.sable.soot.coffi.TypeArray.v(I)Lca/mcgill/sable/soot/coffi/TypeArray; */

Class xt_v_i_1Owbj[] = { 0 };

Object v_i_1Owbj(Int p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av1;
Int i0, i1, i2, i3;
Int iv0, iv2;
PROLOGUE;

	iv0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_TypeArray.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Uc95y(a2);
	av1 = a1;
	a1 = av1;
	i2 = iv0;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_Type.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types = a2;
	i1 = 0;
	iv2 = i1;
	GOTO(18,L2);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv2;
	a3 = v__mlhKL();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv2 += 1;
L2:	i1 = iv2;
	i2 = iv0;
	if (i1 < i2)
		GOBACK(35,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_i_eKxg0: ca.mcgill.sable.soot.coffi.TypeArray.get(I)Lca/mcgill/sable/soot/Type; */

Class xt_get_i_eKxg0[] = { 0 };

Object get_i_eKxg0(Object p0, Int p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
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

/*M set_iT_UiPfB: ca.mcgill.sable.soot.coffi.TypeArray.set(ILca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/coffi/TypeArray; */

Class xt_set_iT_UiPfB[] = { 0 };

Object set_iT_UiPfB(Object p0, Int p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av2, av3;
Int i0, i1, i2, i3;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_TypeArray.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Uc95y(a2);
	av3 = a1;
	a1 = av3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Object*)a2)->class->M.
		clone__dslwm.f(a2);
	if ((a2 != 0) && !instanceof(a2,&cl_ca_mcgill_sable_soot_Type.C,1))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types = a2;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_Dhry7: ca.mcgill.sable.soot.coffi.TypeArray.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_Dhry7[] = { 0 };

Boolean equals_O_Dhry7(Object p0, Object p1)
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
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeArray.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L5);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeArray.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(22,L1);
	i1 = 0;
	return i1;

L1:	i1 = 0;
	iv3 = i1;
	GOTO(29,L4);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(47,L3);
	i1 = 0;
	return i1;

L3:	iv3 += 1;
L4:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(61,L2);
	i1 = 1;
	return i1;

L5:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M merge_T_eVa4T: ca.mcgill.sable.soot.coffi.TypeArray.merge(Lca/mcgill/sable/soot/coffi/TypeArray;)Lca/mcgill/sable/soot/coffi/TypeArray; */

Class xt_merge_T_eVa4T[] = { 0 };

Object merge_T_eVa4T(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_TypeArray.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Uc95y(a2);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(18,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_TypeArray[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_Type.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types = a2;
	i1 = 0;
	iv3 = i1;
	GOTO(45,L8);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(63,L3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a3)->types;
	i4 = iv3;
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
	GOTO(78,L7);

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(90,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(102,L6);
L4:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(114,L5);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(126,L6);
L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_TypeArray[2];
	a3 = v_S_k6iq0(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	GOTO(140,L7);

L6:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a1)->types;
	i2 = iv3;
	a3 = v__mlhKL();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L7:	iv3 += 1;
L8:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(161,L2);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M print_P_ZvL9d: ca.mcgill.sable.soot.coffi.TypeArray.print(Ljava/io/PrintStream;)V */

Class xt_print_P_ZvL9d[] = { 0 };

Void print_P_ZvL9d(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	GOTO(2,L2);

L1:	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	i4 = iv2;
	a4 = valueOf_i_N2qKF(i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_TypeArray[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a3)->types;
	i4 = iv2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_Type*)a3)->class->M.
		toString__J7Vel.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeArray*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(49,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_TypeArray[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','T','y','p','e','A','r','r','a','y',
'M','e','r','g','i','n','g',' ','o','f',' ','t','y','p','e',' ','a','r',
'r','a','y','s',' ','f','a','i','l','e','d',';',' ','u','n','e','q','u',
'a','l',' ','a','r','r','a','y',' ','l','e','n','g','t','h','j','a','v',
'a','.','l','a','n','g','.','O','b','j','e','c','t',':',' '};

const void *st_ca_mcgill_sable_soot_coffi_TypeArray[] = {
    ch_ca_mcgill_sable_soot_coffi_TypeArray+36,	/* 0. ca.mcgill.sable.soot.coffi.TypeArray */
    ch_ca_mcgill_sable_soot_coffi_TypeArray+87,	/* 1. Merging of type arrays failed; unequal a */
    ch_ca_mcgill_sable_soot_coffi_TypeArray+103,	/* 2. java.lang.Object */
    ch_ca_mcgill_sable_soot_coffi_TypeArray+105,	/* 3. :  */
    0};
