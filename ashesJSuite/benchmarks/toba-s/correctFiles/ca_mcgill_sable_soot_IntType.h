/*  ca_mcgill_sable_soot_IntType.h -- from Java class ca.mcgill.sable.soot.IntType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_IntType
#define h_ca_mcgill_sable_soot_IntType

#define init_ca_mcgill_sable_soot_IntType() if (cl_ca_mcgill_sable_soot_IntType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_IntType.C)

Void	init__EqMNA(Object);
Object	v__GKSua(void);
Boolean	equals_O_9IsMS(Object,Object);
Int	hashCode__uPNSZ(Object);
Object	toString__MFuMw(Object);
Void	apply_S_c3c5P(Object,Object);
Void	clinit__95k6e(void);

struct mt_ca_mcgill_sable_soot_IntType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__EqMNA;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_9IsMS;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__uPNSZ;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__MFuMw;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_c3c5P;
};

struct cv_ca_mcgill_sable_soot_IntType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_IntType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_IntType M;
    struct cv_ca_mcgill_sable_soot_IntType V;
} cl_ca_mcgill_sable_soot_IntType;

struct in_ca_mcgill_sable_soot_IntType {
    struct cl_ca_mcgill_sable_soot_IntType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_IntType */
