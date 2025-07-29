#ifndef MCP_SERVER_H
#define MCP_SERVER_H

#include <string>
#include <json/json.h>

class MCPServer {
public:
    MCPServer();
    ~MCPServer();
    
    // Start the MCP server
    bool start();
    
    // Stop the MCP server
    void stop();
    
    // Handle a tool call request
    Json::Value handleToolCall(const std::string& toolName, const std::string& params);
    
    // List available tools
    Json::Value listTools();
    
    // Get resource
    Json::Value getResource(const std::string& uri);
    
    // Process incoming messages
    void processMessages();
    
private:
    // Send a message to the MCP client
    bool sendMessage(const Json::Value& message);
    
    // Receive a message from the MCP client
    Json::Value receiveMessage();
    
    // Generate a unique request ID
    std::string generateRequestId();
    
    // Server state
    bool isRunning;
    
    // Registered tools
    void registerTools();
};

#endif // MCP_SERVER_H