/* vals from db.c */
extern int              top_new_action;
extern bool fBootDb;
extern int		newmobs;
extern int		newobjs;
extern MOB_INDEX_DATA 	* mob_index_hash          [MAX_KEY_HASH];
extern OBJ_INDEX_DATA 	* obj_index_hash          [MAX_KEY_HASH];
extern int		top_mob_index;
extern int		top_obj_index;
extern int  		top_affect;
extern int		top_ed; 
extern AREA_DATA 	* area_first;
extern int	social_count;
extern int	night_count;
extern int	mprog_count;
extern int	mprogf_count;
extern void assign_area_vnum( int vnum );

void convert_mobile( MOB_INDEX_DATA *pMobIndex );
void convert_objects( void );
void convert_object( OBJ_INDEX_DATA *pObjIndex );

void read_room		( FILE *fp, ROOM_INDEX_DATA* pRoomIndex, AREA_DATA* area, int vnum );
void reset_room		( ROOM_INDEX_DATA *pRoom );
void load_vir_room	( ROOM_INDEX_DATA* pRoom, AREA_DATA* pArea );
bool unload_vir_room	( ROOM_INDEX_DATA* pRoom );
void fix_resets		( RESET_DATA* pReset, int room_vnum );
void new_reset		( ROOM_INDEX_DATA *pR, RESET_DATA *pReset );
/* conversion from db.h */
void	convert_mob(MOB_INDEX_DATA *mob);
void	convert_obj(OBJ_INDEX_DATA *obj);

/* macro for flag swapping */
#define GET_UNSET(flag1,flag2)	(~(flag1)&((flag1)|(flag2)))

/* Magic number for memory allocation */
#define MAGIC_NUM 52571214



