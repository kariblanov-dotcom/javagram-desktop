/*
This file is part of JavaGram Desktop,
a Telegram Desktop fork for the JavaGram multi-server client.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#include "core/javagram_remote.h"

#include "core/branding.h"

namespace JavaGram {

QString RemoteDomain() {
	return Branding::RemoteDomain.utf16();
}

QString ServersUrl() {
	return RemoteDomain() + u"/servers.json"_q;
}

QString UpdateManifestUrl() {
	return QString();
}

QString ServersFallbackUrl() {
	// The same file from the branch the Pages site serves, so that a broken
	// or not yet built site does not leave the client without a server list.
	return QString();
}

} // namespace JavaGram
