/*  ca_mcgill_sable_soot_SootClassManager.c -- from Java class ca.mcgill.sable.soot.SootClassManager  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_SootClassManager.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_AlreadyManagedException.h"
#include "ca_mcgill_sable_soot_ClassFileNotFoundException.h"
#include "ca_mcgill_sable_soot_CorruptClassFileException.h"
#include "ca_mcgill_sable_soot_DuplicateNameException.h"
#include "ca_mcgill_sable_soot_IncorrectManagerException.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Collections.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_SootClassManager.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_AlreadyManagedException.C,
    &cl_ca_mcgill_sable_soot_ClassFileNotFoundException.C,
    &cl_ca_mcgill_sable_soot_CorruptClassFileException.C,
    &cl_ca_mcgill_sable_soot_DuplicateNameException.C,
    &cl_ca_mcgill_sable_soot_IncorrectManagerException.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Collections.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_String.C,
};

extern const Char ch_ca_mcgill_sable_soot_SootClassManager[];
extern const void *st_ca_mcgill_sable_soot_SootClassManager[];
extern Class xt_init__dSqpU[];
extern Class xt_addClass_S_qFzYc[];
extern Class xt_removeClass_S_HN5hL[];
extern Class xt_managesClass_S_nHN5N[];
extern Class xt_getClass_S_5qul0[];
extern Class xt_getClasses__5JsHm[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_SootClassManager.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_SootClassManager.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_SootClassManager.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_SootClassManager.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(37) nmchars = {&acl_char, 0, 37, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','o','o','t','C','l','a','s','s','M','a','n','a','g','e',
'r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 37 };
static const Char nmiv_0[] = {
'c','l','a','s','s','e','s'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
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
'a','d','d','C','l','a','s','s'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};
static const Char nmim_13[] = {
'r','e','m','o','v','e','C','l','a','s','s'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};
static const Char nmim_14[] = {
'm','a','n','a','g','e','s','C','l','a','s','s'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','Z'};
static const Char nmim_15[] = {
'g','e','t','C','l','a','s','s'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
static const Char nmim_16[] = {
'g','e','t','C','l','a','s','s','e','s'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_SootClassManager, classes), 0,(const Char *)&nmiv_0,7,(const Char *)&sgiv_0,27,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_SootClassManager = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_SootClassManager.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_SootClassManager cl_ca_mcgill_sable_soot_SootClassManager = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_SootClassManager),
    17,
    0,
    1,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    10, others,
    0, 0,
    ch_ca_mcgill_sable_soot_SootClassManager,
    st_ca_mcgill_sable_soot_SootClassManager,
    0,
    init__dSqpU,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_SootClassManager,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__dSqpU,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__dSqpU},
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
	{TMIT_native_code, addClass_S_qFzYc,(const Char *)&nmim_12,8,
	(const Char *)&sgim_12,35,1,0x1,1,xt_addClass_S_qFzYc},
	{TMIT_native_code, removeClass_S_HN5hL,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,35,1,0x1,2,xt_removeClass_S_HN5hL},
	{TMIT_native_code, managesClass_S_nHN5N,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,21,1,0x1,3,xt_managesClass_S_nHN5N},
	{TMIT_native_code, getClass_S_5qul0,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,52,1,0x1,4,xt_getClass_S_5qul0},
	{TMIT_native_code, getClasses__5JsHm,(const Char *)&nmim_16,10,
	(const Char *)&sgim_16,29,1,0x1,5,xt_getClasses__5JsHm},
    } /* end of methodsigs */
};


/*M init__dSqpU: ca.mcgill.sable.soot.SootClassManager.<init>()V */

Class xt_init__dSqpU[] = { 0 };

Void init__dSqpU(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->classes = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addClass_S_qFzYc: ca.mcgill.sable.soot.SootClassManager.addClass(Lca/mcgill/sable/soot/SootClass;)V */

Class xt_addClass_S_qFzYc[] = { &cl_ca_mcgill_sable_soot_AlreadyManagedException.C, &cl_ca_mcgill_sable_soot_DuplicateNameException.C, 0 };

Void addClass_S_qFzYc(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		isManaged__RCFFF.f(a1);
	if (i1 == 0)
		GOTO(4,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_AlreadyManagedException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_fIyPj(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		managesClass_S_nHN5N.f(a1,a2);
	if (i1 == 0)
		GOTO(27,L2);
	a1 = new(&cl_ca_mcgill_sable_soot_DuplicateNameException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_W37o5(a2,a3);
	athrow(a1);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->classes;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isManaged = i2;
	a1 = av1;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->manager = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeClass_S_HN5hL: ca.mcgill.sable.soot.SootClassManager.removeClass(Lca/mcgill/sable/soot/SootClass;)V */

Class xt_removeClass_S_HN5hL[] = { &cl_ca_mcgill_sable_soot_IncorrectManagerException.C, 0 };

Void removeClass_S_HN5hL(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		isManaged__RCFFF.f(a1);
	if (i1 == 0)
		GOTO(4,L1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getManager__ukjHg.f(a1);
	a2 = av0;
	if (a1 == a2)
		GOTO(12,L2);
L1:	a1 = new(&cl_ca_mcgill_sable_soot_IncorrectManagerException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_CGhd4(a2,a3);
	athrow(a1);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->classes;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	a1 = av1;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isManaged = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M managesClass_S_nHN5N: ca.mcgill.sable.soot.SootClassManager.managesClass(Ljava/lang/String;)Z */

Class xt_managesClass_S_nHN5N[] = { 0 };

Boolean managesClass_S_nHN5N(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av4;
Int i0, i1, i2;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->classes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2095947698)->f)(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(12,L3);

L1:	a1 = av2;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getName__xn8ku.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(32,L2);
	i1 = 1;
	return i1;

L2:	iv3 += 1;
L3:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(43,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getClass_S_5qul0: ca.mcgill.sable.soot.SootClassManager.getClass(Ljava/lang/String;)Lca/mcgill/sable/soot/SootClass; */

Class xt_getClass_S_5qul0[] = { &cl_ca_mcgill_sable_soot_ClassFileNotFoundException.C, &cl_ca_mcgill_sable_soot_CorruptClassFileException.C, 
    &cl_ca_mcgill_sable_soot_DuplicateNameException.C, 0 };

Object getClass_S_5qul0(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av4;
Int i0, i1, i2, i3;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->classes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2095947698)->f)(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(12,L3);

L1:	a1 = av2;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getName__xn8ku.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(32,L2);
	a1 = av4;
	return a1;

L2:	iv3 += 1;
L3:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(44,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_SootClass.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_aMvYx(a2,a3);
	av4 = a1;
	a1 = av4;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		setResolved_z_4ByaD.f(a1,i2);
	a1 = av0;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		addClass_S_qFzYc.f(a1,a2);
	a1 = av4;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getClasses__5JsHm: ca.mcgill.sable.soot.SootClassManager.getClasses()Lca/mcgill/sable/util/List; */

Class xt_getClasses__5JsHm[] = { 0 };

Object getClasses__5JsHm(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->classes;
	a1 = unmodifiableList_L_a5S8d(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_SootClassManager[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','o','o','t','C','l','a','s','s','M','a','n','a','g','e',
'r'};

const void *st_ca_mcgill_sable_soot_SootClassManager[] = {
    ch_ca_mcgill_sable_soot_SootClassManager+37,	/* 0. ca.mcgill.sable.soot.SootClassManager */
    0};
