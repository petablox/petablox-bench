/*  ca_mcgill_sable_util_ClassLocator.c -- from Java class ca.mcgill.sable.util.ClassLocator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_ClassLocator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_VectorList.h"
#include "java_io_File.h"
#include "java_io_FileInputStream.h"
#include "java_io_IOException.h"
#include "java_lang_Character.h"
#include "java_lang_ClassNotFoundException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_util_zip_ZipFile.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_ClassLocator.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_VectorList.C,
    &cl_java_io_File.C,
    &cl_java_io_FileInputStream.C,
    &cl_java_io_IOException.C,
    &cl_java_lang_Character.C,
    &cl_java_lang_ClassNotFoundException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
    &cl_java_util_zip_ZipFile.C,
};

extern const Char ch_ca_mcgill_sable_util_ClassLocator[];
extern const void *st_ca_mcgill_sable_util_ClassLocator[];
extern Class xt_init__4OmY1[];
extern Class xt_getInputStreamOf_S_oKYi6[];
extern Class xt_getInputStreamOf_SS_YieAy[];
extern Class xt_clinit__Xu9HR[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_ClassLocator.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_ClassLocator.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_ClassLocator.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_ClassLocator.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(33) nmchars = {&acl_char, 0, 33, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','C','l','a','s','s','L','o','c','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 33 };
static const Char nmcv_0[] = {
'p','a','t','h','S','e','p','a','r','a','t','o','r'};
static const Char sgcv_0[] = {
'C'};
static const Char nmcv_1[] = {
'f','i','l','e','S','e','p','a','r','a','t','o','r'};
static const Char sgcv_1[] = {
'C'};
static const Char nmsm_0[] = {
'g','e','t','I','n','p','u','t','S','t','r','e','a','m','O','f'};
static const Char sgsm_0[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','i','o','/','I','n','p','u','t','S','t',
'r','e','a','m',';'};
static const Char nmsm_1[] = {
'g','e','t','I','n','p','u','t','S','t','r','e','a','m','O','f'};
static const Char sgsm_1[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','i','o','/','I','n','p','u','t','S','t',
'r','e','a','m',';'};
static const Char nmsm_2[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_2[] = {
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

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_util_ClassLocator.V.pathSeparator,(const Char *)&nmcv_0,13,(const Char *)&sgcv_0,1,1,0xa,0}, 
    {0,&cl_ca_mcgill_sable_util_ClassLocator.V.fileSeparator,(const Char *)&nmcv_1,13,(const Char *)&sgcv_1,1,1,0xa,1}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())getInputStreamOf_S_oKYi6,
	(const Char *)&nmsm_0,16,(const Char *)&sgsm_0,41,
	1,0x9,1,xt_getInputStreamOf_S_oKYi6},
    {TMIT_native_code, (Void(*)())getInputStreamOf_SS_YieAy,
	(const Char *)&nmsm_1,16,(const Char *)&sgsm_1,59,
	1,0x9,2,xt_getInputStreamOf_SS_YieAy},
    {TMIT_native_code, (Void(*)())clinit__Xu9HR,
	(const Char *)&nmsm_2,8,(const Char *)&sgsm_2,3,
	1,0x8,3,xt_clinit__Xu9HR},
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
} inr_ca_mcgill_sable_util_ClassLocator = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_ClassLocator.C.classclass, 0};

struct cl_ca_mcgill_sable_util_ClassLocator cl_ca_mcgill_sable_util_ClassLocator = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_ClassLocator),
    12,
    3,
    0,
    2,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    11, others,
    0, 0,
    ch_ca_mcgill_sable_util_ClassLocator,
    st_ca_mcgill_sable_util_ClassLocator,
    clinit__Xu9HR,
    init__4OmY1,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_ClassLocator,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__4OmY1,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,0,xt_init__4OmY1},
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


/*M init__4OmY1: ca.mcgill.sable.util.ClassLocator.<init>()V */

Class xt_init__4OmY1[] = { 0 };

Void init__4OmY1(Object p0)
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

/*M getInputStreamOf_S_oKYi6: ca.mcgill.sable.util.ClassLocator.getInputStreamOf(Ljava/lang/String;)Ljava/io/InputStream; */

Class xt_getInputStreamOf_S_oKYi6[] = { &cl_java_lang_ClassNotFoundException.C, 0 };

Object getInputStreamOf_S_oKYi6(Object p1)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p1;

	if (cl_ca_mcgill_sable_util_ClassLocator.C.needinit)
		initclass(&cl_ca_mcgill_sable_util_ClassLocator.C);

L0:	a1 = (Object)st_ca_mcgill_sable_util_ClassLocator[1];
	a1 = getProperty_S_rjdkI(a1);
	a2 = av0;
	a1 = getInputStreamOf_SS_YieAy(a1,a2);
	return a1;

	/*NOTREACHED*/
}

/*M getInputStreamOf_SS_YieAy: ca.mcgill.sable.util.ClassLocator.getInputStreamOf(Ljava/lang/String;Ljava/lang/String;)Ljava/io/InputStream; */

Class xt_getInputStreamOf_SS_YieAy[] = { &cl_java_lang_ClassNotFoundException.C, 0 };

Object getInputStreamOf_SS_YieAy(Object p1, Object p2)
{
static struct handler htable[] = {
    &cl_java_io_IOException.C, 123, 159, 7,
    &cl_java_io_IOException.C, 266, 287, 11,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Object rv;
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
volatile Object av0, av1, av2, av5, av6, av7, av8;
Int i0, i1, i2, i3, i4, i5;
volatile Int iv3, iv4;
PROLOGUE;

	av0 = p1;
	av1 = p2;

	if (cl_ca_mcgill_sable_util_ClassLocator.C.needinit)
		initclass(&cl_ca_mcgill_sable_util_ClassLocator.C);

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 2, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	a1 = new(&cl_ca_mcgill_sable_util_VectorList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__nuIaa(a2);
	av2 = a1;
L1:  case 1:
	a1 = av0;
	i2 = cl_ca_mcgill_sable_util_ClassLocator.V.pathSeparator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		indexOf_i_RQbCe.f(a1,i2);
	iv3 = i1;
	i1 = iv3;
	i2 = -1;
	if (i1 != i2)
		GOTO(18,L2);
	a1 = av2;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	GOTO(29,L3);

L2:  case 2:
	a1 = av2;
	a2 = av0;
	i3 = 0;
	i4 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_String*)a2)->class->M.
		substring_ii_dKGgx.f(a2,i3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av0;
	i2 = iv3;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av0 = a1;
	GOBACK(53,L1);

L3:  case 3:
	i1 = 0;
	iv4 = i1;
	GOTO(59,L13);

L4:  case 4:
	pc = 62;
	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1247717038)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_java_lang_String.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_util_ClassLocator[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		endsWith_S_0JPFg.f(a1,a2);
	if (i1 != 0)
		GOTO(82,L5);
	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_util_ClassLocator[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		endsWith_S_0JPFg.f(a1,a2);
	if (i1 == 0)
		GOTO(92,L8);
L5:  case 5:
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av1;
	i4 = 46;
	i5 = 47;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_String*)a3)->class->M.
		replace_cc_AsLcG.f(a3,i4,i5);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_util_ClassLocator[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av6 = a1;
	pc = 123;
	a1 = new(&cl_java_util_zip_ZipFile.C);
	a2 = a1;
	a3 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_eHqax(a2,a3);
	av7 = a1;
	a1 = av7;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_zip_ZipFile*)a1)->class->M.
		getEntry_S_SUhk0.f(a1,a2);
	av8 = a1;
	a1 = av8;
	if (a1 != 0)
		GOTO(145,L6);
	GOTO(148,L12);

L6:  case 6:
	a1 = av7;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_zip_ZipFile*)a1)->class->M.
		getInputStream_Z_r89RJ.f(a1,a2);
	rv = a1;
	goto RETURN;

L7:  case 7:
	pc = 159;
	GOTO(160,L12);

L8:  case 8:
	pc = 163;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av1;
	i4 = 46;
	i5 = cl_ca_mcgill_sable_util_ClassLocator.V.fileSeparator;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_String*)a3)->class->M.
		replace_cc_AsLcG.f(a3,i4,i5);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_util_ClassLocator[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av6 = a1;
	a1 = av5;
	a2 = new(&cl_java_lang_Character.C);
	a3 = a2;
	i4 = cl_ca_mcgill_sable_util_ClassLocator.V.fileSeparator;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_c_lwu4Y(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Character*)a2)->class->M.
		toString__wiHO9.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		endsWith_S_0JPFg.f(a1,a2);
	if (i1 == 0)
		GOTO(210,L9);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av5;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av7 = a1;
	GOTO(235,L10);

L9:  case 9:
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av5;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	i2 = cl_ca_mcgill_sable_util_ClassLocator.V.fileSeparator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_c_PKutk.f(a1,i2);
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av7 = a1;
L10:  case 10:
	pc = 266;
	a1 = new(&cl_java_io_File.C);
	a2 = a1;
	a3 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_luDdr(a2,a3);
	av8 = a1;
	a1 = new(&cl_java_io_FileInputStream.C);
	a2 = a1;
	a3 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_F_GYXxg(a2,a3);
	rv = a1;
	goto RETURN;

L11:  case 11:
	pc = 287;
	GOTO(288,L12);

L12:  case 12:
	pc = 291;
	iv4 += 1;
L13:  case 13:
	pc = 294;
	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-1646441547)->f)(a2);
	if (i1 < i2)
		GOBACK(302,L4);
	a1 = new(&cl_java_lang_ClassNotFoundException.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_LDSpC(a2,a3);
	athrow(a1);

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return rv;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__Xu9HR: ca.mcgill.sable.util.ClassLocator.<clinit>()V */

Class xt_clinit__Xu9HR[] = { 0 };

Void clinit__Xu9HR(void)
{
Object a0, a1, a2;
Int i0, i1, i2;
PROLOGUE;


L0:	a1 = (Object)st_ca_mcgill_sable_util_ClassLocator[5];
	a1 = getProperty_S_rjdkI(a1);
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		charAt_i_nDguX.f(a1,i2);
	cl_ca_mcgill_sable_util_ClassLocator.V.pathSeparator = i1;
	a1 = (Object)st_ca_mcgill_sable_util_ClassLocator[6];
	a1 = getProperty_S_rjdkI(a1);
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		charAt_i_nDguX.f(a1,i2);
	cl_ca_mcgill_sable_util_ClassLocator.V.fileSeparator = i1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_ClassLocator[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','C','l','a','s','s','L','o','c','a','t','o','r','j','a','v',
'a','.','c','l','a','s','s','.','p','a','t','h','.','z','i','p','.','j',
'a','r','.','c','l','a','s','s','p','a','t','h','.','s','e','p','a','r',
'a','t','o','r','f','i','l','e','.','s','e','p','a','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_ClassLocator[] = {
    ch_ca_mcgill_sable_util_ClassLocator+33,	/* 0. ca.mcgill.sable.util.ClassLocator */
    ch_ca_mcgill_sable_util_ClassLocator+48,	/* 1. java.class.path */
    ch_ca_mcgill_sable_util_ClassLocator+52,	/* 2. .zip */
    ch_ca_mcgill_sable_util_ClassLocator+56,	/* 3. .jar */
    ch_ca_mcgill_sable_util_ClassLocator+62,	/* 4. .class */
    ch_ca_mcgill_sable_util_ClassLocator+76,	/* 5. path.separator */
    ch_ca_mcgill_sable_util_ClassLocator+90,	/* 6. file.separator */
    0};
