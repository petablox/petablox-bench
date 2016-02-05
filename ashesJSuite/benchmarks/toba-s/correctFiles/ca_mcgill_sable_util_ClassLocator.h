/*  ca_mcgill_sable_util_ClassLocator.h -- from Java class ca.mcgill.sable.util.ClassLocator  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_util_ClassLocator
#define h_ca_mcgill_sable_util_ClassLocator

#define init_ca_mcgill_sable_util_ClassLocator() if (cl_ca_mcgill_sable_util_ClassLocator.C.needinit) initclass(&cl_ca_mcgill_sable_util_ClassLocator.C)

Void	init__4OmY1(Object);
Object	getInputStreamOf_S_oKYi6(Object);
Object	getInputStreamOf_SS_YieAy(Object,Object);
Void	clinit__Xu9HR(void);

struct mt_ca_mcgill_sable_util_ClassLocator {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__4OmY1;
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
};

struct cv_ca_mcgill_sable_util_ClassLocator {
    Char pathSeparator;
    Char fileSeparator;
};

extern struct cl_ca_mcgill_sable_util_ClassLocator {
    struct class C;
    struct mt_ca_mcgill_sable_util_ClassLocator M;
    struct cv_ca_mcgill_sable_util_ClassLocator V;
} cl_ca_mcgill_sable_util_ClassLocator;

struct in_ca_mcgill_sable_util_ClassLocator {
    struct cl_ca_mcgill_sable_util_ClassLocator *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_util_ClassLocator */
