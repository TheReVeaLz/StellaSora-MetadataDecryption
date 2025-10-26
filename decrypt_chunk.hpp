typedef unsigned char _BYTE;

template<class T> T __ROL__(T value, int count)
{
    const unsigned int nbits = sizeof(T) * 8;

    if (count > 0)
    {
        count %= nbits;
        T high = value >> (nbits - count);
        if (T(-1) < 0) // signed value
            high &= ~((T(-1) << count));
        value <<= count;
        value |= high;
    }
    else
    {
        count = -count % nbits;
        T low = value << (nbits - count);
        value >>= count;
        value |= low;
    }
    return value;
}

inline _BYTE  __ROR1__(_BYTE value, int count) { return __ROL__((_BYTE)value, -count); }

void __fastcall DecryptChunk(const _BYTE* a1, unsigned __int64 a2, const _BYTE* a3, const _BYTE* a4, unsigned int a5)
{
    __int64 v8; // rsi
    __int64 v9; // rdx
    char v10; // al
    __int64 v11; // rdx
    char v12; // cl
    unsigned int v13; // eax
    char v14; // cl
    unsigned int v15; // edx
    unsigned int v16; // eax
    __int64 v17; // rcx
    __int64 v18; // rdx
    char v19; // r9
    __int64 v20; // rdx
    char v21; // cl
    __int64 v22; // rdx
    char v23; // cl
    __int64 v24; // rdx
    char v25; // cl
    __int64 v26; // rdx
    char v27; // cl
    __int64 v28; // rdx
    char v29; // cl
    __int64 v30; // rdx
    char v31; // cl
    __int64 v32; // rdx
    char v33; // cl
    char v34; // cl
    __int64 v35; // rdx
    char v36; // cl
    __int64 v37; // rdx
    char v38; // cl
    __int64 v39; // rdx
    char v40; // cl
    __int64 v41; // rdx
    char v42; // cl
    __int64 v43; // rdx
    char v44; // cl
    __int64 v45; // rdx
    char v46; // cl
    __int64 v47; // rdx
    char v48; // cl
    __int64 v49; // rdx
    char v50; // cl
    __int64 v51; // rdx
    char v52; // cl
    __int64 v53; // rdx
    char v54; // cl
    __int64 v55; // rdx
    char v56; // cl
    __int64 v57; // rdx
    char v58; // cl
    __int64 v59; // rdx
    char v60; // cl
    __int64 v61; // rdx
    char v62; // cl
    __int64 v63; // rdx
    char v64; // cl
    __int64 v65; // rdx
    char v66; // cl
    __int64 v67; // rdx
    char v68; // cl
    __int64 v69; // rdx
    char v70; // cl
    __int64 v71; // rdx
    char v72; // cl
    __int64 v73; // rdx
    char v74; // cl
    __int64 v75; // rdx
    char v76; // cl
    __int64 v77; // rdx
    char v78; // cl
    __int64 v79; // rdx
    char v80; // cl
    __int64 v81; // rdx
    char v82; // cl
    __int64 v83; // rdx
    char v84; // cl
    __int64 v85; // rdx
    char v86; // cl
    __int64 v87; // rdx
    char v88; // cl
    __int64 v89; // rdx
    char v90; // cl
    __int64 v91; // rdx
    char v92; // cl
    __int64 v93; // rdx
    char v94; // cl
    __int64 v95; // rdx
    char v96; // cl

    if (a5)
    {
        v8 = 0i64;
        if (a2)
        {
            while (2)
            {
                switch (a1[v8])
                {
                case 0:
                    v9 = 0xFFA1EAF % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[182] ^ 0xA1;
                    goto LABEL_263;
                case 1:
                    v11 = ((unsigned int)(unsigned __int8)a3[161] + 1150497504) % a5;
                    v12 = *(_BYTE*)(v11 + a4) - 1;
                    *(_BYTE*)(0x9C6BBEB6 % a5 + a4) -= v12;
                    *(_BYTE*)((unsigned int)v11 + a4) = v12;
                    goto LABEL_264;
                case 2:
                    v9 = 0x5ADBAA1 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[224] ^ 0x23;
                    goto LABEL_263;
                case 3:
                    v9 = 0x449332E0 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[35] ^ 0x5A;
                    goto LABEL_263;
                case 4:
                    v9 = 0xE4908623 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[90] ^ 0xB5;
                    goto LABEL_263;
                case 5:
                    v13 = 1216305242;
                    v14 = a3[181] - 4;
                    goto LABEL_262;
                case 6:
                    *(_BYTE*)(0x32E7DB5 % a5 + a4) += 41 - a3[164];
                    goto LABEL_264;
                case 7:
                    v15 = 0xC91E39A4 % a5;
                    v16 = (unsigned __int8)a3[215] + 2031236414;
                    goto LABEL_12;
                case 8:
                    v9 = 0x590781D7 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[62] ^ 9;
                    goto LABEL_263;
                case 9:
                    v15 = 0x7912353E % a5;
                    v16 = (unsigned __int8)a3[9] + 477404584;
                    goto LABEL_12;
                case 0xA:
                    v9 = 0xACE7709 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[168] ^ 0xCB;
                    goto LABEL_263;
                case 0xB:
                    v13 = 477404584;
                    v14 = a3[203] + 2;
                    goto LABEL_262;
                case 0xC:
                    v13 = 2107729355;
                    v14 = a3[98] - 3;
                    goto LABEL_262;
                case 0xD:
                    v13 = -1750247070;
                    v14 = a3[157] - 4;
                    goto LABEL_262;
                case 0xE:
                    v9 = 0x51029A9D % a5;
                    v10 = a3[236] ^ ~*(_BYTE*)(v9 + a4);
                    goto LABEL_263;
                case 0xF:
                    *(_BYTE*)(0x8E0782EC % a5 + a4) += 58 - a3[255];
                    goto LABEL_264;
                case 0x10:
                    v13 = -577059329;
                    v14 = a3[198] + 1;
                    goto LABEL_262;
                case 0x11:
                    v9 = 0xD5EB08C6 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[113] ^ 0x70;
                    goto LABEL_263;
                case 0x12:
                    v15 = 0x70C1C71 % a5;
                    v16 = (unsigned __int8)a3[112] - 513902989;
                    goto LABEL_12;
                case 0x13:
                    v13 = 2011385200;
                    v14 = a3[115] + 2;
                    goto LABEL_262;
                case 0x14:
                    v9 = 0xE15E7673 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[106] ^ 0x85;
                    goto LABEL_263;
                case 0x15:
                    v9 = 0xD6DAC76A % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[133] ^ 0x34;
                    goto LABEL_263;
                case 0x16:
                    v15 = 0xEECC7085 % a5;
                    v16 = (unsigned __int8)a3[52] + 553224999;
                    goto LABEL_12;
                case 0x17:
                    v15 = 0xD333A134 % a5;
                    v16 = (unsigned __int8)a3[39] - 2019206834;
                    goto LABEL_12;
                case 0x18:
                    v15 = 0x20F98B27 % a5;
                    v16 = (unsigned __int8)a3[78] + 1624853209;
                    goto LABEL_12;
                case 0x19:
                    v9 = 0x87A5594E % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[217] ^ 0x38;
                    goto LABEL_263;
                case 0x1A:
                    v13 = 1624853209;
                    v14 = a3[56] + 3;
                    goto LABEL_262;
                case 0x1B:
                    v15 = 0x76076238 % a5;
                    v16 = (unsigned __int8)a3[27] - 344931726;
                    goto LABEL_12;
                case 0x1C:
                    v13 = -1160816613;
                    v14 = a3[114] - 3;
                    goto LABEL_262;
                case 0x1D:
                    v13 = -344931726;
                    v14 = a3[109] - 4;
                    goto LABEL_262;
                case 0x1E:
                    v20 = ((unsigned int)(unsigned __int8)a3[124] + 42824015) % a5;
                    v21 = *(_BYTE*)(v20 + a4) - 1;
                    *(_BYTE*)(0x78D09F6D % a5 + a4) -= v21;
                    *(_BYTE*)((unsigned int)v20 + a4) = v21;
                    goto LABEL_264;
                case 0x1F:
                    v9 = 0xDE54B47C % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[79] ^ 0xD6;
                    goto LABEL_263;
                case 0x20:
                    *(_BYTE*)(0x28D714F % a5 + a4) += -65 - a3[214];
                    goto LABEL_264;
                case 0x21:
                    *(_BYTE*)(0xDE8446D6 % a5 + a4) ^= a3[65];
                    goto LABEL_264;
                case 0x22:
                    v9 = 0x5BECA241 % a5;
                    v10 = *a3 ^ *(_BYTE*)(v9 + a4) ^ 0xC3;
                    goto LABEL_263;
                case 0x23:
                    v22 = ((unsigned int)(unsigned __int8)a3[195] + 346843770) % a5;
                    v23 = *(_BYTE*)(v22 + a4) - 1;
                    *(_BYTE*)(0xAE3CFC00 % a5 + a4) -= v23;
                    *(_BYTE*)((unsigned int)v22 + a4) = v23;
                    goto LABEL_264;
                case 0x24:
                    v13 = 476031683;
                    v14 = a3[122] - 3;
                    goto LABEL_262;
                case 0x25:
                    *(_BYTE*)(0x14AC6A7A % a5 + a4) += 60 - a3[85];
                    goto LABEL_264;
                case 0x26:
                    v24 = ((unsigned int)(unsigned __int8)a3[196] + 1482954871) % a5;
                    v25 = *(_BYTE*)(v24 + a4) - 1;
                    *(_BYTE*)(0xCDD7C755 % a5 + a4) -= v25;
                    *(_BYTE*)((unsigned int)v24 + a4) = v25;
                    goto LABEL_264;
                case 0x27:
                    v9 = 0x3D90DCC4 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[119] ^ 0x5E;
                    goto LABEL_263;
                case 0x28:
                    v13 = 1482954871;
                    v14 = a3[94] + 1;
                    goto LABEL_262;
                case 0x29:
                    *(_BYTE*)(0xD6DEF15E % a5 + a4) += 56 - a3[169];
                    goto LABEL_264;
                case 0x2A:
                    *(_BYTE*)(0x87C0C2A9 % a5 + a4) += -107 - a3[200];
                    goto LABEL_264;
                case 0x2B:
                    *(_BYTE*)(0xE4943AC8 % a5 + a4) += 126 - a3[107];
                    goto LABEL_264;
                case 0x2C:
                    v9 = 0x625F0E6B % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[130] ^ 0x3D;
                    goto LABEL_263;
                case 0x2D:
                    v13 = 1142873986;
                    v14 = a3[61] - 4;
                    goto LABEL_262;
                case 0x2E:
                    v13 = 95324221;
                    v14 = a3[12] - 1;
                    goto LABEL_262;
                case 0x2F:
                    *(_BYTE*)(0xE4023A0C % a5 + a4) += 26 - a3[159];
                    goto LABEL_264;
                case 0x30:
                    *(_BYTE*)(0x99AF209F % a5 + a4) += -17 - a3[230];
                    goto LABEL_264;
                case 0x31:
                    v9 = 0x19A078E6 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[17] ^ 0x90;
                    goto LABEL_263;
                case 0x32:
                    v13 = -1105966063;
                    v14 = a3[144] + 3;
                    goto LABEL_262;
                case 0x33:
                    v9 = 0xE513E90 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[19] ^ 0x8A;
                    goto LABEL_263;
                case 0x34:
                    v26 = ((unsigned int)(unsigned __int8)a3[138] - 140148187) % a5;
                    v27 = *(_BYTE*)(v26 + a4) - 1;
                    *(_BYTE*)(0x25812313 % a5 + a4) -= v27;
                    *(_BYTE*)((unsigned int)v26 + a4) = v27;
                    goto LABEL_264;
                case 0x35:
                    *(_BYTE*)(0x462D418A % a5 + a4) += -84 - a3[37];
                    goto LABEL_264;
                case 0x36:
                    v9 = 0xF7A58225 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[84] ^ 0xC7;
                    goto LABEL_263;
                case 0x37:
                    v28 = ((unsigned int)(unsigned __int8)a3[199] - 859308690) % a5;
                    v29 = *(_BYTE*)(v28 + a4) - 1;
                    *(_BYTE*)(0x9636EC54 % a5 + a4) -= v29;
                    *(_BYTE*)((unsigned int)v28 + a4) = v29;
                    goto LABEL_264;
                case 0x38:
                    v13 = -1723586105;
                    v14 = a3[110] + 1;
                    goto LABEL_262;
                case 0x39:
                    v14 = a3[121];
                    v13 = -859308690;
                    goto LABEL_262;
                case 0x3A:
                    *(_BYTE*)(0xB169DE79 % a5 + a4) += 69 - a3[88];
                    goto LABEL_264;
                case 0x3B:
                    *(_BYTE*)(0xA66C2758 % a5 + a4) += 110 - a3[187];
                    goto LABEL_264;
                case 0x3C:
                    v9 = 0x3D5D88BB % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[146] ^ 0xD;
                    goto LABEL_263;
                case 0x3D:
                    *(_BYTE*)(0xBA90B092 % a5 + a4) += 100 - a3[13];
                    goto LABEL_264;
                case 0x3E:
                    v15 = 0x5111550D % a5;
                    v16 = (unsigned __int8)a3[156] + 1344066543;
                    goto LABEL_12;
                case 0x3F:
                    v15 = 0xA6B1139C % a5;
                    v16 = (unsigned __int8)a3[239] + 870883062;
                    goto LABEL_12;
                case 0x40:
                    *(_BYTE*)(0x501CD3EF % a5 + a4) += 31 - a3[246];
                    goto LABEL_264;
                case 0x41:
                    v30 = ((unsigned int)(unsigned __int8)a3[225] + 1376851232) % a5;
                    v31 = *(_BYTE*)(v30 + a4) - 1;
                    *(_BYTE*)(0x33E89EF6 % a5 + a4) -= v31;
                    *(_BYTE*)((unsigned int)v30 + a4) = v31;
                    goto LABEL_264;
                case 0x42:
                    v32 = ((unsigned int)(unsigned __int8)a3[32] - 756031645) % a5;
                    v33 = *(_BYTE*)(v32 + a4) - 1;
                    *(_BYTE*)(0xB8819E1 % a5 + a4) -= v33;
                    *(_BYTE*)((unsigned int)v32 + a4) = v33;
                    goto LABEL_264;
                case 0x43:
                    v15 = 0x52111520 % a5;
                    v16 = (unsigned __int8)a3[99] - 589935462;
                    goto LABEL_12;
                case 0x44:
                    v15 = 0xD2EFDF63 % a5;
                    v16 = (unsigned __int8)a3[154] + 1003135221;
                    goto LABEL_12;
                case 0x45:
                    v15 = 0xDCD64C9A % a5;
                    v16 = (unsigned __int8)a3[245] + 40292324;
                    goto LABEL_12;
                case 0x46:
                    *(_BYTE*)(0x3BCAA0F5 % a5 + a4) += -23 - a3[228];
                    goto LABEL_264;
                case 0x47:
                    v34 = a3[23];
                    v13 = 40292324;
                    goto LABEL_261;
                case 0x48:
                    *(_BYTE*)(0xB7D6BF17 % a5 + a4) += -73 - a3[126];
                    goto LABEL_264;
                case 0x49:
                    v14 = a3[73];
                    v13 = 547978622;
                    goto LABEL_262;
                case 0x4A:
                    *(_BYTE*)(0x1BF99E49 % a5 + a4) += -11 - a3[232];
                    goto LABEL_264;
                case 0x4B:
                    v15 = 0xD52027E8 % a5;
                    v16 = (unsigned __int8)a3[11] + 484390306;
                    goto LABEL_12;
                case 0x4C:
                    v15 = 0x8317C70B % a5;
                    v16 = (unsigned __int8)a3[162] - 1800534563;
                    goto LABEL_12;
                case 0x4D:
                    *(_BYTE*)(0x1CDF35A2 % a5 + a4) += -44 - a3[221];
                    goto LABEL_264;
                case 0x4E:
                    v13 = -1800534563;
                    v14 = a3[44] - 1;
                    goto LABEL_262;
                case 0x4F:
                    *(_BYTE*)(0x8D42412C % a5 + a4) += -6 - a3[63];
                    goto LABEL_264;
                case 0x50:
                    v35 = ((unsigned int)(unsigned __int8)a3[6] + 378342321) % a5;
                    v36 = *(_BYTE*)(v35 + a4) - 1;
                    *(_BYTE*)(0xB5338B3F % a5 + a4) -= v36;
                    *(_BYTE*)((unsigned int)v35 + a4) = v36;
                    goto LABEL_264;
                case 0x51:
                    *(_BYTE*)(0x3345B906 % a5 + a4) += 80 - a3[177];
                    goto LABEL_264;
                case 0x52:
                    v13 = 378342321;
                    v14 = a3[176] + 3;
                    goto LABEL_262;
                case 0x53:
                    *(_BYTE*)(0x56AD7FB0 % a5 + a4) += 86 - a3[179];
                    goto LABEL_264;
                case 0x54:
                    *(_BYTE*)(0x9118DFB3 % a5 + a4) += 59 - a3[170];
                    goto LABEL_264;
                case 0x55:
                    v15 = 0x87608BAA % a5;
                    v16 = (unsigned __int8)a3[197] - 828274828;
                    goto LABEL_12;
                case 0x56:
                    *(_BYTE*)(0xB21C23C5 % a5 + a4) += -103 - a3[116];
                    goto LABEL_264;
                case 0x57:
                    v9 = 0xCEA18774 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[103] ^ 0x8E;
                    goto LABEL_263;
                case 0x58:
                    v37 = ((unsigned int)(unsigned __int8)a3[142] - 506133991) % a5;
                    v38 = *(_BYTE*)(v37 + a4) - 1;
                    *(_BYTE*)(0x1298D867 % a5 + a4) -= v38;
                    *(_BYTE*)((unsigned int)v37 + a4) = v38;
                    goto LABEL_264;
                case 0x59:
                    v39 = ((unsigned int)(unsigned __int8)a3[25] - 176079752) % a5;
                    v40 = *(_BYTE*)(v39 + a4) - 1;
                    *(_BYTE*)(0xEB0C718E % a5 + a4) -= v40;
                    *(_BYTE*)((unsigned int)v39 + a4) = v40;
                    goto LABEL_264;
                case 0x5A:
                    v13 = -506133991;
                    v14 = a3[120] + 3;
                    goto LABEL_262;
                case 0x5B:
                    v15 = 0xF5813C78 % a5;
                    v16 = (unsigned __int8)a3[91] - 27038030;
                    goto LABEL_12;
                case 0x5C:
                    v9 = 0x291AC95B % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[178] ^ 0xAD;
                    goto LABEL_263;
                case 0x5D:
                    v13 = -27038030;
                    v14 = a3[173] - 4;
                    goto LABEL_262;
                case 0x5E:
                    v13 = -1166435667;
                    v14 = a3[188] - 1;
                    goto LABEL_262;
                case 0x5F:
                    *(_BYTE*)(0xEDD6C2BC % a5 + a4) += -22 - a3[143];
                    goto LABEL_264;
                case 0x60:
                    v13 = -1970256241;
                    v14 = a3[22] + 1;
                    goto LABEL_262;
                case 0x61:
                    v41 = ((unsigned int)(unsigned __int8)a3[129] - 1399357888) % a5;
                    v42 = *(_BYTE*)(v41 + a4) - 1;
                    *(_BYTE*)(0x86E0C716 % a5 + a4) -= v42;
                    *(_BYTE*)((unsigned int)v41 + a4) = v42;
                    goto LABEL_264;
                case 0x62:
                    v9 = 0x75A82181 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[64] ^ 3;
                    goto LABEL_263;
                case 0x63:
                    v13 = -1399357888;
                    v14 = a3[3] + 2;
                    goto LABEL_262;
                case 0x64:
                    v15 = 0xB2A92403 % a5;
                    v16 = (unsigned __int8)a3[186] - 1968239979;
                    goto LABEL_12;
                case 0x65:
                    v43 = ((unsigned int)(unsigned __int8)a3[149] - 22539516) % a5;
                    v44 = *(_BYTE*)(v43 + a4) - 1;
                    *(_BYTE*)(0x41C4FEBA % a5 + a4) -= v44;
                    *(_BYTE*)((unsigned int)v43 + a4) = v44;
                    goto LABEL_264;
                case 0x66:
                    *(_BYTE*)(0x8AAF0A95 % a5 + a4) += 73 - a3[4];
                    goto LABEL_264;
                case 0x67:
                    *(_BYTE*)(0xFEA81304 % a5 + a4) += 98 - a3[183];
                    goto LABEL_264;
                case 0x68:
                    v15 = 0xE24775B7 % a5;
                    v16 = (unsigned __int8)a3[158] - 912193047;
                    goto LABEL_12;
                case 0x69:
                    v9 = 0xB5B9D99E % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[233] ^ 8;
                    goto LABEL_263;
                case 0x6A:
                    v15 = 0xC9A109E9 % a5;
                    v16 = (unsigned __int8)a3[8] + 859017131;
                    goto LABEL_12;
                case 0x6B:
                    *(_BYTE*)(0x87A06508 % a5 + a4) += 62 - a3[171];
                    goto LABEL_264;
                case 0x6C:
                    v13 = 859017131;
                    v14 = a3[194] - 3;
                    goto LABEL_262;
                case 0x6D:
                    v13 = -944350270;
                    v14 = a3[125] - 4;
                    goto LABEL_262;
                case 0x6E:
                    *(_BYTE*)(0x2CA9137D % a5 + a4) += 33 - a3[76];
                    goto LABEL_264;
                case 0x6F:
                    *(_BYTE*)(0x9DCF984C % a5 + a4) += -38 - a3[223];
                    goto LABEL_264;
                case 0x70:
                    v15 = 0x141005DF % a5;
                    v16 = (unsigned __int8)a3[38] + 1402886993;
                    goto LABEL_12;
                case 0x71:
                    v15 = 0x1722C926 % a5;
                    v16 = (unsigned __int8)a3[81] + 662704336;
                    goto LABEL_12;
                case 0x72:
                    v13 = 1402886993;
                    v14 = a3[208] + 3;
                    goto LABEL_262;
                case 0x73:
                    *(_BYTE*)(0x278010D0 % a5 + a4) += 54 - a3[83];
                    goto LABEL_264;
                case 0x74:
                    v45 = ((unsigned int)(unsigned __int8)a3[202] - 573024923) % a5;
                    v46 = *(_BYTE*)(v45 + a4) - 1;
                    *(_BYTE*)(0xC08DAC53 % a5 + a4) -= v46;
                    *(_BYTE*)((unsigned int)v45 + a4) = v46;
                    goto LABEL_264;
                case 0x75:
                    *(_BYTE*)(0x653CA5CA % a5 + a4) += 108 - a3[101];
                    goto LABEL_264;
                case 0x76:
                    v47 = ((unsigned int)(unsigned __int8)a3[148] - 1981835513) % a5;
                    v48 = *(_BYTE*)(v47 + a4) - 1;
                    *(_BYTE*)(0xDDD85565 % a5 + a4) -= v48;
                    *(_BYTE*)((unsigned int)v47 + a4) = v48;
                    goto LABEL_264;
                case 0x77:
                    v49 = ((unsigned int)(unsigned __int8)a3[7] - 1950698066) % a5;
                    v50 = *(_BYTE*)(v49 + a4) - 1;
                    *(_BYTE*)(0xDD7B7294 % a5 + a4) -= v50;
                    *(_BYTE*)((unsigned int)v49 + a4) = v50;
                    goto LABEL_264;
                case 0x78:
                    v51 = ((unsigned int)(unsigned __int8)a3[174] + 373470649) % a5;
                    v52 = *(_BYTE*)(v51 + a4) - 1;
                    *(_BYTE*)(0x89DF9707 % a5 + a4) -= v52;
                    *(_BYTE*)((unsigned int)v51 + a4) = v52;
                    goto LABEL_264;
                case 0x79:
                    *(_BYTE*)(0x8BBAB5AE % a5 + a4) += 104 - a3[185];
                    goto LABEL_264;
                case 0x7A:
                    v53 = ((unsigned int)(unsigned __int8)a3[152] + 57612795) % a5;
                    v54 = *(_BYTE*)(v53 + a4) - 1;
                    *(_BYTE*)(0x1642B5B9 % a5 + a4) -= v54;
                    *(_BYTE*)((unsigned int)v53 + a4) = v54;
                    goto LABEL_264;
                case 0x7B:
                    v9 = 0x96CEA198 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[251] ^ 0xD2;
                    goto LABEL_263;
                case 0x7C:
                    v13 = 57612795;
                    v14 = a3[210] - 3;
                    goto LABEL_262;
                case 0x7D:
                    v13 = -961479470;
                    v14 = a3[77] - 4;
                    goto LABEL_262;
                case 0x7E:
                    v9 = 0xA5B1704D % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[220] ^ 0x2F;
                    goto LABEL_263;
                case 0x7F:
                    *(_BYTE*)(0x81CDC1DC % a5 + a4) += -54 - a3[47];
                    goto LABEL_264;
                case 0x80:
                    *(_BYTE*)(0x67CFC92F % a5 + a4) += -33 - a3[54];
                    goto LABEL_264;
                case 0x81:
                    v15 = 0x55B4BF36 % a5;
                    v16 = (unsigned __int8)a3[33] + 1851275104;
                    goto LABEL_12;
                case 0x82:
                    v55 = ((unsigned int)(unsigned __int8)a3[96] - 906790749) % a5;
                    v56 = *(_BYTE*)(v55 + a4) - 1;
                    *(_BYTE*)(0x3F74B921 % a5 + a4) -= v56;
                    *(_BYTE*)((unsigned int)v55 + a4) = v56;
                    goto LABEL_264;
                case 0x83:
                    v9 = 0x6E583760 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[163] ^ 0xDA;
                    goto LABEL_263;
                case 0x84:
                    v15 = 0xC9F378A3 % a5;
                    v16 = (unsigned __int8)a3[218] + 2083324981;
                    goto LABEL_12;
                case 0x85:
                    v13 = -1203732262;
                    v14 = a3[53] - 4;
                    goto LABEL_262;
                case 0x86:
                    v15 = 0x7C2D0435 % a5;
                    v16 = (unsigned __int8)a3[36] - 425837481;
                    goto LABEL_12;
                case 0x87:
                    v34 = a3[87];
                    v13 = -1923307996;
                    goto LABEL_261;
                case 0x88:
                    *(_BYTE*)(0xE69E3C57 % a5 + a4) += 119 - a3[190];
                    goto LABEL_264;
                case 0x89:
                    v9 = 0x95805BE % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[137] ^ 0x28;
                    goto LABEL_263;
                case 0x8A:
                    v9 = 0x56DF0589 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[40] ^ 0x4B;
                    goto LABEL_263;
                case 0x8B:
                    v15 = 0x499CF228 % a5;
                    v16 = (unsigned __int8)a3[75] + 1047286242;
                    goto LABEL_12;
                case 0x8C:
                    *(_BYTE*)(0xAA1A684B % a5 + a4) += -29 - a3[226];
                    goto LABEL_264;
                case 0x8D:
                    *(_BYTE*)(0x3E6C51E2 % a5 + a4) += -108 - a3[29];
                    goto LABEL_264;
                case 0x8E:
                    v9 = 0x47B11D % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[108] ^ 0x7F;
                    goto LABEL_263;
                case 0x8F:
                    v15 = 0x1DB23F6C % a5;
                    v16 = (unsigned __int8)a3[127] + 1300212038;
                    goto LABEL_12;
                case 0x90:
                    v15 = 0xBE2C907F % a5;
                    v16 = (unsigned __int8)a3[70] - 59753743;
                    goto LABEL_12;
                case 0x91:
                    v57 = ((unsigned int)(unsigned __int8)a3[241] - 1957629456) % a5;
                    v58 = *(_BYTE*)(v57 + a4) - 1;
                    *(_BYTE*)(0x4D7FA946 % a5 + a4) -= v58;
                    *(_BYTE*)((unsigned int)v57 + a4) = v58;
                    goto LABEL_264;
                case 0x92:
                    v9 = 0xFC703AF1 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[240] ^ 0xF3;
                    goto LABEL_263;
                case 0x93:
                    v59 = ((unsigned int)(unsigned __int8)a3[243] + 2122944490) % a5;
                    v60 = *(_BYTE*)(v59 + a4) - 1;
                    *(_BYTE*)(0x8B50F1F0 % a5 + a4) -= v60;
                    *(_BYTE*)((unsigned int)v59 + a4) = v60;
                    goto LABEL_264;
                case 0x94:
                    v61 = ((unsigned int)(unsigned __int8)a3[234] - 1098770683) % a5;
                    v62 = *(_BYTE*)(v61 + a4) - 1;
                    *(_BYTE*)(0xB44788F3 % a5 + a4) -= v62;
                    *(_BYTE*)((unsigned int)v61 + a4) = v62;
                    goto LABEL_264;
                case 0x95:
                    v9 = 0x7E898FEA % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[5] ^ 0xB4;
                    goto LABEL_263;
                case 0x96:
                    v9 = 0xBE821705 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[180] ^ 0xA7;
                    goto LABEL_263;
                case 0x97:
                    v9 = 0x97CCADB4 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[167] ^ 0xCE;
                    goto LABEL_263;
                case 0x98:
                    v63 = ((unsigned int)(unsigned __int8)a3[206] + 920320345) % a5;
                    v64 = *(_BYTE*)(v63 + a4) - 1;
                    *(_BYTE*)(0xA00065A7 % a5 + a4) -= v64;
                    *(_BYTE*)((unsigned int)v63 + a4) = v64;
                    goto LABEL_264;
                case 0x99:
                    v65 = ((unsigned int)(unsigned __int8)a3[89] + 1910265528) % a5;
                    v66 = *(_BYTE*)(v65 + a4) - 1;
                    *(_BYTE*)(0x6C1AC9CE % a5 + a4) -= v66;
                    *(_BYTE*)((unsigned int)v65 + a4) = v66;
                    goto LABEL_264;
                case 0x9A:
                    v67 = ((unsigned int)(unsigned __int8)a3[184] + 901937819) % a5;
                    v68 = *(_BYTE*)(v67 + a4) - 1;
                    *(_BYTE*)(0x36DAF959 % a5 + a4) -= v68;
                    *(_BYTE*)((unsigned int)v67 + a4) = v68;
                    goto LABEL_264;
                case 0x9B:
                    *(_BYTE*)(0x71DC56B8 % a5 + a4) += 14 - a3[155];
                    goto LABEL_264;
                case 0x9C:
                    v9 = 0x35C27A9B % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[242] ^ 0xED;
                    goto LABEL_263;
                case 0x9D:
                    v69 = ((unsigned int)(unsigned __int8)a3[237] + 614338812) % a5;
                    v70 = *(_BYTE*)(v69 + a4) - 1;
                    *(_BYTE*)(0x77415AF2 % a5 + a4) -= v70;
                    *(_BYTE*)((unsigned int)v69 + a4) = v70;
                    goto LABEL_264;
                case 0x9E:
                    v13 = 123786733;
                    v14 = a3[252] - 1;
                    goto LABEL_262;
                case 0x9F:
                    *(_BYTE*)(0x249E10FC % a5 + a4) += -86 - a3[207];
                    goto LABEL_264;
                case 0xA0:
                    v71 = ((unsigned int)(unsigned __int8)a3[86] + 1377165505) % a5;
                    v72 = *(_BYTE*)(v71 + a4) - 1;
                    *(_BYTE*)(0xC1C35BCF % a5 + a4) -= v72;
                    *(_BYTE*)((unsigned int)v71 + a4) = v72;
                    goto LABEL_264;
                case 0xA1:
                    v15 = 0xB2AC8756 % a5;
                    v16 = (unsigned __int8)a3[193] + 2077966464;
                    goto LABEL_12;
                case 0xA2:
                    *(_BYTE*)(0x5215E0C1 % a5 + a4) += -67 - a3[128];
                    goto LABEL_264;
                case 0xA3:
                    *(_BYTE*)(0x7BDB4080 % a5 + a4) += 6 - a3[67];
                    goto LABEL_264;
                case 0xA4:
                    v9 = 0x8B36DD43 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[250] ^ 0xD5;
                    goto LABEL_263;
                case 0xA5:
                    v13 = -1995386118;
                    v14 = a3[213] - 4;
                    goto LABEL_262;
                case 0xA6:
                    *(_BYTE*)(0x55EC8DD5 % a5 + a4) += 9 - a3[68];
                    goto LABEL_264;
                case 0xA7:
                    v73 = ((unsigned int)(unsigned __int8)a3[247] - 1563688482) % a5;
                    v74 = *(_BYTE*)(v73 + a4) - 1;
                    *(_BYTE*)(0x7D8C8944 % a5 + a4) -= v74;
                    *(_BYTE*)((unsigned int)v73 + a4) = v74;
                    goto LABEL_264;
                case 0xA8:
                    v9 = 0x77C312F7 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[222] ^ 0x29;
                    goto LABEL_263;
                case 0xA9:
                    v9 = 0xA2CC01DE % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[41] ^ 0x48;
                    goto LABEL_263;
                case 0xAA:
                    v13 = 1306235177;
                    v14 = a3[72] + 3;
                    goto LABEL_262;
                case 0xAB:
                    v13 = 480104264;
                    v14 = a3[235] + 2;
                    goto LABEL_262;
                case 0xAC:
                    v15 = 0x33450EB % a5;
                    v16 = (unsigned __int8)a3[2] + 1177673405;
                    goto LABEL_12;
                case 0xAD:
                    v13 = -825681918;
                    v14 = a3[189] - 4;
                    goto LABEL_262;
                case 0xAE:
                    v9 = 0x4631DEBD % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[140] ^ 0x1F;
                    goto LABEL_263;
                case 0xAF:
                    v75 = ((unsigned int)(unsigned __int8)a3[31] - 224110234) % a5;
                    v76 = *(_BYTE*)(v75 + a4) - 1;
                    *(_BYTE*)(0x8F2368C % a5 + a4) -= v76;
                    *(_BYTE*)((unsigned int)v75 + a4) = v76;
                    goto LABEL_264;
                case 0xB0:
                    v9 = 0xDF712B1F % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[102] ^ 0x91;
                    goto LABEL_263;
                case 0xB1:
                    v14 = a3[145];
                    v13 = -224110234;
                    goto LABEL_262;
                case 0xB2:
                    v9 = 0xDC2AAA91 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[16] ^ 0x93;
                    goto LABEL_263;
                case 0xB3:
                    v15 = 0xC0A82310 % a5;
                    v16 = (unsigned __int8)a3[147] + 1175407114;
                    goto LABEL_12;
                case 0xB4:
                    v15 = 0xD0AE7593 % a5;
                    v16 = (unsigned __int8)a3[10] + 465660069;
                    goto LABEL_12;
                case 0xB5:
                    *(_BYTE*)(0x460F4A0A % a5 + a4) += 44 - a3[165];
                    goto LABEL_264;
                case 0xB6:
                    *(_BYTE*)(0x1BC168A5 % a5 + a4) += -71 - a3[212];
                    goto LABEL_264;
                case 0xB7:
                    v34 = a3[71];
                    v13 = 1184708820;
                    goto LABEL_261;
                case 0xB8:
                    v13 = -1713159097;
                    v14 = a3[238] + 1;
                    goto LABEL_262;
                case 0xB9:
                    v9 = 0x5D74ADEE % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[249] ^ 0xD8;
                    goto LABEL_263;
                case 0xBA:
                    v13 = -272249607;
                    v14 = a3[216] + 3;
                    goto LABEL_262;
                case 0xBB:
                    v9 = 0x22325BD8 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[59] ^ 0x12;
                    goto LABEL_263;
                case 0xBC:
                    v13 = 226290491;
                    v14 = a3[18] - 3;
                    goto LABEL_262;
                case 0xBD:
                    *(_BYTE*)(0xC7DC8912 % a5 + a4) += -28 - a3[141];
                    goto LABEL_264;
                case 0xBE:
                    *(_BYTE*)(0xD82FCB8D % a5 + a4) += -111 - a3[28];
                    goto LABEL_264;
                case 0xBF:
                    v34 = a3[111];
                    v13 = -1940934628;
                    goto LABEL_261;
                case 0xC0:
                    v15 = 0x9652FE6F % a5;
                    v16 = (unsigned __int8)a3[118] - 625764255;
                    goto LABEL_12;
                case 0xC1:
                    v77 = ((unsigned int)(unsigned __int8)a3[97] - 307717728) % a5;
                    v78 = *(_BYTE*)(v77 + a4) - 1;
                    *(_BYTE*)(0x44101F76 % a5 + a4) -= v78;
                    *(_BYTE*)((unsigned int)v77 + a4) = v78;
                    goto LABEL_264;
                case 0xC2:
                    v15 = 0xDAB39861 % a5;
                    v16 = (unsigned __int8)a3[160] - 858041885;
                    goto LABEL_12;
                case 0xC3:
                    v79 = ((unsigned int)(unsigned __int8)a3[227] - 788663014) % a5;
                    v80 = *(_BYTE*)(v79 + a4) - 1;
                    *(_BYTE*)(0xEDA899A0 % a5 + a4) -= v80;
                    *(_BYTE*)((unsigned int)v79 + a4) = v80;
                    goto LABEL_264;
                case 0xC4:
                    *(_BYTE*)(0xCCDB51E3 % a5 + a4) += -117 - a3[26];
                    goto LABEL_264;
                case 0xC5:
                    v81 = ((unsigned int)(unsigned __int8)a3[117] + 306166884) % a5;
                    v82 = *(_BYTE*)(v81 + a4) - 1;
                    *(_BYTE*)(0xD0FDF51A % a5 + a4) -= v82;
                    *(_BYTE*)((unsigned int)v81 + a4) = v82;
                    goto LABEL_264;
                case 0xC6:
                    *(_BYTE*)(0xE195A775 % a5 + a4) += 105 - a3[100];
                    goto LABEL_264;
                case 0xC7:
                    v15 = 0x123FBC64 % a5;
                    v16 = (unsigned __int8)a3[151] + 492686846;
                    goto LABEL_12;
                case 0xC8:
                    v83 = ((unsigned int)(unsigned __int8)a3[254] - 54612791) % a5;
                    v84 = *(_BYTE*)(v83 + a4) - 1;
                    *(_BYTE*)(0xEC9DF997 % a5 + a4) -= v84;
                    *(_BYTE*)((unsigned int)v83 + a4) = v84;
                    goto LABEL_264;
                case 0xC9:
                    v14 = a3[201];
                    v13 = 492686846;
                    goto LABEL_262;
                case 0xCA:
                    v85 = ((unsigned int)(unsigned __int8)a3[104] + 1038698891) % a5;
                    v86 = *(_BYTE*)(v85 + a4) - 1;
                    *(_BYTE*)(0xFCBEACC9 % a5 + a4) -= v86;
                    *(_BYTE*)((unsigned int)v85 + a4) = v86;
                    goto LABEL_264;
                case 0xCB:
                    *(_BYTE*)(0xB62AFC68 % a5 + a4) += -34 - a3[139];
                    goto LABEL_264;
                case 0xCC:
                    v9 = 0x3DE9498B % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[34] ^ 0x5D;
                    goto LABEL_263;
                case 0xCD:
                    v9 = 0x1A94AE22 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[93] ^ 0xAC;
                    goto LABEL_263;
                case 0xCE:
                    *(_BYTE*)(0x390F9C5D % a5 + a4) += 65 - a3[172];
                    goto LABEL_264;
                case 0xCF:
                    v15 = 0x4F977DAC % a5;
                    v16 = (unsigned __int8)a3[191] - 1227302522;
                    goto LABEL_12;
                case 0xD0:
                    *(_BYTE*)(0xC7C5D5BF % a5 + a4) += -49 - a3[134];
                    goto LABEL_264;
                case 0xD1:
                    v15 = 0xB6D8D986 % a5;
                    v16 = (unsigned __int8)a3[49] + 973972528;
                    goto LABEL_12;
                case 0xD2:
                    v9 = 0x1F5AA31 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[48] ^ 0x33;
                    goto LABEL_263;
                case 0xD3:
                    v13 = 973972528;
                    v14 = a3[51] + 2;
                    goto LABEL_262;
                case 0xD4:
                    v9 = 0xDE2A7233 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[42] ^ 0x45;
                    goto LABEL_263;
                case 0xD5:
                    v87 = ((unsigned int)(unsigned __int8)a3[69] - 1493888012) % a5;
                    v88 = *(_BYTE*)(v87 + a4) - 1;
                    *(_BYTE*)(0x295D42A % a5 + a4) -= v88;
                    *(_BYTE*)((unsigned int)v87 + a4) = v88;
                    goto LABEL_264;
                case 0xD6:
                    v13 = 1094601285;
                    v14 = a3[244] - 1;
                    goto LABEL_262;
                case 0xD7:
                    v9 = 0xA6F513F4 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[231] ^ 0xE;
                    goto LABEL_263;
                case 0xD8:
                    v9 = 0x607032E7 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[14] ^ 0x99;
                    goto LABEL_263;
                case 0xD9:
                    v14 = a3[153];
                    v13 = 1158701582;
                    goto LABEL_262;
                case 0xDA:
                    v13 = -1322569575;
                    v14 = a3[248] + 3;
                    goto LABEL_262;
                case 0xDB:
                    v15 = 0xF758B0F8 % a5;
                    v16 = (unsigned __int8)a3[219] - 1001748686;
                    goto LABEL_12;
                case 0xDC:
                    *(_BYTE*)(0xBC066BDB % a5 + a4) += -45 - a3[50];
                    goto LABEL_264;
                case 0xDD:
                    v13 = -1001748686;
                    v14 = a3[45] - 4;
                    goto LABEL_262;
                case 0xDE:
                    v9 = 0x14C6512D % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[60] ^ 0xF;
                    goto LABEL_263;
                case 0xDF:
                    v9 = 0x62EA9F3C % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[15] ^ 0x96;
                    goto LABEL_263;
                case 0xE0:
                    v13 = 124170511;
                    v14 = a3[150] + 1;
                    goto LABEL_262;
                case 0xE1:
                    *(_BYTE*)(0x44278796 % a5 + a4) += 64 - a3[1];
                    goto LABEL_264;
                case 0xE2:
                    *(_BYTE*)(0x4A75E001 % a5 + a4) += 125 - a3[192];
                    goto LABEL_264;
                case 0xE3:
                    v15 = 0x104842C0 % a5;
                    v16 = (unsigned __int8)a3[131] - 2133858502;
                    goto LABEL_12;
                case 0xE4:
                    *(_BYTE*)(0xC948D683 % a5 + a4) += -21 - a3[58];
                    goto LABEL_264;
                case 0xE5:
                    *(_BYTE*)(0x80CFE73A % a5 + a4) += 124 - a3[21];
                    goto LABEL_264;
                case 0xE6:
                    v89 = ((unsigned int)(unsigned __int8)a3[132] + 1075245111) % a5;
                    v90 = *(_BYTE*)(v89 + a4) - 1;
                    *(_BYTE*)(0x6CD05115 % a5 + a4) -= v90;
                    *(_BYTE*)((unsigned int)v89 + a4) = v90;
                    goto LABEL_264;
                case 0xE7:
                    v34 = a3[55];
                    v13 = 41828228;
                    goto LABEL_261;
                case 0xE8:
                    v91 = ((unsigned int)(unsigned __int8)a3[30] + 1974491241) % a5;
                    v92 = *(_BYTE*)(v91 + a4) - 1;
                    *(_BYTE*)(0x4016F037 % a5 + a4) -= v92;
                    *(_BYTE*)((unsigned int)v91 + a4) = v92;
                    goto LABEL_264;
                case 0xE9:
                    v93 = ((unsigned int)(unsigned __int8)a3[105] + 2144106888) % a5;
                    v94 = *(_BYTE*)(v93 + a4) - 1;
                    *(_BYTE*)(0x28556A1E % a5 + a4) -= v94;
                    *(_BYTE*)((unsigned int)v93 + a4) = v94;
                    goto LABEL_264;
                case 0xEA:
                    *(_BYTE*)(0x75B05869 % a5 + a4) += -43 - a3[136];
                    goto LABEL_264;
                case 0xEB:
                    *(_BYTE*)(0x7FCC7988 % a5 + a4) += -66 - a3[43];
                    goto LABEL_264;
                case 0xEC:
                    *(_BYTE*)(0x3DA1522B % a5 + a4) += 3 - a3[66];
                    goto LABEL_264;
                case 0xED:
                    v95 = ((unsigned int)(unsigned __int8)a3[253] - 710273844) % a5;
                    v96 = *(_BYTE*)(v95 + a4) - 1;
                    *(_BYTE*)(0x17971442 % a5 + a4) -= v96;
                    *(_BYTE*)((unsigned int)v95 + a4) = v96;
                    goto LABEL_264;
                case 0xEE:
                    v15 = 0x1788E9FD % a5;
                    v16 = (unsigned __int8)a3[204] - 351104929;
                    goto LABEL_12;
                case 0xEF:
                    v9 = 0xD5AA14CC % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[95] ^ 0xA6;
                    goto LABEL_263;
                case 0xF0:
                    v9 = 0xEB12905F % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[166] ^ 0xD1;
                    goto LABEL_263;
                case 0xF1:
                    v15 = 0xDE6529A6 % a5;
                    v16 = (unsigned __int8)a3[209] - 1643547312;
                    goto LABEL_12;
                case 0xF2:
                    v15 = 0xC0F939D1 % a5;
                    v16 = (unsigned __int8)a3[80] + 153321171;
                    goto LABEL_12;
                case 0xF3:
                    v9 = 0x9E097550 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[211] ^ 0x4A;
                    goto LABEL_263;
                case 0xF4:
                    v15 = 0x9237ED3 % a5;
                    v16 = (unsigned __int8)a3[74] - 23020571;
                    goto LABEL_12;
                case 0xF5:
                    v13 = -823841206;
                    v14 = a3[229] - 4;
                    goto LABEL_262;
                case 0xF6:
                    *(_BYTE*)(0xFEA0BBE5 % a5 + a4) += 121 - a3[20];
                    goto LABEL_264;
                case 0xF7:
                    v9 = 0xE9DC3F14 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[135] ^ 0x2E;
                    goto LABEL_263;
                case 0xF8:
                    v9 = 0x808F3187 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[46] ^ 0x39;
                    goto LABEL_263;
                case 0xF9:
                    *(_BYTE*)(0x1C35E62E % a5 + a4) += -24 - a3[57];
                    goto LABEL_264;
                case 0xFA:
                    v9 = 0xAF332439 % a5;
                    v10 = *(_BYTE*)(v9 + a4) ^ a3[24] ^ 0x7B;
                    goto LABEL_263;
                case 0xFB:
                    v15 = 0xF4D75618 % a5;
                    v16 = (unsigned __int8)a3[123] - 866953902;
                LABEL_12:
                    v17 = v15;
                    v18 = v16 % a5;
                    v19 = *(_BYTE*)(v17 + a4);
                    *(_BYTE*)(v17 + a4) = *(_BYTE*)(v18 + a4);
                    *(_BYTE*)((unsigned int)v18 + a4) = v19;
                    goto LABEL_264;
                case 0xFC:
                    v13 = 1455881339;
                    v14 = a3[82] - 3;
                    goto LABEL_262;
                case 0xFD:
                    v13 = -866953902;
                    v14 = a3[205] - 4;
                    goto LABEL_262;
                case 0xFE:
                    v13 = -1110677811;
                    v14 = a3[92] - 1;
                    goto LABEL_262;
                case 0xFF:
                    v34 = a3[175];
                    v13 = 1182195292;
                LABEL_261:
                    v14 = v34 - 2;
                LABEL_262:
                    v9 = v13 % a5;
                    v10 = __ROR1__(*(_BYTE*)(v9 + a4), v14 & 7);
                LABEL_263:
                    *(_BYTE*)(v9 + a4) = v10;
                LABEL_264:
                    if (++v8 >= a2)
                        return;
                    continue;
                }
            }
        }
    }
}