// DLP-server.cpp: определяет точку входа для консольного приложения.
//
// for work you need to take cpprestSDK
#include "cpprest/http_client.h"
#include "cpprest/http_listener.h"
#include "cpprest/json.h"
#include "cpprest/filestream.h"
#include "cpprest/containerstream.h"
#include "cpprest/producerconsumerstream.h"

#include <random>
#include <vector>
#include <fstream>
#include <conio.h>
#include <agents.h>
#include <locale>
#include <ctime>

using namespace web;
using namespace http;
using namespace utility;
using namespace concurrency::streams;
using namespace http::experimental::listener;



class DLPserver
{
public:
	std::wstring login;
	DLPserver()
	{
		try {
			fileStream = concurrency::streams::file_stream<uint8_t>::open_istream(U("E:\\PD\\Middle_DLP\\users.txt")).get();
			fileStream.read_to_end(streamBuffer).get();
		}
		catch (const http_exception &e) {
			std::cerr << e.what();
			throw e;
		}

		try {
			fileStream1 = concurrency::streams::file_stream<uint8_t>::open_istream(U("E:\\PD\\Middle_DLP\\database.txt")).get();
			fileStream1.read_to_end(Bufferstream).get();
		}
		catch (const http_exception &e) {
			std::cerr << e.what();
			throw e;
		}
		fileStream.close();
		fileStream1.close();
		streamBuffer.close();
		Bufferstream.close();
		listener = http_listener(U("http://localhost:12345"));

		listener.support(methods::GET,
			std::bind(&DLPserver::handle_get, this, std::placeholders::_1));

		listener.support(methods::POST,
			std::bind(&DLPserver::handle_post, this, std::placeholders::_1));

		listener.support(methods::PATCH,
			std::bind(&DLPserver::handle_patch, this, std::placeholders::_1));
		listener.support(methods::PUT,
			std::bind(&DLPserver::handle_put, this, std::placeholders::_1));

		listener.open().wait(); 
	}

	std::time_t vremya;
	std::map<
		std::wstring,
		std::time_t 
	> online_list;





	concurrency::streams::istream fileStream;
	concurrency::streams::istream fileStream1;

	container_buffer<std::string> streamBuffer;
	container_buffer<std::string> Bufferstream;

	concurrency::streams::ostream WriteFileStream;
	concurrency::streams::ostream WriteFileStream1;
	
	http_listener listener;


	void handle_get(web::http::http_request message) 
	{
		std::wcout << U("Get request") << std::endl;
		if (message.request_uri() == U("/dlpapi/crebase"))
		{
			try
			{
				message.extract_json()
					.then(
						[this, message](json::value jsonValue)
				{
					vremya = std::time(nullptr);
					if (vremya - online_list[login] > 900) 
					{
						online_list.erase(login);
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("erased"));
						message.reply(response).wait();
					}
					else
					{
						std::random_device rd;
						std::mt19937 gen(rd());
						std::uniform_int_distribution<> dist(900, 999);
						std::uniform_int_distribution<> dism(1000000, 9999999);
						std::uniform_int_distribution<> disa(1, 31);
						std::uniform_int_distribution<> disb(1, 12);
						std::uniform_int_distribution<> disc(1930, 1997);
						std::uniform_int_distribution<> disd(100000, 800000);
						std::uniform_int_distribution<> dise(01, 99);
						std::uniform_int_distribution<> disf(01, 199);
						std::uniform_int_distribution<> disg(18000, 130000);
						std::uniform_int_distribution<> dish(1000, 9000);
						std::uniform_int_distribution<> disi(100000, 999500);
						std::uniform_int_distribution<> disj(100, 999);

						std::vector<std::string> name{ "Yakovleva", "Sorokina", "Sergeeva", "Romanova", "Zakharova", "Borisova", "Koroleva", "Gerasimova", "Ponamareva", "Grigorieva", "Lazareva", "Medvedeva", "Ershova", "Nikitina", "Soboleva", "Ryabova", "Polyakova", "Cvetkova", "Danilova", "Zhykova", "Frolova", "Zhyravleva", "Nikolaeva", "Krylova", "Maksimova", "Sidorova" };
						std::vector<std::string> dog{ "Zhanna", "Valentina", "Inna", "Anna", "Mariya", "Anastasia", "Daria", "Ludmilla", "Kristina", "Tatiyana", "Galina", "Dana", "Evgeniya", "Zinaida", "Zoya", "Nadezhda", "Olga", "Olesya", "Nina", "Viktoriya", "Veronika" };
						std::vector<std::string> cat{ "Sergeevna", "Semenovna", "Stanislavovna", "Stepanovna", "Pavlovna", "Petrovna", "Aleksandrovna", "Andreevna", "Arkhipovna", "Alekseevna", "Antonovna", "Askoldovna", "Albertovna", "Arkadievna", "Borisovna", "Konstantinovna", "Matveevna", "Mikhailovna", "Olegovna", "Maksimovna", "Afanasievna", "Anatolievna", "Artemovna" };
						std::vector<std::string> rat{ "Surgut", "Solncevo", "Moscow", "Astrakhan", "Novosibirsk", "Kostroma", "Arkhangelsk", "Kamchatsk", "Kemerovo", "Orel", "Leningrad", "Dybna", "Barnaul", "Lipeck", "Kuban", "Novorossiysk", "Kaliningrad", "Gelendzhik", "Sochi", "Ivanovo", "Orenburg", "Ekaterinburg", "Balashikha", "Tver", "Irkytsk", "Tyla" };
						std::vector<std::string> red{ "Surgut", "Solncevo", "Moscow", "Astrakhan", "Novosibirsk", "Kostroma", "Arkhangelsk", "Kamchatsk", "Kemerovo", "Orel", "Leningrad", "Dybna", "Barnaul", "Lipeck", "Kuban", "Novorossiysk", "Kaliningrad", "Gelendzhik", "Sochi", "Ivanovo", "Orenburg", "Ekaterinburg", "Balashikha", "Tver", "Irkytsk", "Tyla" };
						std::vector<std::string> ron{ "St_Lenina_h", "St_Sovetskaya_h", "St_Pionerskaya_h", "St_Tryda_h", "St_Krasnokazarmennaya_h", "St_Oktyabariskya_h", "Smolenskaya_Ploshad_h", "St_Tverskaya_h", "St_Proletarskaya_h", "St_Kalinina_h", "St_Mayakovskogo_h", "St_Avtozavodskaya_h", "St_Rabochaya_h", "St_Detskaya_h", "St_Ostrovskogo_h", "St_Prigorodnaya_h", "St_Mostovaya_h", "St_Lapina_h", "St_Vavilova_h" };
						std::vector<std::string> rto{ "Married", "Not_married" };
						std::vector<std::string> ren{ "Higher ", "Secondary", "Secondary_higher" };
						std::vector<std::string> cot{ "Lawyer", "", "Optometrist", "Engineer", "Electrician", "Seller", "Podiatrist", "Trucker", "Baker", "Surgeon", "Distributor", "Scientist", "Astronaut", "Teacher", "Instructor", "Mathematician", "Firefighter", "Psychiatrist", "Therapist", "Proctologist", "Police", "Hairdresser", "Makeup_artist", "Journalist", "Programmer", "Economist", "Oncologist", "Plumber", "Reporter", "TV_presenter" };
						std::vector<std::string> tak{ "Served", "Not_served" };
						std::vector<std::string> fame{ "Romanov", "Osipov", "Makarov", "Zaycev", "Belyaev", "Gavrilov", "Antonov", "Ephimov", "Leontiev", "Davydov", "Gysev", "Danilov", "Kiselev", "Sorokin", "Tikhomirov", "Krylov", "Nikiphirov", "Ozhegov", "Krysin", "Lopatin", "Bynin", "Sidorov", "Sobolev" };
						std::vector<std::string> god{ "Sergey", "Ivan", "Oleg", "Dmitriy", "Vyacheslav", "Pavel", "Mikhail", "Alexander", "Aleksey", "Ilya", "Maksim", "Daniil", "Denis", "Vladimir", "Boris", "Artem" };
						std::vector<std::string> tac{ "Sergeevich", "Ivanovich", "Olegovich", "Dmitreevich", "Vycheslavovich", "Pavlovich", "Mikhailovich", "Alexandrovich", "Alekseevich", "Maksimovich", "Daniilovich", "Denisovich", "Vladimirovich", "Borisovich", "Artemovich" };
						std::vector<std::string> ryc{ "Married", "Not_married" };
						std::vector<std::string> gra{ "RUS", "UKR", "KAZ", "BEL", "AZ", "UZB", "ARM", "KIR", "MOL", "TUR", "TAD" };
						std::vector<std::string> socsta{ "Student", "Young_professional", "Businessman", "Сompany_President", "retired", "Senior", "Teacher" };


						std::ofstream fout("E:\\PD\\Middle_DLP\\database.txt");
						fout << "ID Surname Name Middle_name Place_birth Place_res Address Sex Marital_status Education Profession Income Passport_series Passport_number Military_records Criminal SNILS Child_children TIN Phone_numbers Date_of_birth Citizenship Social_status Driver's_license" << std::endl;
						fout << "--------------------------------------------------------" << std::endl;
						for (int iter = 1; iter < 41; iter++) {
							fout << "\"" << "&" << iter << "\"" << " " << "\"" << name[rand() % name.size()] << "\""
								<< " " << "\"" << dog[rand() % dog.size()] << "\"" << " " << "\""
								<< cat[rand() % cat.size()] << "\"" << " " << "\""
								<< rat[rand() % rat.size()] << "\"" << " " << "\""
								<< red[rand() % red.size()] << "\"" << " " << "\""
								<< disd(gen) << "." << ron[rand() % ron.size()] << "."
								<< dise(gen) << "_" << disf(gen) << "\""
								<< " " << "\"" << "w" << "\"" << " " << "\""
								<< rto[rand() % rto.size()] << "\"" << " " << "\""
								<< ren[rand() % ren.size()] << "\"" << " " << "\""
								<< cot[rand() % cot.size()] << "\"" << " " << "\""
								<< disg(gen) << "\"" << " " << "\""
								<< dish(gen) << "\"" << " " << "\""
								<< disi(gen) << "\"" << " " << "\""
								<< " " << "\"" << " " << "\"" << "No" << "\""
								<< " " << "\"" << disj(gen)
								<< " " << disj(gen)
								<< " " << disj(gen) << "-"
								<< dise(gen) << "\"" << " " << "\""
								<< disb(gen) << "\"" << " "
								<< "\"" << disd(gen) << disd(gen) << "\"" << " "
								<< "\"" << "+7" << "(" << dist(gen) << ")"
								<< dism(gen) << "\"" << " " << "\"" << disa(gen) << "\"" << "." << "\""
								<< disb(gen) << "\"" << "." << "\"" << disc(gen) << "\"" << " " << "\"" << gra[rand() % gra.size()]
								<< "\"" <<  " " << "\"" << socsta[rand() % socsta.size()]
								<< "\"" << " " << "\"" << "+" << "\"" << "*" << std::endl;
						}
						for (int iter = 41; iter < 81; iter++) {
							fout << "\"" << "&" << iter << "\"" << " " << "\"" << fame[rand() % fame.size()] << "\""
								<< " " << "\"" << god[rand() % god.size()] << "\""
								<< " " << "\"" << tac[rand() % tac.size()] << "\"" << " " << "\""
								<< rat[rand() % rat.size()] << "\"" << " " << "\""
								<< red[rand() % red.size()] << "\"" << " " << "\""
								<< disd(gen) << "."
								<< ron[rand() % ron.size()] << "."
								<< dise(gen) << "_" << disf(gen) << "\""
								<< " " << "\"" << "m" << "\"" << " " << "\""
								<< ryc[rand() % ryc.size()] << "\"" << " " << "\""
								<< ren[rand() % ren.size()] << "\"" << " " << "\""
								<< cot[rand() % cot.size()] << "\"" << " " << "\""
								<< disg(gen) << "\"" << " " << "\""
								<< dish(gen) << "\"" << " " << "\""
								<< disi(gen) << "\"" << " " << "\""
								<< tak[rand() % tak.size()] << "\"" << " " << "\"" << "No" << "\""
								<< " " << "\"" << disj(gen) << " "
								<< disj(gen) << " "
								<< disj(gen) << " "
								<< dise(gen) << "\"" << " " << "\""
								<< disb(gen) << "\"" << " "
								<< "\"" << disd(gen) << disd(gen) << "\""
								<< " " << "\"" << "+7" << "(" << dist(gen) << ")"
								<< dism(gen) << "\"" << " " << "\"" << disa(gen) << "\"" << "." << "\"" << disb(gen) << "\"" << "." << "\"" 
								<< disc(gen) << "\"" << " " << "\"" << gra[rand() % gra.size()] << "\""
								<< " " << "\"" << socsta[rand() % socsta.size()]
								<< "\"" << " " <<  "\"" << "+" << "\"" << "*" << std::endl;
						}
						fout << "------------------------------ \n";
						fout.close();



						http_response response;
						response.set_reason_phrase(U("<.....Database is created successfully.....>"));
						response.set_status_code(status_codes::OK);

						message.reply(response).wait(); 
					}
				}
				);
			}
			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}

		else if (message.request_uri() == U("/dlpapi/delbase"))
		{
			try
			{
				message.extract_json()
					.then(
						[this, message](json::value jsonValue)
				{
					vremya = std::time(nullptr);
					if (vremya - online_list[login] > 900) 
					{
						online_list.erase(login);
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("erased"));
						message.reply(response).wait();
					}
					else
					{
						WriteFileStream1 = concurrency::streams::file_stream<uint8_t>::open_ostream(U("E:\\PD\\Middle_DLP\\database.txt"), std::ios_base::trunc).get();
						WriteFileStream1.print("");

						http_response response;
						response.set_reason_phrase(U("<.....Database is deleted successfully.....>"));
						response.set_status_code(status_codes::OK);
						message.reply(response).wait();
					}
				}
				);
			}
			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}

		else
		{
			std::wcout << L"Unknown request" << std::endl;
		}
	}


	void handle_post(web::http::http_request message)
	{
		std::wcout << U("POST request") << std::endl;
		if (message.request_uri() == U("/dlpapi/register"))
		{
			try
			{
				message.extract_json()
					.then(
						[this, message](json::value jsonValue)
				{

					

					std::wcout << L"Request for registration -> " << std::endl;
					std::wcout << L"Login: " << jsonValue.at(U("login")).serialize() << std::endl;
					std::wcout << L"Password: " << jsonValue.at(U("password")).serialize() << std::endl;
					std::wcout << L"Captcha: " << jsonValue.at(U("captcha")).serialize() << std::endl;


					std::wstring l = std::wstring(streamBuffer.collection().begin(), streamBuffer.collection().end());
					int x = l.find((jsonValue.at(U("login")).serialize()));
					if (x != std::string::npos)
					{
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("...A user by that name exists..."));

						message.reply(response).wait(); 
						
					}
					else
					{

					
						std::wstring str = jsonValue.at(U("login")).serialize() + L" " + jsonValue.at(U("password")).serialize(); 
						std::string lp(str.begin(), str.end()); 
						streamBuffer.collection() += "\r\n" + lp; 
						http_response response;
						response.set_status_code(status_codes::OK);
					    response.set_reason_phrase(U("...The user successfully registered..."));

						message.reply(response).wait(); 
					}
				}
				
				);
			}
			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}

		else if (message.request_uri() == U("/dlpapi/auth"))
		{
			try
			{
				message.extract_json()
					.then([this, message](json::value jsonValue)
				{

					login = jsonValue.at(U("login")).serialize();
					vremya = std::time(nullptr);
					online_list[login] = vremya;


					std::wcout << L"Request for authentication -> " << std::endl;
					std::wcout << L"Login: " << jsonValue.at(U("login")).serialize() << std::endl;
					std::wcout << L"Password: " << jsonValue.at(U("password")).serialize() << std::endl;
					std::wstring l = std::wstring(streamBuffer.collection().begin(), streamBuffer.collection().end());
					int x = l.find((jsonValue.at(U("login")).serialize() + L" " + jsonValue.at(U("password")).serialize()));
					if (x != std::string::npos)
					{
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("interface"));
						message.reply(response).wait(); 
					}
					else
					{
						std::wcout << "Unknown data" << std::endl;
						http_response response;
						response.set_reason_phrase(U("...Wrong login/password..."));
						response.set_status_code(status_codes::OK);
						
						message.reply(response).wait(); 
					}
				}
				);
			}
			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}

		}

		else if (message.request_uri() == U("/dlpapi/addSub"))
		{
			try
			{
				message.extract_json()
					.then([this, message](json::value jsonValue)
				{

					vremya = std::time(nullptr);
					if (vremya - online_list[login] > 900) 
					{
						online_list.erase(login);
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("erased"));
						message.reply(response).wait();
					}
					else
					{

						std::wcout << L"Request for add subject of base -> " << std::endl;
						std::wcout << L"ID: " << jsonValue.at(U("ID")).serialize() << std::endl;
						std::wcout << L"Surname: " << jsonValue.at(U("Surname")).serialize() << std::endl;
						std::wcout << L"Name: " << jsonValue.at(U("Name")).serialize() << std::endl;
						std::wcout << L"Middle name: " << jsonValue.at(U("Middle_name")).serialize() << std::endl;
						std::wcout << L"Place_birth: " << jsonValue.at(U("Place_birth")).serialize() << std::endl;
						std::wcout << L"Place_res: " << jsonValue.at(U("Place_res")).serialize() << std::endl;
						std::wcout << L"Address: " << jsonValue.at(U("Address")).serialize() << std::endl;
						std::wcout << L"Sex: " << jsonValue.at(U("Sex")).serialize() << std::endl;
						std::wcout << L"Marital_status: " << jsonValue.at(U("Marital_status")).serialize() << std::endl;
						std::wcout << L"Education: " << jsonValue.at(U("Education")).serialize() << std::endl;
						std::wcout << L"Profession: " << jsonValue.at(U("Profession")).serialize() << std::endl;
						std::wcout << L"Income: " << jsonValue.at(U("Income")).serialize() << std::endl;
						std::wcout << L"Passport_series: " << jsonValue.at(U("Passport_series")).serialize() << std::endl;
						std::wcout << L"Passport_number: " << jsonValue.at(U("Passport_number")).serialize() << std::endl;
						std::wcout << L"Military_records: " << jsonValue.at(U("Military_records")).serialize() << std::endl;
						std::wcout << L"Criminal: " << jsonValue.at(U("Criminal")).serialize() << std::endl;
						std::wcout << L"SNILS: " << jsonValue.at(U("SNILS")).serialize() << std::endl;
						std::wcout << L"Child_children: " << jsonValue.at(U("Child_children")).serialize() << std::endl;
						std::wcout << L"TIN: " << jsonValue.at(U("TIN")).serialize() << std::endl;
						std::wcout << L"Phone_numbers: " << jsonValue.at(U("Phone_numbers")).serialize() << std::endl;
						std::wcout << L"Year_birth: " << jsonValue.at(U("Year_birth")).serialize() << std::endl;
						std::wcout << L"Month_birth: " << jsonValue.at(U("Month_birth")).serialize() << std::endl;
						std::wcout << L"Date_birth: " << jsonValue.at(U("Date_birth")).serialize() << std::endl;
						std::wcout << L"Citizenship: " << jsonValue.at(U("Citizenship")).serialize() << std::endl;
						std::wcout << L"Social_status: " << jsonValue.at(U("Social_status")).serialize() << std::endl;
						std::wcout << L"Driver's license: " << jsonValue.at(U("Driver_license")).serialize() << std::endl;


				
						std::wstring str = jsonValue.at(U("ID")).serialize() + L" " + jsonValue.at(U("Surname")).serialize() + L" " + jsonValue.at(U("Name")).serialize() +
							L" " + jsonValue.at(U("Middle_name")).serialize() + L" " + jsonValue.at(U("Place_birth")).serialize() + L" " + jsonValue.at(U("Place_res")).serialize()
							+ L" " + jsonValue.at(U("Address")).serialize() + L" " + jsonValue.at(U("Sex")).serialize() + L" " + jsonValue.at(U("Marital_status")).serialize()
							+ L" " + jsonValue.at(U("Education")).serialize() + L" " + jsonValue.at(U("Profession")).serialize() + L" " + jsonValue.at(U("Income")).serialize()
							+ L" " + jsonValue.at(U("Passport_series")).serialize() + L" " + jsonValue.at(U("Passport_number")).serialize()
							+ L" " + jsonValue.at(U("Military_records")).serialize() + L" " + jsonValue.at(U("Criminal")).serialize()
							+ L" " + jsonValue.at(U("SNILS")).serialize() + L" " + jsonValue.at(U("Child_children")).serialize()
							+ L" " + jsonValue.at(U("TIN")).serialize() + L" " + jsonValue.at(U("Phone_numbers")).serialize()
							+ L" " + jsonValue.at(U("Year_birth")).serialize() + L"." + jsonValue.at(U("Month_birth")).serialize()
							+ L"." + jsonValue.at(U("Date_birth")).serialize() + L" " + jsonValue.at(U("Citizenship")).serialize() + L" " +
							jsonValue.at(U("Social_status")).serialize() + L" " + jsonValue.at(U("Driver_license")).serialize() + L"*"; // объединение
						std::string lp(str.begin(), str.end()); 
						Bufferstream.collection() += "\n" + lp;
						
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("...The addition of the subject is completed..."));
						message.reply(response).wait();


					}
				}
				);
			}
			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}

		else
		{
			std::wcout << L"Unknown request" << std::endl;

			message.reply(status_codes::BadRequest).wait();
		}
	}
	
	
	void handle_patch(web::http::http_request message)
	{
		std::wcout << U("PATCH request") << std::endl;
		if (message.request_uri() == U("/dlpapi/editlog"))
		{
			try
			{
				message.extract_json()
					.then(
						[this, message](json::value jsonValue)
				{
					vremya = std::time(nullptr);
					if (vremya - online_list[login] > 900) 
					{
						online_list.erase(login);
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("erased"));
						message.reply(response).wait();
					}
					else
					{
						std::wcout << L"Request for edit Login -> " << std::endl;
						std::wcout << L"Old Login: " << jsonValue.at(U("oldlogin")).serialize() << std::endl;
						std::wcout << L"New Login: " << jsonValue.at(U("newlogin")).serialize() << std::endl;


						std::wstring x = std::wstring(streamBuffer.collection().begin(), streamBuffer.collection().end());
						int z = x.find(jsonValue.at(U("oldlogin")).serialize());
						if (z != std::string::npos)
						{
							x.replace(z, (jsonValue.at(U("oldlogin")).serialize()).length(), jsonValue.at(U("newlogin")).serialize());
							std::string v(x.begin(), x.end());
							streamBuffer.collection() = v;


							http_response response;
							response.set_reason_phrase(U("<.....Login is edited successfully.....>"));
							response.set_status_code(status_codes::OK);
							message.reply(response).wait(); 
						}
						else
						{
							std::wcout << "Old or new login wrong" << std::endl;
							http_response response;
							response.set_reason_phrase(U("<.....Old or new login wrong.....>"));
							response.set_status_code(status_codes::OK);
							message.reply(response).wait();
						}
					}
				}
				);
			}
			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}

		else if (message.request_uri() == U("/dlpapi/editpass"))
		{
			try
			{
				message.extract_json()
					.then(
						[this, message](json::value jsonValue)
				{
					vremya = std::time(nullptr);
					if (vremya - online_list[login] > 900) 
					{
						online_list.erase(login);
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("erased"));
						message.reply(response).wait();
					}
					else
					{
						std::wcout << L"Request for edit Password -> " << std::endl;
						std::wcout << L"Old Password: " << jsonValue.at(U("oldpass")).serialize() << std::endl;
						std::wcout << L"New Password: " << jsonValue.at(U("newpass")).serialize() << std::endl;


						std::wstring x = std::wstring(streamBuffer.collection().begin(), streamBuffer.collection().end());
						int z = x.find(jsonValue.at(U("oldpass")).serialize());
						if (z != std::string::npos)
						{
							x.replace(z, (jsonValue.at(U("oldpass")).serialize()).length(), jsonValue.at(U("newpass")).serialize());
							std::string v(x.begin(), x.end());
							streamBuffer.collection() = v;

							http_response response;
							response.set_reason_phrase(U("<.....Password is edited successfully.....>"));
							response.set_status_code(status_codes::OK);

							message.reply(response).wait(); 
						}
						else
						{
							std::wcout << "Old or new password wrong" << std::endl;
							http_response response;
							response.set_reason_phrase(U("<.....Old or new password wrong.....>"));
							response.set_status_code(status_codes::OK);
							message.reply(response).wait();
						}
					}

				}
				);
			}
			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}

		else
		{
			std::wcout << L"Unknown request" << std::endl;
		}
	}
	
	
	void handle_put(web::http::http_request message)
	{
		std::wcout << U("PUT request") << std::endl;
		if (message.request_uri() == U("/dlpapi/editsubj"))
		{
			try
			{
				message.extract_json()
					.then(
						[this, message](json::value jsonValue)
				{
					std::wcout << L"Request for edit subject -> " << std::endl;
					std::wcout << L"ID: " << jsonValue.at(U("ID")).serialize() << std::endl;
					int last_position;
					std::wstring x = std::wstring(Bufferstream.collection().begin(), Bufferstream.collection().end());
					for (int i = x.find(jsonValue.at(U("ID")).serialize()); i < x.length(); i++)
						if (x[i] == L'*') 
					{ 
							last_position = i; 
							break; 
					}
					int q = x.find(jsonValue.at(U("ID")).serialize());
					std::wstring y;
					y = x.substr(q, last_position);
					message.reply(status_codes::OK, y).wait(); 
				}
				);
			}

			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}

		else if (message.request_uri() == U("/dlpapi/serchsubj"))
		{
			try
			{
				message.extract_json()
					.then(
						[this, message](json::value jsonValue)
				{
					vremya = std::time(nullptr);
					if (vremya - online_list[login] > 900) 
					{
						online_list.erase(login);
						http_response response;
						response.set_status_code(status_codes::OK);
						response.set_reason_phrase(U("erased"));
						message.reply(response).wait();
					}
					else
					{

						std::wcout << L"Request for search subject -> " << std::endl;
						std::wcout << L"ID: " << jsonValue.at(U("ID")).serialize() << std::endl;
						std::wstring id = jsonValue.at(U("ID")).serialize();
						int last_position;
						std::wstring x = std::wstring(Bufferstream.collection().begin(), Bufferstream.collection().end());
						for (int i = x.find(id); i < x.length(); i++)
						{
							if (x[i] == L'*')
							{
								last_position = i;
								break;
							}
						}
						int q = x.find(id);
						std::wstring y;
						y = x.substr(q, last_position - q);;
						std::wcout << y << std::endl;

						message.reply(status_codes::OK, y).wait(); 
					}
				}
				);
			}

			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}


		else
		{
			std::wcout << L"Unknown request" << std::endl;
		}
	}

	
	void handle_options(web::http::http_request message)
	{
		std::wcout << U("PUT request") << std::endl;
		if (message.request_uri() == U("/dlpapi/ping"))
		{
			try
			{
				message.extract_json()
					.then(
						[this, message](json::value jsonValue)
				{
					message.reply(status_codes::OK).wait();
				}
				);
			}
			catch (http_exception const & e)
			{
				std::wcout << e.what() << std::endl;
			}
		}
	}


	
	~DLPserver()
	{

		listener.close().wait();
		fileStream.close();
		fileStream1.close();
		streamBuffer.close();
		Bufferstream.close();
		

		
		try
		{
			WriteFileStream = concurrency::streams::file_stream<uint8_t>::open_ostream(U("E:\\PD\\Middle_DLP\\users.txt"), std::ios_base::trunc).get();
			WriteFileStream.print(streamBuffer.collection());
		}
		catch (const http_exception &e)
		{
			std::cerr << e.what();
			throw e;
		}
		
		try
		{
			WriteFileStream1 = concurrency::streams::file_stream<uint8_t>::open_ostream(U("E:\\PD\\Middle_DLP\\database.txt") /*std::ios_base::trunc*/).get();
			WriteFileStream1.print(Bufferstream.collection());
		}
		catch (const http_exception &e)
		{
			std::cerr << e.what();
			throw e;
		}

	}
};

int main()
{
	DLPserver server;
	std::string line;
	std::wcout << U("Hit Enter to close the listener.") << std::endl;
	std::getline(std::cin, line);
}
