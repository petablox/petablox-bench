/*  ca_mcgill_sable_soot_jimple_Main.h -- from Java class ca.mcgill.sable.soot.jimple.Main  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_jimple_Main
#define h_ca_mcgill_sable_soot_jimple_Main

#define init_ca_mcgill_sable_soot_jimple_Main() if (cl_ca_mcgill_sable_soot_jimple_Main.C.needinit) initclass(&cl_ca_mcgill_sable_soot_jimple_Main.C)

Void	main_aS_oR52v(Object);
Object	toTimeString_Tl_TuPgB(Object,Long);
Object	toFormattedString_d_2bbp6(Double);
Void	handleClass_SSPi_smwyD(Object,Object,Object,Int);
Double	truncatedOf_di_gc88t(Double,Int);
Object	paddedLeftOf_Si_f0AxX(Object,Int);
Void	init__YAL7V(Object);
Void	clinit__dnvit(void);

struct mt_ca_mcgill_sable_soot_jimple_Main {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__YAL7V;
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

struct cv_ca_mcgill_sable_soot_jimple_Main {
    Boolean naiveJimplification;
    Boolean onlyJimpleOutput;
    Boolean isVerbose;
    Boolean onlyJasminOutput;
    Boolean isProfilingOptimization;
    Boolean isSubstractingGC;
    Boolean oldTyping;
    Boolean isInDebugMode;
    Boolean usePackedLive;
    Boolean usePackedDefs;
    Boolean isTestingPerformance;
    Object jimpleClassPath;
    Boolean produceJimpleFile;
    Boolean produceJasminFile;
    Boolean produceJimpFile;
    Int totalFlowNodes;
    Int totalFlowComputations;
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
    Object totalTimer;
    Object splitPhase1Timer;
    Object splitPhase2Timer;
    Object usePhase1Timer;
    Object usePhase2Timer;
    Object usePhase3Timer;
    Object defsSetupTimer;
    Object defsAnalysisTimer;
    Object defsPostTimer;
    Object liveSetupTimer;
    Object liveAnalysisTimer;
    Object livePostTimer;
    Object aggregationTimer;
    Object grimpAggregationTimer;
    Object deadCodeTimer;
    Object propagatorTimer;
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

extern struct cl_ca_mcgill_sable_soot_jimple_Main {
    struct class C;
    struct mt_ca_mcgill_sable_soot_jimple_Main M;
    struct cv_ca_mcgill_sable_soot_jimple_Main V;
} cl_ca_mcgill_sable_soot_jimple_Main;

struct in_ca_mcgill_sable_soot_jimple_Main {
    struct cl_ca_mcgill_sable_soot_jimple_Main *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_jimple_Main */
