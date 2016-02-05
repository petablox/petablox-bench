/*  ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.c -- from Java class ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.h"
#include "ca_mcgill_sable_soot_coffi_cp_info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_Utf8_Enumeration.h"
#include "java_io_ByteArrayInputStream.h"
#include "java_io_ByteArrayOutputStream.h"
#include "java_io_DataInputStream.h"
#include "java_io_DataOutputStream.h"
#include "java_io_IOException.h"
#include "java_io_PrintStream.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
    &cl_ca_mcgill_sable_soot_coffi_cp_info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.C,
    &cl_java_io_ByteArrayInputStream.C,
    &cl_java_io_ByteArrayOutputStream.C,
    &cl_java_io_DataInputStream.C,
    &cl_java_io_DataOutputStream.C,
    &cl_java_io_IOException.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info[];
extern const void *st_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info[];
extern Class xt_length__jLQ5J[];
extern Class xt_size__Y9yrM[];
extern Class xt_convert__7aF4O[];
extern Class xt_equals_C_LeoW8[];
extern Class xt_compareTo_accac_WTybt[];
extern Class xt_compareTo_c_YCRvR[];
extern Class xt_toUtf8_S_r1ose[];
extern Class xt_toString_ac_GcXHi[];
extern Class xt_typeName__LRRb6[];
extern Class xt_init__S8O9p[];
extern Class xt_clinit__d4bJE[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(45) nmchars = {&acl_char, 0, 45, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','O','N','S','T','A','N','T','_',
'U','t','f','8','_','i','n','f','o'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 45 };
static const Char nmcv_0[] = {
'e','1'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','U','t','f','8','_','E','n','u',
'm','e','r','a','t','i','o','n',';'};
static const Char nmcv_1[] = {
'e','2'};
static const Char sgcv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','U','t','f','8','_','E','n','u',
'm','e','r','a','t','i','o','n',';'};
static const Char nmiv_0[] = {
't','a','g'};
static const Char sgiv_0[] = {
'B'};
static const Char nmiv_1[] = {
's'};
static const Char sgiv_1[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_2[] = {
'b','y','t','e','s'};
static const Char sgiv_2[] = {
'[','B'};
static const Char nmsm_0[] = {
't','o','U','t','f','8'};
static const Char sgsm_0[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','[','B'};
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
's','i','z','e'};
static const Char sgim_12[] = {
'(',')','I'};
static const Char nmim_13[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmim_14[] = {
't','y','p','e','N','a','m','e'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_15[] = {
'c','o','m','p','a','r','e','T','o'};
static const Char sgim_15[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n',
'f','o',';',')','I'};
static const Char nmim_16[] = {
'l','e','n','g','t','h'};
static const Char sgim_16[] = {
'(',')','I'};
static const Char nmim_17[] = {
'c','o','n','v','e','r','t'};
static const Char sgim_17[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_18[] = {
'e','q','u','a','l','s'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','C','O','N','S','T','A','N',
'T','_','U','t','f','8','_','i','n','f','o',';',')','Z'};
static const Char nmim_19[] = {
'c','o','m','p','a','r','e','T','o'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f','o',
';',')','I'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e1,(const Char *)&nmcv_0,2,(const Char *)&sgcv_0,45,1,0xa,0}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e2,(const Char *)&nmcv_1,2,(const Char *)&sgcv_1,45,1,0xa,1}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info, tag), 0,(const Char *)&nmiv_0,3,(const Char *)&sgiv_0,1,0,0x1,11}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info, s), 0,(const Char *)&nmiv_1,1,(const Char *)&sgiv_1,18,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info, bytes), 0,(const Char *)&nmiv_2,5,(const Char *)&sgiv_2,2,1,0x1,3}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())toUtf8_S_r1ose,
	(const Char *)&nmsm_0,6,(const Char *)&sgsm_0,22,
	1,0x9,6,xt_toUtf8_S_r1ose},
    {TMIT_native_code, (Void(*)())clinit__d4bJE,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,10,xt_clinit__d4bJE},
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
} inr_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info),
    20,
    2,
    3,
    2,
    3, supers,
    0, 0, inters, HASHMASK, htable,
    10, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info,
    st_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info,
    clinit__d4bJE,
    init__S8O9p,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__S8O9p,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,9,xt_init__S8O9p},
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
	{TMIT_native_code, size__Y9yrM,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,1,0x1,1,xt_size__Y9yrM},
	{TMIT_native_code, toString_ac_GcXHi,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,57,1,0x1,7,xt_toString_ac_GcXHi},
	{TMIT_native_code, typeName__LRRb6,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,20,1,0x1,8,xt_typeName__LRRb6},
	{TMIT_native_code, compareTo_accac_WTybt,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,113,1,0x1,4,xt_compareTo_accac_WTybt},
	{TMIT_native_code, length__jLQ5J,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,3,1,0x1,0,xt_length__jLQ5J},
	{TMIT_native_code, convert__7aF4O,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,20,1,0x1,2,xt_convert__7aF4O},
	{TMIT_native_code, equals_C_LeoW8,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,50,1,0x1,3,xt_equals_C_LeoW8},
	{TMIT_native_code, compareTo_c_YCRvR,(const Char *)&nmim_19,9,
	(const Char *)&sgim_19,39,1,0x1,5,xt_compareTo_c_YCRvR},
    } /* end of methodsigs */
};


/*M length__jLQ5J: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.length()I */

Class xt_length__jLQ5J[] = { 0 };

Int length__jLQ5J(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->bytes;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	i2 = 255;
	i1 = i1 & i2;
	i2 = 8;
	i1 = i1 << (i2 & 31);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a2)->bytes;
	i3 = 1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct barray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct barray*)a2)->data[i3];
	i3 = 255;
	i2 = i2 & i3;
	i1 = i1 + i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__Y9yrM: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.size()I */

Class xt_size__Y9yrM[] = { 0 };

Int size__Y9yrM(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		length__jLQ5J.f(a1);
	i2 = 3;
	i1 = i1 + i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M convert__7aF4O: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.convert()Ljava/lang/String; */

Class xt_convert__7aF4O[] = { 0 };

Object convert__7aF4O(Object p0)
{
static struct handler htable[] = {
    &cl_java_io_IOException.C, 7, 36, 1,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Object rv;
Object a0, a1, a2, a3;
volatile Object av0, av1, av2;
PROLOGUE;

	av0 = p0;

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 1, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->s;
	if (a1 != 0)
		GOTO(4,L2);
	pc = 7;
	a1 = new(&cl_java_io_ByteArrayInputStream.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a3)->bytes;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_ab_xjh0E(a2,a3);
	av1 = a1;
	a1 = new(&cl_java_io_DataInputStream.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_I_eDEMb(a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUTF__sKeCU.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->s = a2;
	pc = 36;
	GOTO(36,L2);

L1:  case 1:
	pc = 39;
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info[1];
	rv = a1;
	goto RETURN;

L2:  case 2:
	pc = 43;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->s;
	rv = a1;
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return rv;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_C_LeoW8: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.equals(Lca/mcgill/sable/soot/coffi/CONSTANT_Utf8_info;)Z */

Class xt_equals_C_LeoW8[] = { 0 };

Boolean equals_C_LeoW8(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2, iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->bytes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	iv3 = i1;
	i1 = iv3;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a2)->bytes;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(12,L1);
	i1 = 0;
	return i1;

L1:	i1 = 0;
	iv2 = i1;
	GOTO(19,L4);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->bytes;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a2)->bytes;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct barray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct barray*)a2)->data[i3];
	if (i1 == i2)
		GOTO(34,L3);
	i1 = 0;
	return i1;

L3:	iv2 += 1;
L4:	i1 = iv2;
	i2 = iv3;
	if (i1 < i2)
		GOBACK(44,L2);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M compareTo_accac_WTybt: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.compareTo([Lca/mcgill/sable/soot/coffi/cp_info;Lca/mcgill/sable/soot/coffi/cp_info;[Lca/mcgill/sable/soot/coffi/cp_info;)I */

Class xt_compareTo_accac_WTybt[] = { 0 };

Int compareTo_accac_WTybt(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		compareTo_c_YCRvR.f(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M compareTo_c_YCRvR: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.compareTo(Lca/mcgill/sable/soot/coffi/cp_info;)I */

Class xt_compareTo_c_YCRvR[] = { 0 };

Int compareTo_c_YCRvR(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a2)->tag;
	if (i1 == i2)
		GOTO(8,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a2)->tag;
	i1 = i1 - i2;
	return i1;

L1:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a2)->bytes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->class->M.
		reset_ab_8um6Y.f(a1,a2);
	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a2)->bytes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->class->M.
		reset_ab_8um6Y.f(a1,a2);
	GOTO(46,L4);

L2:	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->class->M.
		nextElement__5z215.f(a1);
	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->class->M.
		nextElement__5z215.f(a1);
	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->c;
	a2 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a2)->c;
	if (i1 >= i2)
		GOTO(75,L3);
	i1 = -1;
	return i1;

L3:	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->c;
	a2 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a2)->c;
	if (i1 >= i2)
		GOTO(92,L4);
	i1 = 1;
	return i1;

L4:	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->class->M.
		hasMoreElements__u9gJ7.f(a1);
	if (i1 == 0)
		GOTO(103,L5);
	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->class->M.
		hasMoreElements__u9gJ7.f(a1);
	if (i1 != 0)
		GOBACK(112,L2);
L5:	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->class->M.
		hasMoreElements__u9gJ7.f(a1);
	if (i1 == 0)
		GOTO(121,L6);
	i1 = -1;
	return i1;

L6:	a1 = cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration*)a1)->class->M.
		hasMoreElements__u9gJ7.f(a1);
	if (i1 == 0)
		GOTO(132,L7);
	i1 = 1;
	return i1;

L7:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toUtf8_S_r1ose: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.toUtf8(Ljava/lang/String;)[B */

Class xt_toUtf8_S_r1ose[] = { 0 };

Object toUtf8_S_r1ose(Object p1)
{
static struct handler htable[] = {
    &cl_java_io_IOException.C, 0, 31, 1,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Object rv;
Object a0, a1, a2, a3, a4;
volatile Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p1;

	if (cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C);

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 1, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	pc = 0;
	a1 = new(&cl_java_io_ByteArrayOutputStream.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_lang_String*)a3)->class->M.
		length__rpuzQ.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_i_u5EZ3(a2,i3);
	av1 = a1;
	a1 = new(&cl_java_io_DataOutputStream.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_O_CfrLu(a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeUTF_S_cuFnP.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_io_ByteArrayOutputStream*)a1)->class->M.
		toByteArray__SS8wS.f(a1);
	rv = a1;
	goto RETURN;

L1:  case 1:
	pc = 31;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
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
	a1 = 0;
	rv = a1;
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return rv;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_ac_GcXHi: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.toString([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_toString_ac_GcXHi[] = { 0 };

Object toString_ac_GcXHi(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M typeName__LRRb6: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.typeName()Ljava/lang/String; */

Class xt_typeName__LRRb6[] = { 0 };

Object typeName__LRRb6(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info[3];
	return a1;

	/*NOTREACHED*/
}

/*M init__S8O9p: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.<init>()V */

Class xt_init__S8O9p[] = { 0 };

Void init__S8O9p(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__9KHck(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__d4bJE: ca.mcgill.sable.soot.coffi.CONSTANT_Utf8_info.<clinit>()V */

Class xt_clinit__d4bJE[] = { 0 };

Void clinit__d4bJE(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__S6oss(a2);
	cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e1 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__S6oss(a2);
	cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.V.e2 = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','O','N','S','T','A','N','T','_',
'U','t','f','8','_','i','n','f','o','!','!','I','O','E','x','c','e','p',
't','i','o','n','!','!','S','o','m','e',' ','s','o','r','t',' ','o','f',
' ','I','O',' ','e','x','c','e','p','t','i','o','n',' ','i','n',' ','t',
'o','U','t','f','8',' ','w','i','t','h',' ','u','t','f','8'};

const void *st_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info[] = {
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info+45,	/* 0. ca.mcgill.sable.soot.coffi.CONSTANT_Utf8 */
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info+60,	/* 1. !!IOException!! */
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info+101,	/* 2. Some sort of IO exception in toUtf8 with */
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info+105,	/* 3. utf8 */
    0};
