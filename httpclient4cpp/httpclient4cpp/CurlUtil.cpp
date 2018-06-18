#include "CurlUtil.h"
#include <curl/curl.h>
#include <map>
typedef std::map<string, string> UDT_MAP_STRING_STRING;
using namespace std;
namespace http_client_namespace {
	class CurlUtil {
	public:
		static void DoPost(const string aPostUrl, 
		    map<string, string> *parameter_map,
			const string* pResponse) {

			struct curl_httppost* post = NULL;
			struct curl_httppost* last = NULL;

			CURL *curl;
			CURLM *multi_handle;

			map<string, string>::iterator iter;

			for (iter = parameter_map->begin(); iter != parameter_map->end(); iter++) {
				cout << (iter->first).c_str() << ' ' << (iter->second).c_str() << endl;
				curl_formadd(&post, &last,
					CURLFORM_COPYNAME, iter->first,
					CURLFORM_COPYCONTENTS, iter->second,
					CURLFORM_END
					);
			}

			multi_handle = curl_multi_init();

		};
	};
}