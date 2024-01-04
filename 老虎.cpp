	CDC *pDC=GetDC();
	CDC*mpDC=GetDC();
	mpDC=pDC;
	POINT ptpolygon1[3]={{40,20},{60,60},{80,40}};
	mpDC->Polygon(ptpolygon1,3);
	POINT p1[3]={{280,20},{260,60},{240,40}};
	mpDC->Polygon(p1,3);
	mpDC->MoveTo(40,20);
	mpDC->LineTo(20,40);
	mpDC->LineTo(8,60);
	mpDC->LineTo(10,80);
	mpDC->LineTo(20,90);
	mpDC->LineTo(40,100);
	mpDC->LineTo(60,60);//耳朵
	mpDC->MoveTo(280,20);
	mpDC->LineTo(300,40);
	mpDC->LineTo(312,60);
	mpDC->LineTo(310,80);
	mpDC->LineTo(300,90);
	mpDC->LineTo(280,100);
	mpDC->LineTo(260,60);

	mpDC->MoveTo(80,40);
	mpDC->LineTo(160,14);
	mpDC->LineTo(240,40);
	POINT ptpolygon2[6]={{45,100},{65,80},{55,100},{77,206},{95,210},{71,220}};
	mpDC->Polygon(ptpolygon2,6);//条纹2
	POINT p2[6]={{275,100},{255,80},{265,100},{243,206},{225,210},{249,220}};
	mpDC->Polygon(p2,6);

	POINT ptpolygon3[4]={{40,100},{54,200},{40,240},{44,200}};
	POINT p3[4]={{280,100},{266,200},{280,240},{276,200}};
	mpDC->Polygon(ptpolygon3,4);
	mpDC->Polygon(p3,4);//条纹1

	mpDC->MoveTo(41,140);
	mpDC->LineTo(0,220);
	mpDC->LineTo(40,240);//左脸
	mpDC->MoveTo(279,140);
	mpDC->LineTo(320,220);
	mpDC->LineTo(280,240);

	POINT ptpolygon4[3]={{40,240},{96,280},{44,262}};
	mpDC->Polygon(ptpolygon4,3);//下条纹
	POINT p4[3]={{280,240},{224,280},{276,262}};
	mpDC->Polygon(p4,3);

	mpDC->MoveTo(96,280);
	mpDC->LineTo(96,240);
	mpDC->LineTo(125,200);
	mpDC->MoveTo(224,280);
	mpDC->LineTo(224,240);
	mpDC->LineTo(195,200);

	POINT ptpolygon5[3]={{60,230},{80,260},{56,244}};
	mpDC->Polygon(ptpolygon5,3);//小条纹
	POINT ptpolygon6[5]={{84,120},{126,160},{110,175},{110,216},{72,160}};
	mpDC->Polygon(ptpolygon6,5);//眼
	POINT p5[3]={{260,230},{240,260},{264,244}};
	mpDC->Polygon(p5,3);//小条纹
	POINT p6[5]={{236,120},{194,160},{210,175},{210,216},{248,160}};
	mpDC->Polygon(p6,5);//眼

	mpDC->MoveTo(126,160);
	mpDC->LineTo(72,160);
	mpDC->LineTo(110,175);//眼睛
	mpDC->MoveTo(194,160);
	mpDC->LineTo(246,160);
	mpDC->LineTo(210,175);

	POINT ptpolygon7[3]={{115,40},{160,40},{120,50}};
	mpDC->Polygon(ptpolygon7,3);
	POINT ptpolygon8[3]={{104,70},{160,60},{112,86}};
	mpDC->Polygon(ptpolygon8,3);
	POINT ptpolygon9[3]={{116,95},{160,80},{120,104}};
	mpDC->Polygon(ptpolygon9,3);
	mpDC->SetPixel(116,95,RGB(0,0,0));
	POINT ptpolygon10[3]={{126,120},{160,103},{130,128}};
	mpDC->Polygon(ptpolygon10,3);//额头条纹
	POINT p7[3]={{205,40},{160,40},{200,50}};
	mpDC->Polygon(p7,3);
	POINT p8[3]={{216,70},{160,60},{208,86}};
	mpDC->Polygon(p8,3);
	POINT p9[3]={{204,95},{160,80},{200,104}};
	mpDC->Polygon(p9,3);
	POINT p10[3]={{194,120},{160,103},{190,128}};
	mpDC->Polygon(p10,3);

	mpDC->MoveTo(130,128);
	mpDC->LineTo(125,200);
	mpDC->LineTo(112,272);
	mpDC->LineTo(161,284);//
	mpDC->MoveTo(112,272);
	mpDC->LineTo(160,320);//鼻子
	mpDC->MoveTo(96,280);
	mpDC->LineTo(96,318);
	mpDC->MoveTo(160,320);
	mpDC->LineTo(120,340);
	mpDC->LineTo(161,330);
	mpDC->MoveTo(96,318);
	mpDC->LineTo(120,340);
	mpDC->LineTo(120,364);
	mpDC->LineTo(161,384);

	mpDC->MoveTo(190,128);
	mpDC->LineTo(195,200);
	mpDC->LineTo(208,272);
	mpDC->LineTo(159,284);
	mpDC->MoveTo(208,272);
	mpDC->LineTo(160,320);//鼻子
	mpDC->MoveTo(224,280);
	mpDC->LineTo(224,318);
	mpDC->MoveTo(160,320);
	mpDC->LineTo(200,340);
	mpDC->LineTo(159,330);
	mpDC->MoveTo(224,318);
	mpDC->LineTo(200,340);
	mpDC->LineTo(200,364);
	mpDC->LineTo(159,384);
