#ifndef functions_H 
#define functions_H
#define _CRT_SECURE_NO_WARNINGS
#define function_h
#include <stdio.h>
//for destination switch
#define academic 1
#define food 2
#define athletic 3
#define arts 4
#define services 5
//for food switch
#define espresso 1
#define dining 2



/**********************************************
* functon: display_menu()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the menu.
* Input Parameters :
* Return : nothing (void)
***********************************************/
void display_menu(void);

/**********************************************
* functon: activity_go()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the in canve activity menu.
* Input Parameters :
* Return : t
***********************************************/
int activity_go(void);

/**********************************************
* functon: Exibition()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Exhibition menu.
* Input Parameters :
* Return : events_type
***********************************************/
int Exhibition(void);

/**********************************************
* functon: Lecture()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Lecture menu.
* Input Parameters :
* Return : events_type1
***********************************************/
int Lecture(void);

/**********************************************
* functon: Performance()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Performance menu.
* Input Parameters :
* Return : events_type2
***********************************************/
int Performance(void);

/**********************************************
* functon: Presentation()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Presentation menu.
* Input Parameters :
* Return : events_type3
***********************************************/
int Presentation(void);

/**********************************************
* functon: Recreational_Games()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Recreational_Games menu.
* Input Parameters :
* Return : events_type4
***********************************************/
int Recreational_Games(void);


/**********************************************
* functon: Workshop_Seminar()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Workshop_Seminar menu.
* Input Parameters :
* Return : events_type5
***********************************************/
int Workshop_Seminar(void);


/// P////
/**********************************************
* functon: outdoor_activity()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : this funtion will ask user to enter radius and catagorie for an outdoor activity.
* Input Parameters :
* Return : nothing (void)
***********************************************/
void outdoor_activity(void);

///a//
/**********************************************
* functon: Destination()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : opens distination menu.
* Input Parameters :
* Return : void
***********************************************/
void Destination(void);

/**********************************************
* functon: Academic_buildings()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : allows us to navigate buildings menu.
* Input Parameters :
* Return : integer
***********************************************/
int Academic_buildings(void);

/**********************************************
* functon: food_shopping()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : navigate food menu.
* Input Parameters :
* Return : integer
***********************************************/
int food_shopping(void);

/**********************************************
* functon: espresso_snacks()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : navigate cafe menu.
* Input Parameters :
* Return : espresso_snacks
***********************************************/
int espresso_snacks(void);
/**********************************************
* functon: dining()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : navigate dining resturant menu.
* Input Parameters :
* Return : dining_func
***********************************************/
int dining_func(void);

/**********************************************
* functon: healthcare()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : naviagte healthcare menu.
* Input Parameters :
* Return : healthcare
***********************************************/
void healthcare(void);
#endif
