//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2020 MuseScore BVBA and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================
#include "systemmodule.h"

#include "modularity/ioc.h"
#include "internal/fsoperations.h"

using namespace mu::framework;

std::string SystemModule::moduleName() const
{
    return "system";
}

void SystemModule::registerExports()
{
    framework::ioc()->registerExport<IFsOperations>(moduleName(), new FsOperations());
}
