#include "include/webview_universal/webview_universal_plugin.h"

#include "message_channel_plugin.h"
#include "web_view_window_plugin.h"

void DesktopWebviewWindowPluginRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  WebviewWindowPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
  RegisterClientMessageChannelPlugin(registrar);
}
