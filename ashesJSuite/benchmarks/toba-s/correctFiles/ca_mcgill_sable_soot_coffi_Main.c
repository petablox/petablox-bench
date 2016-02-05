/*  ca_mcgill_sable_soot_coffi_Main.c -- from Java class ca.mcgill.sable.soot.coffi.Main  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_Main.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_CFG.h"
#include "ca_mcgill_sable_soot_coffi_ClassFile.h"
#include "ca_mcgill_sable_soot_coffi_Code_attribute.h"
#include "ca_mcgill_sable_soot_coffi_Instruction.h"
#include "ca_mcgill_sable_soot_coffi_method_info.h"
#include "java_io_PrintStream.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_Main.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_CFG.C,
    &cl_ca_mcgill_sable_soot_coffi_ClassFile.C,
    &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
    &cl_ca_mcgill_sable_soot_coffi_method_info.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_Main[];
extern const void *st_ca_mcgill_sable_soot_coffi_Main[];
extern Class xt_main_aS_M6qkL[];
extern Class xt_printClassInfo_S_XcGLP[];
extern Class xt_init__IDpXe[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_Main.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_Main.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_Main.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_Main.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','M','a','i','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
static const Char nmsm_0[] = {
'm','a','i','n'};
static const Char sgsm_0[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';',')','V'};
static const Char nmsm_1[] = {
'p','r','i','n','t','C','l','a','s','s','I','n','f','o'};
static const Char sgsm_1[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
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
    {TMIT_native_code, (Void(*)())main_aS_M6qkL,
	(const Char *)&nmsm_0,4,(const Char *)&sgsm_0,22,
	1,0x9,0,xt_main_aS_M6qkL},
    {TMIT_native_code, (Void(*)())printClassInfo_S_XcGLP,
	(const Char *)&nmsm_1,14,(const Char *)&sgsm_1,21,
	1,0x9,1,xt_printClassInfo_S_XcGLP},
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
} inr_ca_mcgill_sable_soot_coffi_Main = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_Main.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_Main cl_ca_mcgill_sable_soot_coffi_Main = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_Main),
    12,
    2,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    10, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_Main,
    st_ca_mcgill_sable_soot_coffi_Main,
    0,
    init__IDpXe,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_Main,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__IDpXe,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,2,xt_init__IDpXe},
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


/*M main_aS_M6qkL: ca.mcgill.sable.soot.coffi.Main.main([Ljava/lang/String;)V */

Class xt_main_aS_M6qkL[] = { &cl_java_lang_RuntimeException.C, 0 };

Void main_aS_M6qkL(Object p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	if (i1 != 0)
		GOTO(2,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Main[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	i1 = 0;
	exit_i_d4JE9(i1);
L1:	i1 = 0;
	iv1 = i1;
	GOTO(19,L3);

L2:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	printClassInfo_S_XcGLP(a1);
	iv1 += 1;
L3:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(34,L2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printClassInfo_S_XcGLP: ca.mcgill.sable.soot.coffi.Main.printClassInfo(Ljava/lang/String;)V */

Class xt_printClassInfo_S_XcGLP[] = { 0 };

Void printClassInfo_S_XcGLP(Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av10, av11, av18;
Int i0, i1, i2, i3, i4, i5;
Int iv8, iv9;
Long l0, l1, l2, l3, l4, l5;
Long lv2, lv4, lv6, lv12, lv14, lv16;
PROLOGUE;

	av0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_ClassFile.C);
	a2 = a1;
	a3 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_nTwMQ(a2,a3);
	av1 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		loadClassFile__fX87x.f(a1);
	iv8 = i1;
	i1 = iv8;
	if (i1 != 0)
		GOTO(17,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_Main[2];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av0;
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

L1:	l2 = 0;
	lv2 = l2;
	l2 = 0;
	lv4 = l2;
	l2 = 0;
	lv6 = l2;
	i1 = 0;
	iv9 = i1;
	GOTO(55,L6);

L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av11 = a1;
	l2 = 0;
	lv12 = l2;
	l2 = 0;
	lv14 = l2;
	l2 = 0;
	lv16 = l2;
	a1 = av11;
	if (a1 == 0)
		GOTO(85,L5);
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CFG.C);
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_m_MVZMH(a1,a2);
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->cfg;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		reconstructInstructions__7XqXF.f(a1);
	l2 = lv12;
	a3 = av11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a3)->max_locals;
	l4 = i3;
	l2 = l2 + l4;
	lv12 = l2;
	l2 = lv16;
	a3 = av11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a3)->code_length;
	l2 = l2 + l4;
	lv16 = l2;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructions;
	av18 = a1;
	GOTO(133,L4);

L3:	l2 = lv14;
	l4 = 1;
	l2 = l2 + l4;
	lv14 = l2;
	a1 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av18 = a1;
L4:	a1 = av18;
	if (a1 != 0)
		GOBACK(151,L3);
L5:	l2 = lv2;
	l4 = lv12;
	l2 = l2 + l4;
	lv2 = l2;
	l2 = lv4;
	l4 = lv14;
	l2 = l2 + l4;
	lv4 = l2;
	l2 = lv6;
	l4 = lv16;
	l2 = l2 + l4;
	lv6 = l2;
	iv9 += 1;
L6:	i1 = iv9;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(182,L2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av0;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Main[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Main[4];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Main[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Main[6];
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
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__IDpXe: ca.mcgill.sable.soot.coffi.Main.<init>()V */

Class xt_init__IDpXe[] = { 0 };

Void init__IDpXe(Object p0)
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



const Char ch_ca_mcgill_sable_soot_coffi_Main[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','M','a','i','n','U','s','a','g','e',
':',' ','j','a','v','a',' ','c','a','.','m','c','g','i','l','l','.','s',
'a','b','l','e','.','s','o','o','t','.','c','o','f','f','i','.','M','a',
'i','n',' ','c','l','a','s','s','1',' ','c','l','a','s','s','2',' ','.',
'.','.','C','o','u','l','d','n',39,'t',' ','l','o','a','d',' ','c','l',
'a','s','s',' ','f','i','l','e',' ','f','o','r',' ',':',' ',' ','l','o',
'c','a','l','s',' ',' ',' ','b','y','t','e','c','o','d','e',' ','i','n',
's','t','r','u','c','t','i','o','n','s',' ',' ',' ','b','y','t','e','s',
' ','o','f',' ','c','o','d','e'};

const void *st_ca_mcgill_sable_soot_coffi_Main[] = {
    ch_ca_mcgill_sable_soot_coffi_Main+31,	/* 0. ca.mcgill.sable.soot.coffi.Main */
    ch_ca_mcgill_sable_soot_coffi_Main+92,	/* 1. Usage: java ca.mcgill.sable.soot.coffi.M */
    ch_ca_mcgill_sable_soot_coffi_Main+121,	/* 2. Couldn't load class file for  */
    ch_ca_mcgill_sable_soot_coffi_Main+123,	/* 3. :  */
    ch_ca_mcgill_sable_soot_coffi_Main+132,	/* 4.  locals   */
    ch_ca_mcgill_sable_soot_coffi_Main+156,	/* 5.  bytecode instructions   */
    ch_ca_mcgill_sable_soot_coffi_Main+170,	/* 6.  bytes of code */
    0};
