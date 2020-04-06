/*
 * Copyright (C) 2019-2020 Ashar Khan <ashar786khan@gmail.com>
 *
 * This file is part of CP Editor.
 *
 * CP Editor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * I will not be responsible if CP Editor behaves in unexpected way and
 * causes your ratings to go down and or lose any important contest.
 *
 * Believe Software is "Software" and it isn't immune to bugs.
 *
 */

/*
 * This file is auto generated by tools/genSettings.sh
 */

#ifndef SETTINGSHELPER_HPP
#define SETTINGSHELPER_HPP

#include "Core/Settings.hpp"

namespace SettingsHelper
{
inline void setTabWidth(int value)
{
    SettingsManager::set("Tab Width", value);
}
inline int getTabWidth()
{
    return SettingsManager::get("Tab Width").value<int>();
}
inline void setTimeLimit(int value)
{
    SettingsManager::set("Time Limit", value);
}
inline int getTimeLimit()
{
    return SettingsManager::get("Time Limit").value<int>();
}
inline void setGeometry(QRect value)
{
    SettingsManager::set("Geometry", value);
}
inline QRect getGeometry()
{
    return SettingsManager::get("Geometry").value<QRect>();
}
inline void setFont(QFont value)
{
    SettingsManager::set("Font", value);
}
inline QFont getFont()
{
    return SettingsManager::get("Font").value<QFont>();
}
inline void setDefaultLanguage(QString value)
{
    SettingsManager::set("Default Language", value);
}
inline QString getDefaultLanguage()
{
    return SettingsManager::get("Default Language").value<QString>();
}
inline void setClangFormatPath(QString value)
{
    SettingsManager::set("Clang Format/Path", value);
}
inline QString getClangFormatPath()
{
    return SettingsManager::get("Clang Format/Path").value<QString>();
}
inline void setClangFormatStyle(QString value)
{
    SettingsManager::set("Clang Format/Style", value);
}
inline QString getClangFormatStyle()
{
    return SettingsManager::get("Clang Format/Style").value<QString>();
}
inline void setCppTemplatePath(QString value)
{
    SettingsManager::set("C++/Template Path", value);
}
inline QString getCppTemplatePath()
{
    return SettingsManager::get("C++/Template Path").value<QString>();
}
inline void setCppCompileCommand(QString value)
{
    SettingsManager::set("C++/Compile Command", value);
}
inline QString getCppCompileCommand()
{
    return SettingsManager::get("C++/Compile Command").value<QString>();
}
inline void setCppRunArguments(QString value)
{
    SettingsManager::set("C++/Run Arguments", value);
}
inline QString getCppRunArguments()
{
    return SettingsManager::get("C++/Run Arguments").value<QString>();
}
inline void setJavaTemplatePath(QString value)
{
    SettingsManager::set("Java/Template Path", value);
}
inline QString getJavaTemplatePath()
{
    return SettingsManager::get("Java/Template Path").value<QString>();
}
inline void setJavaCompileCommand(QString value)
{
    SettingsManager::set("Java/Compile Command", value);
}
inline QString getJavaCompileCommand()
{
    return SettingsManager::get("Java/Compile Command").value<QString>();
}
inline void setJavaRunArguments(QString value)
{
    SettingsManager::set("Java/Run Arguments", value);
}
inline QString getJavaRunArguments()
{
    return SettingsManager::get("Java/Run Arguments").value<QString>();
}
inline void setJavaRunCommand(QString value)
{
    SettingsManager::set("Java/Run Command", value);
}
inline QString getJavaRunCommand()
{
    return SettingsManager::get("Java/Run Command").value<QString>();
}
inline void setPythonTemplatePath(QString value)
{
    SettingsManager::set("Python/Template Path", value);
}
inline QString getPythonTemplatePath()
{
    return SettingsManager::get("Python/Template Path").value<QString>();
}
inline void setPythonRunArguments(QString value)
{
    SettingsManager::set("Python/Run Arguments", value);
}
inline QString getPythonRunArguments()
{
    return SettingsManager::get("Python/Run Arguments").value<QString>();
}
inline void setPythonRunCommand(QString value)
{
    SettingsManager::set("Python/Run Command", value);
}
inline QString getPythonRunCommand()
{
    return SettingsManager::get("Python/Run Command").value<QString>();
}
inline void setEditorTheme(QString value)
{
    SettingsManager::set("Editor Theme", value);
}
inline QString getEditorTheme()
{
    return SettingsManager::get("Editor Theme").value<QString>();
}
inline void setAutoCompleteParentheses(bool value)
{
    SettingsManager::set("Auto Complete Parentheses", value);
}
inline bool isAutoCompleteParentheses()
{
    return SettingsManager::get("Auto Complete Parentheses").value<bool>();
}
inline void setAutoRemoveParentheses(bool value)
{
    SettingsManager::set("Auto Remove Parentheses", value);
}
inline bool isAutoRemoveParentheses()
{
    return SettingsManager::get("Auto Remove Parentheses").value<bool>();
}
inline void setAutoIndent(bool value)
{
    SettingsManager::set("Auto Indent", value);
}
inline bool isAutoIndent()
{
    return SettingsManager::get("Auto Indent").value<bool>();
}
inline void setAutoSave(bool value)
{
    SettingsManager::set("Auto Save", value);
}
inline bool isAutoSave()
{
    return SettingsManager::get("Auto Save").value<bool>();
}
inline void setWrapText(bool value)
{
    SettingsManager::set("Wrap Text", value);
}
inline bool isWrapText()
{
    return SettingsManager::get("Wrap Text").value<bool>();
}
inline void setBeta(bool value)
{
    SettingsManager::set("Beta", value);
}
inline bool isBeta()
{
    return SettingsManager::get("Beta").value<bool>();
}
inline void setReplaceTabs(bool value)
{
    SettingsManager::set("Replace Tabs", value);
}
inline bool isReplaceTabs()
{
    return SettingsManager::get("Replace Tabs").value<bool>();
}
inline void setSaveTests(bool value)
{
    SettingsManager::set("Save Tests", value);
}
inline bool isSaveTests()
{
    return SettingsManager::get("Save Tests").value<bool>();
}
inline void setMaximizedWindow(bool value)
{
    SettingsManager::set("Maximized Window", value);
}
inline bool isMaximizedWindow()
{
    return SettingsManager::get("Maximized Window").value<bool>();
}
inline void setCheckUpdate(bool value)
{
    SettingsManager::set("Check Update", value);
}
inline bool isCheckUpdate()
{
    return SettingsManager::get("Check Update").value<bool>();
}
inline void setAutoFormat(bool value)
{
    SettingsManager::set("Auto Format", value);
}
inline bool isAutoFormat()
{
    return SettingsManager::get("Auto Format").value<bool>();
}
inline void setTransparency(int value)
{
    SettingsManager::set("Transparency", value);
}
inline int getTransparency()
{
    return SettingsManager::get("Transparency").value<int>();
}
inline void setViewMode(QString value)
{
    SettingsManager::set("View Mode", value);
}
inline QString getViewMode()
{
    return SettingsManager::get("View Mode").value<QString>();
}
inline void setSplitterSize(QByteArray value)
{
    SettingsManager::set("Splitter Size", value);
}
inline QByteArray getSplitterSize()
{
    return SettingsManager::get("Splitter Size").value<QByteArray>();
}
inline void setRightSplitterSize(QByteArray value)
{
    SettingsManager::set("Right Splitter Size", value);
}
inline QByteArray getRightSplitterSize()
{
    return SettingsManager::get("Right Splitter Size").value<QByteArray>();
}
inline void setCompetitiveCompanionEnable(bool value)
{
    SettingsManager::set("Competitive Companion/Enable", value);
}
inline bool isCompetitiveCompanionEnable()
{
    return SettingsManager::get("Competitive Companion/Enable").value<bool>();
}
inline void setCompetitiveCompanionConnectionPort(int value)
{
    SettingsManager::set("Competitive Companion/Connection Port", value);
}
inline int getCompetitiveCompanionConnectionPort()
{
    return SettingsManager::get("Competitive Companion/Connection Port").value<int>();
}
inline void setCompetitiveCompanionOpenNewTab(bool value)
{
    SettingsManager::set("Competitive Companion/Open New Tab", value);
}
inline bool isCompetitiveCompanionOpenNewTab()
{
    return SettingsManager::get("Competitive Companion/Open New Tab").value<bool>();
}
inline void setHotkeyEnable(bool value)
{
    SettingsManager::set("Hotkey/Enable", value);
}
inline bool isHotkeyEnable()
{
    return SettingsManager::get("Hotkey/Enable").value<bool>();
}
inline void setHotkeyFormat(QString value)
{
    SettingsManager::set("Hotkey/Format", value);
}
inline QString getHotkeyFormat()
{
    return SettingsManager::get("Hotkey/Format").value<QString>();
}
inline void setHotkeyKill(QString value)
{
    SettingsManager::set("Hotkey/Kill", value);
}
inline QString getHotkeyKill()
{
    return SettingsManager::get("Hotkey/Kill").value<QString>();
}
inline void setHotkeyCompileRun(QString value)
{
    SettingsManager::set("Hotkey/Compile Run", value);
}
inline QString getHotkeyCompileRun()
{
    return SettingsManager::get("Hotkey/Compile Run").value<QString>();
}
inline void setHotkeyRun(QString value)
{
    SettingsManager::set("Hotkey/Run", value);
}
inline QString getHotkeyRun()
{
    return SettingsManager::get("Hotkey/Run").value<QString>();
}
inline void setHotkeyCompile(QString value)
{
    SettingsManager::set("Hotkey/Compile", value);
}
inline QString getHotkeyCompile()
{
    return SettingsManager::get("Hotkey/Compile").value<QString>();
}
inline void setHotkeyChangeViewMode(QString value)
{
    SettingsManager::set("Hotkey/Change View Mode", value);
}
inline QString getHotkeyChangeViewMode()
{
    return SettingsManager::get("Hotkey/Change View Mode").value<QString>();
}
inline void setHotkeySnippets(QString value)
{
    SettingsManager::set("Hotkey/Snippets", value);
}
inline QString getHotkeySnippets()
{
    return SettingsManager::get("Hotkey/Snippets").value<QString>();
}
inline void setHotExitEnable(bool value)
{
    SettingsManager::set("Hot Exit/Enable", value);
}
inline bool isHotExitEnable()
{
    return SettingsManager::get("Hot Exit/Enable").value<bool>();
}
inline void setHotExitTabCount(int value)
{
    SettingsManager::set("Hot Exit/Tab Count", value);
}
inline int getHotExitTabCount()
{
    return SettingsManager::get("Hot Exit/Tab Count").value<int>();
}
inline void setHotExitCurrentIndex(int value)
{
    SettingsManager::set("Hot Exit/Current Index", value);
}
inline int getHotExitCurrentIndex()
{
    return SettingsManager::get("Hot Exit/Current Index").value<int>();
}
inline void setHotExitLoadFromFile(bool value)
{
    SettingsManager::set("Hot Exit/Load From File", value);
}
inline bool isHotExitLoadFromFile()
{
    return SettingsManager::get("Hot Exit/Load From File").value<bool>();
}
inline void setCFPath(QString value)
{
    SettingsManager::set("CF/Path", value);
}
inline QString getCFPath()
{
    return SettingsManager::get("CF/Path").value<QString>();
}
inline void setSavePath(QString value)
{
    SettingsManager::set("Save Path", value);
}
inline QString getSavePath()
{
    return SettingsManager::get("Save Path").value<QString>();
}
inline void setCompileAndRunOnly(bool value)
{
    SettingsManager::set("Compile And Run Only", value);
}
inline bool isCompileAndRunOnly()
{
    return SettingsManager::get("Compile And Run Only").value<bool>();
}
inline void setDisplayEOLNInDiff(bool value)
{
    SettingsManager::set("Display EOLN In Diff", value);
}
inline bool isDisplayEOLNInDiff()
{
    return SettingsManager::get("Display EOLN In Diff").value<bool>();
}
inline void setSaveFaster(bool value)
{
    SettingsManager::set("Save Faster", value);
}
inline bool isSaveFaster()
{
    return SettingsManager::get("Save Faster").value<bool>();
}
} // namespace SettingsHelper

#endif // SETTINGSHELPER_HPP