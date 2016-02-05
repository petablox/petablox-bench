/*  ca_mcgill_sable_soot_coffi_Code_attribute.h -- from Java class ca.mcgill.sable.soot.coffi.Code_attribute  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_coffi_Code_attribute
#define h_ca_mcgill_sable_soot_coffi_Code_attribute

#define init_ca_mcgill_sable_soot_coffi_Code_attribute() (void)0

Object	findLocalVariableTable__CQucG(Object);
Void	init__rw5Dx(Object);

struct mt_ca_mcgill_sable_soot_coffi_Code_attribute {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__rw5Dx;
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
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} findLocalVariableTable__CQucG;
};

extern struct cl_ca_mcgill_sable_soot_coffi_Code_attribute {
    struct class C;
    struct mt_ca_mcgill_sable_soot_coffi_Code_attribute M;
} cl_ca_mcgill_sable_soot_coffi_Code_attribute;

struct in_ca_mcgill_sable_soot_coffi_Code_attribute {
    struct cl_ca_mcgill_sable_soot_coffi_Code_attribute *class;
    struct monitor *monitor;
    Int attribute_name;
    Long attribute_length;
    Int max_stack;
    Int max_locals;
    Long code_length;
    Object code;
    Int exception_table_length;
    Object exception_table;
    Int attributes_count;
    Object attributes;
};

#endif /* h_ca_mcgill_sable_soot_coffi_Code_attribute */
