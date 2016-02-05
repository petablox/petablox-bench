/*  ca_mcgill_sable_soot_jimple_FastColorer.c -- from Java class ca.mcgill.sable.soot.jimple.FastColorer  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_FastColorer.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_CompleteStmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_FastColorer$InterferenceGraph.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "ca_mcgill_sable_soot_jimple_SimpleLiveLocals.h"
#include "ca_mcgill_sable_soot_jimple_SparseLiveLocals.h"
#include "ca_mcgill_sable_soot_jimple_StmtBody.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Integer.h"
#include "java_lang_Math.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_FastColorer.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_CompleteStmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimp_UmXbs.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_ca_mcgill_sable_soot_jimple_SimpleLiveLocals.C,
    &cl_ca_mcgill_sable_soot_jimple_SparseLiveLocals.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtBody.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_Math.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_FastColorer[];
extern const void *st_ca_mcgill_sable_soot_jimple_FastColorer[];
extern Class xt_assignColorsToLocals_SMMM_Ch6ee[];
extern Class xt_init_SMMM_InRwf[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_FastColorer.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_FastColorer.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_FastColorer.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(39) nmchars = {&acl_char, 0, 39, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','a','s','t','C','o','l','o',
'r','e','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 39 };
static const Char nmsm_0[] = {
'a','s','s','i','g','n','C','o','l','o','r','s','T','o','L','o','c','a',
'l','s'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B','o',
'd','y',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','u','t','i','l','/','M','a','p',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','u','t','i','l','/','M','a','p',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';',')','V'};
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
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B','o',
'd','y',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','u','t','i','l','/','M','a','p',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','u','t','i','l','/','M','a','p',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';',')','V'};

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
    {TMIT_native_code, (Void(*)())assignColorsToLocals_SMMM_Ch6ee,
	(const Char *)&nmsm_0,20,(const Char *)&sgsm_0,119,
	1,0x9,0,xt_assignColorsToLocals_SMMM_Ch6ee},
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
} inr_ca_mcgill_sable_soot_jimple_FastColorer = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_FastColorer.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_FastColorer cl_ca_mcgill_sable_soot_jimple_FastColorer = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_FastColorer),
    13,
    1,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    12, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_FastColorer,
    st_ca_mcgill_sable_soot_jimple_FastColorer,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_FastColorer,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
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
	{TMIT_native_code, init_SMMM_InRwf,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,119,1,0x2,1,xt_init_SMMM_InRwf},
    } /* end of methodsigs */
};


/*M assignColorsToLocals_SMMM_Ch6ee: ca.mcgill.sable.soot.jimple.FastColorer.assignColorsToLocals(Lca/mcgill/sable/soot/jimple/StmtBody;Lca/mcgill/sable/util/Map;Lca/mcgill/sable/util/Map;Lca/mcgill/sable/util/Map;)V */

Class xt_assignColorsToLocals_SMMM_Ch6ee[] = { 0 };

Void assignColorsToLocals_SMMM_Ch6ee(Object p1, Object p2, Object p3, Object p4)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p1;
	av1 = p2;
	av2 = p3;
	av3 = p4;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_FastColorer.C);
	a2 = av0;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_SMMM_InRwf(a1,a2,a3,a4,a5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_SMMM_InRwf: ca.mcgill.sable.soot.jimple.FastColorer.<init>(Lca/mcgill/sable/soot/jimple/StmtBody;Lca/mcgill/sable/util/Map;Lca/mcgill/sable/util/Map;Lca/mcgill/sable/util/Map;)V */

Class xt_init_SMMM_InRwf[] = { 0 };

Void init_SMMM_InRwf(Object p0, Object p1, Object p2, Object p3, Object p4)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10, av11, av12, av15;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv13, iv14, iv16, iv17, iv18, iv19;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1978262836)->f)(a1);
	av5 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_CompleteStmtGraph.C);
	a2 = a1;
	a3 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_RJw6y(a2,a3);
	av6 = a1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.usePackedLive;
	if (i1 == 0)
		GOTO(26,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_SimpleLiveLocals.C);
	a2 = a1;
	a3 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_C_FZQV5(a2,a3);
	av7 = a1;
	GOTO(40,L2);

L1:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_SparseLiveLocals.C);
	a2 = a1;
	a3 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_C_J2eRc(a2,a3);
	av7 = a1;
L2:	a1 = new(&cl_ca_mcgill_sable_soot_jimp_UmXbs.C);
	a2 = a1;
	a3 = av0;
	a4 = av1;
	a5 = av2;
	a6 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_FSML_us7nu(a2,a3,a4,a5,a6);
	av8 = a1;
	i1 = 10;
	a1 = anewarray(&cl_int,i1);
	av9 = a1;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_UmXbs*)a1)->class->M.
		getLocals__t6Dat.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av10 = a1;
	GOTO(86,L14);

L3:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av11 = a1;
	a1 = av3;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 != 0)
		GOTO(109,L14);
	a1 = av2;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	av12 = a1;
	a1 = av4;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_java_lang_Integer.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Integer*)a1)->class->M.
		intValue__e94pd.f(a1);
	iv13 = i1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	i2 = iv13;
	if (i1 >= i2)
		GOTO(144,L4);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	i2 = 2;
	i1 = i1 * i2;
	i2 = iv13;
	i1 = max_ii_09Qhb(i1,i2);
	a1 = anewarray(&cl_int,i1);
	av9 = a1;
L4:	i1 = 0;
	iv14 = i1;
	GOTO(164,L6);

L5:	a1 = av9;
	i2 = iv14;
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv14 += 1;
L6:	i1 = iv14;
	i2 = iv13;
	if (i1 < i2)
		GOBACK(180,L5);
	a1 = av8;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_UmXbs*)a1)->class->M.
		getInterferencesOf_L_wQ60X.f(a1,a2);
	av15 = a1;
	i1 = 0;
	iv16 = i1;
	GOTO(195,L9);

L7:	a1 = av3;
	a2 = av15;
	i3 = iv16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 == 0)
		GOTO(209,L8);
	a1 = av3;
	a2 = av15;
	i3 = iv16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_java_lang_Integer.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Integer*)a1)->class->M.
		intValue__e94pd.f(a1);
	iv17 = i1;
	a1 = av9;
	i2 = iv17;
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
L8:	iv16 += 1;
L9:	i1 = iv16;
	a2 = av15;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(245,L7);
	i1 = 0;
	iv17 = i1;
	i1 = 0;
	iv18 = i1;
	i1 = 0;
	iv19 = i1;
	GOTO(257,L12);

L10:	a1 = av9;
	i2 = iv19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	i2 = 1;
	if (i1 != i2)
		GOTO(266,L11);
	i1 = 1;
	iv17 = i1;
	i1 = iv19;
	iv18 = i1;
L11:	iv19 += 1;
L12:	i1 = iv19;
	i2 = iv13;
	if (i1 < i2)
		GOBACK(283,L10);
	i1 = iv17;
	if (i1 != 0)
		GOTO(288,L13);
	i1 = iv13;
	iv13 += 1;
	iv18 = i1;
	a1 = av4;
	a2 = av12;
	a3 = new(&cl_java_lang_Integer.C);
	a4 = a3;
	i5 = iv13;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_i_oO9cr(a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L13:	a1 = av3;
	a2 = av11;
	a3 = new(&cl_java_lang_Integer.C);
	a4 = a3;
	i5 = iv18;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_i_oO9cr(a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L14:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(342,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_FastColorer[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','a','s','t','C','o','l','o',
'r','e','r'};

const void *st_ca_mcgill_sable_soot_jimple_FastColorer[] = {
    ch_ca_mcgill_sable_soot_jimple_FastColorer+39,	/* 0. ca.mcgill.sable.soot.jimple.FastColorer */
    0};
