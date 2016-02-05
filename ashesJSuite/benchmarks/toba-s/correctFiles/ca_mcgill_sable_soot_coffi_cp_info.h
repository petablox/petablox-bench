/*  ca_mcgill_sable_soot_coffi_cp_info.h -- from Java class ca.mcgill.sable.soot.coffi.cp_info  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_coffi_cp_info
#define h_ca_mcgill_sable_soot_coffi_cp_info

#define init_ca_mcgill_sable_soot_coffi_cp_info() (void)0

Int	size__r1jXg(Object);
Object	toString_ac_vRhnB(Object,Object);
Object	typeName__4UJn9(Object);
Int	compareTo_accac_zSCEu(Object,Object,Object,Object);
Long	ints2long_ll_H0G5H(Long,Long);
Object	printBits_i_lEkmH(Int);
Object	printBits_l_iyFur(Long);
Object	getClassname_aci_PyxPt(Object,Int);
Object	getName_aci_7bz4S(Object,Int);
Int	countParams_aci_Y1c0b(Object,Int);
Object	getTypeDescr_aci_5fWXA(Object,Int);
Object	fieldType_aci_eALis(Object,Int);
Void	init__9KHck(Object);

struct mt_ca_mcgill_sable_soot_coffi_cp_info {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__9KHck;
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
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} size__r1jXg;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString_ac_vRhnB;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} typeName__4UJn9;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Object,Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} compareTo_accac_zSCEu;
};

struct cv_ca_mcgill_sable_soot_coffi_cp_info {
    Byte CONSTANT_Utf8;
    Byte CONSTANT_Integer;
    Byte CONSTANT_Float;
    Byte CONSTANT_Long;
    Byte CONSTANT_Double;
    Byte CONSTANT_Class;
    Byte CONSTANT_String;
    Byte CONSTANT_Fieldref;
    Byte CONSTANT_Methodref;
    Byte CONSTANT_InterfaceMethodref;
    Byte CONSTANT_NameAndType;
};

extern struct cl_ca_mcgill_sable_soot_coffi_cp_info {
    struct class C;
    struct mt_ca_mcgill_sable_soot_coffi_cp_info M;
    struct cv_ca_mcgill_sable_soot_coffi_cp_info V;
} cl_ca_mcgill_sable_soot_coffi_cp_info;

struct in_ca_mcgill_sable_soot_coffi_cp_info {
    struct cl_ca_mcgill_sable_soot_coffi_cp_info *class;
    struct monitor *monitor;
    Byte tag;
};

#endif /* h_ca_mcgill_sable_soot_coffi_cp_info */
