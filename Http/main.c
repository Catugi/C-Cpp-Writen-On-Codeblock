#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>

typedef struct curl_slist curl_slist;

int main()
{
    CURL *hnd = curl_easy_init();

    curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
    curl_easy_setopt(hnd, CURLOPT_URL, "http://localhost:8000/");

    curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "Content-Type: application/json");
    curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

    curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, "{\n\t\"name\": \"Francisco\"\n}");

    CURLcode ret = curl_easy_perform(hnd);
//    printf("Code: %d", ret);
    printf("%s", getenv("HOME"));
    if(ret != 0)
    {
        exit((int)ret);
    }
    return (int)ret;
}
