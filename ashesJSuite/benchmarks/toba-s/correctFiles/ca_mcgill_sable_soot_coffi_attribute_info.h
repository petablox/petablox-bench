/*  ca_mcgill_sable_soot_coffi_attribute_info.h -- from Java class ca.mcgill.sable.soot.coffi.attribute_info  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_coffi_attribute_info
#define h_ca_mcgill_sable_soot_coffi_attribute_info

#define init_ca_mcgill_sable_soot_coffi_attribute_info() (void)0

Void	init__ua7Tq(Object);

struct mt_ca_mcgill_sable_soot_coffi_attribute_info {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__ua7Tq;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_Ba6e0;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__8wJNW;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__4d9OF;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait__Zlr2b;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_l_1Iito;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_li_07Ea2;
};

struct cv_ca_mcgill_sable_soot_coffi_attribute_info {
    Object SourceFile;
    Object ConstantValue;
    Object Code;
    Object Exceptions;
    Object LineNumberTable;
    Object LocalVariableTable;
};

extern struct cl_ca_mcgill_sable_soot_coffi_attribute_info {
    struct class C;
    struct mt_ca_mcgill_sable_soot_coffi_attribute_info M;
    struct cv_ca_mcgill_sable_soot_coffi_attribute_info V;
} cl_ca_mcgill_sable_soot_coffi_attribute_info;

struct in_ca_mcgill_sable_soot_coffi_attribute_info {
    struct cl_ca_mcgill_sable_soot_coffi_attribute_info *class;
    struct monitor *monitor;
    Int attribute_name;
    Long attribute_length;
};

#endif /* h_ca_mcgill_sable_soot_coffi_attribute_info */
