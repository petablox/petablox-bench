/*  ca_mcgill_sable_soot_DoubleType.h -- from Java class ca.mcgill.sable.soot.DoubleType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_DoubleType
#define h_ca_mcgill_sable_soot_DoubleType

#define init_ca_mcgill_sable_soot_DoubleType() if (cl_ca_mcgill_sable_soot_DoubleType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_DoubleType.C)

Void	init__Q114y(Object);
Object	v__idXk2(void);
Boolean	equals_O_1nCa8(Object,Object);
Int	hashCode__Oak35(Object);
Object	toString__W3XLa(Object);
Void	apply_S_s6QSD(Object,Object);
Void	clinit__xC5WZ(void);

struct mt_ca_mcgill_sable_soot_DoubleType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__Q114y;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_1nCa8;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__Oak35;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__W3XLa;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_s6QSD;
};

struct cv_ca_mcgill_sable_soot_DoubleType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_DoubleType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_DoubleType M;
    struct cv_ca_mcgill_sable_soot_DoubleType V;
} cl_ca_mcgill_sable_soot_DoubleType;

struct in_ca_mcgill_sable_soot_DoubleType {
    struct cl_ca_mcgill_sable_soot_DoubleType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_DoubleType */
