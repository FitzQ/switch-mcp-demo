# Switch MCP Server Demo

A demonstration of a Model Context Protocol (MCP) server implementation for Nintendo Switch homebrew.

## Overview

This project demonstrates how to implement a basic MCP server that can run on Nintendo Switch homebrew environment. The Model Context Protocol allows language models to interact with tools and resources in a standardized way.

## Features

- Basic MCP protocol implementation
- Simple tool calling demonstration
- Designed for Nintendo Switch homebrew environment
- Lightweight and efficient for embedded systems
- Configuration file support

## Requirements

- Nintendo Switch with custom firmware (Atmosphere recommended)
- Development environment with libnx
- devkitPro with switch support
- jsoncpp library for JSON handling

## Building

1. Ensure you have devkitPro installed with switch support:
   ```bash
   sudo (dkp-)pacman -S switch-dev switch-portlibs
   ```

2. Install the jsoncpp library:
   ```bash
   sudo (dkp-)pacman -S switch-jsoncpp
   ```

3. Clone this repository:
   ```bash
   git clone https://github.com/FitzQ/switch-mcp-demo.git
   cd switch-mcp-demo
   ```

4. Build the project:
   ```bash
   make
   ```

5. The resulting .nro file can be copied to your Switch SD card at:
   ```
   /switch/switch-mcp-demo/switch-mcp-demo.nro
   ```

## Usage

1. Launch the homebrew application from the Switch homebrew menu
2. The application will initialize the MCP server
3. Press A to start the MCP server
4. Press + to exit the application

## Project Structure

- `src/main.cpp` - Main application entry point
- `src/mcp_server.h` - MCP server header file
- `src/mcp_server.cpp` - MCP server implementation
- `data/mcp_config.json` - MCP configuration file
- `include/json/json.h` - JSON library header (provided by switch-jsoncpp)
- `Makefile` - Build configuration

## Implementation Details

This demo implements a simplified version of the MCP protocol with:
- Tool calling functionality
- Basic JSON message handling
- Switch-specific input handling
- Configuration file support

The implementation is designed to be lightweight and efficient for the Switch's hardware constraints.

## Future Enhancements

- Network connectivity for remote MCP clients
- File system access tools
- More comprehensive protocol implementation
- Integration with actual LLM services
- Support for resources and prompts
- Persistent configuration storage

## License

MIT