#ifndef __RAID_H__
#define __RAID_H__


#define RAID_WAIT	7200	//wait between raids in area in seconds
#define CAB_RAID_WAIT	3600	//wait between raids from same cabal


//types of raids
#define RAID_NORMAL	-1
#define RAID_UNDEAD_1	0
#define RAID_UNDEAD_2	1
#define RAID_UNDEAD_3	2
#define RAID_UNDEAD_4	3
#define RAID_DEMON_1	4
#define RAID_DEMON_2	5
#define RAID_DEMON_3	6
#define RAID_DEMON_4	7
#define RAID_NATURE_1	8
#define RAID_NATURE_2	9
#define RAID_NATURE_3	10
#define RAID_NATURE_4	11
#define RAID_MAX	12

typedef struct raid_data RAID_DATA;

struct raid_data{
  CABAL_DATA* pCab;
  int mob_vnum;		//mob skeleton to spawn
  int mob_total;	//total mobs to spawn
  int lifetime;		//how long to spawn for

  int mob_spawned;	//mobs spawned so far
  int duration;		//duration so far

  int act;		//act flags to add
  int race;
  int attack;
  char* name;		//custom strings
  char* short_desc;
  char* long_desc;
};

struct raid_strings{
  int	act;
  char*	race;
  char* attack;
  char* name;		//custom strings
  char* short_desc;
  char* long_desc;  
};

void raid_update( AREA_DATA* pArea, RAID_DATA* pr );
void raidmob_check( CHAR_DATA* vch, CHAR_DATA* victim);

#endif
