/*!
    \file http_response.cpp
    \brief HTTP response implementation
    \author Ivan Shynkarenka
    \date 15.02.2019
    \copyright MIT License
*/

#include "server/http/http_response.h"

#include "errors/exceptions.h"
#include "string/format.h"
#include "string/string_utils.h"
#include "utility/countof.h"

#include <cassert>

namespace CppServer {
namespace HTTP {

const std::unordered_map<std::string, std::string> HTTPResponse::_mime_table =
{
    // Base content types
    { ".html",      "text/html" },
    { ".css",       "text/css" },
    { ".js",        "text/javascript" },
    { ".vue",       "text/html" },
    { ".xml",       "text/xml" },

    // Application content types
    { ".atom",      "application/atom+xml" },
    { ".fastsoap",  "application/fastsoap" },
    { ".gzip",      "application/gzip" },
    { ".json",      "application/json" },
    { ".map",       "application/json" },
    { ".pdf",       "application/pdf" },
    { ".ps",        "application/postscript" },
    { ".soap",      "application/soap+xml" },
    { ".sql",       "application/sql" },
    { ".xslt",      "application/xslt+xml" },
    { ".zip",       "application/zip" },
    { ".zlib",      "application/zlib" },

    // Audio content types
    { ".aac",       "audio/aac" },
    { ".ac3",       "audio/ac3" },
    { ".mp3",       "audio/mpeg" },
    { ".ogg",       "audio/ogg" },

    // Font content types
    { ".ttf",       "font/ttf" },

    // Image content types
    { ".bmp",       "image/bmp" },
    { ".emf",       "image/emf" },
    { ".gif",       "image/gif" },
    { ".jpg",       "image/jpeg" },
    { ".jpm",       "image/jpm" },
    { ".jpx",       "image/jpx" },
    { ".jrx",       "image/jrx" },
    { ".png",       "image/png" },
    { ".svg",       "image/svg+xml" },
    { ".tiff",      "image/tiff" },
    { ".wmf",       "image/wmf" },

    // Message content types
    { ".http",      "message/http" },
    { ".s-http",    "message/s-http" },

    // Model content types
    { ".mesh",      "model/mesh" },
    { ".vrml",      "model/vrml" },

    // Text content types
    { ".csv",       "text/csv" },
    { ".plain",     "text/plain" },
    { ".richtext",  "text/richtext" },
    { ".rtf",       "text/rtf" },
    { ".rtx",       "text/rtx" },
    { ".sgml",      "text/sgml" },
    { ".strings",   "text/strings" },
    { ".url",       "text/uri-list" },

    // Video content types
    { ".H264",      "video/H264" },
    { ".H265",      "video/H265" },
    { ".mp4",       "video/mp4" },
    { ".mpeg",      "video/mpeg" },
    { ".raw",       "video/raw" }
};

std::tuple<std::string_view, std::string_view> HTTPResponse::header(size_t i) const noexcept
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::Clear()
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::SetBegin(int status, std::string_view protocol)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::SetBegin(int status, std::string_view status_phrase, std::string_view protocol)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::SetContentType(std::string_view extension)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::SetHeader(std::string_view key, std::string_view value)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::SetCookie(std::string_view name, std::string_view value, size_t max_age, std::string_view path, std::string_view domain, bool secure, bool strict, bool http_only)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::SetBody(std::string_view body)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::SetBodyLength(size_t length)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::MakeOKResponse(int status)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::MakeErrorResponse(int status, std::string_view content, std::string_view content_type)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::MakeHeadResponse()
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::MakeGetResponse(std::string_view content, std::string_view content_type)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::MakeOptionsResponse(std::string_view allow)
{ __builtin_trap() /* STUB: not implemented */; }

HTTPResponse& HTTPResponse::MakeTraceResponse(std::string_view request)
{ __builtin_trap() /* STUB: not implemented */; }

bool HTTPResponse::IsPendingHeader() const
{ __builtin_trap() /* STUB: not implemented */; }

bool HTTPResponse::IsPendingBody() const
{ __builtin_trap() /* STUB: not implemented */; }

bool HTTPResponse::ReceiveHeader(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool HTTPResponse::ReceiveBody(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::string_view HTTPResponse::FastConvert(size_t value, char* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::ostream& operator<<(std::ostream& os, const HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPResponse::swap(HTTPResponse& response) noexcept
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace HTTP
} // namespace CppServer
