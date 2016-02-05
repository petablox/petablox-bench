/*  ca_mcgill_sable_soot_grimp_Main.h -- from Java class ca.mcgill.sable.soot.grimp.Main  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_grimp_Main
#define h_ca_mcgill_sable_soot_grimp_Main

#define init_ca_mcgill_sable_soot_grimp_Main() if (cl_ca_mcgill_sable_soot_grimp_Main.C.needinit) initclass(&cl_ca_mcgill_sable_soot_grimp_Main.C)

Void	main_aS_6tvzE(Object);
Void	handleClass_SSPi_Yp3gh(Object,Object,Object,Int);
Void	init__G2i2X(Object);
Void	clinit__twxuJ(void);

struct mt_ca_mcgill_sable_soot_grimp_Main {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__G2i2X;
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

struct cv_ca_mcgill_sable_soot_grimp_Main {
    Boolean naiveJimplification;
    Boolean onlyJimpleOutput;
    Boolean isVerbose;
    Boolean onlyJasminOutput;
    Boolean isProfilingOptimization;
    Boolean oldTyping;
    Boolean isInDebugMode;
    Boolean usePackedLive;
    Boolean usePackedDefs;
    Boolean isTestingPerformance;
    Object jimpleClassPath;
    Boolean produceJimpleFile;
    Boolean produceJasminFile;
    Boolean produceJimpFile;
    Boolean produceGrimpleFile;
    Boolean produceGrimpFile;
    Object copiesTimer;
    Object defsTimer;
    Object usesTimer;
    Object liveTimer;
    Object splitTimer;
    Object packTimer;
    Object cleanup1Timer;
    Object cleanup2Timer;
    Object conversionTimer;
    Object cleanupAlgorithmTimer;
    Object graphTimer;
    Object assignTimer;
    Object resolveTimer;
    Object aggregationTimer;
    Object totalTimer;
    Int conversionLocalCount;
    Int cleanup1LocalCount;
    Int splitLocalCount;
    Int assignLocalCount;
    Int packLocalCount;
    Int cleanup2LocalCount;
    Int conversionStmtCount;
    Int cleanup1StmtCount;
    Int splitStmtCount;
    Int assignStmtCount;
    Int packStmtCount;
    Int cleanup2StmtCount;
};

extern struct cl_ca_mcgill_sable_soot_grimp_Main {
    struct class C;
    struct mt_ca_mcgill_sable_soot_grimp_Main M;
    struct cv_ca_mcgill_sable_soot_grimp_Main V;
} cl_ca_mcgill_sable_soot_grimp_Main;

struct in_ca_mcgill_sable_soot_grimp_Main {
    struct cl_ca_mcgill_sable_soot_grimp_Main *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_grimp_Main */
