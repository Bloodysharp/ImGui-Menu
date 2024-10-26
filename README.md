Include yourself SDK and FreeType sources

ImGui menu use D3D11 to create GUI application with ImGui or for games that does not use DirectX and games which ImGui block the render.

You can easily use it as a DLL for external in an internal cheat or build GUI application with ImGui. Everything is setup you just need to choose between DLL or EXE. ImGui Standalone create his own window, if you use it as a DLL you main process don't need to use DirectX.

This project works in x86 and DLL/EXE.

🚀 Getting Started
Note
Make sure that DXSDK_DIR is declared in your environment variables.

To see your environment variables :

Settings --> System --> About --> System Advanced Settings --> Environment Variables

Visual Studio :
Open the solution file (.sln).
Build the project in Release (x86)
Every configuration in x86 (Debug and Realese) are already configured with librairies and includes.

Everything is setup, you just need to choose between DLL or EXE.

Warning
If you have any linking error when compiling make sure that you have correctly install DirectX SDK.

🧪 Demonstration :
GUI Application (EXE - x86)


https://github.com/user-attachments/assets/7cb85929-0472-4b07-9cb4-46048e73981e
