/*  ca_mcgill_sable_soot_FloatType.h -- from Java class ca.mcgill.sable.soot.FloatType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_FloatType
#define h_ca_mcgill_sable_soot_FloatType

#define init_ca_mcgill_sable_soot_FloatType() if (cl_ca_mcgill_sable_soot_FloatType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_FloatType.C)

Void	init__Vca6v(Object);
Object	v__m4rGl(void);
Boolean	equals_O_4pnXS(Object,Object);
Int	hashCode__DLkqq(Object);
Object	toString__tVv24(Object);
Void	apply_S_Lognj(Object,Object);
Void	clinit__i1RDE(void);

struct mt_ca_mcgill_sable_soot_FloatType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__Vca6v;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_4pnXS;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__DLkqq;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__tVv24;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_Lognj;
};

struct cv_ca_mcgill_sable_soot_FloatType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_FloatType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_FloatType M;
    struct cv_ca_mcgill_sable_soot_FloatType V;
} cl_ca_mcgill_sable_soot_FloatType;

struct in_ca_mcgill_sable_soot_FloatType {
    struct cl_ca_mcgill_sable_soot_FloatType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_FloatType */
