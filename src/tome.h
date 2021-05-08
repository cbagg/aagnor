#ifndef __TOME_H__
#define __TOME_H__

/* INTERFACE FOR tome.c */

//DEFINES
#define		MAX_TOPIC	128

//TYPEDEFS
typedef struct tome_entry_s TOME_DATA;
typedef struct tome_topic_s TOME_TOPIC;

struct tome_entry_s {
  bool		canFree;		//set if allocated using malloc

  char		title[MIL];		//title of the tome
  char		author[MIL];		//name of author
  char*		text;			//pointer to text
  
  TOME_DATA*	next;
  TOME_TOPIC*	topic;		//pointer to the topic this is in
};

//Prototypes
void InitTomes();
void SaveTomes();
void EchoTome( TOME_DATA* newtome );
TOME_DATA* AddTome(char* subject, char* title, char* author, char* text);

#endif //__TOME_H__
