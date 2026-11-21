/*
This file is part of JavaGram Desktop,
a Telegram Desktop fork for the JavaGram multi-server client.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/const_string.h"

namespace Branding {

// The name of the product. The full name is used where the application
// is named in prose, the short name where little space is available.
constexpr auto AppName = "JavaGram Desktop"_cs;
constexpr auto ShortAppName = "JavaGram"_cs;

// The Qt application name and the company the product is published as.
constexpr auto ApplicationName = "JavaGramDesktop"_cs;
constexpr auto CompanyName = "JavaGram"_cs;

// The identity of the installed application: the desktop entry, the
// D-Bus service and the AppStream metadata all use it.
constexpr auto BundleIdentifier = "org.javagram.desktop"_cs;
constexpr auto MacOSBundleIdentifier = "com.javagram.JavaGram"_cs;

// The executable, and the macOS bundle built around it.
constexpr auto OutputName = "JavaGram"_cs;

// The custom URL scheme the application answers to.
constexpr auto UrlScheme = "srv"_cs;

// Where the project lives.
constexpr auto Homepage = "https://jg.cc"_cs;

// The domain the client fetches the server list and the update
// manifest from.
constexpr auto RemoteDomain = "https://jg.cc"_cs;

} // namespace Branding
