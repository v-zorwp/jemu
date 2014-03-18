/*
Copyright (C) 2013 v-zorwp

This program is free software; you can redistribute it and/or 
modify it under the terms of the GNU General Public License as 
published by the Free Software Foundation; either version 2 of 
the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, 
but WITHOUT ANY WARRANTY; without even the implied warranty of 
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include<fstream>
#include<cstdlib>
#include<cstring>

#include "sys.h"

using namespace std;

int System::filein(string fn)
{
	fstream *ifs = new fstream(fn.c_str());

	char buf[2048];
	int n;
	
	while (1) {

		if (ifs->peek() == EOF) break; 

		memset(buf, 0, 2048);
		*ifs >> buf;
		
		n += strlen(buf);
		_filecontents += buf;	
	};

	if (n > strlen(_filecontents.c_str())) return ERRLEN;

	return 1;
}
	
int System::mainloop()
{

	
	switch (1) { };

}


