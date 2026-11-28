/*
This file is part of StormGram Desktop,
a Telegram Desktop fork for the StormGram multi-server client.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/const_string.h"

namespace Branding {

// The name of the product. The full name is used where the application
// is named in prose, the short name where little space is available.
constexpr auto AppName = "StormGram Desktop"_cs;
constexpr auto ShortAppName = "StormGram"_cs;

// The Qt application name and the company the product is published as.
constexpr auto ApplicationName = "StormGramDesktop"_cs;
constexpr auto CompanyName = "StormGram"_cs;

// The identity of the installed application: the desktop entry, the
// D-Bus service and the AppStream metadata all use it.
constexpr auto BundleIdentifier = "org.stormgram.desktop"_cs;
constexpr auto MacOSBundleIdentifier = "com.stormgram.StormGram"_cs;

// The executable, and the macOS bundle built around it.
constexpr auto OutputName = "StormGram"_cs;

// The custom URL scheme the application answers to.
constexpr auto UrlScheme = "srv"_cs;

// Where the project lives.
constexpr auto Homepage = "https://stormgram.app"_cs;

// The domain the client fetches the server list and the update
// manifest from.
constexpr auto RemoteDomain = "https://stormgram.app"_cs;

} // namespace Branding
