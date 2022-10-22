  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtP.A_m
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.B_m
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 9;
	
	  ;% rtP.C_m
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 12;
	
	  ;% rtP.K_1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 21;
	
	  ;% rtP.K_2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 22;
	
	  ;% rtP.K_3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 23;
	
	  ;% rtP.FlatEarthtoLLA_LL0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 24;
	
	  ;% rtP.CompareToConstant_const
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 26;
	
	  ;% rtP.CompareToConstant_const_e0pd32tlkk
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 27;
	
	  ;% rtP.CompareToConstant_const_k24jnylgrb
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 28;
	
	  ;% rtP.CompareToConstant_const_lhkfefce1w
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 29;
	
	  ;% rtP.CompareToConstant_const_at0zaa4bgo
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 30;
	
	  ;% rtP.CompareToConstant_const_dd2pjof1v0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 31;
	
	  ;% rtP.FlatEarthtoLLA_psi
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 32;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.FlightGearPreconfigured6DoFAnimation_DestinationPort
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 46;
      section.data(46)  = dumData; %prealloc
      
	  ;% rtP.Bias_Bias
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Gain_Gain
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Bias1_Bias
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Bias_Bias_o2r4jtpow0
	  section.data(4).logicalSrcIdx = 18;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Bias1_Bias_jutkmsfubq
	  section.data(5).logicalSrcIdx = 19;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Bias_Bias_kwgsxmywwt
	  section.data(6).logicalSrcIdx = 20;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Bias1_Bias_np4cqimful
	  section.data(7).logicalSrcIdx = 21;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Packnet_fdmPacketforFlightGear_P8
	  section.data(8).logicalSrcIdx = 22;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.SimulationPace_P1
	  section.data(9).logicalSrcIdx = 23;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.SimulationPace_P2
	  section.data(10).logicalSrcIdx = 24;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.SimulationPace_P3
	  section.data(11).logicalSrcIdx = 25;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.SimulationPace_P4
	  section.data(12).logicalSrcIdx = 26;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.PacketSize_Value
	  section.data(13).logicalSrcIdx = 27;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.TsintoZ_IC
	  section.data(14).logicalSrcIdx = 28;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.DriftZtoZ_IC
	  section.data(15).logicalSrcIdx = 29;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.htoheight_IC
	  section.data(16).logicalSrcIdx = 30;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.Gain_Gain_ibloah5cgl
	  section.data(17).logicalSrcIdx = 31;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.StateSpace_InitialCondition
	  section.data(18).logicalSrcIdx = 32;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.u_Value
	  section.data(19).logicalSrcIdx = 33;
	  section.data(19).dtTransOffset = 20;
	
	  ;% rtP.Constant_Value
	  section.data(20).logicalSrcIdx = 34;
	  section.data(20).dtTransOffset = 21;
	
	  ;% rtP.Constant_Value_ewu5lv2vwe
	  section.data(21).logicalSrcIdx = 35;
	  section.data(21).dtTransOffset = 22;
	
	  ;% rtP.Constant1_Value
	  section.data(22).logicalSrcIdx = 36;
	  section.data(22).dtTransOffset = 23;
	
	  ;% rtP.Constant2_Value
	  section.data(23).logicalSrcIdx = 37;
	  section.data(23).dtTransOffset = 24;
	
	  ;% rtP.Constant2_Value_ilk1ktfw3v
	  section.data(24).logicalSrcIdx = 38;
	  section.data(24).dtTransOffset = 25;
	
	  ;% rtP.Constant_Value_ntz3dz1fnv
	  section.data(25).logicalSrcIdx = 39;
	  section.data(25).dtTransOffset = 26;
	
	  ;% rtP.Constant1_Value_e5l3bdifud
	  section.data(26).logicalSrcIdx = 40;
	  section.data(26).dtTransOffset = 27;
	
	  ;% rtP.Bias_Bias_i0hfwhm31e
	  section.data(27).logicalSrcIdx = 41;
	  section.data(27).dtTransOffset = 28;
	
	  ;% rtP.Constant2_Value_med0nruw3y
	  section.data(28).logicalSrcIdx = 42;
	  section.data(28).dtTransOffset = 29;
	
	  ;% rtP.Bias1_Bias_curknxed4d
	  section.data(29).logicalSrcIdx = 43;
	  section.data(29).dtTransOffset = 30;
	
	  ;% rtP.Bias_Bias_he1ot2gcw5
	  section.data(30).logicalSrcIdx = 44;
	  section.data(30).dtTransOffset = 31;
	
	  ;% rtP.Gain_Gain_dwpmjrnu55
	  section.data(31).logicalSrcIdx = 45;
	  section.data(31).dtTransOffset = 32;
	
	  ;% rtP.Bias1_Bias_p5104vrjel
	  section.data(32).logicalSrcIdx = 46;
	  section.data(32).dtTransOffset = 33;
	
	  ;% rtP.Bias_Bias_mgwwxvy23p
	  section.data(33).logicalSrcIdx = 47;
	  section.data(33).dtTransOffset = 34;
	
	  ;% rtP.Constant2_Value_fum1q5qrto
	  section.data(34).logicalSrcIdx = 48;
	  section.data(34).dtTransOffset = 35;
	
	  ;% rtP.Bias1_Bias_puweleon02
	  section.data(35).logicalSrcIdx = 49;
	  section.data(35).dtTransOffset = 36;
	
	  ;% rtP.Constant_Value_hb1abxfq0g
	  section.data(36).logicalSrcIdx = 50;
	  section.data(36).dtTransOffset = 37;
	
	  ;% rtP.Constant1_Value_pjsncnza25
	  section.data(37).logicalSrcIdx = 51;
	  section.data(37).dtTransOffset = 38;
	
	  ;% rtP.Constant2_Value_ixgzrgf4bw
	  section.data(38).logicalSrcIdx = 52;
	  section.data(38).dtTransOffset = 39;
	
	  ;% rtP.Constant3_Value
	  section.data(39).logicalSrcIdx = 53;
	  section.data(39).dtTransOffset = 40;
	
	  ;% rtP.Constant_Value_bka2acpd1h
	  section.data(40).logicalSrcIdx = 54;
	  section.data(40).dtTransOffset = 41;
	
	  ;% rtP.Constant_Value_i24sigwmyq
	  section.data(41).logicalSrcIdx = 55;
	  section.data(41).dtTransOffset = 42;
	
	  ;% rtP.Constant_Value_f3dsia01as
	  section.data(42).logicalSrcIdx = 56;
	  section.data(42).dtTransOffset = 43;
	
	  ;% rtP.f_Value
	  section.data(43).logicalSrcIdx = 57;
	  section.data(43).dtTransOffset = 44;
	
	  ;% rtP.RefHeight_Value
	  section.data(44).logicalSrcIdx = 58;
	  section.data(44).dtTransOffset = 45;
	
	  ;% rtP.Thrust_Value
	  section.data(45).logicalSrcIdx = 59;
	  section.data(45).dtTransOffset = 46;
	
	  ;% rtP.tvc_Value
	  section.data(46).logicalSrcIdx = 60;
	  section.data(46).dtTransOffset = 47;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% rtP.Packnet_fdmPacketforFlightGear_P1
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Packnet_fdmPacketforFlightGear_P2
	  section.data(2).logicalSrcIdx = 62;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.Packnet_fdmPacketforFlightGear_P3
	  section.data(3).logicalSrcIdx = 63;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtP.Packnet_fdmPacketforFlightGear_P4
	  section.data(4).logicalSrcIdx = 64;
	  section.data(4).dtTransOffset = 7;
	
	  ;% rtP.Packnet_fdmPacketforFlightGear_P5
	  section.data(5).logicalSrcIdx = 65;
	  section.data(5).dtTransOffset = 10;
	
	  ;% rtP.Packnet_fdmPacketforFlightGear_P6
	  section.data(6).logicalSrcIdx = 66;
	  section.data(6).dtTransOffset = 13;
	
	  ;% rtP.Packnet_fdmPacketforFlightGear_P7
	  section.data(7).logicalSrcIdx = 67;
	  section.data(7).dtTransOffset = 16;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 37;
      section.data(37)  = dumData; %prealloc
      
	  ;% rtB.dx5kot32nu
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.c41y42f4pq
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.fs433snqu4
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.hiuttdyv3u
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.nxucqy4vpf
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 5;
	
	  ;% rtB.adn1bcbxce
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% rtB.mos0g315ut
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7;
	
	  ;% rtB.omipsfdeoc
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% rtB.odgj0hyah3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% rtB.eqoe5lq4kx
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% rtB.e03qaanqok
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% rtB.btgzr13vly
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% rtB.pi13qlj4xm
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 13;
	
	  ;% rtB.b2qt2zwcjk
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 14;
	
	  ;% rtB.mdcyfy5sbr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 15;
	
	  ;% rtB.ath5qesj3d
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 16;
	
	  ;% rtB.fdjsfe3455
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 17;
	
	  ;% rtB.lykqzvo40l
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 20;
	
	  ;% rtB.lvnkzvb434
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 21;
	
	  ;% rtB.oa2jvz2byz
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% rtB.nmipyggopu
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 23;
	
	  ;% rtB.dytsioegcl
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 26;
	
	  ;% rtB.jbxlgmlnzi
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 27;
	
	  ;% rtB.mkw1wo3qto
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 28;
	
	  ;% rtB.a4tmas2p4h
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 29;
	
	  ;% rtB.g1v1kclnd1
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 30;
	
	  ;% rtB.nudtcdmd30
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 31;
	
	  ;% rtB.nfs4sew3oz
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 32;
	
	  ;% rtB.ozm2txwfmw
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 33;
	
	  ;% rtB.myh1s5kqti
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 34;
	
	  ;% rtB.mhuwizvckh
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 35;
	
	  ;% rtB.ecfo0yj40c
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 36;
	
	  ;% rtB.fqzacaysgt
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 37;
	
	  ;% rtB.f0lgj3lzwh
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 38;
	
	  ;% rtB.noyxldjrkq
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 39;
	
	  ;% rtB.d2aog2hjnr
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 45;
	
	  ;% rtB.da0rdfyx3q
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 46;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.azautin2vg
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jrm0tfuxn1
	  section.data(2).logicalSrcIdx = 38;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.g0fgmgmpjp
	  section.data(3).logicalSrcIdx = 39;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.mbsxjymmde
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.k3efpdq54g
	  section.data(1).logicalSrcIdx = 41;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.pfi0xe3ebg
	  section.data(2).logicalSrcIdx = 42;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.oebjxibg1n
	  section.data(3).logicalSrcIdx = 43;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 4;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.azf154mrb3.LoggedData
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ijgfntvcnv.LoggedData
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.armhlzamvx.LoggedData
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.k5skyzwlvv
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.dj1jippoe2
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fmauy44y0p
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.gwczvjml24
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.pnl1uxwkak
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.h3yautre5e
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.fhr0pa3woj
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.mmih2li0td
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hcleow32pe
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.hqw5v1u3hy
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 4274542035;
  targMap.checksum1 = 2355859094;
  targMap.checksum2 = 1289446516;
  targMap.checksum3 = 3884530962;

