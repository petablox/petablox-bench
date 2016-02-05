/*  ca_mcgill_sable_soot_jimple_Local.c -- from Java class ca.mcgill.sable.soot.jimple.Local  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_JimpleValueSwitch.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JimpleValueSwitch.C,
    &cl_java_lang_String.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_Local[];
extern const void *st_ca_mcgill_sable_soot_jimple_Local[];
extern Class xt_init_ST_lD6h0[];
extern Class xt_clone__f6GWF[];
extern Class xt_getName__ttbNB[];
extern Class xt_setName_S_typU4[];
extern Class xt_equals_O_h7WVx[];
extern Class xt_hashCode__UZ4Ko[];
extern Class xt_getType__lsun6[];
extern Class xt_setType_T_pld5E[];
extern Class xt_toString__gE0Kb[];
extern Class xt_toBriefString__ORC2a[];
extern Class xt_getUseBoxes__mpTWf[];
extern Class xt_apply_S_W7PU6[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_Local.M.getType__lsun6,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_Local.M.getUseBoxes__mpTWf,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_Local.M.toBriefString__ORC2a,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_Local.M.apply_S_W7PU6,
    0, 0,
};

static const CARRAY(33) nmchars = {&acl_char, 0, 33, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','L','o','c','a','l'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 33 };
static const Char nmiv_0[] = {
'n','a','m','e'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_1[] = {
't','y','p','e'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';'};
static const Char nmiv_2[] = {
'f','i','x','e','d','H','a','s','h','C','o','d','e'};
static const Char sgiv_2[] = {
'I'};
static const Char nmiv_3[] = {
'i','s','H','a','s','h','C','o','d','e','C','h','o','s','e','n'};
static const Char sgiv_3[] = {
'Z'};
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
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_13[] = {
'g','e','t','N','a','m','e'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_14[] = {
's','e','t','N','a','m','e'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
static const Char nmim_15[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_16[] = {
's','e','t','T','y','p','e'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_17[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_17[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_18[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_19[] = {
'a','p','p','l','y'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_Local, name), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,18,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_Local, type), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,27,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_Local, fixedHashCode), 0,(const Char *)&nmiv_2,13,(const Char *)&sgiv_2,1,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_Local, isHashCodeChosen), 0,(const Char *)&nmiv_3,16,(const Char *)&sgiv_3,1,1,0x0,3}, 
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
} inr_ca_mcgill_sable_soot_jimple_Local = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_Local.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_Local cl_ca_mcgill_sable_soot_jimple_Local = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_Local),
    20,
    0,
    4,
    0,
    2, supers,
    2, 2, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_Local,
    st_ca_mcgill_sable_soot_jimple_Local,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_Local,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__f6GWF,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x1,1,xt_clone__f6GWF},
	{TMIT_native_code, equals_O_h7WVx,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,4,xt_equals_O_h7WVx},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__UZ4Ko,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x1,5,xt_hashCode__UZ4Ko},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__gE0Kb,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,8,xt_toString__gE0Kb},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_ST_lD6h0,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,48,1,0x0,0,xt_init_ST_lD6h0},
	{TMIT_native_code, getName__ttbNB,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,20,1,0x1,2,xt_getName__ttbNB},
	{TMIT_native_code, setName_S_typU4,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,21,1,0x1,3,xt_setName_S_typU4},
	{TMIT_native_code, getType__lsun6,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,29,1,0x8001,6,xt_getType__lsun6},
	{TMIT_native_code, setType_T_pld5E,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,30,1,0x1,7,xt_setType_T_pld5E},
	{TMIT_native_code, toBriefString__ORC2a,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,20,1,0x8001,9,xt_toBriefString__ORC2a},
	{TMIT_native_code, getUseBoxes__mpTWf,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,29,1,0x8001,10,xt_getUseBoxes__mpTWf},
	{TMIT_native_code, apply_S_W7PU6,(const Char *)&nmim_19,5,
	(const Char *)&sgim_19,32,1,0x8001,11,xt_apply_S_W7PU6},
    } /* end of methodsigs */
};


/*M init_ST_lD6h0: ca.mcgill.sable.soot.jimple.Local.<init>(Ljava/lang/String;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_ST_lD6h0[] = { 0 };

Void init_ST_lD6h0(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

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
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->name = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->type = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clone__f6GWF: ca.mcgill.sable.soot.jimple.Local.clone()Ljava/lang/Object; */

Class xt_clone__f6GWF[] = { 0 };

Object clone__f6GWF(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_Local.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a3)->name;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a4)->type;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_ST_lD6h0(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getName__ttbNB: ca.mcgill.sable.soot.jimple.Local.getName()Ljava/lang/String; */

Class xt_getName__ttbNB[] = { 0 };

Object getName__ttbNB(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->name;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setName_S_typU4: ca.mcgill.sable.soot.jimple.Local.setName(Ljava/lang/String;)V */

Class xt_setName_S_typU4[] = { 0 };

Void setName_S_typU4(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->name = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_h7WVx: ca.mcgill.sable.soot.jimple.Local.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_h7WVx[] = { 0 };

Boolean equals_O_h7WVx(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L3);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->name;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->name;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(21,L1);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->type;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->type;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(38,L2);
L1:	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

L3:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__UZ4Ko: ca.mcgill.sable.soot.jimple.Local.hashCode()I */

Class xt_hashCode__UZ4Ko[] = { 0 };

Int hashCode__UZ4Ko(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->isHashCodeChosen;
	if (i1 != 0)
		GOTO(4,L9);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->name;
	if (a1 != 0)
		GOTO(11,L1);
	i1 = 0;
	GOTO(15,L2);

L1:	i1 = 1;
L2:	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->type;
	if (a2 != 0)
		GOTO(23,L3);
	i2 = 0;
	GOTO(27,L4);

L3:	i2 = 1;
L4:	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(32,L5);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->name;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		hashCode__mK6Su.f(a2);
	i3 = 19;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a4)->type;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_java_lang_Object*)a4)->class->M.
		hashCode__8wJNW.f(a4);
	i3 = i3 * i4;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->fixedHashCode = i2;
	GOTO(57,L8);

L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->name;
	if (a1 == 0)
		GOTO(64,L6);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->name;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		hashCode__mK6Su.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->fixedHashCode = i2;
	GOTO(78,L8);

L6:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->type;
	if (a1 == 0)
		GOTO(85,L7);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->type;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_Object*)a2)->class->M.
		hashCode__8wJNW.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->fixedHashCode = i2;
	GOTO(99,L8);

L7:	a1 = av0;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->fixedHashCode = i2;
L8:	a1 = av0;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->isHashCodeChosen = i2;
L9:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->fixedHashCode;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__lsun6: ca.mcgill.sable.soot.jimple.Local.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__lsun6[] = { 0 };

Object getType__lsun6(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setType_T_pld5E: ca.mcgill.sable.soot.jimple.Local.setType(Lca/mcgill/sable/soot/Type;)V */

Class xt_setType_T_pld5E[] = { 0 };

Void setType_T_pld5E(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->type = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__gE0Kb: ca.mcgill.sable.soot.jimple.Local.toString()Ljava/lang/String; */

Class xt_toString__gE0Kb[] = { 0 };

Object toString__gE0Kb(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getName__ttbNB.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__ORC2a: ca.mcgill.sable.soot.jimple.Local.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__ORC2a[] = { 0 };

Object toBriefString__ORC2a(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		toString__gE0Kb.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__mpTWf: ca.mcgill.sable.soot.jimple.Local.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__mpTWf[] = { 0 };

Object getUseBoxes__mpTWf(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	init_ca_mcgill_sable_soot_jimple_AbstractStmt();
	a1 = cl_ca_mcgill_sable_soot_jimple_AbstractStmt.V.emptyList;
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_W7PU6: ca.mcgill.sable.soot.jimple.Local.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_W7PU6[] = { 0 };

Void apply_S_W7PU6(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_JimpleValueSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1950658616)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_Local[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','L','o','c','a','l'};

const void *st_ca_mcgill_sable_soot_jimple_Local[] = {
    ch_ca_mcgill_sable_soot_jimple_Local+33,	/* 0. ca.mcgill.sable.soot.jimple.Local */
    0};
