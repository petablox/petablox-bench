/*  ca_mcgill_sable_soot_ClassFile.h -- from Java class ca.mcgill.sable.soot.ClassFile  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_ClassFile
#define h_ca_mcgill_sable_soot_ClassFile

#define init_ca_mcgill_sable_soot_ClassFile() if (cl_ca_mcgill_sable_soot_ClassFile.C.needinit) initclass(&cl_ca_mcgill_sable_soot_ClassFile.C)

Void	init__Bl3nr(Object);
Object	v__w18M7(void);
Object	buildBodyOfFrom_SBi_i47Hl(Object,Object,Object,Int);
Void	clinit__I5Ya8(void);

struct mt_ca_mcgill_sable_soot_ClassFile {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__Bl3nr;
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
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object,Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} buildBodyOfFrom_SBi_i47Hl;
};

struct cv_ca_mcgill_sable_soot_ClassFile {
    Object classFileRepresentation;
};

extern struct cl_ca_mcgill_sable_soot_ClassFile {
    struct class C;
    struct mt_ca_mcgill_sable_soot_ClassFile M;
    struct cv_ca_mcgill_sable_soot_ClassFile V;
} cl_ca_mcgill_sable_soot_ClassFile;

struct in_ca_mcgill_sable_soot_ClassFile {
    struct cl_ca_mcgill_sable_soot_ClassFile *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_ClassFile */
