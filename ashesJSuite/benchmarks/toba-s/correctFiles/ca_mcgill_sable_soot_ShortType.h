/*  ca_mcgill_sable_soot_ShortType.h -- from Java class ca.mcgill.sable.soot.ShortType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_ShortType
#define h_ca_mcgill_sable_soot_ShortType

#define init_ca_mcgill_sable_soot_ShortType() if (cl_ca_mcgill_sable_soot_ShortType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_ShortType.C)

Void	init__JcAEi(Object);
Object	v__QUgPF(void);
Int	hashCode__PR5nc(Object);
Boolean	equals_O_ySlXm(Object,Object);
Object	toString__NH0PA(Object);
Void	apply_S_3oq9Z(Object,Object);
Void	clinit__u7CAq(void);

struct mt_ca_mcgill_sable_soot_ShortType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__JcAEi;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_ySlXm;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__PR5nc;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__NH0PA;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_3oq9Z;
};

struct cv_ca_mcgill_sable_soot_ShortType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_ShortType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_ShortType M;
    struct cv_ca_mcgill_sable_soot_ShortType V;
} cl_ca_mcgill_sable_soot_ShortType;

struct in_ca_mcgill_sable_soot_ShortType {
    struct cl_ca_mcgill_sable_soot_ShortType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_ShortType */
