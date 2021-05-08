#ifndef __MISC_H__
#define __MISC_H__

typedef struct bfs_queue_struct  PATH_QUEUE;
typedef struct area_queue_struct  AREA_QUEUE;

struct bfs_queue_struct{
  ROOM_INDEX_DATA *room;
  PATH_QUEUE *from_path;
  char   from_dir;
  char   dir;
  int	   dist;
  struct bfs_queue_struct *next;
};

struct area_queue_struct{
  AREA_QUEUE* next;

  AREA_DATA *area;
  AREA_QUEUE *from;

  ROOM_INDEX_DATA *start_room;
};

PATH_QUEUE* generate_path( ROOM_INDEX_DATA *src, ROOM_INDEX_DATA *target, int maxdist, bool fPassDoor, int* dist, CABAL_DATA* pc_only);
void clean_path();
void clean_path_queue(PATH_QUEUE* head);
void clean_area_queue(void);

#endif
