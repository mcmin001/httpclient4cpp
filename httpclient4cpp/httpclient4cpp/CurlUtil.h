#pragma once
#include<iostream>
#include<map>
using std::string;
typedef std::map<string, string> UDT_MAP_STRING_STRING;
class CurlUtil
{
public:
	CurlUtil();
	~CurlUtil();
	static void DoPost(
		const std::string aPostUrl, 
		const UDT_MAP_STRING_STRING parameter_map, 
		std::string *pResponse);

	static long CreateCurlInstance();

private:

};
