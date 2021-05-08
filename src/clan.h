#define		CLAN_DIR	"../clans/"
#define		CLAN_TMP_FILE	"temp_clan"
#define		MAX_CLANS	32
#define		MAX_INACTIVE	604800
#define		CLAN_APPLY_WIN  604800

/* data types */
typedef struct clan_data	CLAN_DATA;
typedef struct clan_member	CLAN_MEMBER;

/* macros */
#if defined(KEY)
#undef KEY
#endif
#define	KEY( literal, member, value )		\
	if (!str_cmp(word, literal)){		\
	  member = value;			\
	  fMatch = TRUE;			\
	  break;				\
	}					\

#if defined(KEYS)
#undef KEYS
#endif
#define KEYS(literal, member, value)		\
	if (!str_cmp(word, literal)){		\
        member  = value;                         \
        fMatch = TRUE;				\
        break;                                  \
    }	

/* structs */
struct clan_member{
  CLAN_MEMBER* next;

  char*		name;
  int		race;
  int		class;
  int		level;
  int		rank;
  int		pts;
  
  long		joined;
  long		last_logon;
  long		allowed;
};

struct clan_data{
  char*		name;
  CLAN_MEMBER	members;
  int		max;
};


/* INTERFACE */
void		ClanSave( int handle );
void		SaveClans();
void		LoadClans();
int		GetClanHandle( char* name );
char*		GetClanName( int handle );
void		SynchClanData( CHAR_DATA* ch );
CLAN_MEMBER*	GetClanMember( int handle, char* name );
void		CharFromClan( CHAR_DATA* ch );
void		CharToClan( CHAR_DATA* ch, int handle );
bool		ClanApplicationCheck( CHAR_DATA* ch, CABAL_DATA* pCab);
void		ClanEcho( int handle, char* string );
int		ClanSecondsToApply( CHAR_DATA* ch );
bool		ClanRename(int handle, char* current, char* new );
