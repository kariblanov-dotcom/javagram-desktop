/*
This file is part of JavaGram Desktop, a Telegram Desktop fork for the
JavaGram multi-server client.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/basic_types.h"
#include "base/object_ptr.h"
#include "javagram/javagram_servers.h"
#include "ui/effects/animations.h"
#include "ui/widgets/buttons.h"

#include <QtCore/QRect>
#include <QtGui/QImage>

#include <optional>

namespace Ui {
class RpWidget;
class FlatLabel;
class RoundButton;
} // namespace Ui

namespace JavaGram {

// The picker row of the server list and of the sign-in screen: the logo, the
// name and the endpoint, an optional online status with the latency, and an
// optional Join button.
class ServerRow final : public Ui::RippleButton {
public:
	ServerRow(
		QWidget *parent,
		Server server,
		Fn<void()> details,
		Fn<void()> join = nullptr,
		bool checkStatus = true);

private:
	void setStatus(bool online, int latencyMs);
	void updateLayout();
	void paintEvent(QPaintEvent *e) override;
	void resizeEvent(QResizeEvent *e) override;
	[[nodiscard]] QImage prepareRippleMask() const override;

	const Server _server;
	const Fn<void()> _details;
	const Fn<void()> _join;
	const bool _checkStatus = true;

	object_ptr<Ui::RpWidget> _logo;
	object_ptr<Ui::FlatLabel> _name;
	object_ptr<Ui::FlatLabel> _endpoint;
	object_ptr<Ui::FlatLabel> _status;
	object_ptr<Ui::FlatLabel> _latency;
	object_ptr<Ui::RoundButton> _joinButton;

	std::optional<bool> _online;
	Ui::Animations::Basic _checkingAnimation;
	QRect _dotRect;
};

} // namespace JavaGram
