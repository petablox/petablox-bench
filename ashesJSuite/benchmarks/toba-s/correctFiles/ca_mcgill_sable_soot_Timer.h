/*  ca_mcgill_sable_soot_Timer.h -- from Java class ca.mcgill.sable.soot.Timer  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_Timer
#define h_ca_mcgill_sable_soot_Timer

#define init_ca_mcgill_sable_soot_Timer() if (cl_ca_mcgill_sable_soot_Timer.C.needinit) initclass(&cl_ca_mcgill_sable_soot_Timer.C)

Void	init_S_8aYc8(Object,Object);
Void	init__Mwsz9(Object);
Void	setSubstractingGC_z_D02qI(Boolean);
Void	start__WrH0x(Object);
Object	toString__gLUmb(Object);
Void	end__dIyfD(Object);
Long	getTime__Zo3V2(Object);
Void	clinit__rkWem(void);

struct mt_ca_mcgill_sable_soot_Timer {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__Mwsz9;
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
	int localp;int access;int classfilePos;Class *xlist;} toString__gLUmb;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait__Zlr2b;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_l_1Iito;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_li_07Ea2;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_S_8aYc8;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} start__WrH0x;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} end__dIyfD;
    struct {TobaMethodInvokeType itype;Long(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTime__Zo3V2;
};

struct cv_ca_mcgill_sable_soot_Timer {
    Object outstandingTimers;
    Boolean isGarbageCollecting;
    Object forcedGarbageCollectionTimer;
    Boolean isSubstractingGC;
    Int count;
};

extern struct cl_ca_mcgill_sable_soot_Timer {
    struct class C;
    struct mt_ca_mcgill_sable_soot_Timer M;
    struct cv_ca_mcgill_sable_soot_Timer V;
} cl_ca_mcgill_sable_soot_Timer;

struct in_ca_mcgill_sable_soot_Timer {
    struct cl_ca_mcgill_sable_soot_Timer *class;
    struct monitor *monitor;
    Long duration;
    Long startTime;
    Boolean hasStarted;
    Object name;
};

#endif /* h_ca_mcgill_sable_soot_Timer */
