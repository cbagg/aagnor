/* Written by Virigoth sometime circa april 2000 for FORSAKEN LANDS mud.*/
/* This is the implementation of the selectable skills code		*/
/* NOT TO BE USED OR REPLICATED WITHOUT EXPLICIT PERMISSION OF AUTHOR	*/
/* umplawny@cc.umanitoba.ca						*/

/* Following defines some data types used by the whole selectable skills*
 * system								*/

#define MAX_SELECT		16	//How many choices allowed per class
#define MAX_GROUP_SKILL		16	//Max skills per group
#define MAX_PRE			4	//Max of skills used for requirement
#define MAX_EX			4	//Max of skills used for exclusion
/* 
The following three compose the main table used for reference when
doing the selection for skills.  It is referenced by the s_select_table
for data on each group 
*/

struct ss_info_type{
  char *name;		//name of skill
  sh_int rating;	//how easy it is to learn
  sh_int skill;		//start skill when selected
  char *pre[MAX_PRE];	//prerequisites for the skill
  char *ex[MAX_EX];	//skills wich exclude this choice
};

struct ss_group_type{
  char* name;					//name of group
  sh_int skills;					//How many skills to select from
  struct ss_info_type ss_info[MAX_GROUP_SKILL];	//data on each skill choice
};



/*
Following are used for the main s_select_table which contains data on each group
and amount of skills avaliable to particular set of skills
*/
struct ss_type{
  char*		name;
  sh_int	level[MAX_SELECT];	//level at which selections are made
  sh_int	picks[MAX_SELECT];	//how many total selections allowed
  char*		group[MAX_SELECT];	//name of group out of ss_group_table selections are made from.
};




