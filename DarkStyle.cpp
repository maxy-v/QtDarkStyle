#include "DarkStyle.h"
#include <QStyleFactory>
#include <QPalette>

void DarkStyle::apply()
{
	qApp->setStyle(QStyleFactory::create("Fusion"));

	constexpr quint32 regular_text     = 0xFFFFFF;
	constexpr quint32 disabled_text    = 0xAAAAAA;
	constexpr quint32 bright_text      = 0x2A82DA;
	constexpr quint32 highlighted_text = 0x101010;
	constexpr quint32 regular_bg       = 0x2D2D32;
	constexpr quint32 dark_bg          = 0x2D2D32;

	QPalette palette;
	palette.setColor(QPalette::All     , QPalette::Window         , regular_bg);
	palette.setColor(QPalette::All     , QPalette::WindowText     , regular_text);
	palette.setColor(QPalette::All     , QPalette::Base           , dark_bg);
	palette.setColor(QPalette::All     , QPalette::AlternateBase  , regular_bg);
	palette.setColor(QPalette::All     , QPalette::ToolTipBase    , regular_text);
	palette.setColor(QPalette::All     , QPalette::ToolTipText    , regular_text);
	palette.setColor(QPalette::All     , QPalette::Text           , regular_text);
	palette.setColor(QPalette::All     , QPalette::Button         , regular_bg);
	palette.setColor(QPalette::All     , QPalette::ButtonText     , regular_text);
	palette.setColor(QPalette::Disabled, QPalette::ButtonText     , disabled_text);
	palette.setColor(QPalette::All     , QPalette::BrightText     , bright_text);
	palette.setColor(QPalette::All     , QPalette::Link           , bright_text);
	palette.setColor(QPalette::All     , QPalette::Highlight      , bright_text);
	palette.setColor(QPalette::All     , QPalette::HighlightedText, regular_bg);
	
	qApp->setPalette(palette);
}
