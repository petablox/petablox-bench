/*  ca_mcgill_sable_soot_coffi_attribute_info.c -- from Java class ca.mcgill.sable.soot.coffi.attribute_info  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_attribute_info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_attribute_info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_coffi_attribute_info[];
extern const void *st_ca_mcgill_sable_soot_coffi_attribute_info[];
extern Class xt_init__ua7Tq[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_attribute_info.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_attribute_info.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_attribute_info.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_attribute_info.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(41) nmchars = {&acl_char, 0, 41, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','a','t','t','r','i','b','u','t','e',
'_','i','n','f','o'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 41 };
static const Char nmcv_0[] = {
'S','o','u','r','c','e','F','i','l','e'};
static const Char sgcv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_1[] = {
'C','o','n','s','t','a','n','t','V','a','l','u','e'};
static const Char sgcv_1[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_2[] = {
'C','o','d','e'};
static const Char sgcv_2[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_3[] = {
'E','x','c','e','p','t','i','o','n','s'};
static const Char sgcv_3[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_4[] = {
'L','i','n','e','N','u','m','b','e','r','T','a','b','l','e'};
static const Char sgcv_4[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_5[] = {
'L','o','c','a','l','V','a','r','i','a','b','l','e','T','a','b','l','e'};
static const Char sgcv_5[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_0[] = {
'a','t','t','r','i','b','u','t','e','_','n','a','m','e'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'a','t','t','r','i','b','u','t','e','_','l','e','n','g','t','h'};
static const Char sgiv_1[] = {
'J'};
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
    {0,&cl_ca_mcgill_sable_soot_coffi_attribute_info.V.SourceFile,(const Char *)&nmcv_0,10,(const Char *)&sgcv_0,18,1,0x19,0}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_attribute_info.V.ConstantValue,(const Char *)&nmcv_1,13,(const Char *)&sgcv_1,18,1,0x19,1}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_attribute_info.V.Code,(const Char *)&nmcv_2,4,(const Char *)&sgcv_2,18,1,0x19,2}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_attribute_info.V.Exceptions,(const Char *)&nmcv_3,10,(const Char *)&sgcv_3,18,1,0x19,3}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_attribute_info.V.LineNumberTable,(const Char *)&nmcv_4,15,(const Char *)&sgcv_4,18,1,0x19,4}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_attribute_info.V.LocalVariableTable,(const Char *)&nmcv_5,18,(const Char *)&sgcv_5,18,1,0x19,5}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_attribute_info, attribute_name), 0,(const Char *)&nmiv_0,14,(const Char *)&sgiv_0,1,1,0x1,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_attribute_info, attribute_length), 0,(const Char *)&nmiv_1,16,(const Char *)&sgiv_1,1,1,0x1,7}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_undefined}
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
    static const CARRAY(10) _svchars = {&acl_char, 0, 10, 0,
'S','o','u','r','c','e','F','i','l','e'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 10};
   cl_ca_mcgill_sable_soot_coffi_attribute_info.V.SourceFile = intern_string (&_svjls);
   }
   {
    static const CARRAY(13) _svchars = {&acl_char, 0, 13, 0,
'C','o','n','s','t','a','n','t','V','a','l','u','e'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 13};
   cl_ca_mcgill_sable_soot_coffi_attribute_info.V.ConstantValue = intern_string (&_svjls);
   }
   {
    static const CARRAY(4) _svchars = {&acl_char, 0, 4, 0,
'C','o','d','e'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 4};
   cl_ca_mcgill_sable_soot_coffi_attribute_info.V.Code = intern_string (&_svjls);
   }
   {
    static const CARRAY(10) _svchars = {&acl_char, 0, 10, 0,
'E','x','c','e','p','t','i','o','n','s'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 10};
   cl_ca_mcgill_sable_soot_coffi_attribute_info.V.Exceptions = intern_string (&_svjls);
   }
   {
    static const CARRAY(15) _svchars = {&acl_char, 0, 15, 0,
'L','i','n','e','N','u','m','b','e','r','T','a','b','l','e'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 15};
   cl_ca_mcgill_sable_soot_coffi_attribute_info.V.LineNumberTable = intern_string (&_svjls);
   }
   {
    static const CARRAY(18) _svchars = {&acl_char, 0, 18, 0,
'L','o','c','a','l','V','a','r','i','a','b','l','e','T','a','b','l','e'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 18};
   cl_ca_mcgill_sable_soot_coffi_attribute_info.V.LocalVariableTable = intern_string (&_svjls);
   }
}

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_coffi_attribute_info = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_attribute_info.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_attribute_info cl_ca_mcgill_sable_soot_coffi_attribute_info = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_attribute_info),
    12,
    0,
    2,
    6,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_attribute_info,
    st_ca_mcgill_sable_soot_coffi_attribute_info,
    0,
    init__ua7Tq,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_attribute_info,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__ua7Tq,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,0,xt_init__ua7Tq},
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


/*M init__ua7Tq: ca.mcgill.sable.soot.coffi.attribute_info.<init>()V */

Class xt_init__ua7Tq[] = { 0 };

Void init__ua7Tq(Object p0)
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



const Char ch_ca_mcgill_sable_soot_coffi_attribute_info[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','a','t','t','r','i','b','u','t','e',
'_','i','n','f','o'};

const void *st_ca_mcgill_sable_soot_coffi_attribute_info[] = {
    ch_ca_mcgill_sable_soot_coffi_attribute_info+41,	/* 0. ca.mcgill.sable.soot.coffi.attribute_inf */
    0};
