/*!
    \file http_request.cpp
    \brief HTTP request implementation
    \author Ivan Shynkarenka
    \date 07.02.2019
    \copyright MIT License
*/

#include "server/http/http_request.h"

#include "string/string_utils.h"
#include "utility/countof.h"

#include <cassert>

namespace CppServer {
namespace HTTP {

std::tuple<std::string_view, std::string_view> HTTPRequest::header(size_t i) const noexcept
{ __builtin_trap() /* STUB: not implemented */; }

std::tuple<std::string_view, std::string_view> HTTPRequest::cookie(size_t i) const noexcept
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::Clear()
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::SetBegin(std::string_view method, std::string_view url, std::string_view protocol)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::SetHeader(std::string_view key, std::string_view value)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::SetCookie(std::string_view name, std::string_view value)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::AddCookie(std::string_view name, std::string_view value)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::SetBody(std::string_view body)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::SetBodyLength(size_t length)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::MakeHeadRequest(std::string_view url)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::MakeGetRequest(std::string_view url)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::MakePostRequest(std::string_view url, std::string_view content, std::string_view content_type)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::MakePutRequest(std::string_view url, std::string_view content, std::string_view content_type)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::MakeDeleteRequest(std::string_view url)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::MakeOptionsRequest(std::string_view url)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPRequest& HTTPRequest::MakeTraceRequest(std::string_view url)
{ __builtin_trap() /* STUB: not implemented */; }

bool HTTPRequest::IsPendingHeader() const
{ __builtin_trap() /* STUB: not implemented */; }

bool HTTPRequest::IsPendingBody() const
{ __builtin_trap() /* STUB: not implemented */; }

bool HTTPRequest::ReceiveHeader(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool HTTPRequest::ReceiveBody(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::string_view HTTPRequest::FastConvert(size_t value, char* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::ostream& operator<<(std::ostream& os, const HTTPRequest& request)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPRequest::swap(HTTPRequest& request) noexcept
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace HTTP
} // namespace CppServer
