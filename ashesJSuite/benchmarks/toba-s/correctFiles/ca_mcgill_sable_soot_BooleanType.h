/*  ca_mcgill_sable_soot_BooleanType.h -- from Java class ca.mcgill.sable.soot.BooleanType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_BooleanType
#define h_ca_mcgill_sable_soot_BooleanType

#define init_ca_mcgill_sable_soot_BooleanType() if (cl_ca_mcgill_sable_soot_BooleanType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_BooleanType.C)

Void	init__DZPm1(Object);
Object	v__AA1Up(void);
Boolean	equals_O_eCZSi(Object,Object);
Int	hashCode__Xp8U5(Object);
Object	toString__Te78F(Object);
Void	apply_S_R9X1W(Object,Object);
Void	clinit__CFE7k(void);

struct mt_ca_mcgill_sable_soot_BooleanType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__DZPm1;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_eCZSi;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__Xp8U5;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__Te78F;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_R9X1W;
};

struct cv_ca_mcgill_sable_soot_BooleanType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_BooleanType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_BooleanType M;
    struct cv_ca_mcgill_sable_soot_BooleanType V;
} cl_ca_mcgill_sable_soot_BooleanType;

struct in_ca_mcgill_sable_soot_BooleanType {
    struct cl_ca_mcgill_sable_soot_BooleanType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_BooleanType */
