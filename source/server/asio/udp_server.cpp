/*!
    \file udp_server.cpp
    \brief UDP server implementation
    \author Ivan Shynkarenka
    \date 22.12.2016
    \copyright MIT License
*/

#include "server/asio/udp_server.h"

namespace CppServer {
namespace Asio {

UDPServer::UDPServer(const std::shared_ptr<Service>& service, int port, InternetProtocol protocol)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _port(port),
      _socket(*_io_context),
      _started(false),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _datagrams_sent(0),
      _datagrams_received(0),
      _receiving(false),
      _sending(false),
      _option_reuse_address(false),
      _option_reuse_port(false)
{ __builtin_trap() /* STUB: not implemented */; }

UDPServer::UDPServer(const std::shared_ptr<Service>& service, const std::string& address, int port)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _port(port),
      _socket(*_io_context),
      _started(false),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _datagrams_sent(0),
      _datagrams_received(0),
      _receiving(false),
      _sending(false),
      _option_reuse_address(false),
      _option_reuse_port(false)
{ __builtin_trap() /* STUB: not implemented */; }

UDPServer::UDPServer(const std::shared_ptr<Service>& service, const asio::ip::udp::endpoint& endpoint)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(endpoint.address().to_string()),
      _port(endpoint.port()),
      _endpoint(endpoint),
      _socket(*_io_context),
      _started(false),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _datagrams_sent(0),
      _datagrams_received(0),
      _receiving(false),
      _sending(false)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPServer::option_receive_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPServer::option_send_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

void UDPServer::SetupReceiveBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void UDPServer::SetupSendBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPServer::Start()
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPServer::Start(const std::string& multicast_address, int multicast_port)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPServer::Start(const asio::ip::udp::endpoint& multicast_endpoint)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPServer::Stop()
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPServer::Restart()
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPServer::Multicast(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPServer::Multicast(const void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPServer::MulticastAsync(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPServer::Send(const asio::ip::udp::endpoint& endpoint, const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPServer::Send(const asio::ip::udp::endpoint& endpoint, const void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPServer::SendAsync(const asio::ip::udp::endpoint& endpoint, const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPServer::Receive(asio::ip::udp::endpoint& endpoint, void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::string UDPServer::Receive(asio::ip::udp::endpoint& endpoint, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPServer::Receive(asio::ip::udp::endpoint& endpoint, void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::string UDPServer::Receive(asio::ip::udp::endpoint& endpoint, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

void UDPServer::ReceiveAsync()
{ __builtin_trap() /* STUB: not implemented */; }

void UDPServer::TryReceive()
{ __builtin_trap() /* STUB: not implemented */; }

void UDPServer::ClearBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

void UDPServer::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer
