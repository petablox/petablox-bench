/*  ca_mcgill_sable_soot_coffi_BasicBlock.c -- from Java class ca.mcgill.sable.soot.coffi.BasicBlock  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_BasicBlock.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_Instruction.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_VectorSet.h"
#include "java_lang_Integer.h"
#include "java_lang_StringBuffer.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_VectorSet.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_BasicBlock[];
extern const void *st_ca_mcgill_sable_soot_coffi_BasicBlock[];
extern Class xt_getHeadJStmt__Rr9hT[];
extern Class xt_getTailJStmt__V7wzV[];
extern Class xt_init_I_hx5M0[];
extern Class xt_hashCode__ebbTE[];
extern Class xt_equals_B_5HRFP[];
extern Class xt_toString__cPgS9[];
extern Class xt_wideIndex_s_HT3TQ[];

#define HASHMASK 0x7
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
static const struct ihash htable[8] = {
    0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_BasicBlock.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_BasicBlock.M.equals_O_Ba6e0,
    0, 0,
};

static const CARRAY(37) nmchars = {&acl_char, 0, 37, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','B','a','s','i','c','B','l','o','c',
'k'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 37 };
static const Char nmcv_0[] = {
'i','d','s'};
static const Char sgcv_0[] = {
'J'};
static const Char nmiv_0[] = {
's','i','z','e'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'h','e','a','d'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c','t',
'i','o','n',';'};
static const Char nmiv_2[] = {
't','a','i','l'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c','t',
'i','o','n',';'};
static const Char nmiv_3[] = {
's','u','c','c'};
static const Char sgiv_3[] = {
'L','j','a','v','a','/','u','t','i','l','/','V','e','c','t','o','r',';'};
static const Char nmiv_4[] = {
'p','r','e','d'};
static const Char sgiv_4[] = {
'L','j','a','v','a','/','u','t','i','l','/','V','e','c','t','o','r',';'};
static const Char nmiv_5[] = {
'i','n','q'};
static const Char sgiv_5[] = {
'Z'};
static const Char nmiv_6[] = {
'b','e','g','i','n','E','x','c','e','p','t','i','o','n'};
static const Char sgiv_6[] = {
'Z'};
static const Char nmiv_7[] = {
'b','e','g','i','n','C','o','d','e'};
static const Char sgiv_7[] = {
'Z'};
static const Char nmiv_8[] = {
'd','o','n','e'};
static const Char sgiv_8[] = {
'Z'};
static const Char nmiv_9[] = {
'n','e','x','t'};
static const Char sgiv_9[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l','o',
'c','k',';'};
static const Char nmiv_10[] = {
'i','d'};
static const Char sgiv_10[] = {
'J'};
static const Char nmiv_11[] = {
'w','i','d','e'};
static const Char sgiv_11[] = {
'S'};
static const Char nmiv_12[] = {
's','t','m','t'};
static const Char sgiv_12[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';'};
static const Char nmiv_13[] = {
's','t','a','t','e','m','e','n','t','s'};
static const Char sgiv_13[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_14[] = {
'a','d','d','r','e','s','s','e','s','T','o','F','i','x','u','p'};
static const Char sgiv_14[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','S','e','t',';'};
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
'g','e','t','H','e','a','d','J','S','t','m','t'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';'};
static const Char nmim_13[] = {
'g','e','t','T','a','i','l','J','S','t','m','t'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';'};
static const Char nmim_14[] = {
'<','i','n','i','t','>'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';',')','V'};
static const Char nmim_15[] = {
'e','q','u','a','l','s'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l',
'o','c','k',';',')','Z'};
static const Char nmim_16[] = {
'w','i','d','e','I','n','d','e','x'};
static const Char sgim_16[] = {
'(','S',')','I'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_BasicBlock.V.ids,(const Char *)&nmcv_0,3,(const Char *)&sgcv_0,1,1,0xa,12}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, size), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,1,1,0x1,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, head), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,40,1,0x1,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, tail), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,40,1,0x1,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, succ), 0,(const Char *)&nmiv_3,4,(const Char *)&sgiv_3,18,1,0x1,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, pred), 0,(const Char *)&nmiv_4,4,(const Char *)&sgiv_4,18,1,0x1,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, inq), 0,(const Char *)&nmiv_5,3,(const Char *)&sgiv_5,1,1,0x1,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, beginException), 0,(const Char *)&nmiv_6,14,(const Char *)&sgiv_6,1,1,0x1,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, beginCode), 0,(const Char *)&nmiv_7,9,(const Char *)&sgiv_7,1,1,0x1,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, done), 0,(const Char *)&nmiv_8,4,(const Char *)&sgiv_8,1,1,0x0,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, next), 0,(const Char *)&nmiv_9,4,(const Char *)&sgiv_9,39,1,0x1,9}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, id), 0,(const Char *)&nmiv_10,2,(const Char *)&sgiv_10,1,1,0x1,10}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, wide), 0,(const Char *)&nmiv_11,4,(const Char *)&sgiv_11,1,1,0x2,11}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, stmt), 0,(const Char *)&nmiv_12,4,(const Char *)&sgiv_12,34,1,0x2,13}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, statements), 0,(const Char *)&nmiv_13,10,(const Char *)&sgiv_13,27,1,0x0,14}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock, addressesToFixup), 0,(const Char *)&nmiv_14,16,(const Char *)&sgiv_14,26,1,0x0,15}, 
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
} inr_ca_mcgill_sable_soot_coffi_BasicBlock = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_BasicBlock cl_ca_mcgill_sable_soot_coffi_BasicBlock = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_BasicBlock),
    17,
    0,
    15,
    1,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    7, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_BasicBlock,
    st_ca_mcgill_sable_soot_coffi_BasicBlock,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_BasicBlock,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__ebbTE,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x1,3,xt_hashCode__ebbTE},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__cPgS9,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,5,xt_toString__cPgS9},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, getHeadJStmt__Rr9hT,(const Char *)&nmim_12,12,
	(const Char *)&sgim_12,36,1,0x0,0,xt_getHeadJStmt__Rr9hT},
	{TMIT_native_code, getTailJStmt__V7wzV,(const Char *)&nmim_13,12,
	(const Char *)&sgim_13,36,1,0x0,1,xt_getTailJStmt__V7wzV},
	{TMIT_native_code, init_I_hx5M0,(const Char *)&nmim_14,6,
	(const Char *)&sgim_14,43,1,0x1,2,xt_init_I_hx5M0},
	{TMIT_native_code, equals_B_5HRFP,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,42,1,0x1,4,xt_equals_B_5HRFP},
	{TMIT_native_code, wideIndex_s_HT3TQ,(const Char *)&nmim_16,9,
	(const Char *)&sgim_16,4,1,0x2,6,xt_wideIndex_s_HT3TQ},
    } /* end of methodsigs */
};


/*M getHeadJStmt__Rr9hT: ca.mcgill.sable.soot.coffi.BasicBlock.getHeadJStmt()Lca/mcgill/sable/soot/jimple/Stmt; */

Class xt_getHeadJStmt__Rr9hT[] = { 0 };

Object getHeadJStmt__Rr9hT(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->statements;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1247717038)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTailJStmt__V7wzV: ca.mcgill.sable.soot.coffi.BasicBlock.getTailJStmt()Lca/mcgill/sable/soot/jimple/Stmt; */

Class xt_getTailJStmt__V7wzV[] = { 0 };

Object getTailJStmt__V7wzV(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->statements;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->statements;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-1646441547)->f)(a2);
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1247717038)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_I_hx5M0: ca.mcgill.sable.soot.coffi.BasicBlock.<init>(Lca/mcgill/sable/soot/coffi/Instruction;)V */

Class xt_init_I_hx5M0[] = { 0 };

Void init_I_hx5M0(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Long l0, l1, l2, l3, l4, l5, l6, l7;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_VectorSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__JHCxF(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->addressesToFixup = a2;
	a1 = av0;
	l3 = cl_ca_mcgill_sable_soot_coffi_BasicBlock.V.ids;
	l5 = l3;
	l7 = 1;
	l5 = l5 + l7;
	cl_ca_mcgill_sable_soot_coffi_BasicBlock.V.ids = l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->id = l3;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head = a2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->size = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	if (a1 == 0)
		GOTO(50,L3);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->size;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->size = i2;
	GOTO(63,L2);

L1:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->size;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->size = i2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail = a2;
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if (a1 != 0)
		GOBACK(94,L1);
L3:	a1 = av0;
	a2 = new(&cl_java_util_Vector.C);
	a3 = a2;
	i4 = 2;
	i5 = 10;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_ii_OSv0c(a3,i4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ = a2;
	a1 = av0;
	a2 = new(&cl_java_util_Vector.C);
	a3 = a2;
	i4 = 2;
	i5 = 3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_ii_OSv0c(a3,i4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__ebbTE: ca.mcgill.sable.soot.coffi.BasicBlock.hashCode()I */

Class xt_hashCode__ebbTE[] = { 0 };

Int hashCode__ebbTE(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_Integer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->head;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->label;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_i_oO9cr(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Integer*)a1)->class->M.
		hashCode__NNIVS.f(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_B_5HRFP: ca.mcgill.sable.soot.coffi.BasicBlock.equals(Lca/mcgill/sable/soot/coffi/BasicBlock;)Z */

Class xt_equals_B_5HRFP[] = { 0 };

Boolean equals_B_5HRFP(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (i1 != i2)
		GOTO(14,L1);
	i1 = 1;
	return i1;

L1:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__cPgS9: ca.mcgill.sable.soot.coffi.BasicBlock.toString()Ljava/lang/String; */

Class xt_toString__cPgS9[] = { 0 };

Object toString__cPgS9(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Long l0, l1, l2, l3;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_BasicBlock[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_l_2WFt8.f(a1,l3);
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

/*M wideIndex_s_HT3TQ: ca.mcgill.sable.soot.coffi.BasicBlock.wideIndex(S)I */

Class xt_wideIndex_s_HT3TQ[] = { 0 };

Int wideIndex_s_HT3TQ(Object p0, Short p1)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1, iv2;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->wide;
	i2 = 8;
	i1 = i1 << (i2 & 31);
	i2 = 65280;
	i1 = i1 & i2;
	i2 = iv1;
	i3 = 255;
	i2 = i2 & i3;
	i1 = i1 | i2;
	iv2 = i1;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->wide = i2;
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_BasicBlock[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','B','a','s','i','c','B','l','o','c',
'k','B','B',':',' '};

const void *st_ca_mcgill_sable_soot_coffi_BasicBlock[] = {
    ch_ca_mcgill_sable_soot_coffi_BasicBlock+37,	/* 0. ca.mcgill.sable.soot.coffi.BasicBlock */
    ch_ca_mcgill_sable_soot_coffi_BasicBlock+41,	/* 1. BB:  */
    0};
