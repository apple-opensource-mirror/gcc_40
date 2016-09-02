// 2004-02-24  Paolo Carlini  <pcarlini@suse.de>

// Copyright (C) 2004 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

// 27.4.3 template class fpos

#include <ios>
#include <testsuite_hooks.h>

// libstdc++/14252
void test01()
{
  bool test __attribute__((unused)) = true;

  std::streamoff off01 = 10;
  std::streamoff off02 = 2;
  std::streamoff off03 = 2004;
  std::streamoff off04 = 1;

  VERIFY( off01++ == 10 );
  VERIFY( off01 == 11 );
  
  VERIFY( ++off02 == 3 );
  VERIFY( off02 == 3 );

  VERIFY( off03-- == 2004 );
  VERIFY( off03 == 2003 );

  VERIFY( --off04 == 0 );
  VERIFY( off04 == 0 );
} 

int main() 
{
  test01();
  return 0;
}
