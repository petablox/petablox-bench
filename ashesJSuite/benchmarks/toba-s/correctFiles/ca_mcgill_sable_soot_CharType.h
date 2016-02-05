/*  ca_mcgill_sable_soot_CharType.h -- from Java class ca.mcgill.sable.soot.CharType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_CharType
#define h_ca_mcgill_sable_soot_CharType

#define init_ca_mcgill_sable_soot_CharType() if (cl_ca_mcgill_sable_soot_CharType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_CharType.C)

Void	init__F7avY(Object);
Object	v__eNy0s(void);
Boolean	equals_O_6FtuN(Object,Object);
Object	toString__tYP4Z(Object);
Int	hashCode__LsDXh(Object);
Void	apply_S_Ddvd5(Object,Object);
Void	clinit__qI9bw(void);

struct mt_ca_mcgill_sable_soot_CharType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__F7avY;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_6FtuN;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__LsDXh;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__tYP4Z;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait__Zlr2b;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_l_1Iito;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_li_07Ea2;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} merge_TS_yfmlv;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} apply_S_Ddvd5;
};

struct cv_ca_mcgill_sable_soot_CharType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_CharType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_CharType M;
    struct cv_ca_mcgill_sable_soot_CharType V;
} cl_ca_mcgill_sable_soot_CharType;

struct in_ca_mcgill_sable_soot_CharType {
    struct cl_ca_mcgill_sable_soot_CharType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_CharType */
