/*
Copyright (c) 2013, Tom Schoonjans
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * The names of the contributors may not be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY Tom Schoonjans ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL Tom Schoonjans BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
 * This file was automatically generated by nist-compounds.pl
 * Modify at your own risk...
 */



#include "xraylib-parser.h"


#ifndef XRAYLIB_NIST_COMPOUNDS_H
#define XRAYLIB_NIST_COMPOUNDS_H


struct compoundDataNIST {
	char *name;
        int nElements;
        int *Elements;
        double *massFractions;
        double density;
};


/*
 *
 * Returns a pointer to a newly allocated struct containing
 * the requested compound on success, or NULL when the compound
 * was not found in the list. The compound is requested by providing
 * its name as argument to the function. For a list of available names,
 * use GetCompoundDataNISTList.
 *
 * The returned struct should be freed after usage with FreeCompoundDataNIST.
 *
 */
struct compoundDataNIST *GetCompoundDataNISTByName(const char compoundString[]);

/*
 *
 * Returns a pointer to a newly allocated struct containing
 * the requested compound on success, or NULL when the compound
 * was not found in the list. The compound is requested by providing
 * its index in the internal table to the function. Typically this would
 * be done using the NIST_COMPOUND_* macros in this file.
 *
 * The returned struct should be freed after usage with FreeCompoundDataNIST.
 *
 */
struct compoundDataNIST *GetCompoundDataNISTByIndex(int compoundIndex);

/*
 *
 * Returns a NULL-terminated array of strings of all the compounds in the
 * internal table. If nCompounds is not NULL, it shall receive the number 
 * of compounds.
 *
 * The returned array should be freed firstly by using xrlFree to deallocate
 * all individual strings, and subsequently by using xrlFree to deallocate the array
 *
 */
char **GetCompoundDataNISTList(int *nCompounds);

/*
 *
 * Deallocates a pointer to a compoundDataNIST struct completely.
 * It is recommended to set the pointer to NULL after calling this function.
 *
 */
void FreeCompoundDataNIST(struct compoundDataNIST *compoundData);

#define NIST_COMPOUND_A_150_TISSUE_EQUIVALENT_PLASTIC 0
#define NIST_COMPOUND_ACETONE 1
#define NIST_COMPOUND_ACETYLENE 2
#define NIST_COMPOUND_ADENINE 3
#define NIST_COMPOUND_ADIPOSE_TISSUE_ICRP 4
#define NIST_COMPOUND_AIR_DRY_NEAR_SEA_LEVEL 5
#define NIST_COMPOUND_ALANINE 6
#define NIST_COMPOUND_ALUMINUM_OXIDE 7
#define NIST_COMPOUND_AMBER 8
#define NIST_COMPOUND_AMMONIA 9
#define NIST_COMPOUND_ANILINE 10
#define NIST_COMPOUND_ANTHRACENE 11
#define NIST_COMPOUND_B_100_BONE_EQUIVALENT_PLASTIC 12
#define NIST_COMPOUND_BAKELITE 13
#define NIST_COMPOUND_BARIUM_FLUORIDE 14
#define NIST_COMPOUND_BARIUM_SULFATE 15
#define NIST_COMPOUND_BENZENE 16
#define NIST_COMPOUND_BERYLLIUM_OXIDE 17
#define NIST_COMPOUND_BISMUTH_GERMANIUM_OXIDE 18
#define NIST_COMPOUND_BLOOD_ICRP 19
#define NIST_COMPOUND_BONE_COMPACT_ICRU 20
#define NIST_COMPOUND_BONE_CORTICAL_ICRP 21
#define NIST_COMPOUND_BORON_CARBIDE 22
#define NIST_COMPOUND_BORON_OXIDE 23
#define NIST_COMPOUND_BRAIN_ICRP 24
#define NIST_COMPOUND_BUTANE 25
#define NIST_COMPOUND_N_BUTYL_ALCOHOL 26
#define NIST_COMPOUND_C_552_AIR_EQUIVALENT_PLASTIC 27
#define NIST_COMPOUND_CADMIUM_TELLURIDE 28
#define NIST_COMPOUND_CADMIUM_TUNGSTATE 29
#define NIST_COMPOUND_CALCIUM_CARBONATE 30
#define NIST_COMPOUND_CALCIUM_FLUORIDE 31
#define NIST_COMPOUND_CALCIUM_OXIDE 32
#define NIST_COMPOUND_CALCIUM_SULFATE 33
#define NIST_COMPOUND_CALCIUM_TUNGSTATE 34
#define NIST_COMPOUND_CARBON_DIOXIDE 35
#define NIST_COMPOUND_CARBON_TETRACHLORIDE 36
#define NIST_COMPOUND_CELLULOSE_ACETATE_CELLOPHANE 37
#define NIST_COMPOUND_CELLULOSE_ACETATE_BUTYRATE 38
#define NIST_COMPOUND_CELLULOSE_NITRATE 39
#define NIST_COMPOUND_CERIC_SULFATE_DOSIMETER_SOLUTION 40
#define NIST_COMPOUND_CESIUM_FLUORIDE 41
#define NIST_COMPOUND_CESIUM_IODIDE 42
#define NIST_COMPOUND_CHLOROBENZENE 43
#define NIST_COMPOUND_CHLOROFORM 44
#define NIST_COMPOUND_CONCRETE_PORTLAND 45
#define NIST_COMPOUND_CYCLOHEXANE 46
#define NIST_COMPOUND_12_DDIHLOROBENZENE 47
#define NIST_COMPOUND_DICHLORODIETHYL_ETHER 48
#define NIST_COMPOUND_12_DICHLOROETHANE 49
#define NIST_COMPOUND_DIETHYL_ETHER 50
#define NIST_COMPOUND_NN_DIMETHYL_FORMAMIDE 51
#define NIST_COMPOUND_DIMETHYL_SULFOXIDE 52
#define NIST_COMPOUND_ETHANE 53
#define NIST_COMPOUND_ETHYL_ALCOHOL 54
#define NIST_COMPOUND_ETHYL_CELLULOSE 55
#define NIST_COMPOUND_ETHYLENE 56
#define NIST_COMPOUND_EYE_LENS_ICRP 57
#define NIST_COMPOUND_FERRIC_OXIDE 58
#define NIST_COMPOUND_FERROBORIDE 59
#define NIST_COMPOUND_FERROUS_OXIDE 60
#define NIST_COMPOUND_FERROUS_SULFATE_DOSIMETER_SOLUTION 61
#define NIST_COMPOUND_FREON_12 62
#define NIST_COMPOUND_FREON_12B2 63
#define NIST_COMPOUND_FREON_13 64
#define NIST_COMPOUND_FREON_13B1 65
#define NIST_COMPOUND_FREON_13I1 66
#define NIST_COMPOUND_GADOLINIUM_OXYSULFIDE 67
#define NIST_COMPOUND_GALLIUM_ARSENIDE 68
#define NIST_COMPOUND_GEL_IN_PHOTOGRAPHIC_EMULSION 69
#define NIST_COMPOUND_GLASS_PYREX 70
#define NIST_COMPOUND_GLASS_LEAD 71
#define NIST_COMPOUND_GLASS_PLATE 72
#define NIST_COMPOUND_GLUCOSE 73
#define NIST_COMPOUND_GLUTAMINE 74
#define NIST_COMPOUND_GLYCEROL 75
#define NIST_COMPOUND_GUANINE 76
#define NIST_COMPOUND_GYPSUM_PLASTER_OF_PARIS 77
#define NIST_COMPOUND_N_HEPTANE 78
#define NIST_COMPOUND_N_HEXANE 79
#define NIST_COMPOUND_KAPTON_POLYIMIDE_FILM 80
#define NIST_COMPOUND_LANTHANUM_OXYBROMIDE 81
#define NIST_COMPOUND_LANTHANUM_OXYSULFIDE 82
#define NIST_COMPOUND_LEAD_OXIDE 83
#define NIST_COMPOUND_LITHIUM_AMIDE 84
#define NIST_COMPOUND_LITHIUM_CARBONATE 85
#define NIST_COMPOUND_LITHIUM_FLUORIDE 86
#define NIST_COMPOUND_LITHIUM_HYDRIDE 87
#define NIST_COMPOUND_LITHIUM_IODIDE 88
#define NIST_COMPOUND_LITHIUM_OXIDE 89
#define NIST_COMPOUND_LITHIUM_TETRABORATE 90
#define NIST_COMPOUND_LUNG_ICRP 91
#define NIST_COMPOUND_M3_WAX 92
#define NIST_COMPOUND_MAGNESIUM_CARBONATE 93
#define NIST_COMPOUND_MAGNESIUM_FLUORIDE 94
#define NIST_COMPOUND_MAGNESIUM_OXIDE 95
#define NIST_COMPOUND_MAGNESIUM_TETRABORATE 96
#define NIST_COMPOUND_MERCURIC_IODIDE 97
#define NIST_COMPOUND_METHANE 98
#define NIST_COMPOUND_METHANOL 99
#define NIST_COMPOUND_MIX_D_WAX 100
#define NIST_COMPOUND_MS20_TISSUE_SUBSTITUTE 101
#define NIST_COMPOUND_MUSCLE_SKELETAL 102
#define NIST_COMPOUND_MUSCLE_STRIATED 103
#define NIST_COMPOUND_MUSCLE_EQUIVALENT_LIQUID_WITH_SUCROSE 104
#define NIST_COMPOUND_MUSCLE_EQUIVALENT_LIQUID_WITHOUT_SUCROSE 105
#define NIST_COMPOUND_NAPHTHALENE 106
#define NIST_COMPOUND_NITROBENZENE 107
#define NIST_COMPOUND_NITROUS_OXIDE 108
#define NIST_COMPOUND_NYLON_DU_PONT_ELVAMIDE_8062 109
#define NIST_COMPOUND_NYLON_TYPE_6_AND_TYPE_66 110
#define NIST_COMPOUND_NYLON_TYPE_610 111
#define NIST_COMPOUND_NYLON_TYPE_11_RILSAN 112
#define NIST_COMPOUND_OCTANE_LIQUID 113
#define NIST_COMPOUND_PARAFFIN_WAX 114
#define NIST_COMPOUND_N_PENTANE 115
#define NIST_COMPOUND_PHOTOGRAPHIC_EMULSION 116
#define NIST_COMPOUND_PLASTIC_SCINTILLATOR_VINYLTOLUENE_BASED 117
#define NIST_COMPOUND_PLUTONIUM_DIOXIDE 118
#define NIST_COMPOUND_POLYACRYLONITRILE 119
#define NIST_COMPOUND_POLYCARBONATE_MAKROLON_LEXAN 120
#define NIST_COMPOUND_POLYCHLOROSTYRENE 121
#define NIST_COMPOUND_POLYETHYLENE 122
#define NIST_COMPOUND_POLYETHYLENE_TEREPHTHALATE_MYLAR 123
#define NIST_COMPOUND_POLYMETHYL_METHACRALATE_LUCITE_PERSPEX 124
#define NIST_COMPOUND_POLYOXYMETHYLENE 125
#define NIST_COMPOUND_POLYPROPYLENE 126
#define NIST_COMPOUND_POLYSTYRENE 127
#define NIST_COMPOUND_POLYTETRAFLUOROETHYLENE_TEFLON 128
#define NIST_COMPOUND_POLYTRIFLUOROCHLOROETHYLENE 129
#define NIST_COMPOUND_POLYVINYL_ACETATE 130
#define NIST_COMPOUND_POLYVINYL_ALCOHOL 131
#define NIST_COMPOUND_POLYVINYL_BUTYRAL 132
#define NIST_COMPOUND_POLYVINYL_CHLORIDE 133
#define NIST_COMPOUND_POLYVINYLIDENE_CHLORIDE_SARAN 134
#define NIST_COMPOUND_POLYVINYLIDENE_FLUORIDE 135
#define NIST_COMPOUND_POLYVINYL_PYRROLIDONE 136
#define NIST_COMPOUND_POTASSIUM_IODIDE 137
#define NIST_COMPOUND_POTASSIUM_OXIDE 138
#define NIST_COMPOUND_PROPANE 139
#define NIST_COMPOUND_PROPANE_LIQUID 140
#define NIST_COMPOUND_N_PROPYL_ALCOHOL 141
#define NIST_COMPOUND_PYRIDINE 142
#define NIST_COMPOUND_RUBBER_BUTYL 143
#define NIST_COMPOUND_RUBBER_NATURAL 144
#define NIST_COMPOUND_RUBBER_NEOPRENE 145
#define NIST_COMPOUND_SILICON_DIOXIDE 146
#define NIST_COMPOUND_SILVER_BROMIDE 147
#define NIST_COMPOUND_SILVER_CHLORIDE 148
#define NIST_COMPOUND_SILVER_HALIDES_IN_PHOTOGRAPHIC_EMULSION 149
#define NIST_COMPOUND_SILVER_IODIDE 150
#define NIST_COMPOUND_SKIN_ICRP 151
#define NIST_COMPOUND_SODIUM_CARBONATE 152
#define NIST_COMPOUND_SODIUM_IODIDE 153
#define NIST_COMPOUND_SODIUM_MONOXIDE 154
#define NIST_COMPOUND_SODIUM_NITRATE 155
#define NIST_COMPOUND_STILBENE 156
#define NIST_COMPOUND_SUCROSE 157
#define NIST_COMPOUND_TERPHENYL 158
#define NIST_COMPOUND_TESTES_ICRP 159
#define NIST_COMPOUND_TETRACHLOROETHYLENE 160
#define NIST_COMPOUND_THALLIUM_CHLORIDE 161
#define NIST_COMPOUND_TISSUE_SOFT_ICRP 162
#define NIST_COMPOUND_TISSUE_SOFT_ICRU_FOUR_COMPONENT 163
#define NIST_COMPOUND_TISSUE_EQUIVALENT_GAS_METHANE_BASED 164
#define NIST_COMPOUND_TISSUE_EQUIVALENT_GAS_PROPANE_BASED 165
#define NIST_COMPOUND_TITANIUM_DIOXIDE 166
#define NIST_COMPOUND_TOLUENE 167
#define NIST_COMPOUND_TRICHLOROETHYLENE 168
#define NIST_COMPOUND_TRIETHYL_PHOSPHATE 169
#define NIST_COMPOUND_TUNGSTEN_HEXAFLUORIDE 170
#define NIST_COMPOUND_URANIUM_DICARBIDE 171
#define NIST_COMPOUND_URANIUM_MONOCARBIDE 172
#define NIST_COMPOUND_URANIUM_OXIDE 173
#define NIST_COMPOUND_UREA 174
#define NIST_COMPOUND_VALINE 175
#define NIST_COMPOUND_VITON_FLUOROELASTOMER 176
#define NIST_COMPOUND_WATER_LIQUID 177
#define NIST_COMPOUND_WATER_VAPOR 178
#define NIST_COMPOUND_XYLENE 179

#endif
