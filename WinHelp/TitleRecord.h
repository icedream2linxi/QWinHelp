/* Title record class definition.

   Copyright (C) 2010 rel-eng

   This file is part of QWinHelp.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef TITLERECORD_H_
#define TITLERECORD_H_

#include <QtGlobal>
#include <QTextCodec>
#include <QFile>
#include <QString>

class TitleRecord
{
private:
    QString title;
public:
    TitleRecord();
    TitleRecord(const QString &title);
    TitleRecord(QFile &file, qint64 off, QTextCodec *codec);
    TitleRecord(const TitleRecord& rhs);
    virtual ~TitleRecord();
    TitleRecord & operator=(const TitleRecord & rhs);
    QString getTitle() const;
};

#endif /* TITLERECORD_H_ */