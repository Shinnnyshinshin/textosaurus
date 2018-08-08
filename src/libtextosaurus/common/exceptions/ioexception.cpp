// This file is distributed under GNU GPLv3 license. For full license text, see <project-git-repository-root-folder>/LICENSE.md.

#include "common/exceptions/ioexception.h"

IOException::IOException(QString message) : ApplicationException(std::move(message)) {}
