/*  ca_mcgill_sable_soot_jimple_SparseLocalDefs$LocalStmtPair.c -- from Java class ca.mcgill.sable.soot.jimple.SparseLocalDefs$LocalStmtPair  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_SparseLocalDefs$LocalStmtPair.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_SparseLocalDefs.h"
#include "ca_mcgill_sable_soot_jimple_SparseLocalDefsFlowAnalysis.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_6sHUh.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_SparseLocalDefs.C,
    &cl_ca_mcgill_sable_soot_jimple_SparseLocalDefsFlowAnalysis.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_6sHUh[];
extern const void *st_ca_mcgill_sable_soot_jimp_6sHUh[];
extern Class xt_init_SLS_Y4dp1[];
extern Class xt_equals_O_aADMD[];
extern Class xt_hashCode__ROOZZ[];

#define HASHMASK 0x1
/*  0.  4c0d6fd2  (0)  clone  */
/*  1.  489f8e6f  (1)  toString  */
static const struct ihash htable[3] = {
    1275949010, &cl_ca_mcgill_sable_soot_jimp_6sHUh.M.clone__dslwm,
    1218416239, &cl_ca_mcgill_sable_soot_jimp_6sHUh.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(57) nmchars = {&acl_char, 0, 57, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','p','a','r','s','e','L','o',
'c','a','l','D','e','f','s','$','L','o','c','a','l','S','t','m','t','P',
'a','i','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 57 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','p','a','r','s','e','L',
'o','c','a','l','D','e','f','s',';'};
static const Char nmiv_1[] = {
'l','o','c','a','l'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';'};
static const Char nmiv_2[] = {
's','t','m','t'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';'};
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
's','o','o','t','/','j','i','m','p','l','e','/','S','p','a','r','s','e',
'L','o','c','a','l','D','e','f','s',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','L','o','c','a','l',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l',
'e','/','S','t','m','t',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_6sHUh, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,45,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_6sHUh, local), 0,(const Char *)&nmiv_1,5,(const Char *)&sgiv_1,35,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_6sHUh, stmt), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,34,1,0x0,2}, 
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
} inr_ca_mcgill_sable_soot_jimp_6sHUh = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_6sHUh.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_6sHUh cl_ca_mcgill_sable_soot_jimp_6sHUh = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_6sHUh),
    13,
    0,
    3,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_6sHUh,
    st_ca_mcgill_sable_soot_jimp_6sHUh,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_6sHUh,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_aADMD,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,1,xt_equals_O_aADMD},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__ROOZZ,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x1,2,xt_hashCode__ROOZZ},
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
	{TMIT_native_code, init_SLS_Y4dp1,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,117,1,0x0,0,xt_init_SLS_Y4dp1},
    } /* end of methodsigs */
};


/*M init_SLS_Y4dp1: ca.mcgill.sable.soot.jimple.SparseLocalDefs$LocalStmtPair.<init>(Lca/mcgill/sable/soot/jimple/SparseLocalDefs;Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_init_SLS_Y4dp1[] = { 0 };

Void init_SLS_Y4dp1(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

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
	((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a1)->local = a2;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a1)->stmt = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_aADMD: ca.mcgill.sable.soot.jimple.SparseLocalDefs$LocalStmtPair.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_aADMD[] = { 0 };

Boolean equals_O_aADMD(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_6sHUh.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L1);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_6sHUh.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a1)->local;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a2)->local;
	if (a1 != a2)
		GOTO(18,L1);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_6sHUh.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a1)->stmt;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a2)->stmt;
	if (a1 != a2)
		GOTO(32,L1);
	i1 = 1;
	return i1;

L1:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__ROOZZ: ca.mcgill.sable.soot.jimple.SparseLocalDefs$LocalStmtPair.hashCode()I */

Class xt_hashCode__ROOZZ[] = { 0 };

Int hashCode__ROOZZ(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a1)->local;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		hashCode__UZ4Ko.f(a1);
	i2 = 101;
	i1 = i1 * i2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_6sHUh*)a2)->stmt;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_Object*)a2)->class->M.
		hashCode__8wJNW.f(a2);
	i1 = i1 + i2;
	i2 = 17;
	i1 = i1 + i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_6sHUh[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','p','a','r','s','e','L','o',
'c','a','l','D','e','f','s','$','L','o','c','a','l','S','t','m','t','P',
'a','i','r'};

const void *st_ca_mcgill_sable_soot_jimp_6sHUh[] = {
    ch_ca_mcgill_sable_soot_jimp_6sHUh+57,	/* 0. ca.mcgill.sable.soot.jimple.SparseLocalD */
    0};
