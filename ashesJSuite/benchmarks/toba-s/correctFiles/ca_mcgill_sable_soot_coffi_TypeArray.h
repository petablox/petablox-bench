/*  ca_mcgill_sable_soot_coffi_TypeArray.h -- from Java class ca.mcgill.sable.soot.coffi.TypeArray  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_coffi_TypeArray
#define h_ca_mcgill_sable_soot_coffi_TypeArray

#define init_ca_mcgill_sable_soot_coffi_TypeArray() (void)0

Void	setClassManager_S_Mo5jD(Object);
Void	init__Uc95y(Object);
Object	v_i_1Owbj(Int);
Object	get_i_eKxg0(Object,Int);
Object	set_iT_UiPfB(Object,Int,Object);
Boolean	equals_O_Dhry7(Object,Object);
Object	merge_T_eVa4T(Object,Object);
Void	print_P_ZvL9d(Object,Object);

struct mt_ca_mcgill_sable_soot_coffi_TypeArray {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__Uc95y;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_Dhry7;
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
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} get_i_eKxg0;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Int,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} set_iT_UiPfB;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} merge_T_eVa4T;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} print_P_ZvL9d;
};

struct cv_ca_mcgill_sable_soot_coffi_TypeArray {
    Object cm;
};

extern struct cl_ca_mcgill_sable_soot_coffi_TypeArray {
    struct class C;
    struct mt_ca_mcgill_sable_soot_coffi_TypeArray M;
    struct cv_ca_mcgill_sable_soot_coffi_TypeArray V;
} cl_ca_mcgill_sable_soot_coffi_TypeArray;

struct in_ca_mcgill_sable_soot_coffi_TypeArray {
    struct cl_ca_mcgill_sable_soot_coffi_TypeArray *class;
    struct monitor *monitor;
    Object types;
};

#endif /* h_ca_mcgill_sable_soot_coffi_TypeArray */
