/*  ca_mcgill_sable_soot_LongType.h -- from Java class ca.mcgill.sable.soot.LongType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_LongType
#define h_ca_mcgill_sable_soot_LongType

#define init_ca_mcgill_sable_soot_LongType() if (cl_ca_mcgill_sable_soot_LongType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_LongType.C)

Void	init__zJYFg(Object);
Object	v__0Qzrs(void);
Boolean	equals_O_aiGEB(Object,Object);
Int	hashCode__pmRw9(Object);
Object	toString__ttBpv(Object);
Void	apply_S_5vaon(Object,Object);
Void	clinit__4CnKn(void);

struct mt_ca_mcgill_sable_soot_LongType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__zJYFg;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_aiGEB;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__pmRw9;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__ttBpv;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_5vaon;
};

struct cv_ca_mcgill_sable_soot_LongType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_LongType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_LongType M;
    struct cv_ca_mcgill_sable_soot_LongType V;
} cl_ca_mcgill_sable_soot_LongType;

struct in_ca_mcgill_sable_soot_LongType {
    struct cl_ca_mcgill_sable_soot_LongType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_LongType */
