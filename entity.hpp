#ifndef _ENTITY_
#define _ENTITY_
#include<string>
namespace addressbook
{
	class Entity
	{
		private:
			std::string fname;
			std::string lname;
			std::string addr;
			std::string zip;
			std::string phone;
			std::string email;
			Entity(){}
			Entity(std::string, std::string, std::string, std::string, std::string, std::string);
		public:
			static Entity* createEntity();
			static Entity* createEntity(std::string, std::string, std::string, std::string, std::string, std::string);
			void getfname(std::string);
			void getlname(std::string);
			void getaddr(std::string);
			void getzip(std::string);
			void getphone(std::string);
			void getemail(std::string);
			std::string putfname(){return fname;}
			std::string putlname(){return lname;}
			std::string putaddr(){return addr;}
			std::string putzip(){return zip;}
			std::string putphone(){return phone;}
			std::string putemail(){return email;}
			void getdetails();
			static bool check_dig(std::string);
			static bool check_mail(std::string);
			void show();
	};
}
#endif
