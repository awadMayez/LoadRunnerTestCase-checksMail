Action()
{

	web_add_cookie("display-culture=en-US; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170304; DOMAIN=iecvlist.microsoft.com");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1426178821/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t457.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&pointer-click=rn%3A555193619%3Ax%3A40083%3Ay%3A37118%3At%3A325%3Ap%3APAFA1AA2AA&browser-info=rqnl%3A1%3Ast%3A1489150824%3Au%3A1488658405454999924", "Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", ENDITEM, 
		LAST);

	lr_start_transaction("log_in");

	lr_think_time(20);

	web_url("784657_6", 
		"URL=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&pointer-click=rn%3A950000802%3Ax%3A42724%3Ay%3A33819%3At%3A1174%3Ap%3APAFA1AA2AA&browser-info=rqnl%3A1%3Ast%3A1489150909%3Au%3A1488658405454999924", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", 
		"Snapshot=t459.inf", 
		LAST);

	web_url("784657_7", 
		"URL=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&pointer-click=rn%3A396663124%3Ax%3A39879%3Ay%3A18146%3At%3A1187%3Ap%3APA1FA1AA2AA&browser-info=rqnl%3A1%3Ast%3A1489150910%3Au%3A1488658405454999924", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", 
		"Snapshot=t460.inf", 
		LAST);

	web_url("784657_8", 
		"URL=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&pointer-click=rn%3A698975803%3Ax%3A54307%3Ay%3A37118%3At%3A1210%3Ap%3APAFA1AA2AA&browser-info=rqnl%3A1%3Ast%3A1489150913%3Au%3A1488658405454999924", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", 
		"Snapshot=t461.inf", 
		LAST);

	lr_think_time(10);

	web_custom_request("784657_9", 
		"URL=https://mc.yandex.ru/watch/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Az%3A180%3Ai%3A20170310160201%3Aet%3A1489150921%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A155092419075%3Arqn%3A28%3Arn%3A805598117%3Ahid%3A563498228%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489150921%3Au%3A1488658405454999924", 
		"Method=POST", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", 
		"Snapshot=t462.inf", 
		"Body=site-info=%7B%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%D0%B0%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D0%B8%22%3A%7B%22passport_auth2reg%22%3A%22%D0%9A%D0%BB%D0%B8%D0%BA%20%D0%BD%D0%B0%20%D0%BA%D0%BD%D0%BE%D0%BF%D0%BA%D1%83%20%D0%92%D0%BE%D0%B9%D1%82%D0%B8%22%7D%7D", 
		LAST);

	web_url("784657_10", 
		"URL=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&pointer-click=rn%3A397492767%3Ax%3A53320%3Ay%3A46693%3At%3A1297%3Ap%3A%3FAA3FA1AA2AA&browser-info=rqnl%3A1%3Ast%3A1489150921%3Au%3A1488658405454999924", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", 
		"Snapshot=t463.inf", 
		LAST);

	web_custom_request("784657_11", 
		"URL=https://mc.yandex.ru/watch/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Az%3A180%3Ai%3A20170310160201%3Aet%3A1489150921%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A155092419075%3Arqn%3A29%3Arn%3A636479806%3Ahid%3A563498228%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489150921%3Au%3A1488658405454999924", 
		"Method=POST", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", 
		"Snapshot=t464.inf", 
		"Body=site-info=%7B%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%D0%B0%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D0%B8%22%3A%7B%22passport_auth2reg%22%3A%22%D0%9E%D1%82%D0%BF%D1%80%D0%B0%D0%B2%D0%BA%D0%B0%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%B0%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D0%B8%22%7D%7D", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_cookie("yandexuid=1323753751488658402; DOMAIN=mail.yandex.ru");

	web_add_cookie("i=9watCZ0XndZ9hI+MrL2gQmQkLUJywAC+B5aUe+iWdudktzdxuU4qK7ZNkxGsKlZxvKPmmudu+V+Ei9RoDPcxI3SXk0w=; DOMAIN=mail.yandex.ru");

	web_add_cookie("_ym_uid=1488658405454999924; DOMAIN=mail.yandex.ru");

	web_add_cookie("_ym_isad=2; DOMAIN=mail.yandex.ru");

	web_add_cookie("fuid01=58bb1fe43f1985ca.mchv1kTx9TEts0-0Gp_WmXaQDv9YzfRxHMjAhTjj3FWSUQEJC61ZkwpNsdz8bUlcpKF_3mbcsWNVPeDp-t2gp4jJPGbGmhsyD7VuFZi-GicCHCUYXGlhUGmo6Ch_ljdX; DOMAIN=mail.yandex.ru");

	web_add_cookie("yandex_gid=213; DOMAIN=mail.yandex.ru");

	web_add_cookie("ni=0; DOMAIN=mail.yandex.ru");

	web_add_cookie("stngs=colorful::true:on; DOMAIN=mail.yandex.ru");

	web_add_cookie("msgsent=1; DOMAIN=mail.yandex.ru");

	web_add_cookie("yandexuid=1323753751488658402; DOMAIN=an.yandex.ru");

	web_add_cookie("i=9watCZ0XndZ9hI+MrL2gQmQkLUJywAC+B5aUe+iWdudktzdxuU4qK7ZNkxGsKlZxvKPmmudu+V+Ei9RoDPcxI3SXk0w=; DOMAIN=an.yandex.ru");

	web_add_cookie("_ym_uid=1488658405454999924; DOMAIN=an.yandex.ru");

	web_add_cookie("_ym_isad=2; DOMAIN=an.yandex.ru");

	web_add_cookie("fuid01=58bb1fe43f1985ca.mchv1kTx9TEts0-0Gp_WmXaQDv9YzfRxHMjAhTjj3FWSUQEJC61ZkwpNsdz8bUlcpKF_3mbcsWNVPeDp-t2gp4jJPGbGmhsyD7VuFZi-GicCHCUYXGlhUGmo6Ch_ljdX; DOMAIN=an.yandex.ru");

	web_add_cookie("yandex_gid=213; DOMAIN=an.yandex.ru");

	web_add_cookie("yabs-vdrf=A0; DOMAIN=an.yandex.ru");

	web_submit_data("passport", 
		"Action=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox", 
		"Snapshot=t465.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=ufo.xco2017@yandex.ru", ENDITEM, 
		"Name=passwd", "Value=qwerty1210409", ENDITEM, 
		"Name=retpath", "Value=https://mail.yandex.ru/lite/inbox", ENDITEM, 
		EXTRARES, 
		"Url=https://yastatic.net/mail/pda2/1.35.0/themes/blue-based/blocks/b-head-name/b-head-name.png", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		"Url=https://yastatic.net/mail/pda2/1.35.0/blocks/b-head-logo/b-head-logo.png", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		"Url=https://mc.yandex.ru/metrika/watch.js", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		"Url=https://mc.yandex.ru/watch/16082914?wmode=5&callback=_ymjsp187349697&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160219%3Aet%3A1489150939%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Apv%3A1%3Als%3A304057826452%3Arqn%3A11%3Arn%3A930083201%3Ahid%3A883930172%3Ads%3A0%2C0%2C1192%2C5%2C15204%2C0%2C%2C435%2C6%2C%2C%2C%2C17917%3Afp%3A17885%3Arqnl%3A1%3Ast%3A1489150939%3Au%3A1488658405454999924%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20"
		"(1%20%D0%BD%D0%BE%D0%B2%D0%BE%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%BE)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		"Url=https://an.yandex.ru/system/context.js", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		"Url=https://an.yandex.ru/resource/context_static_r1507.js", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		"Url=https://an.yandex.ru/page/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&charset=utf-8&imp-id=14&enable-flat-highlight=1&stat-id=14&uid=474076123&grab=dNCS0YXQvtC00Y_RidC40LUgKDEg0L3QvtCy0L7QtSDQv9C40YHRjNC80L4pIOKAlCDQr9C90LTQtdC60YEu0J_QvtGH0YLQsAo=&callback=Ya[1489150947266]", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		LAST);

	web_submit_data("92550", 
		"Action=https://mc.yandex.ru/watch/92550?cnt-class=1&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dauth%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252Flite%252Finbox&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160220%3Aet%3A1489150941%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apv%3A1%3Als%3A415075616486%3Arqn%3A5%3Arn%3A4599035%3Ahid%3A883930172%3Ads%3A0%2C0%2C1192%2C5%2C15204%2C0%2C%2C435%2C6%2C%2C%2C%2C17917%3Afp%3A17885%3Arqnl%3A1%3Ast%3A1489150941%3Au%3A1488658405454999924%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20"
		"(1%20%D0%BD%D0%BE%D0%B2%D0%BE%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%BE)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", 
		"Snapshot=t466.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_add_cookie("guid=174B652F58BB1FE3X1488658403; DOMAIN=www.tns-counter.ru");

	web_submit_data("16082914", 
		"Action=https://mc.yandex.ru/watch/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Az%3A180%3Ai%3A20170310160221%3Aet%3A1489150941%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apa%3A1%3Als%3A304057826452%3Arqn%3A12%3Arn%3A1027878462%3Ahid%3A883930172%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489150941%3Au%3A1488658405454999924", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", 
		"Snapshot=t467.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=site-info", "Value={\"logjam\":\"show\"}", ENDITEM, 
		EXTRARES, 
		"Url=https://an.yandex.ru/count/E1RKLchBxUW40000ZhizAem5XPQO5fuEaRxPD9mDauKDfD00000z2G6kusX1SSW0AVcxyhud-L-mxYK1mV__________3-u1xm7Rylw0R6UmxYK1wWxrrK8GdZbe0VRN2DwB_wLKUWi0=zlD-TvK2cm5kGxS2YRyevXS2c8mdYhVMBqi2lRHTZ8u2fQtf4mM8jRHV00Ac7vskH-G4tG7Ua2Jq-UDeGN7802dvcJIWaun2ivJh4A-Ol3QqcEeDsPKuGzgG5n6dd9u1gA_aQ351fC00000z2R41ig1I00AvhaVa1CMF3yssrYzB0iwsbebC0zB__________m_J__________yFmW3VXGtk0UMGyYljWoX-5000?test-tag=265532376886273&stat-id=14&wmode=0", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd="
		"2021", ENDITEM, 
		"Url=https://www.tns-counter.ru/V13a****yandex_ru/ru/CP1251/tmsec=yandex_mail/?id1169253964743", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		LAST);

	lr_end_transaction("log_in",LR_AUTO);

	lr_think_time(9);

	web_submit_data("16082914_2", 
		"Action=https://mc.yandex.ru/watch/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160241%3Aet%3A1489150962%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Anb%3A1%3Acl%3A43%3Als%3A304057826452%3Arqn%3A13%3Arn%3A925210376%3Ahid%3A883930172%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C25511%2C25511%2C7%2C%3Arqnl%3A1%3Ast%3A1489150962%3Au%3A1488658405454999924", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", 
		"Snapshot=t469.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		EXTRARES, 
		"Url=../clmap/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&pointer-click=rn%3A92683109%3Ax%3A48824%3Ay%3A13356%3At%3A285%3Ap%3AN%3BW1AAFA1A1A&browser-info=rqnl%3A1%3Ast%3A1489150968%3Au%3A1488658405454999924", "Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", ENDITEM, 
		LAST);

	lr_start_transaction("check_messages");

	web_url("inbox", 
		"URL=https://mail.yandex.ru/lite/inbox", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2021", 
		"Snapshot=t470.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.tns-counter.ru/V13a****yandex_ru/ru/CP1251/tmsec=yandex_mail/?id1169262912523", ENDITEM, 
		"Url=https://mc.yandex.ru/watch/16082914?wmode=5&callback=_ymjsp134350659&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&ut=noindex&browser-info="
		"ilt%3A0J%2FRgNC%2B0LLQtdGA0LjRgtGM%3Aj%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160248%3Aet%3A1489150968%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Apv%3A1%3Als%3A304057826452%3Arqn%3A14%3Arn%3A273543585%3Ahid%3A110771908%3Ads%3A0%2C0%2C3%2C4%2C27%2C0%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489150968%3Au%3A1488658405454999924%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20"
		"(1%20%D0%BD%D0%BE%D0%B2%D0%BE%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%BE)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", ENDITEM, 
		"Url=https://an.yandex.ru/page/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&charset=utf-8&imp-id=14&enable-flat-highlight=1&stat-id=14&uid=474076123&grab=dNCS0YXQvtC00Y_RidC40LUgKDEg0L3QvtCy0L7QtSDQv9C40YHRjNC80L4pIOKAlCDQr9C90LTQtdC60YEu0J_QvtGH0YLQsAo=&callback=Ya[1489150975141]", ENDITEM, 
		"Url=https://an.yandex.ru/count/5Dh_mAGW4Ay40000ZhO_Aem5XPQO5fuEaRWo42G6auKDfD00000z2G6kxTR1zSHfAVcxyhud-L-mxYK1mV__________3-u1xm7Rylw0R6UmxYK1wWxrtLGGGTZM0VRHBnsc_wLKUWi0=LP9v19K2cm5kGxS2YP9LjPYC9ugpOSzT1Rs_B50D1QMjLHq8YBsyYg03lAyoqGUcEPslO4C5tG7Ua2Jq-UtMmVN4QIdvcJIWb9gEivH19A-OJbcqcBGMsP0BaDgGdoIdWSYei41PSmT1fC00000z2R41ih1I0090kQzWGmN5Zm_Dic7FNGNEi0We6GVI__________yFq___________3y80tuKDxW7baF8hxOCeUXK0?test-tag=265532376886273&stat-id=14&wmode=0", ENDITEM, 
		"Url=https://an.yandex.ru/count/5Dh_mAGW4Ay40000ZhO_Aem5XPQO5fuEaRWo42G6auKDfD00000z2G6kxTR1zSHfAVcxyhud-L-mxYK1mV__________3-u1xm7Rylw0R6UmxYK1wWxrtLGGGTZM0VRHBnsc_wLKUWi0=LP9v19K2cm5kGxS2YP9LjPYC9ugpOSzT1Rs_B50D1QMjLHq8YBsyYg03lAyoqGUcEPslO4C5tG7Ua2Jq-UtMmVN4QIdvcJIWb9gEivH19A-OJbcqcBGMsP0BaDgGdoIdWSYei41PSmT1fC00000z2R41ih1I0090kQzWGmN5Zm_Dic7FNGNEi0We6GVI__________yFq___________3y80tuKDxW7baF8hxOCeUXK0?test-tag=265532377017345&stat-id=14&wmode=0", ENDITEM, 
		"Url=https://mc.yandex.ru/clmap/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&pointer-click=rn%3A1048414214%3Ax%3A32825%3Ay%3A30274%3At%3A664%3Ap%3AWWW%3B1W1AAA2FA1A1A&browser-info=rqnl%3A1%3Ast%3A1489151035%3Au%3A1488658405454999924", ENDITEM, 
		LAST);

	web_submit_data("92550_2", 
		"Action=https://mc.yandex.ru/watch/92550?cnt-class=1&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160248%3Aet%3A1489150968%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apv%3A1%3Als%3A415075616486%3Arqn%3A6%3Arn%3A456643785%3Ahid%3A110771908%3Ads%3A0%2C0%2C3%2C4%2C27%2C0%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489150968%3Au%3A%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20(1%20%D0%BD%D0%BE%D0%B2%D0%BE%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%BE)"
		"%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox", 
		"Snapshot=t471.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_submit_data("92550_3", 
		"Action=https://mc.yandex.ru/watch/92550?cnt-class=1&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fncrnd%3D2021&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160248%3Aet%3A1489150968%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apv%3A1%3Als%3A415075616486%3Arqn%3A6%3Arn%3A456643785%3Ahid%3A110771908%3Ads%3A0%2C0%2C3%2C4%2C27%2C0%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A2%3Ast%3A1489150968%3Au%3A1488658405454999924%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20"
		"(1%20%D0%BD%D0%BE%D0%B2%D0%BE%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%BE)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox", 
		"Snapshot=t472.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_submit_data("16082914_3", 
		"Action=https://mc.yandex.ru/watch/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Az%3A180%3Ai%3A20170310160250%3Aet%3A1489150970%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apa%3A1%3Als%3A304057826452%3Arqn%3A15%3Arn%3A133638216%3Ahid%3A110771908%3Ads%3A%2C%2C%2C%2C%2C%2C%2C285%2C9%2C801%2C801%2C6%2C444%3Afp%3A466%3Arqnl%3A1%3Ast%3A1489150970%3Au%3A1488658405454999924", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox", 
		"Snapshot=t473.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=site-info", "Value={\"logjam\":\"show\"}", ENDITEM, 
		LAST);

	lr_end_transaction("check_messages",LR_AUTO);

	lr_think_time(13);

	web_submit_data("16082914_4", 
		"Action=https://mc.yandex.ru/watch/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160303%3Aet%3A1489150984%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Anb%3A1%3Acl%3A79%3Als%3A304057826452%3Arqn%3A16%3Arn%3A490864448%3Ahid%3A110771908%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489150984%3Au%3A1488658405454999924", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox", 
		"Snapshot=t474.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	lr_start_transaction("reply_for_message");

	web_url("new", 
		"URL=https://mail.yandex.ru/lite/message/161566636631916607/new", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/lite/inbox", 
		"Snapshot=t475.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://mc.yandex.ru/watch/16082914?wmode=5&callback=_ymjsp1066026808&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&ut=noindex&browser-info="
		"ilt%3AdGVzdCAyMWUzMTImbmJzcDs%3D%3Aj%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160357%3Aet%3A1489151038%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Apv%3A1%3Als%3A304057826452%3Arqn%3A17%3Arn%3A59434469%3Ahid%3A272713985%3Ads%3A0%2C2%2C5%2C4%2C24%2C0%2C%2C%2C%2C%2C%2C%2C%3Afp%3A3073%3Arqnl%3A1%3Ast%3A1489151038%3Au%3A1488658405454999924%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20"
		"(1%20%D0%BD%D0%BE%D0%B2%D0%BE%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%BE)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", ENDITEM, 
		"Url=https://an.yandex.ru/page/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&charset=utf-8&imp-id=14&enable-flat-highlight=1&stat-id=14&uid=474076123&grab=dNCS0YXQvtC00Y_RidC40LUgKDEg0L3QvtCy0L7QtSDQv9C40YHRjNC80L4pIOKAlCDQr9C90LTQtdC60YEu0J_QvtGH0YLQsAo=&callback=Ya[1489151039151]", ENDITEM, 
		"Url=https://www.tns-counter.ru/V13a****yandex_ru/ru/CP1251/tmsec=yandex_mail/?id1164502658622", ENDITEM, 
		"Url=https://an.yandex.ru/count/NGYCOU5YL6840000Zhn3Aem5XPQO5fuEaR0jVVGDauKDfD00000z2G6kutA1ggHoAlcxyhud-L-mxYK1mV__________3-u1xm7Rylw0R6UmxYK1wWxrqHrgE3Lo0VRS5rNe_wLKUWi0=zKhP5PK2cm5kGxS2YP9LjPYC9ugpOSzT1Rs_B50D1QMjLHq8YBsyYg03lAyoqGUcEPslO4C5tG7Ua2Jq-UDoWQgaSYhvcJIWb9gEivH19A-Oeu6qcFKWsP0BaDgGdoIdZtkejSO3SmT1fC00000z2R41ih1I0090kQzWGmN5Zm_Dic7FNGNEi0We6GVI__________yFq___________3y80tuKDxW7baF8hxOCeUXK0?test-tag=265532376886273&stat-id=14&wmode=0", ENDITEM, 
		"Url=https://mc.yandex.ru/clmap/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&pointer-click=rn%3A669495910%3Ax%3A23220%3Ay%3A22015%3At%3A37%3Ap%3A%5EA1AFA1A1A1A1A&browser-info=rqnl%3A1%3Ast%3A1489151042%3Au%3A1488658405454999924", ENDITEM, 
		"Url=https://mc.yandex.ru/clmap/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&pointer-click=rn%3A580258289%3Ax%3A19726%3Ay%3A32255%3At%3A222%3Ap%3A%5EA1AFA1A1A1A1A&browser-info=rqnl%3A1%3Ast%3A1489151060%3Au%3A1488658405454999924", ENDITEM, 
		"Url=https://mc.yandex.ru/clmap/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&pointer-click=rn%3A387979626%3Ax%3A39104%3Ay%3A30575%3At%3A246%3Ap%3APAA1AFA1A1A1A1A&browser-info=rqnl%3A1%3Ast%3A1489151063%3Au%3A1488658405454999924", ENDITEM, 
		LAST);

	web_submit_data("92550_4", 
		"Action=https://mc.yandex.ru/watch/92550?cnt-class=1&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160357%3Aet%3A1489151038%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apv%3A1%3Als%3A415075616486%3Arqn%3A7%3Arn%3A676795499%3Ahid%3A272713985%3Ads%3A0%2C2%2C5%2C4%2C24%2C0%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489151038%3Au%3A%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20(1%20%D0%BD%D0%BE%D0%B2%D0%BE%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%BE)"
		"%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/message/161566636631916607/new", 
		"Snapshot=t476.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_submit_data("16082914_5", 
		"Action=https://mc.yandex.ru/watch/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Az%3A180%3Ai%3A20170310160359%3Aet%3A1489151040%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apa%3A1%3Als%3A304057826452%3Arqn%3A18%3Arn%3A1276150%3Ahid%3A272713985%3Ads%3A%2C%2C%2C%2C%2C%2C%2C450%2C3%2C3362%2C3362%2C7%2C3257%3Arqnl%3A1%3Ast%3A1489151040%3Au%3A1488658405454999924", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/message/161566636631916607/new", 
		"Snapshot=t477.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=site-info", "Value={\"logjam\":\"show\"}", ENDITEM, 
		LAST);

	web_submit_data("compose-action.xml", 
		"Action=https://mail.yandex.ru/lite/compose-action.xml", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/lite/message/161566636631916607/new", 
		"Snapshot=t478.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ttype", "Value=plain", ENDITEM, 
		"Name=oper", "Value=reply", ENDITEM, 
		"Name=mark_as", "Value=replied", ENDITEM, 
		"Name=mark_ids", "Value=161566636631916607", ENDITEM, 
		"Name=inreplyto", "Value=<4883641489150691@web9m.yandex.ru>", ENDITEM, 
		"Name=references", "Value=<4883641489150691@web9m.yandex.ru>", ENDITEM, 
		"Name=overwrite", "Value=", ENDITEM, 
		"Name=from_mailbox", "Value=ufo.xco2017@yandex.ru", ENDITEM, 
		"Name=from_name", "Value=xcom ufo", ENDITEM, 
		"Name=to", "Value=\"xcom ufo\" <ufo.xco2017@yandex.ru>, ", ENDITEM, 
		"Name=cc", "Value=", ENDITEM, 
		"Name=subj", "Value=Re:test", ENDITEM, 
		"Name=_handlers", "Value=do-send", ENDITEM, 
		"Name=compose_check", "Value=6e3ae5c2371db85f50d762c8b7406733", ENDITEM, 
		"Name=_ckey", "Value=o/TtHDH7kzaMjCbiaXzkkW0yxZu9tUIs", ENDITEM, 
		"Name=style", "Value=lite", ENDITEM, 
		"Name=retpath", "Value=inbox", ENDITEM, 
		"Name=send", "Value=hello loadeunner", ENDITEM, 
		"Name=doit", "Value=Отправить", ENDITEM, 
		LAST);

	web_submit_data("92550_5", 
		"Action=https://mc.yandex.ru/watch/92550?cnt-class=1&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fids%3D%26executed_action%3Dmessage_send&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160429%3Aet%3A1489151070%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apv%3A1%3Als%3A415075616486%3Arqn%3A8%3Arn%3A759557812%3Ahid%3A136907421%3Ads%3A0%2C0%2C148%2C4%2C6670%2C6645%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489151070%3Au%3A%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20"
		"(%D0%BD%D0%B5%D1%82%20%D0%BD%D0%BE%D0%B2%D1%8B%D1%85%20%D0%BF%D0%B8%D1%81%D0%B5%D0%BC)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox?ids=&executed_action=message_send", 
		"Snapshot=t479.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		EXTRARES, 
		"Url=https://www.tns-counter.ru/V13a****yandex_ru/ru/CP1251/tmsec=yandex_mail/?id1164509919989", "Referer=https://mail.yandex.ru/lite/inbox?ids=&executed_action=message_send", ENDITEM, 
		LAST);

	web_submit_data("92550_6", 
		"Action=https://mc.yandex.ru/watch/92550?cnt-class=1&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fids%3D%26executed_action%3Dmessage_send&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160429%3Aet%3A1489151070%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apv%3A1%3Als%3A415075616486%3Arqn%3A8%3Arn%3A759557812%3Ahid%3A136907421%3Ads%3A0%2C0%2C148%2C4%2C6670%2C6645%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A2%3Ast%3A1489151070%3Au%3A1488658405454999924%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20"
		"(%D0%BD%D0%B5%D1%82%20%D0%BD%D0%BE%D0%B2%D1%8B%D1%85%20%D0%BF%D0%B8%D1%81%D0%B5%D0%BC)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox?ids=&executed_action=message_send", 
		"Snapshot=t480.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		EXTRARES, 
		"Url=https://an.yandex.ru/page/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fids%3D%26executed_action%3Dmessage_send&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&charset=utf-8&imp-id=14&enable-flat-highlight=1&stat-id=14&uid=474076123&grab=dNCS0YXQvtC00Y_RidC40LUgKNC90LXRgiDQvdC-0LLRi9GFINC_0LjRgdC10LwpIOKAlCDQr9C90LTQtdC60YEu0J_QvtGH0YLQsAo=&callback=Ya[1489151077329]", "Referer=https://mail.yandex.ru/lite/inbox?ids=&executed_action=message_send", ENDITEM, 
		"Url=16082914?wmode=5&callback=_ymjsp199579801&page-ref=https%3A%2F%2Fmail.yandex.ru%2Flite%2Fmessage%2F161566636631916607%2Fnew&page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fids%3D%26executed_action%3Dmessage_send&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160429%3Aet%3A1489151070%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Apv%3A1%3Als%3A304057826452%3Arqn%3A19%3Arn%3A397679230%3Ahid%3A136907421%3Ads%3A0%2C0%2C148%2C4%2C6670%2C6645%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489151070%3Au%3A1488658405454999924%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20"
		"(%D0%BD%D0%B5%D1%82%20%D0%BD%D0%BE%D0%B2%D1%8B%D1%85%20%D0%BF%D0%B8%D1%81%D0%B5%D0%BC)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", "Referer=https://mail.yandex.ru/lite/inbox?ids=&executed_action=message_send", ENDITEM, 
		LAST);

	web_submit_data("16082914_6", 
		"Action=https://mc.yandex.ru/watch/16082914?page-url=https%3A%2F%2Fmail.yandex.ru%2Flite%2Finbox%3Fids%3D%26executed_action%3Dmessage_send&ut=noindex&browser-info="
		"j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Az%3A180%3Ai%3A20170310160431%3Aet%3A1489151072%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apa%3A1%3Als%3A304057826452%3Arqn%3A20%3Arn%3A942955836%3Ahid%3A136907421%3Ads%3A%2C%2C%2C%2C%2C%2C%2C320%2C8%2C8520%2C8520%2C7%2C7141%3Afp%3A7153%3Arqnl%3A1%3Ast%3A1489151072%3Au%3A1488658405454999924", 
		"Method=POST", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/lite/inbox?ids=&executed_action=message_send", 
		"Snapshot=t481.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=site-info", "Value={\"logjam\":\"show\"}", ENDITEM, 
		EXTRARES, 
		"Url=https://an.yandex.ru/count/TnJIm_ik7sm40000Zhj5Aem5XPQO5fuEaRUm-u8FauKDfD00000z2G6kuxA14VVhAlcxyhud-L-mxYK1mV__________3-u1xm7Rylw0R6UmxYK1wWxrtoj09JMo0VRHhga60APKUWi0=1E5QDfK2cm5kGxS2YR1iEVW3c8mdYhDXprq5lRyiK0q5fQrL7GY8lRoAe0EyhpBH1wOvdQzWGmNT0TwG9FJvuxA14VVhAlcPDA2Kcewpb44ahvF0PhIO7nhPa0kGsf2V9AU5NwYrnWDp1q6am00003q9iG6oi5800a2vhs131SMF3ysoOSzT1Swm22WP1zB__________m_J__________yFmW3VXGtk0UMGyYljWoXy5G00?test-tag=265532376886273&stat-id=14&wmode=0", "Referer=https://mail.yandex.ru/lite/inbox?"
		"ids=&executed_action=message_send", ENDITEM, 
		LAST);

	lr_end_transaction("reply_for_message",LR_AUTO);

	return 0;
}