char*		check_alias	(CHAR_DATA* ch,char* command, char* arguments);
bool		rem_alias	( PC_DATA* ch, ALIAS_DATA* newal );
void		free_alias	( ALIAS_DATA* al );
ALIAS_DATA*	alias_to_char	( CHAR_DATA* ch, char* name, char* content);
void		AliasClearSafety(				);
