// httpclient4cpp.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
using namespace std;


int main()
{
	CURL *p_curl_handle;
	curl_global_init(CURL_GLOBAL_WIN32);
	p_curl_handle = curl_easy_init();
	cout << p_curl_handle << endl;

	

    return 0;
}

