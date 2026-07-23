/*!
    \file wss_server.cpp
    \brief WebSocket secure server implementation
    \author Ivan Shynkarenka
    \date 27.05.2019
    \copyright MIT License
*/

#include "server/ws/wss_server.h"

namespace CppServer {
namespace WS {

bool WSSServer::CloseAll(int status, const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool WSSServer::CloseAll(int status, std::string_view text)
{ __builtin_trap() /* STUB: not implemented */; }

bool WSSServer::Multicast(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace WS
} // namespace CppServer
