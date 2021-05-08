/* save version for mud file */
#define SAVEMUD_VER		1000

/* directory and files */
#define SAVEMUD_DIR        "../savemud/"        /* mud/cabal etc. files */
#define SAVEMUD_FILE	  "mud.sav"		/* mud info */


/* main structure for mud data, delcared in merc.h */
struct mud_type  mud_data;

/* macros */
#if defined(KEY)
#undef KEY
#endif

#define KEY( literal, field, value )                                    \
    if ( !str_cmp( word, literal ) )                                    \
    {                                                                   \
        field  = value;                                                 \
        fMatch = TRUE;                                                  \
        break;                                                          \
    }

/* provided to free strings */
#if defined(KEYS)
#undef KEYS
#endif

#define KEYS( literal, field, value )					\
    if ( !str_cmp( word, literal ) )                                    \
    {                                                                   \
        free_string(field);                                             \
        field  = value;                                                 \
        fMatch = TRUE;                                                  \
        break;                                                          \
    }


/* functions */
void	save_mud	();
void	read_mud	();
void	reset_mdata	();
