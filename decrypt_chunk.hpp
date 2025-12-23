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
    char v10; // cl
    __int64 v11; // rdx
    char v12; // cl
    char v13; // cl
    unsigned int v14; // eax
    unsigned int v15; // edx
    unsigned int v16; // eax
    __int64 v17; // rdx
    char v18; // cl
    char v19; // cl
    unsigned int v20; // eax
    __int64 v21; // rdx
    char v22; // cl
    __int64 v23; // rdx
    char v24; // cl
    __int64 v25; // rdx
    char v26; // cl
    __int64 v27; // rdx
    char v28; // cl
    __int64 v29; // rdx
    char v30; // cl
    char v31; // cl
    unsigned int v32; // eax
    __int64 v33; // rdx
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
    __int64 v97; // rdx
    char v98; // cl
    __int64 v99; // rdx
    char v100; // cl
    __int64 v101; // rdx
    char v102; // cl
    __int64 v103; // rdx
    char v104; // cl
    __int64 v105; // rdx
    char v106; // cl
    __int64 v107; // rdx
    char v108; // cl
    __int64 v109; // rdx
    char v110; // cl
    __int64 v111; // rdx
    char v112; // cl
    __int64 v113; // rdx
    char v114; // cl
    __int64 v115; // rdx
    char v116; // cl
    __int64 v117; // rdx
    char v118; // cl
    __int64 v119; // rdx
    char v120; // cl
    __int64 v121; // rdx
    char v122; // cl
    __int64 v123; // rdx
    char v124; // cl
    __int64 v125; // rdx
    char v126; // cl
    __int64 v127; // rdx
    char v128; // cl
    __int64 v129; // rdx
    char v130; // cl
    __int64 v131; // rdx
    char v132; // cl
    __int64 v133; // rdx
    char v134; // cl
    __int64 v135; // rdx
    char v136; // cl
    __int64 v137; // rcx
    __int64 v138; // rdx
    char v139; // r9

    if (a5)
    {
        v8 = 0LL;
        if (a2)
        {
            while (2)
            {
                switch (a1[v8])
                {
                case 0:
                    *(_BYTE*)(0xC9526405 % a5 + a4) = __ROR1__(*(_BYTE*)(0xC9526405 % a5 + a4), (a3[180] - 1) & 7);
                    goto LABEL_264;
                case 1:
                    *(_BYTE*)(0xB2CFC6B4 % a5 + a4) += 50 - a3[167];
                    goto LABEL_264;
                case 2:
                    v9 = ((unsigned int)(unsigned __int8)a3[206] + 1842566745) % a5;
                    v10 = *(_BYTE*)(v9 + a4) - 1;
                    *(_BYTE*)(0x6C9B1AA7 % a5 + a4) -= v10;
                    *(_BYTE*)((unsigned int)v9 + a4) = v10;
                    goto LABEL_264;
                case 3:
                    v11 = ((unsigned int)(unsigned __int8)a3[89] - 593018952) % a5;
                    v12 = *(_BYTE*)(v11 + a4) - 1;
                    *(_BYTE*)(0x3D5EAACE % a5 + a4) -= v12;
                    *(_BYTE*)((unsigned int)v11 + a4) = v12;
                    goto LABEL_264;
                case 4:
                    *(_BYTE*)(0x6DD35659 % a5 + a4) += 101 - a3[184];
                    goto LABEL_264;
                case 5:
                    *(_BYTE*)(0xDCA73FB8 % a5 + a4) += 14 - a3[155];
                    goto LABEL_264;
                case 6:
                    *(_BYTE*)(0x9645BF9B % a5 + a4) ^= a3[242] ^ 0xED;
                    goto LABEL_264;
                case 7:
                    v13 = a3[237];
                    v14 = 51088370;
                    goto LABEL_12;
                case 8:
                    *(_BYTE*)(0xAC0642ED % a5 + a4) ^= a3[252] ^ 0xCF;
                    goto LABEL_264;
                case 9:
                    *(_BYTE*)(0x6EA1C9FC % a5 + a4) ^= a3[207] ^ 0x56;
                    goto LABEL_264;
                case 0xA:
                    *(_BYTE*)(0xBDC30CF % a5 + a4) += 63 - a3[86];
                    goto LABEL_264;
                case 0xB:
                    *(_BYTE*)(0xEBF60856 % a5 + a4) = __ROR1__(*(_BYTE*)(0xEBF60856 % a5 + a4), a3[193] & 7);
                    goto LABEL_264;
                case 0xC:
                    *(_BYTE*)(0xAF7D5DC1 % a5 + a4) += -67 - a3[128];
                    goto LABEL_264;
                case 0xD:
                    *(_BYTE*)(0x57D8C980 % a5 + a4) ^= a3[67] ^ 0xFA;
                    goto LABEL_264;
                case 0xE:
                    *(_BYTE*)(0xEAA24243 % a5 + a4) += 43 - a3[250];
                    goto LABEL_264;
                case 0xF:
                    v15 = 0x20A2A3FA % a5;
                    v16 = (unsigned __int8)a3[213] - 896212412;
                    goto LABEL_263;
                case 0x10:
                    *(_BYTE*)(0xBDBB1AD5 % a5 + a4) = __ROR1__(*(_BYTE*)(0xBDBB1AD5 % a5 + a4), (a3[68] - 1) & 7);
                    goto LABEL_264;
                case 0x11:
                    v15 = 0xCA94E244 % a5;
                    v16 = (unsigned __int8)a3[247] + 1480532702;
                    goto LABEL_263;
                case 0x12:
                    *(_BYTE*)(0xD34E07F7 % a5 + a4) ^= a3[222] ^ 0x29;
                    goto LABEL_264;
                case 0x13:
                    *(_BYTE*)(0x583F22DE % a5 + a4) = __ROR1__(*(_BYTE*)(0x583F22DE % a5 + a4), a3[41] & 7);
                    goto LABEL_264;
                case 0x14:
                    v17 = ((unsigned int)(unsigned __int8)a3[72] + 1908135403) % a5;
                    v18 = *(_BYTE*)(v17 + a4) - 1;
                    *(_BYTE*)(0x25462E29 % a5 + a4) -= v18;
                    *(_BYTE*)((unsigned int)v17 + a4) = v18;
                    goto LABEL_264;
                case 0x15:
                    v15 = 0xBF11F848 % a5;
                    v16 = (unsigned __int8)a3[235] + 294029570;
                    goto LABEL_263;
                case 0x16:
                    v19 = a3[2];
                    v20 = 1908135403;
                    goto LABEL_28;
                case 0x17:
                    v21 = ((unsigned int)(unsigned __int8)a3[189] - 1820119156) % a5;
                    v22 = *(_BYTE*)(v21 + a4) - 1;
                    *(_BYTE*)(0x11868902 % a5 + a4) -= v22;
                    *(_BYTE*)((unsigned int)v21 + a4) = v22;
                    goto LABEL_264;
                case 0x18:
                    v23 = ((unsigned int)(unsigned __int8)a3[140] - 1394458593) % a5;
                    v24 = *(_BYTE*)(v23 + a4) - 1;
                    *(_BYTE*)(0x22FD8BBD % a5 + a4) -= v24;
                    *(_BYTE*)((unsigned int)v23 + a4) = v24;
                    goto LABEL_264;
                case 0x19:
                    *(_BYTE*)(0x93832F8C % a5 + a4) ^= a3[31] ^ 0x66;
                    goto LABEL_264;
                case 0x1A:
                    *(_BYTE*)(0xACE2401F % a5 + a4) ^= a3[102] ^ 0x91;
                    goto LABEL_264;
                case 0x1B:
                    *(_BYTE*)(0xD2E51A66 % a5 + a4) ^= a3[145] ^ 0x10;
                    goto LABEL_264;
                case 0x1C:
                    v25 = ((unsigned int)(unsigned __int8)a3[16] + 319167123) % a5;
                    v26 = *(_BYTE*)(v25 + a4) - 1;
                    *(_BYTE*)(0xB1AC6791 % a5 + a4) -= v26;
                    *(_BYTE*)((unsigned int)v25 + a4) = v26;
                    goto LABEL_264;
                case 0x1D:
                    v15 = 0xED56EC10 % a5;
                    v16 = (unsigned __int8)a3[147] - 1243849974;
                    goto LABEL_263;
                case 0x1E:
                    v15 = 0x13061A93 % a5;
                    v16 = (unsigned __int8)a3[10] + 2011051429;
                    goto LABEL_263;
                case 0x1F:
                    *(_BYTE*)(0xB5DC5B0A % a5 + a4) ^= a3[165] ^ 0xD4;
                    goto LABEL_264;
                case 0x20:
                    v27 = ((unsigned int)(unsigned __int8)a3[212] + 1445886279) % a5;
                    v28 = *(_BYTE*)(v27 + a4) - 1;
                    *(_BYTE*)(0x77DE35A5 % a5 + a4) -= v28;
                    *(_BYTE*)((unsigned int)v27 + a4) = v28;
                    goto LABEL_264;
                case 0x21:
                    v15 = 0x3FBAD1D4 % a5;
                    v16 = (unsigned __int8)a3[71] - 1046016274;
                    goto LABEL_263;
                case 0x22:
                    *(_BYTE*)(0x562E7947 % a5 + a4) = __ROR1__(*(_BYTE*)(0x562E7947 % a5 + a4), (a3[238] + 1) & 7);
                    goto LABEL_264;
                case 0x23:
                    *(_BYTE*)(0xC1A70EEE % a5 + a4) ^= a3[249] ^ 0xD8;
                    goto LABEL_264;
                case 0x24:
                    *(_BYTE*)(0x47F2A9F9 % a5 + a4) = __ROR1__(*(_BYTE*)(0x47F2A9F9 % a5 + a4), (a3[216] + 3) & 7);
                    goto LABEL_264;
                case 0x25:
                    v15 = 0x9B5FC4D8 % a5;
                    v16 = (unsigned __int8)a3[59] - 652396014;
                    goto LABEL_263;
                case 0x26:
                    *(_BYTE*)(0xECD8B03B % a5 + a4) += 115 - a3[18];
                    goto LABEL_264;
                case 0x27:
                    v15 = 0xD91D3A12 % a5;
                    v16 = (unsigned __int8)a3[141] - 1417811684;
                    goto LABEL_263;
                case 0x28:
                    v15 = 0xE671B88D % a5;
                    v16 = (unsigned __int8)a3[28] + 720130927;
                    goto LABEL_263;
                case 0x29:
                    v15 = 0xAB7DE91C % a5;
                    v16 = (unsigned __int8)a3[111] + 1071128694;
                    goto LABEL_263;
                case 0x2A:
                    v29 = ((unsigned int)(unsigned __int8)a3[118] + 178230625) % a5;
                    v30 = *(_BYTE*)(v29 + a4) - 1;
                    *(_BYTE*)(0x2AEC536F % a5 + a4) -= v30;
                    *(_BYTE*)((unsigned int)v29 + a4) = v30;
                    goto LABEL_264;
                case 0x2B:
                    v15 = 0x3FD82076 % a5;
                    v16 = (unsigned __int8)a3[97] + 68723360;
                    goto LABEL_263;
                case 0x2C:
                    v15 = 0xA9F9561 % a5;
                    v16 = (unsigned __int8)a3[160] + 1726953187;
                    goto LABEL_263;
                case 0x2D:
                    v31 = a3[227];
                    v32 = 68723360;
                    goto LABEL_52;
                case 0x2E:
                    *(_BYTE*)(0x66EF36E3 % a5 + a4) ^= a3[26] ^ 0x75;
                    goto LABEL_264;
                case 0x2F:
                    *(_BYTE*)(0xFA96461A % a5 + a4) ^= a3[117] ^ 0x64;
                    goto LABEL_264;
                case 0x30:
                    v15 = 0xCD50B475 % a5;
                    v16 = (unsigned __int8)a3[100] - 8819049;
                    goto LABEL_263;
                case 0x31:
                    *(_BYTE*)(0x25829564 % a5 + a4) += 2 - a3[151];
                    goto LABEL_264;
                case 0x32:
                    v15 = 0xFF796E97 % a5;
                    v16 = (unsigned __int8)a3[254] - 100808247;
                    goto LABEL_263;
                case 0x33:
                    *(_BYTE*)(0x8EDF6EFE % a5 + a4) += -104 - a3[201];
                    goto LABEL_264;
                case 0x34:
                    v15 = 0xF9FDC9C9 % a5;
                    v16 = (unsigned __int8)a3[104] + 1424576139;
                    goto LABEL_263;
                case 0x35:
                    v31 = a3[139];
                    v32 = -652106392;
                LABEL_52:
                    *(_BYTE*)(v32 % a5 + a4) = __ROR1__(*(_BYTE*)(v32 % a5 + a4), (v31 + 2) & 7);
                    goto LABEL_264;
                case 0x36:
                    v19 = a3[34];
                    v20 = 1424576139;
                LABEL_28:
                    *(_BYTE*)(v20 % a5 + a4) = __ROR1__(*(_BYTE*)(v20 % a5 + a4), (v19 - 3) & 7);
                    goto LABEL_264;
                case 0x37:
                    v13 = a3[93];
                    v14 = -437739742;
                    goto LABEL_12;
                case 0x38:
                    *(_BYTE*)(0xF617C95D % a5 + a4) = __ROR1__(*(_BYTE*)(0xF617C95D % a5 + a4), (a3[172] - 1) & 7);
                    goto LABEL_264;
                case 0x39:
                    *(_BYTE*)(0xCB72F6AC % a5 + a4) = __ROR1__(*(_BYTE*)(0xCB72F6AC % a5 + a4), (a3[191] - 2) & 7);
                    goto LABEL_264;
                case 0x3A:
                    v33 = ((unsigned int)(unsigned __int8)a3[134] + 849078065) % a5;
                    v34 = *(_BYTE*)(v33 + a4) - 1;
                    *(_BYTE*)(0xB576ABF % a5 + a4) -= v34;
                    *(_BYTE*)((unsigned int)v33 + a4) = v34;
                    goto LABEL_264;
                case 0x3B:
                    *(_BYTE*)(0x56B81A86 % a5 + a4) ^= a3[49] ^ 0x30;
                    goto LABEL_264;
                case 0x3C:
                    *(_BYTE*)(0x329BE731 % a5 + a4) ^= a3[48] ^ 0x33;
                    goto LABEL_264;
                case 0x3D:
                    *(_BYTE*)(0x874EED30 % a5 + a4) ^= a3[51] ^ 0x2A;
                    goto LABEL_264;
                case 0x3E:
                    *(_BYTE*)(0x28CA9733 % a5 + a4) ^= a3[42] ^ 0x45;
                    goto LABEL_264;
                case 0x3F:
                    v35 = ((unsigned int)(unsigned __int8)a3[69] + 913124596) % a5;
                    v36 = *(_BYTE*)(v35 + a4) - 1;
                    *(_BYTE*)(0x1B89652A % a5 + a4) -= v36;
                    *(_BYTE*)((unsigned int)v35 + a4) = v36;
                    goto LABEL_264;
                case 0x40:
                    *(_BYTE*)(0x5BE79745 % a5 + a4) = __ROR1__(*(_BYTE*)(0x5BE79745 % a5 + a4), (a3[244] - 1) & 7);
                    goto LABEL_264;
                case 0x41:
                    v15 = 0x366D2CF4 % a5;
                    v16 = (unsigned __int8)a3[231] - 1234091250;
                    goto LABEL_263;
                case 0x42:
                    v15 = 0xE3ABE7E7 % a5;
                    v16 = (unsigned __int8)a3[14] - 1144222311;
                    goto LABEL_263;
                case 0x43:
                    *(_BYTE*)(0xB671430E % a5 + a4) += 8 - a3[153];
                    goto LABEL_264;
                case 0x44:
                    *(_BYTE*)(0xBBCC8D99 % a5 + a4) ^= a3[248] ^ 0xDB;
                    goto LABEL_264;
                case 0x45:
                    *(_BYTE*)(0xCB2899F8 % a5 + a4) += -50 - a3[219];
                    goto LABEL_264;
                case 0x46:
                    *(_BYTE*)(0x357AB0DB % a5 + a4) ^= a3[50] ^ 0x2D;
                    goto LABEL_264;
                case 0x47:
                    v13 = a3[45];
                    v14 = 155301938;
                    goto LABEL_12;
                case 0x48:
                    *(_BYTE*)(0x81E4BE2D % a5 + a4) ^= a3[60] ^ 0xF;
                    goto LABEL_264;
                case 0x49:
                    v37 = ((unsigned int)(unsigned __int8)a3[15] + 615385238) % a5;
                    v38 = *(_BYTE*)(v37 + a4) - 1;
                    *(_BYTE*)(0x7783583C % a5 + a4) -= v38;
                    *(_BYTE*)((unsigned int)v37 + a4) = v38;
                    goto LABEL_264;
                case 0x4A:
                    v15 = 0x85C0860F % a5;
                    v16 = (unsigned __int8)a3[150] - 433693439;
                    goto LABEL_263;
                case 0x4B:
                    v39 = ((unsigned int)(unsigned __int8)a3[1] - 1788163136) % a5;
                    v40 = *(_BYTE*)(v39 + a4) - 1;
                    *(_BYTE*)(0x24AE0896 % a5 + a4) -= v40;
                    *(_BYTE*)((unsigned int)v39 + a4) = v40;
                    goto LABEL_264;
                case 0x4C:
                    *(_BYTE*)(0xE6265D01 % a5 + a4) = __ROR1__(*(_BYTE*)(0xE6265D01 % a5 + a4), (a3[192] + 3) & 7);
                    goto LABEL_264;
                case 0x4D:
                    v41 = ((unsigned int)(unsigned __int8)a3[131] + 313440314) % a5;
                    v42 = *(_BYTE*)(v41 + a4) - 1;
                    *(_BYTE*)(0x956ACBC0 % a5 + a4) -= v42;
                    *(_BYTE*)((unsigned int)v41 + a4) = v42;
                    goto LABEL_264;
                case 0x4E:
                    v15 = 0x1453B83 % a5;
                    v16 = (unsigned __int8)a3[58] + 1505222165;
                    goto LABEL_263;
                case 0x4F:
                    *(_BYTE*)(0x12AEB83A % a5 + a4) ^= a3[21] ^ 0x84;
                    goto LABEL_264;
                case 0x50:
                    *(_BYTE*)(0x59B7DE15 % a5 + a4) ^= a3[132] ^ 0x37;
                    goto LABEL_264;
                case 0x51:
                    *(_BYTE*)(0x643B9884 % a5 + a4) = __ROR1__(*(_BYTE*)(0x643B9884 % a5 + a4), (a3[55] - 2) & 7);
                    goto LABEL_264;
                case 0x52:
                    *(_BYTE*)(0x7182E537 % a5 + a4) ^= a3[30] ^ 0x69;
                    goto LABEL_264;
                case 0x53:
                    v43 = ((unsigned int)(unsigned __int8)a3[105] + 1065722504) % a5;
                    v44 = *(_BYTE*)(v43 + a4) - 1;
                    *(_BYTE*)(0x20258B1E % a5 + a4) -= v44;
                    *(_BYTE*)((unsigned int)v43 + a4) = v44;
                    goto LABEL_264;
                case 0x54:
                    v15 = 0x3A03F569 % a5;
                    v16 = (unsigned __int8)a3[136] - 1470507221;
                    goto LABEL_263;
                case 0x55:
                    v45 = ((unsigned int)(unsigned __int8)a3[43] + 1774290242) % a5;
                    v46 = *(_BYTE*)(v45 + a4) - 1;
                    *(_BYTE*)(0x3F85A288 % a5 + a4) -= v46;
                    *(_BYTE*)((unsigned int)v45 + a4) = v46;
                    goto LABEL_264;
                case 0x56:
                    *(_BYTE*)(0xA859D72B % a5 + a4) += 3 - a3[66];
                    goto LABEL_264;
                case 0x57:
                    v13 = a3[253];
                    v14 = 1774290242;
                    goto LABEL_12;
                case 0x58:
                    *(_BYTE*)(0xBA0D96FD % a5 + a4) ^= a3[204] ^ 0x5F;
                    goto LABEL_264;
                case 0x59:
                    v15 = 0x33100DCC % a5;
                    v16 = (unsigned __int8)a3[95] - 1339888986;
                    goto LABEL_263;
                case 0x5A:
                    v15 = 0xD404A55F % a5;
                    v16 = (unsigned __int8)a3[166] - 167512367;
                    goto LABEL_263;
                case 0x5B:
                    *(_BYTE*)(0xB022EAA6 % a5 + a4) = __ROR1__(*(_BYTE*)(0xB022EAA6 % a5 + a4), a3[209] & 7);
                    goto LABEL_264;
                case 0x5C:
                    *(_BYTE*)(0xF603F6D1 % a5 + a4) += 45 - a3[80];
                    goto LABEL_264;
                case 0x5D:
                    *(_BYTE*)(0x101D3E50 % a5 + a4) ^= a3[211] ^ 0x4A;
                    goto LABEL_264;
                case 0x5E:
                    *(_BYTE*)(0x4F4C23D3 % a5 + a4) = __ROR1__(*(_BYTE*)(0x4F4C23D3 % a5 + a4), (a3[74] - 3) & 7);
                    goto LABEL_264;
                case 0x5F:
                    v15 = 0xB73F3F4A % a5;
                    v16 = (unsigned __int8)a3[229] + 1743706132;
                    goto LABEL_263;
                case 0x60:
                    *(_BYTE*)(0x651688E5 % a5 + a4) += 121 - a3[20];
                    goto LABEL_264;
                case 0x61:
                    v47 = ((unsigned int)(unsigned __int8)a3[135] - 1257945298) % a5;
                    v48 = *(_BYTE*)(v47 + a4) - 1;
                    *(_BYTE*)(0x67EED814 % a5 + a4) -= v48;
                    *(_BYTE*)((unsigned int)v47 + a4) = v48;
                    goto LABEL_264;
                case 0x62:
                    v49 = ((unsigned int)(unsigned __int8)a3[46] + 495518009) % a5;
                    v50 = *(_BYTE*)(v49 + a4) - 1;
                    *(_BYTE*)(0xC1FB6687 % a5 + a4) -= v50;
                    *(_BYTE*)((unsigned int)v49 + a4) = v50;
                    goto LABEL_264;
                case 0x63:
                    v15 = 0xB505472E % a5;
                    v16 = (unsigned __int8)a3[57] + 260685592;
                    goto LABEL_263;
                case 0x64:
                    *(_BYTE*)(0x1D890139 % a5 + a4) += -123 - a3[24];
                    goto LABEL_264;
                case 0x65:
                    v51 = ((unsigned int)(unsigned __int8)a3[123] - 1824455086) % a5;
                    v52 = *(_BYTE*)(v51 + a4) - 1;
                    *(_BYTE*)(0xF89BF18 % a5 + a4) -= v52;
                    *(_BYTE*)((unsigned int)v51 + a4) = v52;
                    goto LABEL_264;
                case 0x66:
                    *(_BYTE*)(0xA593C17B % a5 + a4) = __ROR1__(*(_BYTE*)(0xA593C17B % a5 + a4), (a3[82] - 3) & 7);
                    goto LABEL_264;
                case 0x67:
                    v15 = 0x93410652 % a5;
                    v16 = (unsigned __int8)a3[205] + 280631132;
                    goto LABEL_263;
                case 0x68:
                    v53 = ((unsigned int)(unsigned __int8)a3[92] - 2109683537) % a5;
                    v54 = *(_BYTE*)(v53 + a4) - 1;
                    *(_BYTE*)(0x9F0753CD % a5 + a4) -= v54;
                    *(_BYTE*)((unsigned int)v53 + a4) = v54;
                    goto LABEL_264;
                case 0x69:
                    *(_BYTE*)(0x10BA175C % a5 + a4) ^= a3[175] ^ 0xB6;
                    goto LABEL_264;
                case 0x6A:
                    *(_BYTE*)(0x8240C8AF % a5 + a4) = __ROR1__(*(_BYTE*)(0x8240C8AF % a5 + a4), (a3[182] + 1) & 7);
                    goto LABEL_264;
                case 0x6B:
                    v15 = 0x8BFC0B6 % a5;
                    v16 = (unsigned __int8)a3[161] + 743916768;
                    goto LABEL_263;
                case 0x6C:
                    *(_BYTE*)(0x1739B4A1 % a5 + a4) = __ROR1__(*(_BYTE*)(0x1739B4A1 % a5 + a4), (a3[224] + 3) & 7);
                    goto LABEL_264;
                case 0x6D:
                    v55 = ((unsigned int)(unsigned __int8)a3[35] - 843842982) % a5;
                    v56 = *(_BYTE*)(v55 + a4) - 1;
                    *(_BYTE*)(0x2C5744E0 % a5 + a4) -= v56;
                    *(_BYTE*)((unsigned int)v55 + a4) = v56;
                    goto LABEL_264;
                case 0x6E:
                    *(_BYTE*)(0x780C5023 % a5 + a4) += 75 - a3[90];
                    goto LABEL_264;
                case 0x6F:
                    v57 = ((unsigned int)(unsigned __int8)a3[181] + 1372056484) % a5;
                    v58 = *(_BYTE*)(v57 + a4) - 1;
                    *(_BYTE*)(0xCDB3FA5A % a5 + a4) -= v58;
                    *(_BYTE*)((unsigned int)v57 + a4) = v58;
                    goto LABEL_264;
                case 0x70:
                    v15 = 0x549897B5 % a5;
                    v16 = (unsigned __int8)a3[164] - 397251625;
                    goto LABEL_263;
                case 0x71:
                    *(_BYTE*)(0x51C7EBA4 % a5 + a4) = __ROR1__(*(_BYTE*)(0x51C7EBA4 % a5 + a4), (a3[215] - 2) & 7);
                    goto LABEL_264;
                case 0x72:
                    v59 = ((unsigned int)(unsigned __int8)a3[62] - 612323063) % a5;
                    v60 = *(_BYTE*)(v59 + a4) - 1;
                    *(_BYTE*)(0xE8526BD7 % a5 + a4) -= v60;
                    *(_BYTE*)((unsigned int)v59 + a4) = v60;
                    goto LABEL_264;
                case 0x73:
                    *(_BYTE*)(0x6F59773E % a5 + a4) = __ROR1__(*(_BYTE*)(0x6F59773E % a5 + a4), a3[9] & 7);
                    goto LABEL_264;
                case 0x74:
                    *(_BYTE*)(0xDB80B109 % a5 + a4) += 53 - a3[168];
                    goto LABEL_264;
                case 0x75:
                    *(_BYTE*)(0xAFC5EFA8 % a5 + a4) += -98 - a3[203];
                    goto LABEL_264;
                case 0x76:
                    v61 = ((unsigned int)(unsigned __int8)a3[98] - 779684707) % a5;
                    v62 = *(_BYTE*)(v61 + a4) - 1;
                    *(_BYTE*)(0x53756FCB % a5 + a4) -= v62;
                    *(_BYTE*)((unsigned int)v61 + a4) = v62;
                    goto LABEL_264;
                case 0x77:
                    v13 = a3[157];
                    v14 = -2032583838;
                    goto LABEL_12;
                case 0x78:
                    *(_BYTE*)(0xD186F49D % a5 + a4) = __ROR1__(*(_BYTE*)(0xD186F49D % a5 + a4), (a3[236] - 1) & 7);
                    goto LABEL_264;
                case 0x79:
                    v63 = ((unsigned int)(unsigned __int8)a3[255] + 1466796742) % a5;
                    v64 = *(_BYTE*)(v63 + a4) - 1;
                    *(_BYTE*)(0x426274EC % a5 + a4) -= v64;
                    *(_BYTE*)((unsigned int)v63 + a4) = v64;
                    goto LABEL_264;
                case 0x7A:
                    *(_BYTE*)(0xBED1EFFF % a5 + a4) = __ROR1__(*(_BYTE*)(0xBED1EFFF % a5 + a4), (a3[198] + 1) & 7);
                    goto LABEL_264;
                case 0x7B:
                    *(_BYTE*)(0x576D8AC6 % a5 + a4) += -112 - a3[113];
                    goto LABEL_264;
                case 0x7C:
                    v65 = ((unsigned int)(unsigned __int8)a3[112] + 921878643) % a5;
                    v66 = *(_BYTE*)(v65 + a4) - 1;
                    *(_BYTE*)(0xB30C9671 % a5 + a4) -= v66;
                    *(_BYTE*)((unsigned int)v65 + a4) = v66;
                    goto LABEL_264;
                case 0x7D:
                    v15 = 0x249DF70 % a5;
                    v16 = (unsigned __int8)a3[115] + 398846314;
                    goto LABEL_263;
                case 0x7E:
                    *(_BYTE*)(0x36F2C073 % a5 + a4) = __ROR1__(*(_BYTE*)(0x36F2C073 % a5 + a4), (a3[106] - 3) & 7);
                    goto LABEL_264;
                case 0x7F:
                    *(_BYTE*)(0x17C5E96A % a5 + a4) ^= a3[133] ^ 0x34;
                    goto LABEL_264;
                case 0x80:
                    v67 = ((unsigned int)(unsigned __int8)a3[52] + 1107621159) % a5;
                    v68 = *(_BYTE*)(v67 + a4) - 1;
                    *(_BYTE*)(0x7130A85 % a5 + a4) -= v68;
                    *(_BYTE*)((unsigned int)v67 + a4) = v68;
                    goto LABEL_264;
                case 0x81:
                    *(_BYTE*)(0x1947D334 % a5 + a4) = __ROR1__(*(_BYTE*)(0x1947D334 % a5 + a4), (a3[39] - 2) & 7);
                    goto LABEL_264;
                case 0x82:
                    *(_BYTE*)(0x4204F527 % a5 + a4) = __ROR1__(*(_BYTE*)(0x4204F527 % a5 + a4), (a3[78] + 1) & 7);
                    goto LABEL_264;
                case 0x83:
                    *(_BYTE*)(0x6AAB1B4E % a5 + a4) = __ROR1__(*(_BYTE*)(0x6AAB1B4E % a5 + a4), a3[217] & 7);
                    goto LABEL_264;
                case 0x84:
                    *(_BYTE*)(0x855004D9 % a5 + a4) = __ROR1__(*(_BYTE*)(0x855004D9 % a5 + a4), (a3[56] + 3) & 7);
                    goto LABEL_264;
                case 0x85:
                    v15 = 0xC00B3438 % a5;
                    v16 = (unsigned __int8)a3[27] - 891083662;
                    goto LABEL_263;
                case 0x86:
                    *(_BYTE*)(0x568BE21B % a5 + a4) = __ROR1__(*(_BYTE*)(0x568BE21B % a5 + a4), (a3[114] - 3) & 7);
                    goto LABEL_264;
                case 0x87:
                    *(_BYTE*)(0xCAE32472 % a5 + a4) += -124 - a3[109];
                    goto LABEL_264;
                case 0x88:
                    v69 = ((unsigned int)(unsigned __int8)a3[124] - 1437263025) % a5;
                    v70 = *(_BYTE*)(v69 + a4) - 1;
                    *(_BYTE*)(0x6281796D % a5 + a4) -= v70;
                    *(_BYTE*)((unsigned int)v69 + a4) = v70;
                    goto LABEL_264;
                case 0x89:
                    *(_BYTE*)(0xA92A267C % a5 + a4) = __ROR1__(*(_BYTE*)(0xA92A267C % a5 + a4), (a3[79] - 2) & 7);
                    goto LABEL_264;
                case 0x8A:
                    v15 = 0xAA551B4F % a5;
                    v16 = (unsigned __int8)a3[214] - 1224631231;
                    goto LABEL_263;
                case 0x8B:
                    v71 = ((unsigned int)(unsigned __int8)a3[65] + 493227520) % a5;
                    v72 = *(_BYTE*)(v71 + a4) - 1;
                    *(_BYTE*)(0xEE5548D6 % a5 + a4) -= v72;
                    *(_BYTE*)((unsigned int)v71 + a4) = v72;
                    goto LABEL_264;
                case 0x8C:
                    *(_BYTE*)(0xB7019C41 % a5 + a4) += 61 - *a3;
                    goto LABEL_264;
                case 0x8D:
                    *(_BYTE*)(0x1D660E00 % a5 + a4) = __ROR1__(*(_BYTE*)(0x1D660E00 % a5 + a4), (a3[195] + 2) & 7);
                    goto LABEL_264;
                case 0x8E:
                    *(_BYTE*)(0xEDAC74C3 % a5 + a4) ^= a3[122] ^ 0x55;
                    goto LABEL_264;
                case 0x8F:
                    *(_BYTE*)(0x646E0C7A % a5 + a4) ^= a3[85] ^ 0xC4;
                    goto LABEL_264;
                case 0x90:
                    *(_BYTE*)(0x339AE155 % a5 + a4) ^= a3[196] ^ 0x77;
                    goto LABEL_264;
                case 0x91:
                    *(_BYTE*)(0x2D2F8EC4 % a5 + a4) = __ROR1__(*(_BYTE*)(0x2D2F8EC4 % a5 + a4), (a3[119] - 2) & 7);
                    goto LABEL_264;
                case 0x92:
                    *(_BYTE*)(0xC6D00277 % a5 + a4) ^= a3[94] ^ 0xA9;
                    goto LABEL_264;
                case 0x93:
                    *(_BYTE*)(0xF3C3335E % a5 + a4) ^= a3[169] ^ 0xC8;
                    goto LABEL_264;
                case 0x94:
                    v15 = 0x989BFCA9 % a5;
                    v16 = (unsigned __int8)a3[200] + 564402283;
                    goto LABEL_263;
                case 0x95:
                    v73 = ((unsigned int)(unsigned __int8)a3[107] + 2063057282) % a5;
                    v74 = *(_BYTE*)(v73 + a4) - 1;
                    *(_BYTE*)(0x9B6A8CC8 % a5 + a4) -= v74;
                    *(_BYTE*)((unsigned int)v73 + a4) = v74;
                    goto LABEL_264;
                case 0x96:
                    v75 = ((unsigned int)(unsigned __int8)a3[130] - 1557405123) % a5;
                    v76 = *(_BYTE*)(v75 + a4) - 1;
                    *(_BYTE*)(0x21A4186B % a5 + a4) -= v76;
                    *(_BYTE*)((unsigned int)v75 + a4) = v76;
                    goto LABEL_264;
                case 0x97:
                    *(_BYTE*)(0x7AF7C182 % a5 + a4) += -12 - a3[61];
                    goto LABEL_264;
                case 0x98:
                    v77 = ((unsigned int)(unsigned __int8)a3[12] - 1482208609) % a5;
                    v78 = *(_BYTE*)(v77 + a4) - 1;
                    *(_BYTE*)(0xA32BE23D % a5 + a4) -= v78;
                    *(_BYTE*)((unsigned int)v77 + a4) = v78;
                    goto LABEL_264;
                case 0x99:
                    v15 = 0x65722C0C % a5;
                    v16 = (unsigned __int8)a3[159] + 1491073766;
                    goto LABEL_263;
                case 0x9A:
                    v79 = ((unsigned int)(unsigned __int8)a3[230] + 1692255761) % a5;
                    v80 = *(_BYTE*)(v79 + a4) - 1;
                    *(_BYTE*)(0xA7A74A9F % a5 + a4) -= v80;
                    *(_BYTE*)((unsigned int)v79 + a4) = v80;
                    goto LABEL_264;
                case 0x9B:
                    *(_BYTE*)(0x58DFFAE6 % a5 + a4) += 112 - a3[17];
                    goto LABEL_264;
                case 0x9C:
                    v15 = 0x64DDC611 % a5;
                    v16 = (unsigned __int8)a3[144] - 198808301;
                    goto LABEL_263;
                case 0x9D:
                    *(_BYTE*)(0xC5CD090 % a5 + a4) += 118 - a3[19];
                    goto LABEL_264;
                case 0x9E:
                    *(_BYTE*)(0xF4266D13 % a5 + a4) += -37 - a3[138];
                    goto LABEL_264;
                case 0x9F:
                    *(_BYTE*)(0x9FE5638A % a5 + a4) += -84 - a3[37];
                    goto LABEL_264;
                case 0xA0:
                    *(_BYTE*)(0x39851C25 % a5 + a4) ^= a3[84] ^ 0xC7;
                    goto LABEL_264;
                case 0xA1:
                    *(_BYTE*)(0x3801E54 % a5 + a4) ^= a3[199] ^ 0x6E;
                    goto LABEL_264;
                case 0xA2:
                    *(_BYTE*)(0x58B093C7 % a5 + a4) ^= a3[110] ^ 0x79;
                    goto LABEL_264;
                case 0xA3:
                    *(_BYTE*)(0x98AABF6E % a5 + a4) ^= a3[121] ^ 0x58;
                    goto LABEL_264;
                case 0xA4:
                    *(_BYTE*)(0xCF499879 % a5 + a4) ^= a3[88] ^ 0xBB;
                    goto LABEL_264;
                case 0xA5:
                    v81 = ((unsigned int)(unsigned __int8)a3[187] + 1475351186) % a5;
                    v82 = *(_BYTE*)(v81 + a4) - 1;
                    *(_BYTE*)(0xE834F958 % a5 + a4) -= v82;
                    *(_BYTE*)((unsigned int)v81 + a4) = v82;
                    goto LABEL_264;
                case 0xA6:
                    v83 = ((unsigned int)(unsigned __int8)a3[146] - 184865011) % a5;
                    v84 = *(_BYTE*)(v83 + a4) - 1;
                    *(_BYTE*)(0x45CB12BB % a5 + a4) -= v84;
                    *(_BYTE*)((unsigned int)v83 + a4) = v84;
                    goto LABEL_264;
                case 0xA7:
                    *(_BYTE*)(0x57F01292 % a5 + a4) += 100 - a3[13];
                    goto LABEL_264;
                case 0xA8:
                    v15 = 0xF4FB2F0D % a5;
                    v16 = (unsigned __int8)a3[156] - 1411023377;
                    goto LABEL_263;
                case 0xA9:
                    *(_BYTE*)(0x66DB859C % a5 + a4) += 10 - a3[239];
                    goto LABEL_264;
                case 0xAA:
                    *(_BYTE*)(0xABE57DEF % a5 + a4) ^= a3[246] ^ 0xE1;
                    goto LABEL_264;
                case 0xAB:
                    *(_BYTE*)(0x6BB6A0F6 % a5 + a4) ^= a3[225] ^ 0x20;
                    goto LABEL_264;
                case 0xAC:
                    *(_BYTE*)(0x22A613E1 % a5 + a4) = __ROR1__(*(_BYTE*)(0x22A613E1 % a5 + a4), (a3[32] + 3) & 7);
                    goto LABEL_264;
                case 0xAD:
                    *(_BYTE*)(0xF11F2720 % a5 + a4) ^= a3[99] ^ 0x9A;
                    goto LABEL_264;
                case 0xAE:
                    *(_BYTE*)(0xE88DA963 % a5 + a4) = __ROR1__(*(_BYTE*)(0xE88DA963 % a5 + a4), (a3[154] - 3) & 7);
                    goto LABEL_264;
                case 0xAF:
                    v85 = ((unsigned int)(unsigned __int8)a3[245] - 1451589148) % a5;
                    v86 = *(_BYTE*)(v85 + a4) - 1;
                    *(_BYTE*)(0xE3A4EE9A % a5 + a4) -= v86;
                    *(_BYTE*)((unsigned int)v85 + a4) = v86;
                    goto LABEL_264;
                case 0xB0:
                    *(_BYTE*)(0xF066BAF5 % a5 + a4) += -23 - a3[228];
                    goto LABEL_264;
                case 0xB1:
                    v87 = ((unsigned int)(unsigned __int8)a3[23] + 950714238) % a5;
                    v88 = *(_BYTE*)(v87 + a4) - 1;
                    *(_BYTE*)(0xA97A81E4 % a5 + a4) -= v88;
                    *(_BYTE*)((unsigned int)v87 + a4) = v88;
                    goto LABEL_264;
                case 0xB2:
                    v89 = ((unsigned int)(unsigned __int8)a3[126] - 276965303) % a5;
                    v90 = *(_BYTE*)(v89 + a4) - 1;
                    *(_BYTE*)(0x13E3A917 % a5 + a4) -= v90;
                    *(_BYTE*)((unsigned int)v89 + a4) = v90;
                    goto LABEL_264;
                case 0xB3:
                    v91 = ((unsigned int)(unsigned __int8)a3[73] + 670792168) % a5;
                    v92 = *(_BYTE*)(v91 + a4) - 1;
                    *(_BYTE*)(0x38AABF7E % a5 + a4) -= v92;
                    *(_BYTE*)((unsigned int)v91 + a4) = v92;
                    goto LABEL_264;
                case 0xB4:
                    v93 = ((unsigned int)(unsigned __int8)a3[232] - 1035087605) % a5;
                    v94 = *(_BYTE*)(v93 + a4) - 1;
                    *(_BYTE*)(0xEF7DD849 % a5 + a4) -= v94;
                    *(_BYTE*)((unsigned int)v93 + a4) = v94;
                    goto LABEL_264;
                case 0xB5:
                    v95 = ((unsigned int)(unsigned __int8)a3[11] - 672852062) % a5;
                    v96 = *(_BYTE*)(v95 + a4) - 1;
                    *(_BYTE*)(0x27FB79E8 % a5 + a4) -= v96;
                    *(_BYTE*)((unsigned int)v95 + a4) = v96;
                    goto LABEL_264;
                case 0xB6:
                    v97 = ((unsigned int)(unsigned __int8)a3[162] - 1717280803) % a5;
                    v98 = *(_BYTE*)(v97 + a4) - 1;
                    *(_BYTE*)(0xC24DD10B % a5 + a4) -= v98;
                    *(_BYTE*)((unsigned int)v97 + a4) = v98;
                    goto LABEL_264;
                case 0xB7:
                    v99 = ((unsigned int)(unsigned __int8)a3[221] - 62442708) % a5;
                    v100 = *(_BYTE*)(v99 + a4) - 1;
                    *(_BYTE*)(0xD7E517A2 % a5 + a4) -= v100;
                    *(_BYTE*)((unsigned int)v99 + a4) = v100;
                    goto LABEL_264;
                case 0xB8:
                    *(_BYTE*)(0x99A45FDD % a5 + a4) += -63 - a3[44];
                    goto LABEL_264;
                case 0xB9:
                    *(_BYTE*)(0xFC47332C % a5 + a4) = __ROR1__(*(_BYTE*)(0xFC47332C % a5 + a4), (a3[63] - 2) & 7);
                    goto LABEL_264;
                case 0xBA:
                    v101 = ((unsigned int)(unsigned __int8)a3[6] + 1251968433) % a5;
                    v102 = *(_BYTE*)(v101 + a4) - 1;
                    *(_BYTE*)(0x8E6CB53F % a5 + a4) -= v102;
                    *(_BYTE*)((unsigned int)v101 + a4) = v102;
                    goto LABEL_264;
                case 0xBB:
                    v103 = ((unsigned int)(unsigned __int8)a3[177] + 282988976) % a5;
                    v104 = *(_BYTE*)(v103 + a4) - 1;
                    *(_BYTE*)(0x54C23B06 % a5 + a4) -= v104;
                    *(_BYTE*)((unsigned int)v103 + a4) = v104;
                    goto LABEL_264;
                case 0xBC:
                    *(_BYTE*)(0x4A9F85B1 % a5 + a4) = __ROR1__(*(_BYTE*)(0x4A9F85B1 % a5 + a4), (a3[176] + 3) & 7);
                    goto LABEL_264;
                case 0xBD:
                    v105 = ((unsigned int)(unsigned __int8)a3[179] - 2040156758) % a5;
                    v106 = *(_BYTE*)(v105 + a4) - 1;
                    *(_BYTE*)(0x10DE11B0 % a5 + a4) -= v106;
                    *(_BYTE*)((unsigned int)v105 + a4) = v106;
                    goto LABEL_264;
                case 0xBE:
                    v107 = ((unsigned int)(unsigned __int8)a3[170] + 2014625221) % a5;
                    v108 = *(_BYTE*)(v107 + a4) - 1;
                    *(_BYTE*)(0xFF4F29B3 % a5 + a4) -= v108;
                    *(_BYTE*)((unsigned int)v107 + a4) = v108;
                    goto LABEL_264;
                case 0xBF:
                    *(_BYTE*)(0x8665ADAA % a5 + a4) += -116 - a3[197];
                    goto LABEL_264;
                case 0xC0:
                    *(_BYTE*)(0x7814BDC5 % a5 + a4) = __ROR1__(*(_BYTE*)(0x7814BDC5 % a5 + a4), (a3[116] - 1) & 7);
                    goto LABEL_264;
                case 0xC1:
                    v109 = ((unsigned int)(unsigned __int8)a3[103] + 340538254) % a5;
                    v110 = *(_BYTE*)(v109 + a4) - 1;
                    *(_BYTE*)(0x539FB974 % a5 + a4) -= v110;
                    *(_BYTE*)((unsigned int)v109 + a4) = v110;
                    goto LABEL_264;
                case 0xC2:
                    *(_BYTE*)(0x9EE64267 % a5 + a4) += -25 - a3[142];
                    goto LABEL_264;
                case 0xC3:
                    v111 = ((unsigned int)(unsigned __int8)a3[25] + 1200557688) % a5;
                    v112 = *(_BYTE*)(v111 + a4) - 1;
                    *(_BYTE*)(0x144C338E % a5 + a4) -= v112;
                    *(_BYTE*)((unsigned int)v111 + a4) = v112;
                    goto LABEL_264;
                case 0xC4:
                    v15 = 0x9B9DBC19 % a5;
                    v16 = (unsigned __int8)a3[120] + 1421431643;
                    goto LABEL_263;
                case 0xC5:
                    *(_BYTE*)(0x478F0E78 % a5 + a4) = __ROR1__(*(_BYTE*)(0x478F0E78 % a5 + a4), (a3[91] + 2) & 7);
                    goto LABEL_264;
                case 0xC6:
                    *(_BYTE*)(0x54B9535B % a5 + a4) ^= a3[178] ^ 0xAD;
                    goto LABEL_264;
                case 0xC7:
                    v113 = ((unsigned int)(unsigned __int8)a3[173] + 1674982588) % a5;
                    v114 = *(_BYTE*)(v113 + a4) - 1;
                    *(_BYTE*)(0x362FD0B2 % a5 + a4) -= v114;
                    *(_BYTE*)((unsigned int)v113 + a4) = v114;
                    goto LABEL_264;
                case 0xC8:
                    v115 = ((unsigned int)(unsigned __int8)a3[188] + 1490677903) % a5;
                    v116 = *(_BYTE*)(v115 + a4) - 1;
                    *(_BYTE*)(0x831C74AD % a5 + a4) -= v116;
                    *(_BYTE*)((unsigned int)v115 + a4) = v116;
                    goto LABEL_264;
                case 0xC9:
                    v15 = 0x63D634BC % a5;
                    v16 = (unsigned __int8)a3[143] - 1423193834;
                    goto LABEL_263;
                case 0xCA:
                    v117 = ((unsigned int)(unsigned __int8)a3[22] - 78701695) % a5;
                    v118 = *(_BYTE*)(v117 + a4) - 1;
                    *(_BYTE*)(0x58D9F08F % a5 + a4) -= v118;
                    *(_BYTE*)((unsigned int)v117 + a4) = v118;
                    goto LABEL_264;
                case 0xCB:
                    v119 = ((unsigned int)(unsigned __int8)a3[129] + 1678413888) % a5;
                    v120 = *(_BYTE*)(v119 + a4) - 1;
                    *(_BYTE*)(0xAB2BC916 % a5 + a4) -= v120;
                    *(_BYTE*)((unsigned int)v119 + a4) = v120;
                    goto LABEL_264;
                case 0xCC:
                    v121 = ((unsigned int)(unsigned __int8)a3[64] + 1394077187) % a5;
                    v122 = *(_BYTE*)(v121 + a4) - 1;
                    *(_BYTE*)(0xFB4F1B81 % a5 + a4) -= v122;
                    *(_BYTE*)((unsigned int)v121 + a4) = v122;
                    goto LABEL_264;
                case 0xCD:
                    v15 = 0x640A9040 % a5;
                    v16 = (unsigned __int8)a3[3] + 740335802;
                    goto LABEL_263;
                case 0xCE:
                    *(_BYTE*)(0x5317EE03 % a5 + a4) += 107 - a3[186];
                    goto LABEL_264;
                case 0xCF:
                    v123 = ((unsigned int)(unsigned __int8)a3[149] - 307182332) % a5;
                    v124 = *(_BYTE*)(v123 + a4) - 1;
                    *(_BYTE*)(0x2C20A0BA % a5 + a4) -= v124;
                    *(_BYTE*)((unsigned int)v123 + a4) = v124;
                    goto LABEL_264;
                case 0xD0:
                    v15 = 0x8A42495 % a5;
                    v16 = (unsigned __int8)a3[4] + 2054512567;
                    goto LABEL_263;
                case 0xD1:
                    v15 = 0xEDB0C504 % a5;
                    v16 = (unsigned __int8)a3[183] - 581428322;
                    goto LABEL_263;
                case 0xD2:
                    v15 = 0x7A755FB7 % a5;
                    v16 = (unsigned __int8)a3[158] + 575554537;
                    goto LABEL_263;
                case 0xD3:
                    *(_BYTE*)(0xDD581B9E % a5 + a4) = __ROR1__(*(_BYTE*)(0xDD581B9E % a5 + a4), a3[233] & 7);
                    goto LABEL_264;
                case 0xD4:
                    v15 = 0x224E43E9 % a5;
                    v16 = (unsigned __int8)a3[8] - 925197909;
                    goto LABEL_263;
                case 0xD5:
                    *(_BYTE*)(0x2F00B708 % a5 + a4) = __ROR1__(*(_BYTE*)(0x2F00B708 % a5 + a4), (a3[171] + 2) & 7);
                    goto LABEL_264;
                case 0xD6:
                    v15 = 0xC8DA99AB % a5;
                    v16 = (unsigned __int8)a3[194] + 597192061;
                    goto LABEL_263;
                case 0xD7:
                    v125 = ((unsigned int)(unsigned __int8)a3[125] + 1525254732) % a5;
                    v126 = *(_BYTE*)(v125 + a4) - 1;
                    *(_BYTE*)(0x83693DC2 % a5 + a4) -= v126;
                    *(_BYTE*)((unsigned int)v125 + a4) = v126;
                    goto LABEL_264;
                case 0xD8:
                    v15 = 0x23986D7D % a5;
                    v16 = (unsigned __int8)a3[76] - 1760940065;
                    goto LABEL_263;
                case 0xD9:
                    *(_BYTE*)(0x5AE98A4C % a5 + a4) += -38 - a3[223];
                    goto LABEL_264;
                case 0xDA:
                    *(_BYTE*)(0x970A2FDF % a5 + a4) += -81 - a3[38];
                    goto LABEL_264;
                case 0xDB:
                    v15 = 0x7F5C4B26 % a5;
                    v16 = (unsigned __int8)a3[81] + 643146448;
                    goto LABEL_263;
                case 0xDC:
                    *(_BYTE*)(0xE779D551 % a5 + a4) += -83 - a3[208];
                    goto LABEL_264;
                case 0xDD:
                    v15 = 0x2655A2D0 % a5;
                    v16 = (unsigned __int8)a3[83] - 703674422;
                    goto LABEL_263;
                case 0xDE:
                    *(_BYTE*)(0x34D4F653 % a5 + a4) += -101 - a3[202];
                    goto LABEL_264;
                case 0xDF:
                    v127 = ((unsigned int)(unsigned __int8)a3[101] - 1431395180) % a5;
                    v128 = *(_BYTE*)(v127 + a4) - 1;
                    *(_BYTE*)(0xD60EC7CA % a5 + a4) -= v128;
                    *(_BYTE*)((unsigned int)v127 + a4) = v128;
                    goto LABEL_264;
                case 0xE0:
                    v129 = ((unsigned int)(unsigned __int8)a3[148] + 1368260871) % a5;
                    v130 = *(_BYTE*)(v129 + a4) - 1;
                    *(_BYTE*)(0xC269EF65 % a5 + a4) -= v130;
                    *(_BYTE*)((unsigned int)v129 + a4) = v130;
                    goto LABEL_264;
                case 0xE1:
                    *(_BYTE*)(0xAAAEA494 % a5 + a4) = __ROR1__(*(_BYTE*)(0xAAAEA494 % a5 + a4), (a3[7] - 2) & 7);
                    goto LABEL_264;
                case 0xE2:
                    *(_BYTE*)(0x518E0107 % a5 + a4) = __ROR1__(*(_BYTE*)(0x518E0107 % a5 + a4), (a3[174] + 1) & 7);
                    goto LABEL_264;
                case 0xE3:
                    *(_BYTE*)(0xC6D777AE % a5 + a4) += 104 - a3[185];
                    goto LABEL_264;
                case 0xE4:
                    *(_BYTE*)(0x4E746FB9 % a5 + a4) += 5 - a3[152];
                    goto LABEL_264;
                case 0xE5:
                    *(_BYTE*)(0x51A17398 % a5 + a4) += 46 - a3[251];
                    goto LABEL_264;
                case 0xE6:
                    *(_BYTE*)(0x48BEA3FB % a5 + a4) ^= a3[210] ^ 0x4D;
                    goto LABEL_264;
                case 0xE7:
                    v13 = a3[77];
                    v14 = -1251320110;
                LABEL_12:
                    *(_BYTE*)(v14 % a5 + a4) = __ROR1__(*(_BYTE*)(v14 % a5 + a4), (v13 - 4) & 7);
                    goto LABEL_264;
                case 0xE8:
                    *(_BYTE*)(0x3D8D4A4D % a5 + a4) += -47 - a3[220];
                    goto LABEL_264;
                case 0xE9:
                    *(_BYTE*)(0xAE2233DC % a5 + a4) += -54 - a3[47];
                    goto LABEL_264;
                case 0xEA:
                    v131 = ((unsigned int)(unsigned __int8)a3[54] + 639939361) % a5;
                    v132 = *(_BYTE*)(v131 + a4) - 1;
                    *(_BYTE*)(0xA71A732F % a5 + a4) -= v132;
                    *(_BYTE*)((unsigned int)v131 + a4) = v132;
                    goto LABEL_264;
                case 0xEB:
                    *(_BYTE*)(0x6AFCC136 % a5 + a4) = __ROR1__(*(_BYTE*)(0x6AFCC136 % a5 + a4), a3[33] & 7);
                    goto LABEL_264;
                case 0xEC:
                    *(_BYTE*)(0x2624B321 % a5 + a4) ^= a3[96] ^ 0xA3;
                    goto LABEL_264;
                case 0xED:
                    *(_BYTE*)(0x66B04960 % a5 + a4) ^= a3[163] ^ 0xDA;
                    goto LABEL_264;
                case 0xEE:
                    *(_BYTE*)(0x7BB342A3 % a5 + a4) += -53 - a3[218];
                    goto LABEL_264;
                case 0xEF:
                    v15 = 0xF2A922DA % a5;
                    v16 = (unsigned __int8)a3[53] - 1797629916;
                    goto LABEL_263;
                case 0xF0:
                    *(_BYTE*)(0x7DFB1E35 % a5 + a4) += -87 - a3[36];
                    goto LABEL_264;
                case 0xF1:
                    v133 = ((unsigned int)(unsigned __int8)a3[87] - 1793898562) % a5;
                    v134 = *(_BYTE*)(v133 + a4) - 1;
                    *(_BYTE*)(0x94DA5824 % a5 + a4) -= v134;
                    *(_BYTE*)((unsigned int)v133 + a4) = v134;
                    goto LABEL_264;
                case 0xF2:
                    *(_BYTE*)(0x496D2657 % a5 + a4) = __ROR1__(*(_BYTE*)(0x496D2657 % a5 + a4), (a3[190] + 1) & 7);
                    goto LABEL_264;
                case 0xF3:
                    *(_BYTE*)(0x951347BE % a5 + a4) ^= a3[137] ^ 0x28;
                    goto LABEL_264;
                case 0xF4:
                    v15 = 0x37353F89 % a5;
                    v16 = (unsigned __int8)a3[40] - 1397591477;
                    goto LABEL_263;
                case 0xF5:
                    *(_BYTE*)(0x3E024428 % a5 + a4) = __ROR1__(*(_BYTE*)(0x3E024428 % a5 + a4), (a3[75] + 2) & 7);
                    goto LABEL_264;
                case 0xF6:
                    v135 = ((unsigned int)(unsigned __int8)a3[226] - 1280308451) % a5;
                    v136 = *(_BYTE*)(v135 + a4) - 1;
                    *(_BYTE*)(0xACB2724B % a5 + a4) -= v136;
                    *(_BYTE*)((unsigned int)v135 + a4) = v136;
                    goto LABEL_264;
                case 0xF7:
                    v15 = 0xB74C33E2 % a5;
                    v16 = (unsigned __int8)a3[29] - 916377236;
                    goto LABEL_263;
                case 0xF8:
                    *(_BYTE*)(0xB3B00B1D % a5 + a4) = __ROR1__(*(_BYTE*)(0xB3B00B1D % a5 + a4), (a3[108] - 1) & 7);
                    goto LABEL_264;
                case 0xF9:
                    *(_BYTE*)(0xC961316C % a5 + a4) += -70 - a3[127];
                    goto LABEL_264;
                case 0xFA:
                    *(_BYTE*)(0x967BA7F % a5 + a4) ^= a3[70] ^ 0xF1;
                    goto LABEL_264;
                case 0xFB:
                    *(_BYTE*)(0xA0F62B46 % a5 + a4) ^= a3[241] ^ 0xF0;
                    goto LABEL_264;
                case 0xFC:
                    *(_BYTE*)(0x294B4F1 % a5 + a4) ^= a3[240] ^ 0xF3;
                    goto LABEL_264;
                case 0xFD:
                    *(_BYTE*)(0x974B83F0 % a5 + a4) = __ROR1__(*(_BYTE*)(0x974B83F0 % a5 + a4), (a3[243] + 2) & 7);
                    goto LABEL_264;
                case 0xFE:
                    *(_BYTE*)(0xD51FD2F3 % a5 + a4) += -5 - a3[234];
                    goto LABEL_264;
                case 0xFF:
                    v15 = 0x6DA8B1EA % a5;
                    v16 = (unsigned __int8)a3[5] + 498393012;
                LABEL_263:
                    v137 = v15;
                    v138 = v16 % a5;
                    v139 = *(_BYTE*)(v137 + a4);
                    *(_BYTE*)(v137 + a4) = *(_BYTE*)(v138 + a4);
                    *(_BYTE*)((unsigned int)v138 + a4) = v139;
                LABEL_264:
                    if (++v8 >= a2)
                        return;
                    continue;
                }
            }
        }
    }
}