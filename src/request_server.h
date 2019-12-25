#pragma once

//
// This server periodically queries the server that holds a list of available
// public servers and updates that list into the SearchServer and ForwardServer.
//

class ForwardServer;
class Server;
class SearchServer;

class RequestServer
{
  public:

    RequestServer( ForwardServer &, Server &, SearchServer & );
    ~RequestServer( );

    void run( );

  protected:

  private:

    ForwardServer &m_ForwardServer;
    Server        &m_PacketServer;
    SearchServer  &m_SearchServer;
};