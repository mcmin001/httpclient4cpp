// httpclient4cpp.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
#include "CurlUtil.h"
using std::string;
using std::cout;
using std::endl;

int main()
{
	// 声明一个句柄
	CURL *p_curl_handle;
	// windows 环境下，初始化
	curl_global_init(CURL_GLOBAL_WIN32);
	// 获取句柄
	p_curl_handle = curl_easy_init();

	//
	cout << p_curl_handle << endl;

	

    return 0;
}

