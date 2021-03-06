/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Application Update..
 *
 * The Initial Developer of the Original Code is
 * Brad Lassey <blassey@mozilla.com>.
 *
 * Portions created by the Initial Developer are Copyright (C) 2009
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#ifndef UPDATER_WINCE_H
#define UPDATER_WINCE_H

#include "environment.h"

#define _S_IFDIR    0040000 /* stat, is a directory */
#define _S_IFREG    0100000 /* stat, is a normal file */
#define _S_IREAD    0000400 /* stat, can read */
#define _S_IWRITE   0000200 /* stat, can write */
#define _S_IEXEC    0000100

#define _putenv putenv

struct stat {
  unsigned short st_mode;
  size_t st_size;
  time_t st_ctime;
  time_t st_atime;
  time_t st_mtime;
};
extern int errno;
int _wchmod(const WCHAR* path, unsigned int mode);
int fstat(FILE* handle, struct stat* buff);
int stat(const char* path, struct stat* buf);
int _wstat(const WCHAR* path, struct stat* buf);
int _wmkdir(const WCHAR* path);
int access(const char* path, int amode);
int _waccess(const WCHAR* path, int amode);
int _wremove(const WCHAR* wpath);

#endif
