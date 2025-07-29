#include <switch.h>
#include <iostream>
#include "mcp_client.h"

int main(int argc, char* argv[]) {
    // Initialize the Switch console
    consoleInit(NULL);
    
    // Print welcome message
    std::cout << "Switch MCP Demo" << std::endl;
    std::cout << "Initializing MCP client..." << std::endl;
    
    // Initialize MCP client
    MCPClient client;
    
    // Main loop
    while(appletMainLoop()) {
        // Scan for user input
        hidScanInput();
        
        // Get the input state
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
        
        // Your application code here
        if (kDown & KEY_PLUS) {
            break; // Break to return to hbmenu
        }
        
        if (kDown & KEY_A) {
            std::cout << "A button pressed - calling MCP tool" << std::endl;
            client.callTool("demo_tool", "{}");
        }
        
        // Update the console
        consoleUpdate(NULL);
    }
    
    // Cleanup
    consoleExit(NULL);
    return 0;
}