/*
Copyright (c) 2010, Tom Schoonjans
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * The names of the contributors may not be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY Tom Schoonjans ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL Tom Schoonjans BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#include <math.h>
#include "splint.h"
#include "xrayglob.h"
#include "xraylib.h"



float ComptonProfile(int Z, float pz) {
	double q;

	if (Z < 1 || Z > ZMAX || NShells_ComptonProfiles[Z] < 0) {
		ErrorExit("Z out of range in function ComptonProfile");
		return 0;
	}  

	if (pz < 0.0) {
		ErrorExit("pz < 0 in function ComptonProfile");
		return 0;
	}

	splintd(pz_ComptonProfiles[Z]-1, Total_ComptonProfiles[Z]-1, Total_ComptonProfiles2[Z]-1,Npz_ComptonProfiles[Z],pz,&q);

	return (float) q;
}

/*
 * ComptonProfile_Partial needs to be revised. The included database relies on atomic notation instead of X-ray notation
 * which has consequences for the shell parameter
 *
float ComptonProfile_Partial(int Z, float pz, int shell) {
	double q;

	if (Z < 1 || Z > ZMAX || NShells_ComptonProfiles[Z] < 0) {
		ErrorExit("Z out of range in function ComptonProfile_Partial");
		return 0;
	}  
	if (shell >= NShells_ComptonProfiles[Z]) {
		ErrorExit("Shell out of range in function ComptonProfile_Partial");
		return 0;
	}

	splintd(pz_ComptonProfiles[Z]-1, Partial_ComptonProfiles[Z][shell]-1, Partial_ComptonProfiles2[Z]-1,Npz_ComptonProfiles[Z],pz,&q);

	return (float) q;
}
*/

