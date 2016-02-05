/*  ca_mcgill_sable_soot_Timer.c -- from Java class ca.mcgill.sable.soot.Timer  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_Timer.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_Timer.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_Timer[];
extern const void *st_ca_mcgill_sable_soot_Timer[];
extern Class xt_init_S_8aYc8[];
extern Class xt_init__Mwsz9[];
extern Class xt_setSubstractingGC_z_D02qI[];
extern Class xt_start__WrH0x[];
extern Class xt_toString__gLUmb[];
extern Class xt_end__dIyfD[];
extern Class xt_getTime__Zo3V2[];
extern Class xt_clinit__rkWem[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
static const struct ihash htable[8] = {
    0, 0, -1992104095, &cl_ca_mcgill_sable_soot_Timer.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_Timer.M.clone__dslwm, 0, 0, 0, 0,
    0, 0, -1028981426, &cl_ca_mcgill_sable_soot_Timer.M.equals_O_Ba6e0,
    0, 0,
};

static const CARRAY(26) nmchars = {&acl_char, 0, 26, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','T','i','m','e','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 26 };
static const Char nmcv_0[] = {
'o','u','t','s','t','a','n','d','i','n','g','T','i','m','e','r','s'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmcv_1[] = {
'i','s','G','a','r','b','a','g','e','C','o','l','l','e','c','t','i','n',
'g'};
static const Char sgcv_1[] = {
'Z'};
static const Char nmcv_2[] = {
'f','o','r','c','e','d','G','a','r','b','a','g','e','C','o','l','l','e',
'c','t','i','o','n','T','i','m','e','r'};
static const Char sgcv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_3[] = {
'i','s','S','u','b','s','t','r','a','c','t','i','n','g','G','C'};
static const Char sgcv_3[] = {
'Z'};
static const Char nmcv_4[] = {
'c','o','u','n','t'};
static const Char sgcv_4[] = {
'I'};
static const Char nmiv_0[] = {
'd','u','r','a','t','i','o','n'};
static const Char sgiv_0[] = {
'J'};
static const Char nmiv_1[] = {
's','t','a','r','t','T','i','m','e'};
static const Char sgiv_1[] = {
'J'};
static const Char nmiv_2[] = {
'h','a','s','S','t','a','r','t','e','d'};
static const Char sgiv_2[] = {
'Z'};
static const Char nmiv_3[] = {
'n','a','m','e'};
static const Char sgiv_3[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmsm_0[] = {
's','e','t','S','u','b','s','t','r','a','c','t','i','n','g','G','C'};
static const Char sgsm_0[] = {
'(','Z',')','V'};
static const Char nmsm_1[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_1[] = {
'(',')','V'};
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
';',')','V'};
static const Char nmim_13[] = {
's','t','a','r','t'};
static const Char sgim_13[] = {
'(',')','V'};
static const Char nmim_14[] = {
'e','n','d'};
static const Char sgim_14[] = {
'(',')','V'};
static const Char nmim_15[] = {
'g','e','t','T','i','m','e'};
static const Char sgim_15[] = {
'(',')','J'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_Timer.V.outstandingTimers,(const Char *)&nmcv_0,17,(const Char *)&sgcv_0,27,1,0xa,4}, 
    {0,&cl_ca_mcgill_sable_soot_Timer.V.isGarbageCollecting,(const Char *)&nmcv_1,19,(const Char *)&sgcv_1,1,1,0xa,5}, 
    {0,&cl_ca_mcgill_sable_soot_Timer.V.forcedGarbageCollectionTimer,(const Char *)&nmcv_2,28,(const Char *)&sgcv_2,28,1,0x9,6}, 
    {0,&cl_ca_mcgill_sable_soot_Timer.V.isSubstractingGC,(const Char *)&nmcv_3,16,(const Char *)&sgcv_3,1,1,0xa,7}, 
    {0,&cl_ca_mcgill_sable_soot_Timer.V.count,(const Char *)&nmcv_4,5,(const Char *)&sgcv_4,1,1,0xa,8}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_Timer, duration), 0,(const Char *)&nmiv_0,8,(const Char *)&sgiv_0,1,1,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_Timer, startTime), 0,(const Char *)&nmiv_1,9,(const Char *)&sgiv_1,1,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_Timer, hasStarted), 0,(const Char *)&nmiv_2,10,(const Char *)&sgiv_2,1,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_Timer, name), 0,(const Char *)&nmiv_3,4,(const Char *)&sgiv_3,18,1,0x2,3}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())setSubstractingGC_z_D02qI,
	(const Char *)&nmsm_0,17,(const Char *)&sgsm_0,4,
	1,0x9,2,xt_setSubstractingGC_z_D02qI},
    {TMIT_native_code, (Void(*)())clinit__rkWem,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,7,xt_clinit__rkWem},
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
} inr_ca_mcgill_sable_soot_Timer = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_Timer.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_Timer cl_ca_mcgill_sable_soot_Timer = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_Timer),
    16,
    2,
    4,
    5,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_Timer,
    st_ca_mcgill_sable_soot_Timer,
    clinit__rkWem,
    init__Mwsz9,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_Timer,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__Mwsz9,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,1,xt_init__Mwsz9},
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
	{TMIT_native_code, toString__gLUmb,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,4,xt_toString__gLUmb},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_S_8aYc8,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,21,1,0x1,0,xt_init_S_8aYc8},
	{TMIT_native_code, start__WrH0x,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,3,1,0x1,3,xt_start__WrH0x},
	{TMIT_native_code, end__dIyfD,(const Char *)&nmim_14,3,
	(const Char *)&sgim_14,3,1,0x1,5,xt_end__dIyfD},
	{TMIT_native_code, getTime__Zo3V2,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,3,1,0x1,6,xt_getTime__Zo3V2},
    } /* end of methodsigs */
};


/*M init_S_8aYc8: ca.mcgill.sable.soot.Timer.<init>(Ljava/lang/String;)V */

Class xt_init_S_8aYc8[] = { 0 };

Void init_S_8aYc8(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Long l0, l1, l2, l3;
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
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->name = a2;
	a1 = av0;
	l3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->duration = l3;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__Mwsz9: ca.mcgill.sable.soot.Timer.<init>()V */

Class xt_init__Mwsz9[] = { 0 };

Void init__Mwsz9(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_Timer[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setSubstractingGC_z_D02qI: ca.mcgill.sable.soot.Timer.setSubstractingGC(Z)V */

Class xt_setSubstractingGC_z_D02qI[] = { 0 };

Void setSubstractingGC_z_D02qI(Boolean p1)
{
Int i0, i1;
Int iv0;
PROLOGUE;

	iv0 = p1;

	if (cl_ca_mcgill_sable_soot_Timer.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_Timer.C);

L0:	i1 = iv0;
	cl_ca_mcgill_sable_soot_Timer.V.isSubstractingGC = i1;
	return;

	/*NOTREACHED*/
}

/*M start__WrH0x: ca.mcgill.sable.soot.Timer.start()V */

Class xt_start__WrH0x[] = { 0 };

Void start__WrH0x(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5;
Long l0, l1, l2, l3, l4, l5;
PROLOGUE;

	av0 = p0;

L0:	i1 = cl_ca_mcgill_sable_soot_Timer.V.isGarbageCollecting;
	if (i1 != 0)
		GOTO(3,L5);
	i1 = cl_ca_mcgill_sable_soot_Timer.V.isSubstractingGC;
	if (i1 == 0)
		GOTO(9,L5);
	i1 = cl_ca_mcgill_sable_soot_Timer.V.count;
	i2 = i1;
	i3 = 1;
	i2 = i2 + i3;
	cl_ca_mcgill_sable_soot_Timer.V.count = i2;
	i2 = 4;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 % i2;
	if (i1 != 0)
		GOTO(23,L5);
	i1 = 1;
	cl_ca_mcgill_sable_soot_Timer.V.isGarbageCollecting = i1;
	a1 = cl_ca_mcgill_sable_soot_Timer.V.forcedGarbageCollectionTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
	a1 = cl_ca_mcgill_sable_soot_Timer.V.outstandingTimers;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av1 = a1;
	GOTO(45,L2);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_Timer.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(68,L1);
	gc__eDlhv();
	a1 = cl_ca_mcgill_sable_soot_Timer.V.outstandingTimers;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(83,L4);

L3:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_Timer.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L4:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(106,L3);
	a1 = cl_ca_mcgill_sable_soot_Timer.V.forcedGarbageCollectionTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
	i1 = 0;
	cl_ca_mcgill_sable_soot_Timer.V.isGarbageCollecting = i1;
L5:	a1 = av0;
	l3 = currentTimeMillis__gBRCJ();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->startTime = l3;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->hasStarted;
	if (i1 == 0)
		GOTO(130,L6);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_Timer[2];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_Timer*)a4)->name;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_Timer[3];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L6:	a1 = av0;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->hasStarted = i2;
	i1 = cl_ca_mcgill_sable_soot_Timer.V.isGarbageCollecting;
	if (i1 != 0)
		GOTO(173,L7);
	a1 = cl_ca_mcgill_sable_soot_Timer.V.outstandingTimers;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L7:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__gLUmb: ca.mcgill.sable.soot.Timer.toString()Ljava/lang/String; */

Class xt_toString__gLUmb[] = { 0 };

Object toString__gLUmb(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->name;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M end__dIyfD: ca.mcgill.sable.soot.Timer.end()V */

Class xt_end__dIyfD[] = { 0 };

Void end__dIyfD(Object p0)
{
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Long l0, l1, l2, l3, l4, l5, l6, l7;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->hasStarted;
	if (i1 != 0)
		GOTO(4,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_Timer[2];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_Timer*)a4)->name;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_Timer[4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->hasStarted = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_Timer*)a2)->duration;
	l5 = currentTimeMillis__gBRCJ();
	a6 = av0;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	l7 = ((struct in_ca_mcgill_sable_soot_Timer*)a6)->startTime;
	l5 = l5 - l7;
	l3 = l3 + l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->duration = l3;
	i1 = cl_ca_mcgill_sable_soot_Timer.V.isGarbageCollecting;
	if (i1 != 0)
		GOTO(64,L2);
	a1 = cl_ca_mcgill_sable_soot_Timer.V.outstandingTimers;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
L2:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTime__Zo3V2: ca.mcgill.sable.soot.Timer.getTime()J */

Class xt_getTime__Zo3V2[] = { 0 };

Long getTime__Zo3V2(Object p0)
{
Object a0, a1, a2;
Object av0;
Long l0, l1, l2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->duration;
	return l2;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__rkWem: ca.mcgill.sable.soot.Timer.<clinit>()V */

Class xt_clinit__rkWem[] = { 0 };

Void clinit__rkWem(void)
{
Object a0, a1, a2, a3;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	cl_ca_mcgill_sable_soot_Timer.V.outstandingTimers = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_Timer[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_Timer.V.forcedGarbageCollectionTimer = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_Timer[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','T','i','m','e','r','u','n','n','a','m','e','d','t','i','m',
'e','r',' ',' ','h','a','s',' ','a','l','r','e','a','d','y',' ','b','e',
'e','n',' ','s','t','a','r','t','e','d','!',' ','h','a','s',' ','n','o',
't',' ','b','e','e','n',' ','s','t','a','r','t','e','d','!','g','c'};

const void *st_ca_mcgill_sable_soot_Timer[] = {
    ch_ca_mcgill_sable_soot_Timer+26,	/* 0. ca.mcgill.sable.soot.Timer */
    ch_ca_mcgill_sable_soot_Timer+33,	/* 1. unnamed */
    ch_ca_mcgill_sable_soot_Timer+39,	/* 2. timer  */
    ch_ca_mcgill_sable_soot_Timer+65,	/* 3.  has already been started! */
    ch_ca_mcgill_sable_soot_Timer+87,	/* 4.  has not been started! */
    ch_ca_mcgill_sable_soot_Timer+89,	/* 5. gc */
    0};
