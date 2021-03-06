/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company.  For licensing terms and
** conditions see http://www.qt.io/terms-conditions.  For further information
** use the contact form at http://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
****************************************************************************/

#ifndef IPLUGIN_H
#define IPLUGIN_H

#include <QObject>

#define QMLDESIGNER_PLUGIN_INTERFACE "com.Digia.QmlDesigner.IPlugin.v10"

namespace QmlDesigner {

// QmlDesigner "base" plugin with initialization function in which
// it can retriece the core via its static accessor and do magic.

class IPlugin
{
public:
    virtual ~IPlugin() {}

    virtual bool isInitialized() const = 0;

    virtual bool initialize(QString *errorMessage) = 0;
};

} // namespace QmlDesigner

QT_BEGIN_NAMESPACE
Q_DECLARE_INTERFACE(QmlDesigner::IPlugin, QMLDESIGNER_PLUGIN_INTERFACE)
QT_END_NAMESPACE

#endif // IPLUGIN_H
