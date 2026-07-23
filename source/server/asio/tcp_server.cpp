/*!
    \file tcp_server.cpp
    \brief TCP server implementation
    \author Ivan Shynkarenka
    \date 14.12.2016
    \copyright MIT License
*/

#include "server/asio/tcp_server.h"

namespace CppServer {
namespace Asio {

TCPServer::TCPServer(const std::shared_ptr<Service>& service, int port, InternetProtocol protocol)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _port(port),
      _acceptor(*_io_context),
      _started(false),
      _bytes_pending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _option_keep_alive(false),
      _option_no_delay(false),
      _option_reuse_address(false),
      _option_reuse_port(false)
{ __builtin_trap() /* STUB: not implemented */; }

TCPServer::TCPServer(const std::shared_ptr<Service>& service, const std::string& address, int port)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _port(port),
      _acceptor(*_io_context),
      _started(false),
      _bytes_pending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _option_keep_alive(false),
      _option_no_delay(false),
      _option_reuse_address(false),
      _option_reuse_port(false)
{ __builtin_trap() /* STUB: not implemented */; }

TCPServer::TCPServer(const std::shared_ptr<Service>& service, const asio::ip::tcp::endpoint& endpoint)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(endpoint.address().to_string()),
      _port(endpoint.port()),
      _endpoint(endpoint),
      _acceptor(*_io_context),
      _started(false),
      _bytes_pending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _option_keep_alive(false),
      _option_no_delay(false),
      _option_reuse_address(false),
      _option_reuse_port(false)
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPServer::Start()
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPServer::Stop()
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPServer::Restart()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPServer::Accept()
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPServer::Multicast(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPServer::DisconnectAll()
{ __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<TCPSession> TCPServer::FindSession(const CppCommon::UUID& id)
{ __builtin_trap() /* STUB: not implemented */; }

void TCPServer::RegisterSession()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPServer::UnregisterSession(const CppCommon::UUID& id)
{ __builtin_trap() /* STUB: not implemented */; }

void TCPServer::ClearBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPServer::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer
