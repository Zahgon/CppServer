/*!
    \file ws.cpp
    \brief WebSocket C++ Library implementation
    \author Ivan Shynkarenka
    \date 22.05.2019
    \copyright MIT License
*/

#include "server/ws/ws.h"

#include "string/encoding.h"
#include "string/format.h"
#include "string/string_utils.h"

#include <algorithm>
#include <openssl/sha.h>

namespace CppServer {
namespace WS {

void WebSocket::InitWSNonce()
{ __builtin_trap() /* STUB: not implemented */; }

bool WebSocket::PerformClientUpgrade(const HTTP::HTTPResponse& response, const CppCommon::UUID& id)
{ __builtin_trap() /* STUB: not implemented */; }

bool WebSocket::PerformServerUpgrade(const HTTP::HTTPRequest& request, HTTP::HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void WebSocket::PrepareSendFrame(uint8_t opcode, bool mask, const void* buffer, size_t size, int status)
{ __builtin_trap() /* STUB: not implemented */; }

void WebSocket::PrepareReceiveFrame(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t WebSocket::RequiredReceiveFrameSize()
{ __builtin_trap() /* STUB: not implemented */; }

void WebSocket::ClearWSBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace WS
} // namespace CppServer
