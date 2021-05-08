/* path for the bounty file */
#define		SAVEBOUNTY_DIR	"../bounty/"
#define		SAVEBOUNTY_FILE	"bounties.sav"
#define		BOUNTY_LIFETIME 604800	//7 days
#define		BOUNTY_WAITTIME 43200	//12 hours

/* main bounty structure */

/*  moved to merc.h
    typedef struct bounty_data BOUNTY_DATA;
    typedef struct bbid_data BBID_DATA;
*/

struct bbid_data{
  BOUNTY_DATA*	bounty;		//bounty this belongs to
  BBID_DATA*	next;		//next bid on the list

  char*		name;		//name of bidder
  int		level;		//level of bidder
  CABAL_DATA*  pCabal;		//cabal if any of the bidder

  int		cp;		//cp bid
  long		gp;		//gold bid
  OBJ_DATA*	obj;		//objects bid
};
  

struct bounty_data {
  BOUNTY_DATA*	next;
  bool		valid;

  time_t	time_stamp;	//time when this was created

  char*		name;	//name of the bounty target
  BBID_DATA*	bids;	//bounty bid list
};



/* functions */
void		free_bbid		( BBID_DATA* pBb );
void		obj_from_bbid		( OBJ_DATA* obj );
BOUNTY_DATA*	get_bounty		( char* name );
void		save_bounties		( );
void		load_bounties		( );
CABAL_DATA* is_bounty_priority	( BOUNTY_DATA* bounty, CABAL_DATA* pCabal );
bool		can_collect		( BOUNTY_DATA* bounty, CHAR_DATA* ch );
bool		rem_bounty		( BOUNTY_DATA* pb );
void		free_bounty		( BOUNTY_DATA *bounty );
bool		check_rouge_bounty	( CHAR_DATA* och, int pen );
