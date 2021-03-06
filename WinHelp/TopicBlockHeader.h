/* Topic block header class definition.

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

#ifndef TOPICBLOCKHEADER_H_
#define TOPICBLOCKHEADER_H_

#include <QtGlobal>
#include <QFile>

#include "TopicPos.h"

class TopicBlockHeader
{
private:
    /** Points to last topic link in previous block or -1L. */
    TopicPos lastTopicLink;
    /** Points to first topic link in this block */
    TopicPos firstTopicLink;
    /** Points to topic link of last topic header or 0L, -1L */
    TopicPos lastTopicHeader;
public:
    static const qint64 size = 12;
    TopicBlockHeader();
    TopicBlockHeader(QFile &file, qint64 off, qint64 decompressSize);
    TopicBlockHeader(const TopicBlockHeader& rhs);
    virtual ~TopicBlockHeader();
    TopicBlockHeader & operator=(const TopicBlockHeader & rhs);
    TopicPos getLastTopicLink() const;
    TopicPos getFirstTopicLink() const;
    TopicPos getLastTopicHeader() const;
};

#endif /* TOPICBLOCKHEADER_H_ */
