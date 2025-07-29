#ifndef MCP_CLIENT_H
#define MCP_CLIENT_H

#include <string>
#include <json/json.h>

class MCPClient {
public:
    MCPClient();
    ~MCPClient();
    
    // Initialize the MCP client
    bool initialize();
    
    // Call a tool with given name and parameters
    Json::Value callTool(const std::string& toolName, const std::string& params);
    
    // List available tools
    Json::Value listTools();
    
    // Get resource
    Json::Value getResource(const std::string& uri);
    
private:
    // Send a message to the MCP server
    bool sendMessage(const Json::Value& message);
    
    // Receive a message from the MCP server
    Json::Value receiveMessage();
    
    // Generate a unique request ID
    std::string generateRequestId();
    
    // Connection state
    bool isConnected;
};

#endif // MCP_CLIENT_H