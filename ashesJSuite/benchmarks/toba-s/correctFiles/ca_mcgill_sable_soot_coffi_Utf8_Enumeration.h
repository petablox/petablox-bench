/*  ca_mcgill_sable_soot_coffi_Utf8_Enumeration.h -- from Java class ca.mcgill.sable.soot.coffi.Utf8_Enumeration  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_coffi_Utf8_Enumeration
#define h_ca_mcgill_sable_soot_coffi_Utf8_Enumeration

#define init_ca_mcgill_sable_soot_coffi_Utf8_Enumeration() (void)0

Void	init__S6oss(Object);
Void	init_ab_Dkn7l(Object,Object);
Void	reset_ab_8um6Y(Object,Object);
Boolean	hasMoreElements__u9gJ7(Object);
Object	nextElement__5z215(Object);

struct mt_ca_mcgill_sable_soot_coffi_Utf8_Enumeration {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__S6oss;
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
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_ab_Dkn7l;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} reset_ab_8um6Y;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hasMoreElements__u9gJ7;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} nextElement__5z215;
};

extern struct cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration {
    struct class C;
    struct mt_ca_mcgill_sable_soot_coffi_Utf8_Enumeration M;
} cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration;

struct in_ca_mcgill_sable_soot_coffi_Utf8_Enumeration {
    struct cl_ca_mcgill_sable_soot_coffi_Utf8_Enumeration *class;
    struct monitor *monitor;
    Int c;
    Short curindex;
    Short length;
    Object bytes;
};

#endif /* h_ca_mcgill_sable_soot_coffi_Utf8_Enumeration */
