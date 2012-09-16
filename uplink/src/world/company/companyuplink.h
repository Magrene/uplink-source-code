
/*

  This is a specific version of the company class, 
  Modified to represent the company Uplink only.
	
  */

#ifndef _included_companyuplink_h
#define _included_companyuplink_h

// ============================================================================

#include "world/company/company.h"

class Mission;
class Sale;
class News;

// ============================================================================



class CompanyUplink : public CompanySales  
{

public:

	LList <Mission *> missions;
	LList <News *>	  news;

public:

	CompanyUplink();
	virtual ~CompanyUplink();

	void CreateMission ( Mission *mission );							
	void CreateMission ( char *employer, int payment, char *description, 
						 char *details, char *fulldetails );	

	void CreateNews   ( News *newnews );

	Mission   *GetMission  ( int index );
	News	  *GetNews	   ( int index );

	int securitylevel[6];

	// Common functions

	bool Load  ( FILE *file );
	void Save  ( FILE *file );
	void Print ();
	void Update ();
	
	char *GetID ();
	int   GetOBJECTID ();

};

#endif 
