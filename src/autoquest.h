#ifndef __AQUEST_H__
#define __AQUEST_H__

//defines
enum quest_type{
  QUEST_NONE = 0,
  QUEST_SLAY,
  QUEST_GET,
  QUEST_GIVE,
  QUEST_FIND,

  QUEST_MAX,
};

enum quest_level{
  LEVEL_EASY,
  LEVEL_MEDIUM,
  LEVEL_HARD
};

#define QUEST_ARG_MAX		10


typedef struct autoquest_type  AQUEST_DATA;

struct autoquest_type{
  int quest;    //type of the quest, QUEST_NONE for no quest
  int origin;	//vnum of the mob who gives quest/reward
  int target;	//vnum of the mob which is the target of the quest
  int arg;	//argument if any to the quest
  long life;	//time by which it has to be completed (non zero for time limited)

  bool fClan;	//does the quest reward with clan points
};

//MACROS
#define HAS_AQUEST(ch)		(!IS_NPC((ch)) && (ch)->pcdata->aquest.quest > QUEST_NONE)

//INTERFACE
void		aquest( CHAR_DATA* ch, char* argument);
void		cquest( CHAR_DATA* ch, char* argument);
char*		GetQuestString( AQUEST_DATA* pQ );
bool		QuestRoomCheck( CHAR_DATA* ch, ROOM_INDEX_DATA* room );
bool		QuestKillCheck(CHAR_DATA* ch, CHAR_DATA* victim);
bool		QuestTimeCheck(CHAR_DATA* ch );

#endif
