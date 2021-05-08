#ifndef __COMM_H__
#define __COMM_H__

void char_gen( DESCRIPTOR_DATA *d, char *argument );

extern struct chargen_choice_s chargen_body_table[CGEN_MAX_BODY];
extern struct chargen_choice_s chargen_face_table[CGEN_MAX_FACE];
extern struct chargen_choice_s chargen_skin_table[CGEN_MAX_SKIN];
extern struct chargen_choice_s chargen_eyes_table[CGEN_MAX_EYES];
extern struct chargen_choice_s chargen_hair_table[CGEN_MAX_HAIR];
extern struct chargen_choice_s chargen_hairl_table[CGEN_MAX_HAIRL];
extern struct chargen_choice_s chargen_hairt_table[CGEN_MAX_HAIRT];
extern struct chargen_choice_s chargen_hairf_table[CGEN_MAX_HAIRF];
extern struct chargen_choice_s chargen_perk_table[CGEN_MAX_PERK];



typedef void CHARGEN_FUN	( DESCRIPTOR_DATA* d, char* argument );
#define CHARGEN_FUN( func )	void func( DESCRIPTOR_DATA* d, char* argument )

extern const struct chargen_type {
  char*		name;	//name of the state
  char*		prompt;	//standart prompt
  CHARGEN_FUN*	func;	//function to run
}chargen_table[];

struct chargen_choice_s{
  char*		name;
  char*		string;
  int		int1;
  sh_int*	int2;
};

CHARGEN_FUN(	chargen_null	);
CHARGEN_FUN(	chargen_greet	);
CHARGEN_FUN(	chargen_main	);
CHARGEN_FUN(	chargen_help	);

CHARGEN_FUN(	chargen_enter	);
CHARGEN_FUN(	chargen_pass	);
CHARGEN_FUN(	chargen_immpass	);
CHARGEN_FUN(	chargen_motd	);
CHARGEN_FUN(	chargen_ready	);

CHARGEN_FUN(	chargen_create	);
CHARGEN_FUN(	chargen_con_name);
CHARGEN_FUN(	chargen_new_pass);
CHARGEN_FUN(	chargen_con_pass);
CHARGEN_FUN(	chargen_new_last);
CHARGEN_FUN(	chargen_con_last);
CHARGEN_FUN(	chargen_new_sex );
CHARGEN_FUN(	chargen_new_race);
CHARGEN_FUN(	chargen_con_race);
CHARGEN_FUN(	chargen_new_alig);
CHARGEN_FUN(	chargen_con_alig);
CHARGEN_FUN(	chargen_new_etho);
CHARGEN_FUN(	chargen_con_etho);
CHARGEN_FUN(	chargen_new_clas);
CHARGEN_FUN(	chargen_con_clas);
CHARGEN_FUN(	chargen_roll	);
CHARGEN_FUN(	chargen_new_reli);
CHARGEN_FUN(	chargen_con_reli);
CHARGEN_FUN(	chargen_new_home);
CHARGEN_FUN(	chargen_con_home);
CHARGEN_FUN(	chargen_ask_deta);
CHARGEN_FUN(	chargen_new_done);
CHARGEN_FUN(	chargen_con_break);

CHARGEN_FUN(	chargen_det_body);
CHARGEN_FUN(	chargen_det_face);
CHARGEN_FUN(	chargen_det_skin);
CHARGEN_FUN(	chargen_det_eyes);
CHARGEN_FUN(	chargen_det_hair);
CHARGEN_FUN(	chargen_det_haiL);
CHARGEN_FUN(	chargen_det_haiT);
CHARGEN_FUN(	chargen_det_haiF);
CHARGEN_FUN(	chargen_det_perk);
CHARGEN_FUN(	chargen_con_perk);
CHARGEN_FUN(	chargen_det_hand);
CHARGEN_FUN(	chargen_det_age);
CHARGEN_FUN(	chargen_con_age);
CHARGEN_FUN(	chargen_det_weap);

CHARGEN_FUN(	chargen_new_tele);
CHARGEN_FUN(	chargen_new_enemy);
CHARGEN_FUN(	chargen_new_adve);

CHARGEN_FUN(	chargen_nag_screen);
CHARGEN_FUN(	chargen_nag_lag);




#endif
