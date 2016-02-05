/*  ca_mcgill_sable_soot_coffi_Info.c -- from Java class ca.mcgill.sable.soot.coffi.Info  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_Info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_ClassFile.h"
#include "java_io_PrintStream.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_Info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_ClassFile.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_Info[];
extern const void *st_ca_mcgill_sable_soot_coffi_Info[];
extern Class xt_init_C_OIljB[];
extern Class xt_verboseReport_P_Fp4X7[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_Info.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_Info.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_Info.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_Info.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','I','n','f','o'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
static const Char nmiv_0[] = {
'c','f'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','C','l','a','s','s','F','i','l',
'e',';'};
static const Char nmiv_1[] = {
'f','l','e','n','g','t','h'};
static const Char sgiv_1[] = {
'J'};
static const Char nmiv_2[] = {
'c','p'};
static const Char sgiv_2[] = {
'I'};
static const Char nmiv_3[] = {
'f','i','e','l','d','s'};
static const Char sgiv_3[] = {
'I'};
static const Char nmiv_4[] = {
'm','e','t','h','o','d','s'};
static const Char sgiv_4[] = {
'I'};
static const Char nmiv_5[] = {
'p','f','i','e','l','d','s'};
static const Char sgiv_5[] = {
'I'};
static const Char nmiv_6[] = {
'p','m','e','t','h','o','d','s'};
static const Char sgiv_6[] = {
'I'};
static const Char nmiv_7[] = {
'a','t','t','r','i','b','s','a','v','e'};
static const Char sgiv_7[] = {
'I'};
static const Char nmiv_8[] = {
'a','t','t','r','i','b','c','p','s','a','v','e'};
static const Char sgiv_8[] = {
'I'};
static const Char nmiv_9[] = {
'p','s','a','v','e'};
static const Char sgiv_9[] = {
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
's','o','o','t','/','c','o','f','f','i','/','C','l','a','s','s','F','i',
'l','e',';',')','V'};
static const Char nmim_13[] = {
'v','e','r','b','o','s','e','R','e','p','o','r','t'};
static const Char sgim_13[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','S','t','r',
'e','a','m',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, cf), 0,(const Char *)&nmiv_0,2,(const Char *)&sgiv_0,38,1,0x1,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, flength), 0,(const Char *)&nmiv_1,7,(const Char *)&sgiv_1,1,1,0x1,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, cp), 0,(const Char *)&nmiv_2,2,(const Char *)&sgiv_2,1,1,0x1,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, fields), 0,(const Char *)&nmiv_3,6,(const Char *)&sgiv_3,1,1,0x1,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, methods), 0,(const Char *)&nmiv_4,7,(const Char *)&sgiv_4,1,1,0x1,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, pfields), 0,(const Char *)&nmiv_5,7,(const Char *)&sgiv_5,1,1,0x1,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, pmethods), 0,(const Char *)&nmiv_6,8,(const Char *)&sgiv_6,1,1,0x1,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, attribsave), 0,(const Char *)&nmiv_7,10,(const Char *)&sgiv_7,1,1,0x1,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, attribcpsave), 0,(const Char *)&nmiv_8,12,(const Char *)&sgiv_8,1,1,0x1,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Info, psave), 0,(const Char *)&nmiv_9,5,(const Char *)&sgiv_9,1,1,0x1,9}, 
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
} inr_ca_mcgill_sable_soot_coffi_Info = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_Info.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_Info cl_ca_mcgill_sable_soot_coffi_Info = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_Info),
    14,
    0,
    10,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_Info,
    st_ca_mcgill_sable_soot_coffi_Info,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_Info,
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
	{TMIT_native_code, init_C_OIljB,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,41,1,0x1,0,xt_init_C_OIljB},
	{TMIT_native_code, verboseReport_P_Fp4X7,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,24,1,0x1,1,xt_verboseReport_P_Fp4X7},
    } /* end of methodsigs */
};


/*M init_C_OIljB: ca.mcgill.sable.soot.coffi.Info.<init>(Lca/mcgill/sable/soot/coffi/ClassFile;)V */

Class xt_init_C_OIljB[] = { 0 };

Void init_C_OIljB(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
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
	((struct in_ca_mcgill_sable_soot_coffi_Info*)a1)->cf = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M verboseReport_P_Fp4X7: ca.mcgill.sable.soot.coffi.Info.verboseReport(Ljava/io/PrintStream;)V */

Class xt_verboseReport_P_Fp4X7[] = { 0 };

Void verboseReport_P_Fp4X7(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2, iv5;
Long l0, l1, l2, l3, l4;
Double d0, d1, d2, d3, d4;
Double dv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->cf;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[2];
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
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[3];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->flength;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->cp;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->cf;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->constant_pool_count;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[6];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->fields;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[7];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->pfields;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[8];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->cf;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fields_count;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[9];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->methods;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[7];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->pmethods;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[8];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->cf;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->methods_count;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a1)->attribsave;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a2)->attribcpsave;
	i1 = i1 + i2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a2)->psave;
	i1 = i1 + i2;
	iv2 = i1;
	i1 = iv2;
	if (i1 <= 0)
		GOTO(218,L4);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Info[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a1)->attribsave;
	if (i1 <= 0)
		GOTO(231,L1);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[11];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->attribsave;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a1)->attribcpsave;
	if (i1 <= 0)
		GOTO(261,L2);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[12];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->attribcpsave;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a1)->psave;
	if (i1 <= 0)
		GOTO(291,L3);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[13];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->psave;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
L3:	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[14];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
	i1 = iv2;
	d2 = i1;
	d4 = 100000.0;
	d2 = d2 * d4;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_coffi_Info*)a3)->flength;
	d4 = l4;
	d2 = d2 / d4;
	dv3 = d2;
	d2 = dv3;
	i1 = dtoi(d2);
	iv5 = i1;
	i1 = iv5;
	d2 = i1;
	d4 = 1000.0;
	d2 = d2 / d4;
	dv3 = d2;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Info[15];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	d4 = dv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_d_SPrwV.f(a2,d4);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Info[16];
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
L4:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_Info[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','I','n','f','o','<','I','N','F','O',
'>',' ','-','-',' ','D','e','b','i','g','u','l','a','t','i','o','n',' ',
'R','e','p','o','r','t',' ','o','n',' ',' ','-','-','<','I','N','F','O',
'>',' ',' ',' ','L','e','n','g','t','h',':',' ','<','I','N','F','O','>',
' ',' ',' ',' ',' ',' ',' ','C','P',':',' ',' ','r','e','d','u','c','e',
'd',' ','t','o',' ','<','I','N','F','O','>',' ',' ',' ','F','i','e','l',
'd','s',':',' ',' ','(',' ','p','r','i','v','a','t','e',')','<','I','N',
'F','O','>',' ',' ','M','e','t','h','o','d','s',':',' ','<','I','N','F',
'O','>',' ','-','-',' ','S','a','v','i','n','g','s',' ','t','h','r','o',
'u','g','h',' ','d','e','b','i','g','u','l','a','t','i','o','n',' ','-',
'-','<','I','N','F','O','>',' ',' ',' ',' ',' ',' ',' ',' ',' ','A','t',
't','r','i','b','u','t','e','s',':',' ','<','I','N','F','O','>',' ',' ',
' ',' ',' ','C','P',' ','C','o','m','p','r','e','s','s','i','o','n',':',
' ','<','I','N','F','O','>',' ',' ',' ','P','r','i','v','a','t','e',' ',
'r','e','n','a','m','i','n','g',':',' ','<','I','N','F','O','>',' ',' ',
'T','o','t','a','l',' ','s','a','v','i','n','g','s',':',' ','<','I','N',
'F','O','>',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','r','a','t','i','o',
':',' ','%'};

const void *st_ca_mcgill_sable_soot_coffi_Info[] = {
    ch_ca_mcgill_sable_soot_coffi_Info+31,	/* 0. ca.mcgill.sable.soot.coffi.Info */
    ch_ca_mcgill_sable_soot_coffi_Info+64,	/* 1. <INFO> -- Debigulation Report on  */
    ch_ca_mcgill_sable_soot_coffi_Info+67,	/* 2.  -- */
    ch_ca_mcgill_sable_soot_coffi_Info+84,	/* 3. <INFO>   Length:  */
    ch_ca_mcgill_sable_soot_coffi_Info+101,	/* 4. <INFO>       CP:  */
    ch_ca_mcgill_sable_soot_coffi_Info+113,	/* 5.  reduced to  */
    ch_ca_mcgill_sable_soot_coffi_Info+130,	/* 6. <INFO>   Fields:  */
    ch_ca_mcgill_sable_soot_coffi_Info+132,	/* 7.  ( */
    ch_ca_mcgill_sable_soot_coffi_Info+141,	/* 8.  private) */
    ch_ca_mcgill_sable_soot_coffi_Info+158,	/* 9. <INFO>  Methods:  */
    ch_ca_mcgill_sable_soot_coffi_Info+199,	/* 10. <INFO> -- Savings through debigulation - */
    ch_ca_mcgill_sable_soot_coffi_Info+226,	/* 11. <INFO>         Attributes:  */
    ch_ca_mcgill_sable_soot_coffi_Info+253,	/* 12. <INFO>     CP Compression:  */
    ch_ca_mcgill_sable_soot_coffi_Info+280,	/* 13. <INFO>   Private renaming:  */
    ch_ca_mcgill_sable_soot_coffi_Info+303,	/* 14. <INFO>  Total savings:  */
    ch_ca_mcgill_sable_soot_coffi_Info+326,	/* 15. <INFO>          ratio:  */
    ch_ca_mcgill_sable_soot_coffi_Info+327,	/* 16. % */
    0};
