/*  ca_mcgill_sable_soot_VoidType.h -- from Java class ca.mcgill.sable.soot.VoidType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_VoidType
#define h_ca_mcgill_sable_soot_VoidType

#define init_ca_mcgill_sable_soot_VoidType() if (cl_ca_mcgill_sable_soot_VoidType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_VoidType.C)

Void	init__ZggDK(Object);
Object	v__wzPnb(void);
Int	hashCode__bNZLi(Object);
Boolean	equals_O_QHnr1(Object,Object);
Object	toString__xfuRz(Object);
Void	apply_S_ZRSTf(Object,Object);
Void	clinit__Q2wZw(void);

struct mt_ca_mcgill_sable_soot_VoidType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__ZggDK;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_QHnr1;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__bNZLi;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__xfuRz;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_ZRSTf;
};

struct cv_ca_mcgill_sable_soot_VoidType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_VoidType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_VoidType M;
    struct cv_ca_mcgill_sable_soot_VoidType V;
} cl_ca_mcgill_sable_soot_VoidType;

struct in_ca_mcgill_sable_soot_VoidType {
    struct cl_ca_mcgill_sable_soot_VoidType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_VoidType */
