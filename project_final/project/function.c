#include "function.h"
/**********************************************
* functon: display_menu()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the menu.
* Input Parameters :
* Return : nothing (void)
***********************************************/
void display_menu(void)
{
	int choice = 0;
	do
	{
		printf(" 1.Indoor Activity\n");
		printf(" 2.Outdoor Activity\n");
		printf(" 3.Destination\n");
		printf(" 4.Health/Emergency\n");
		printf(" 5.Exit\n");
		scanf("%d", &choice);//Getting input from user
		while ((choice < 1) || (choice > 4))
		{

			printf("Please input a valid option.\n");//check if the option is valid
			scanf("%d", &choice);
			system("cls");
		}
	} while ((choice >= 1) && (choice <= 5));
	
}
/**********************************************
* functon: activity_go()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the in canve activity menu.
* Input Parameters :
* Return : t
***********************************************/
int activity_go(void)
{
	int t = 0;
		printf(" Welcome to WSU Featured Events\n");
		printf(" please select which type of events you like\n");
		printf(" 1.Exhibition\n");
		printf(" 2.Lecture\n");
		printf(" 3.Performance\n");
		printf(" 4.Presentation\n");
		printf(" 5.Recreational / Games\n");
		printf(" 6.Workshop / Seminar\n");
		printf(" 7.to display the main menu enter \"7\"\n");
		scanf("%d", &t);
		
		switch (t)
		{
		case 1: Exhibition();
			break;
		case 2: Lecture();
			break;
		case 3: Performance();
			break;
		case 4: Presentation();
			break;
		case 5: Recreational_Games();
			break;
		case 6: Workshop_Seminar();
			break;
		case 7:;
			break;
		}
	return t;
}

/**********************************************
* functon: Exibition()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Exhibition menu.
* Input Parameters :
* Return : events_type
***********************************************/
int Exhibition(void)
{
	int events_type = 0;

	printf(" please select which events you like for more info\n");
	printf(" 1.MFA Thesis Exhibition\n");
	printf(" 2.Join the MFA Thesis Artist Talks\n");
	printf(" 3.Join a Reception for MFA Thesis Exhibition\n");
	printf(" 4.Keiko Hara: The Poetics of Space, Four Decades of Paintings and Prints \n");
	printf(" 5.Enter '5' to go Back to the activity menu\n");
	scanf("%d", &events_type);

	if (events_type == 1)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" This annual showcase is the culmination of work by the MFA graduate candidates.\n");
		printf(" With its wide range of art - making approaches, the exhibition provides a stimulating experience for faculty, students, and museum visitors.\n");
		printf(" Traveling from many places to join WSU, these student - artists have engaged in an intense two - year interdisciplinary studio program and met regularly with faculty members for groupand individual critiques,\n");
		printf(" where each artist sharpened their confidence, convictions, and skills.\n This focused conclusion marks an exciting transition toward their professional careers.\n");
		printf(" MFA graduate candidates are : Sarah Barnett, Jaime Durham, Autumn Hunnicutt, Seo Ryung Park, Siri Stensberg, and Meagan Marsh Pine.\n");
		printf(" Address and Time\n");
		printf(" Jordan Schnitzer Museum of Art, 1535 Wilson Rd, Pullman, WA 99164\n March 29 - May 7, 2022\n 1-4 pm\n");
		return Exhibition();

	}
	else if (events_type == 2)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Join us for short talks by the six graduate candidates featured in the Master of Fine Arts Thesis Exhibition.\n");
		printf(" Each artist will speak briefly to introduce the body of work they are presenting in the 2022 MFA exhibition.\n");
		printf(" The talks will be followed by an opening reception from 4:00 - 6 : 00 p.m.MFA Thesis Candidates are :\n");
		printf(" Sarah Barnett, Jaime Durham, Autumn Hunnicutt, Seo Ryung Park, Meagan Marsh Pine, and Siri Stensberg\n");
		printf(" Address and Time\n");
		printf(" Jordan Schnitzer Museum of Art, 1535 Wilson Rd, Pullman, WA 99164\n Friday, April 1, 2022\n 3-4 pm\n");
		return Exhibition();

	}
	else if (events_type == 3)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Join us for the Master of Fine Arts Thesis Exhibition’s Opening Reception.\n");
		printf(" This annual showcase is the culmination of two or more years work by the Master of Fine Arts graduate candidates.With its wide range of art - making approaches,\n");
		printf(" the thesis exhibition provides a stimulating experience for faculty, students, and local museum constituents\n");
		printf(" Address and Time\n");
		printf(" Jordan Schnitzer Museum of Art, 1535 Wilson Rd, Pullman, WA 99164\n Friday, April 1, 2022\n4-6 pm\n");
		return Exhibition();

	}
	else if (events_type == 4)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Keiko Hara’s exploration of her relationship to her surrounding environment has been continually formulated through the artist’s ongoing series titled, Topophilia.\n");
		printf(" Meaning “a strong love of place,” the term topophilia, with its connection to humanistic geography,\n");
		printf(" also represents a universal desire to hold onto ephemeral moments of beautyand sadness as related to conceptions of place—even if unattainable.\n");
		printf(" This mini - survey exhibition chronicles Hara’s unwavering commitment to painting and her unique form of Mokuhanga,\n");
		printf(" Japanese woodblock printmaking, over a 40 - year period.Her abstract compositions are at once immensely sensitive yet executed in vibrant color with references to\n");
		printf(" water, fire, skies, and verdant lands, offering rich metaphorical imagery.\n");
		printf(" Hara’s longtime home in Walla Walla, Washington, situated in an expansive valley flanked by the Blue Mountains,\n");
		printf(" figures centrally within her work as does a more internal investigation into the poetics of space.\n");
		printf(" Address and Time\n");
		printf(" Jordan Schnitzer Museum of Art, 1535 Wilson Rd, Pullman, WA 99164\n May 24 - December 10, 2022\n1 - 4 pm\n");
		return Exhibition();
	}
	else if (events_type == 5)
	{
		activity_go();
	}
	
		
	
}

/**********************************************
* functon: Lecture()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Lecture menu.
* Input Parameters :
* Return : events_type1
***********************************************/
int Lecture(void)
{
	int events_type1 = 0;

	printf(" please select which events you like for more info\n");
	printf(" 1.SDC Lecture — Peggy Deamer: Reworking architectural work\n");
	printf(" 2.Bustad Lecture with Megan Mueller\n");
	printf(" 3.Enter '3' to go Back to the activity menu\n");
	
	scanf("%d", &events_type1);

	if (events_type1 == 1)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" This talk will examine the various institutions that currently shape architectural work in order to rethink and/or overturn them.\n");
		printf(" Education, professionalization, economic ideology, office organization,\n");
		printf(" media – these institutions will all be examined for their role in keeping architects disempoweredand irrelevantand analyzed for their potential redirection.\n");
		printf(" Address and Time\n");
		printf(" Tuesday, February 22, 2022\n 5 - 6 pm\n Online\n");
		return Lecture();

	}
	else if (events_type1 == 2)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" The Human-Animal Bond and Developmental Science, The human\n");
		printf(" animal bond plays a key role in constructing the fabric of many communities across the world.Exploring how human\n");
		printf(" animal interactions fit within the integrated ecology of family systems requires nuanced scientific tools and a diverse array of research designs.\n");
		printf(" Human - animal relationships are complex, dynamic, and highly individual.\n");
		printf(" Address and Time\n");
		printf(" Friday, March 25, 2022\n 4 - 5 pm\n Bustad Hall\n");
		return Lecture();
	}
	else if (events_type1 == 3)
	{
		activity_go();
	}
	
}

/**********************************************
* functon: Performance()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Performance menu.
* Input Parameters :
* Return : events_type2
***********************************************/
int Performance(void)
{
	int events_type2 = 0;

	printf(" please select which events you like for more info\n");
	printf(" 1.The Phantom of the Universe\n");
	printf(" 2.Selected Shorts\n");
	printf(" 3.Rock the Rocks\n");
	printf(" 4.Enter '4' to go Back to the activity menu\n");
	scanf("%d", &events_type2);

	if (events_type2 == 1)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" A guided tour of February night skies and “The Phantom of the Universe,” a fulldome movie about dark matter.\n");
		printf(" From the journey of protons racing through the world’s largest particle collider in Europe to up - close views of the Big Bang and emergent cosmos,\n");
		printf(" Phantom of the Universe is a new fulldome planetarium show designed to immerse audiences in the search for dark matter\n");
		printf(" Address and Time\n");
		printf(" Sunday, February 27, 2022 \n 5 - 6 pm\n Sloan Hall, 305 NE Spokane Street, Pullman, WA 99163\n Room 231\n");
		return Performance();
	}
	else if (events_type2 == 2)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" A tour of March skies, followed by a selection of shorter fulldome productions from our video library.\n");
		printf(" Address and Time\n");
		printf("Sunday, March 6, 2022\n 5 - 6 pm\n Sloan Hall, 305 NE Spokane Street, Pullman, WA 99163\n Room 231\n");
		return Performance();
	}
	else if (events_type2 == 3)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Celebrate the planets with us in fulldome splendor in this musical WSU planetarium production.\n");
		printf(" We’ll turn the volume to the very limit of OSHA recommendations, so folks with sensitive hearing might want to consider bringing ear protection\n");
		printf(" because we are gonna rock you.This tour is computer generated on - the - fly.\n");
		printf(" Address and Time\n");
		printf(" Sunday, March 27, 2022\n 5 - 6 pm\n Sloan Hall, 305 NE Spokane Street, Pullman, WA 99163\n Room 231\n");
		return Performance();
	}
	else if (events_type2 == 4)
	{
		activity_go();
	}
	
}

/**********************************************
* functon: Presentation()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Presentation menu.
* Input Parameters :
* Return : events_type3
***********************************************/
int Presentation(void)
{
	int events_type3 = 0;

	printf(" please select which events you like for more info\n");
	printf(" 1.School of Biological Sciences seminar: Dr. Mechthild Tegeder, Assimilate partitioning in plant performance\n");
	printf(" 2.ESIC SP22 Power Seminar Series – Ensuring power system resilience against extreme weather events: challenges and opportunities\n");
	printf(" 3.Thriving authentically: ascending industry while identifying as black, indigenous, and person of color (BIPOC))\n");
	printf(" 4.School of Biological Sciences seminar: Dr. Jesse Brunner, Climate and blacklegged tick populations\n");
	printf(" 5.School of Biological Sciences seminar: Dr. Erica Crespi\n");
	printf(" 6.Enter '6' to go Back to the activity menu\n");
	scanf("%d", &events_type3);

	if (events_type3 == 1)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Dr. Mechthild Tegeder presents, Central role of assimilate partitioning in plant performance.\n");
		printf(" Address and Time\n");
		printf(" Monday, February 28, 2022\n 3 - 4 pm\n Online\n");
		return Presentation();

	}
	else if (events_type3 == 2)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Energy Systems Innovation Center SP22 Power Seminar Series hosts Ensuring Power System Resilience Against Extreme Weather Events:\n");
		printf(" Challengesand Opportunities presented by Dr.Josue Prado, WSU Vancouver\n");
		printf(" Address and Time\n");
		printf(" Tuesday, March 22, 2022 - add to calendar\n 11 am to 12 pm\n Online\n");
		return Presentation();
	}
	else if (events_type3 == 3)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" The Thriving Authentically program will feature Black, Indigenous, People of Color (BIPOC)\n");
		printf(" panelists who will offer students valuable industry insights regarding their chosen career pathsand how they cultivated\n");
		printf("their professionaland cultural identities on that journey.\n");
		printf(" Address and Time\n");
		printf(" Thursday, March 31, 2022\n 5 - 6:30 pm\n Online\n");
		return Presentation();
	}
	else if (events_type3 == 4)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Dr. Jesse Brunner, “Does climate restrict blacklegged tick populations?” SBS promotion seminar\n");
		printf(" Address and Time\n");
		printf(" Monday, April 18, 2022\n 3 - 4 pm\n Online\n");
		return Presentation();
	}
	else if (events_type3 == 5)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Dr. Erica Crespi Presents: Title TBA. SBS promotion seminar\n");
		printf(" Address and Time\n");
		printf(" Monday, April 25, 2022\n 3 - 4 pm\n Online\n");
		return Presentation();
	}
	else if (events_type3 == 6)
	{
		activity_go();
	}
	
}

/**********************************************
* functon: Recreational_Games()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Recreational_Games menu.
* Input Parameters :
* Return : events_type4
***********************************************/
int Recreational_Games(void)
{
	int events_type4 = 0;

	printf(" please select which events you like for more info\n");
	printf(" 1.MLK Trivia Night\n");
	printf(" 2.Enter '2' to go Back to the activity menu\n");
	scanf("%d", &events_type4);

	if (events_type4 == 1)
	{
	printf(" ABOUT THE EVENT\n");
	printf(" A Virtual Trivia Night where attendees will test their knowledge on the life and legacy of Rev. Martin Luther King Jr.\n");
	printf(" and Black history in a relaxed atmosphere.\n This event is part of Global Connections’ 2022 MLK programming.\n");
	printf(" Address and Time\n");
	printf(" Thursday, February 24, 2022\n 6 - 7 pm\n Online\n");
	return Recreational_Games();
	}
	else if (events_type4 == 2)
	{
		activity_go();
	}
	
}

/**********************************************
* functon: Workshop_Seminar()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : that allow us to play the Workshop_Seminar menu.
* Input Parameters :
* Return : events_type5
***********************************************/
int Workshop_Seminar(void)
{
	int events_type5 = 0;

	printf(" please select which events you like for more info\n");
	printf(" 1.Are Y’all Reading King’s Words or are You Just Skimming Through Them?\n");
	printf(" 2.Teaching Academy Panel Discussion: Peer Observation from More Sides\n");
	printf(" 3.WSU College of Veterinary Medicine Spring Conference 2022\n");
	printf(" 4.Enter '4' to go Back to the activity menu\n");
	scanf("%d", &events_type5);
	if (events_type5 == 1)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" Amir Gilmore, PhD, will guide us through selected excerpts from Martin Luther King Jr.\n");
		printf(" this presentation will examine the(mis)understandingsand application of King’s words on certain U.S.notions, concepts, and discourses.\n");
		printf(" Address and Time\n");
		printf(" Tuesday, February 22, 2022\n 6 - 7 pm\n Online\n");
		return Workshop_Seminar();
	}
	else if (events_type5 == 2)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" College of Veterinary Medicine Teaching Academy Brown Bag Seminar\n Observer: Erika Offerdahl & Phil Mixter\n Observed : Chrissy Eckstrand & Nicholas Villarino\n 2021 Spring Observee : Sarah Guess\n Department Chair : Bob Mealey\n");
		printf(" Address and Time\n");
		printf(" Wednesday, February 23, 2022\n 12:10 - 1 pm\n ADBF Room 1002 (Animal Disease Biotech Facility), Zoom option available upon registration\n");
		return Workshop_Seminar();
	}
	else if(events_type5 == 3)
	{
		printf(" ABOUT THE EVENT\n");
		printf(" WSU College of Veterinary Medicine Spring Conference will be March 25-27, 2022 and be held in person.\n");
		printf(" Twelve hours of CE credit will be offered, including Large Animal, Small Animal, and a Technician Track.\n");
		printf(" Address and Time\n");
		printf(" March 25-27, 2022\n 4 - 12 pm\n Bustad Hall\n");
		return Workshop_Seminar();

	}
	else if (events_type5 == 4)
	{
		activity_go();
	}
	
}

////////// Ahmed part //////////

/**********************************************
* functon: Destination()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : opens distination menu.
* Input Parameters :
* Return : void
***********************************************/
void Destination(void)
{
	int option = 0;
	printf("Please Choose your the category of your Destination\n");
	printf("1.Academic Buildings\n");
	printf("2.Food\n");
	printf("3.Enter '3' to go back to the main menu\n");
	scanf("%d", &option);
	
		switch (option)
		{
		case academic: Academic_buildings();
			break;
		case food:food_shopping();
			break;
		case 3:;
			break;
		default: printf("invalid option");
		}
	
}
/**********************************************
* functon: Academic_buildings()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : allows us to navigate buildings menu.
* Input Parameters :
* Return : integer
***********************************************/
int Academic_buildings(void)
{
	int option = 0;
	printf(" Please Choose your building\n");
	printf(" 1.Albrook (AlBR)\n");
	printf(" 2.Carpenter Hall (CARP)\n");
	printf(" 3.Dana Hall\n");
	printf(" 4.Electrical-Mechanical Engineering Bldg (EME)\n");
	printf(" 5.Engineering Teaching/Research Bldg (ETRL)\n");
	printf(" 6.PACCAR(PETB)\n");
	printf(" 7.Research & Technology Park\n");
	printf(" 8.Sloan Hall\n");
	printf(" 9.Thermal-Fluids Engineering (TFRB)\n");
	printf(" 10.Wegner Hall (WEGN)\n");
	printf(" 11.Enter '11' to go back the Destination menu\n");
	scanf("%d", &option);

		if (option == 1)
		{
			printf("\t\t\t\t\t\t\"Albrook Building\n");
			printf(" Address: Albrook Hydraulics Laboratory, 855 NE Oak St, Pullman, WA 99163, USA\n");
			printf(" Google maps link: https://goo.gl/maps/STBk5km1ufHMY9v76 \n");
			printf(" Open hours: N/A \n");
			printf(" Access Method: Key or Pin Pad Code\n");
			return Academic_buildings();

		}
		else if (option == 2)
		{
			printf("\t\t\t\t\t\t\"Carpenter Hall Building\n");
			printf(" Address: Carpenter Hall, Pullman, WA 99163, USA\n");
			printf(" Google maps link: https://goo.gl/maps/9m9EnGQHxVmRsNBT8 \n");
			printf(" Open hours: 7:00AM - 7:00PM on Weekdays\n");
			printf(" Access Method: Couger Card\n");
			return Academic_buildings();
		}
		else if (option == 3)
		{
			printf("\t\t\t\t\t\t\"Dana Hall Building\n");
			printf(" Address: Dana Hall, 305 NE Spokane St, Pullman, WA 99163\n");
			printf(" Google maps link: https://goo.gl/maps/ix3T28BvNmrt4ymW8 \n");
			printf(" Open hours: 7:00AM - 7:00PM on Weekdays & Weekends\n");
			printf(" Access Method: Couger Card\n");
			return Academic_buildings();
		}

		else if (option == 4)
		{
			printf("\t\t\t\t\t\t\"Electrical-Mechanical Engineering Bldg (EME)\n");
			printf(" Address: 355 NE Spokane St, Pullman, WA 99163, USA\n");
			printf(" Google maps link: https://goo.gl/maps/g44C1Paa6GxkqNBY9 \n");
			printf(" Open hours: 7:00AM - 11:00PM on Weekdays & Weekends\n");
			printf(" Access Method: Couger Card\n");
			return Academic_buildings();
		}
		else if (option == 5)
		{
			printf("\t\t\t\t\t\t\"Engineering Teaching/Research Bldg (ETRL)\n");
			printf(" Address: Washington State University Arboretum, Pullman, WA 99163\n");
			printf(" Google maps link: https://goo.gl/maps/Uk8KFVe5H7yVQoJn9 \n");
			printf(" Open hours: 7:00AM - 11:00PM on Weekdays & Weekends\n");
			printf(" Access Method: Couger Card\n");
			return Academic_buildings();
		}
		else if (option == 6)
		{
			printf("\t\t\t\t\t\t\"Paccar Environmental Technology Building\n");
			printf(" Address: 2001 Grimes Way, Pullman, WA 99164\n");
			printf(" Google maps link: https://goo.gl/maps/hNPUjQxAobyJjb687 \n");
			printf(" Open hours: 7:00AM - 5:00PM on Weekdays \n");
			printf(" Access Method: Couger Card\n");
			return Academic_buildings();
		}
		else if (option == 7)
		{
			printf("\t\t\t\t\t\t\"Research and Technology Park\n");
			printf(" Address: 1610 NE Eastgate Blvd, Pullman, WA 99163\n");
			printf(" Google maps link: https://goo.gl/maps/jMwu9arzKeGbeZKg6 \n");
			printf(" Open hours: N/A on N/A\n");
			printf(" Access Method: Key\n");
			return Academic_buildings();
		}
		else if (option == 8)
		{
			printf("\t\t\t\t\t\t\"Sloan Hall\n");
			printf(" Address: 405 NE Spokane St, Pullman, WA 99163\n");
			printf(" Google maps link: https://goo.gl/maps/d9AuMoWYkmyVg1fY8 \n");
			printf(" Open hours: 7:00AM - 11:00PM on Weekdays & Weekends\n");
			printf(" Access Method: Couger Card\n");
			return Academic_buildings();
		}
		else if (option == 9)
		{
			printf("\t\t\t\t\t\t\"Thermal-Fluids Engineering (TFRB)\n");
			printf(" Address: 900 NE College St, Pullman, WA 99163\n");
			printf(" Google maps link: https://goo.gl/maps/LCHoYWfKKmmVtKaW6 \n");
			printf(" Open hours: 7:30AM - 5:30PM on Weekdays \n");
			printf(" Access Method: Key\n");
			return Academic_buildings();
		}
		else if (option == 10)
		{
			printf("\t\t\t\t\t\t\"Wegner Hall\n");
			printf(" Address: 1505 NE Stadium Way, Pullman, WA 99164\n");
			printf(" Google maps link: https://goo.gl/maps/vY2u2w5YemWw44C8A \n");
			printf(" Open hours: 7:00AM - 11:00PM on Weekdays\n");
			printf(" Open hours: 9:00AM - 5:00PM on Saturday\n");
			printf(" Open hours: 10:00AM - 11:00PM on Sunday\n");
			printf(" Access Method: Key\n");
			return Academic_buildings();

		}
		else if (option == 11)
		{
			Destination();
		}
		
}
/**********************************************
* functon: food_shopping()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : navigate food menu.
* Input Parameters :
* Return : integer
***********************************************/
int food_shopping(void)
{
	int option = 0;
	printf(" Please choose your Category\n");
	printf(" 1.Espresso & Snacks\n");
	printf(" 2.Dining\n");
	printf(" 3. Enter '5' to go back the Destination menu\n");
	scanf("%d", &option);
	switch (option)
	{
	case espresso:espresso_snacks();
		break;
	case dining:dining_func();
		break;
	case 3:Destination();
		break;
	default: printf("invalid option");
	}
}
/**********************************************
* functon: espresso_snacks()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : navigate cafe menu.
* Input Parameters :
* Return : espresso_snacks
***********************************************/
int espresso_snacks(void)
{
	int option = 0;
	printf(" Please choose your destination\n");
	printf(" 1. Atrium Cafe\n");
	printf(" 2. Chinook Student Center\n");
	printf(" 3. Cleveland Espresso Bar\n");
	printf(" 4. CUB-The Compton Union Building\n");
	printf(" 5. CUE Cafe\n");
	printf(" 6. Enter '6' to go back the Destination menu\n");
	scanf("%d", &option);
	if (option == 1)
	{
		printf("\t\t\t\t\t\t\"Atrium Cafe\n");
		printf(" Todd Hall Addition, 300 NE College Ave, Pullman, WA 99163, USA\n");
		printf(" Google maps link: https://goo.gl/maps/EKwMeJWFdf2fbvam6\n");
		printf(" Reservations/Information: Jamie Callison- 509-335-7426\n");
		printf(" Open hours: 7:30 AM - 3:00 PM on Weekdays \n");
		return espresso_snacks();


	}
	else if (option == 2)
	{
		printf("\t\t\t\t\t\t\"Chinook Student Center\n");
		printf(" 700 NE Thatuna St, Pullman, WA 99164\n");
		printf(" Google maps link: https://goo.gl/maps/Q2oWjBTDrU2TUHSx6\n");
		printf(" Reservations/Information: +15093351799\n");
		printf(" Open hours: 5:30 AM - 11:30 PM on Weekdays\n");
		printf(" Open hours: 9:00 AM - 11:30 PM on Weekends\n");
		return espresso_snacks();


	}
	else if (option == 3)
	{
		printf("\t\t\t\t\t\t\"Cleveland Espresso Bar\n");
		printf(" 1155 NE College St Pullman,WA,99163,USA\n");
		printf(" Google maps link: N/A \n");
		printf(" Reservations/Information: N/A");
		printf(" Open hours: Permenantly Closed\n");
		return espresso_snacks();
	}
	else if (option == 4)
	{
		printf("\t\t\t\t\t\t\"CUB\n");
		printf(" 1500 Glenn Terrell Mall, Pullman, WA 99163\n");
		printf(" Google maps link: https://goo.gl/maps/iRUQ88JdjyZVPKom6 \n");
		printf(" Reservations/Information: Jamie Callison- 509-335-7426\n");
		printf(" Open hours: 7:30 AM - 7:30 PM On Weekdays\n");
		return espresso_snacks();
	}
	else if (option == 5)
	{
		printf("\t\t\t\t\t\t\"CUE Cafe\n");
		printf(" Smith Center for Undergraduate Education, Pullman, WA 99163\n");
		printf(" Google maps link: https://goo.gl/maps/tGTdo4GUU5aC9Y7J9 \n");
		printf(" Reservations/Information: +1(509) 335-3564\n");
		printf(" Open hours: Temporary Closed\n");
		return espresso_snacks();
	}
	else if (option == 6)
	{
		Destination();
	}
	
}
/**********************************************
* functon: dining()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : navigate dining resturant menu.
* Input Parameters :
* Return : dining_func
***********************************************/
int dining_func(void)
{
	int option = 0;
	printf(" Please choose your destination\n");
	printf(" 1. Carlita\n");
	printf(" 2. Flix\n");
	printf(" 3. Gridiron Burgers & Fries\n");
	printf(" 4. Panda Express\n");
	printf(" 5. Subway\n");
	printf(" 6. Enter '6' to go back the Destination menu\n");
	scanf("%d", &option);

	if (option == 1)
	{
		printf("\t\t\t\t\t\t\"Carlita\n");
		printf(" Cub Compton Union Building, 1500 NE Glenn Terrell Mall 1st floor, Pullman, WA 99163\n");
		printf(" Google maps link: https://goo.gl/maps/DNm2ZC4UBvMF18Li7");
		printf(" Reservations/Information: N/A\n");
		printf(" Open hours: 10:30 AM - 2:30 PM on Weekdays \n");
		return dining_func;

	}

	else if (option == 2)
	{
		printf("\t\t\t\t\t\t\"Flix\n");
		printf(" 1455 NE Stadium Way,Pullman, WA 99163,USA\n");
		printf(" Google maps link: https://goo.gl/maps/YmaZRdBzMW5qCiVm7");
		printf(" Reservations/Information: N/A\n");
		printf(" Permenantly Closed\n");
		return dining_func;
		

	}
	else if (option == 3)
	{
		printf("\t\t\t\t\t\t\"Gridiron Burgers & Fries\n");
		printf(" 1500 Grimes Way, Pullman, Washington 99164\n");
		printf(" Google maps link: https://goo.gl/maps/VHW2iqtgG2UH321B6");
		printf(" Reservations/Information: N/A\n");
		printf(" Permenantly Closed\n");
		return dining_func;


	}
	else if (option == 4)
	{
		printf("\t\t\t\t\t\t\"Panda Express\n");
		printf(" 1500 N.e, Glenn Terrell Mall, Pullman, WA 99163\n");
		printf(" Google maps link: https://goo.gl/maps/UZhSmXpuU4kEXNjWA");
		printf(" Reservations/Information:509-332-7310\n");
		printf(" Open hours: 10:00 AM - 9:00 PM on Weekdays \n");
		printf(" Open hours: 10:30 AM - 7:00 PM on Saturday \n");
		printf(" Open hours: 10:30 AM - 6:00 PM on Sunday \n");
		return dining_func;


	}
	else if (option == 5)
	{
		printf("\t\t\t\t\t\t\"Subway\n");
		printf(" 1500 N.e, Glenn Terrell Mall, Pullman, WA 99163\n");
		printf(" Google maps link: https://goo.gl/maps/UZhSmXpuU4kEXNjWA");
		printf(" Reservations/Information:509-334-0615\n");
		printf(" Open hours: 7:30 AM - 9:00 PM on Weekdays \n");
		printf(" Open hours: 10:00 AM - 9:00 PM on Weekends \n");
		return dining_func;
		
	}
	else if (option == 6)
	{
		Destination();
	}
	
}
/**********************************************
* functon: healthcare()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : naviagte healthcare menu.
* Input Parameters :
* Return : healthcare
***********************************************/
void healthcare(void)
{
	int option = 0;
	printf("IF THIS IS AN EMERGENCY PLEASE DIAL 911\n");
	printf("Please Choose your the category\n");
	printf("1.Hospials/Clinics\n");
	printf("2.Sucide Hotline\n");
	printf(" 3.Go back to main menu");
	scanf("%d", &option);

	if (option == 1)
	{
		option = 0;
		printf("1.Pullman Regional Hospital\n");
		printf("2.Couger Health Services\n");
		scanf("%d", &option);
		if (option == 1)
		{
			printf("Address: 835 SE Bishop Blvd, Pullman, WA 99163\n");
			printf("Phone number/Appointment: 509-332-2541\n");
			printf("Open Hours: 24 hours\n");
			return healthcare();

		}
		if (option == 2)
		{
			printf("Address: 1125 NE Washington St, Pullman, WA 99164\n");
			printf("Phone number/Appointment: 509-335-3575\n");
			printf("Open Hours: 9:00 AM - 5:00 PM on Weekdays\n");
			return healthcare();
		}
	}
	else if (option == 2)
	{
		printf("Please call: 1-800-273-TALK(8255)\n");
		return healthcare();
	}
	else if (option == 3)
	{
		Destination();
	}
	
}
////// payam //////

/**********************************************
* functon: outdoor_activity()
* Date Created : 02/19/22
* Date Last Modified : 02/19/22
* Description : this funtion will ask user to enter radius and catagorie for an outdoor activity.
* Input Parameters :
* Return : nothing (void)
***********************************************/
void outdoor_activity(void)
{
	/*user can choose a distance range from campus and this function will
	 give them the different otions for the outdoor activity*/
	double milage = 0.0;
	int menu = 0;
	//1.ask the user the radius that they want to search

	printf(" 1.what is the radius do you want to search?\n Please enter a value between 0-7,7-12 or more than 12 miles\n");
	scanf("%lf", &milage);
	//2.ask the user what kind of outdoor activity they want to do 
	char type_of_outdoor_activity = NULL;
	//3.ask the user to choose between parks,trails or resturants
	printf(" 2.Please choose a character based on following:\n For Parks:p\n For Trails:t\n For Resturants:r\n");
	scanf(" %c", &type_of_outdoor_activity);
	

	switch (type_of_outdoor_activity)
	{
	case 'p':	//for parks
		if (milage <= 7)	//places that are less than 5 miles from campus 
		{
			printf(" 1.Reaney Park:\n Address:Reaney Way\n Rating:4.4 Stars\n");
			printf(" 2.Spring Street Park:\n Address: 325 E Spring St. Pullman,WA 99163\n Rating:4.7 Stars\n");
			printf(" 3.Kruegel Park:\n Address: 705 SE Dilke St, Pullman, WA 99163\nRating:4.5 Stars\n");
			
		}
		else if (milage > 7 || milage < 12)
		{

			printf(" 1.Woodcraft Park:\n Address: 370 SE Jackson Alley, Pullman, WA 99163\nRating:4.3 Stars\n");
			printf(" 2.City Playfield:\n Address:820 SE South St, Pullman, WA 99163\n Rating:4.5 Stars\n");

		}
		else if (milage >= 12)
		{
			printf(" 1.Schmuck Park\n Address: Colfax, WA 99111\n Rating: 4.5 Stars\n");
			printf(" 2.McDonald Park\n Address: 2708 Cedar St, Colfax, WA 99111\n Rating: 4.6 Stars\n");
		}
		break;
	case't':	//for trails
		if (milage <= 7)
		{
			printf(" 1.Bill Chimpman:\n Address: Bill Chipman Palouse Trail, Pullman, WA 99163\n Rating:4.6 Stars\n");
			printf(" 2.Sunnyside Park:\n Address: 147 SW Cedar St, Pullman, WA 99163\n Rating:4.7 Stars\n");
		}
		else if (milage > 7 || milage < 12)
		{
			printf(" 1.Latah Bike path:\n Address: 338 Styner AVE,Moscow, ID 83843\nRating: 4.0 Stars\n");
			printf(" 2.Bill Chipman Palouse Trail:\nAddress: Bill Chipman Palouse Trail,Pullman WA,99163\n Rating:4.0 Stars\n");
		}
		else if (milage >= 12)
		{
			printf(" kamiak butte:\n Address:Kamiak Butte County Park, Palouse, WA 99161\n Rating:4.7 Stars\n");
		}
		break;

	case'r':
		if (milage <= 7)
		{
			printf(" 1.Panda Express:\n Address: 1500 N.e, Glenn Terrell Mall, Pullman, WA 99163\n Rating:3.9 Stars\n");
			printf(" 2.Hillside Café:\n Address: 650 NE Campus St, Pullman, WA 99163\n Rating:4.0 Stars\n");
			printf(" 3.Carlita's:\n Address: 1500 NE Glenn Terrell Mall, Pullman, WA 99163\n Rating:2.6 Stars\n");
			printf(" 4.Subway:\n Address: 1500 Glenn Terrell Mall, Pullman, WA 99163\n Rating: 3.8 Stars\n");

		}
		else if (milage > 7 || milage <= 12)
		{
			printf(" 1.Sella's Calzone & Pizza:\n Address: 1115 E Main St, Pullman, WA 99163\nRating: 4.4 Stars\n");
			printf(" 2.Birch and Barley:\n Address: 1360 Bishop Blvd, Pullman, WA 99163\n Rating: 4.5 Stars\n");
			printf(" 3.Porch Light Pizza:\n Address: 200 NE Kamiaken St, Pullman, WA 99163\n Rating: 4.6 Stars\n");
			printf(" 4.Tan's Chinese Restaurant:\n Address: 1195 Bishop Blvd, Pullman, WA 99163\n Rating: 4.5 Stars\n");

		}
		else if (milage > 12)
		{
			printf(" 1.Tapped - Taphouse & Kitchen:\n Address: 210 S Main St, Moscow, ID 83843\n Rating: 4.5 Stars\n");
			printf(" 2.Moscow Alehouse:\n Address:226 W 6th St, Moscow, ID 83843\n Rating: 4.4 Stars\n");
			printf(" 3.Lodgepole:\n Address: 106 N Main St, Moscow, ID 83843\n Rating:4.7 Stars\n");
			printf(" 4.Maialina Pizzeria Napoletana:\n Address: 602 S Main St, Moscow, ID 83843\n Rating:4.5 Stars\n");
		}
		break;
	case 4: //display_menu();
		break;
	default:
		printf(" Please choose the correct carachter from the options\n");
		break;
	}
	printf(" 4.Enter '4' to go back to the main menu\n");
	scanf(" %d", &menu);

}