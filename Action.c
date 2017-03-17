Action()
{

	unsigned int leng;
	web_set_sockets_option("SSL_VERSION", "2&3");
	
	lr_start_transaction("start_page");

		web_url("lite", 
		"URL=https://{HOST}/lite", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("start_page", LR_AUTO);

	lr_start_transaction("log_in");

	lr_think_time(20);
	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	
	web_submit_data("passport", 
		"Action=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2F{HOST}%2Flite%2Finbox", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://passport.yandex.ru/passport?mode=auth&retpath=https%3A%2F%2F{HOST}%2Flite%2Finbox", 
		"Snapshot=t465.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value={login}", ENDITEM, 
		"Name=passwd", "Value={PasswordParameter}", ENDITEM, 
		"Name=retpath", "Value=https://{HOST}/lite/inbox", ENDITEM, 
		EXTRARES, 
		LAST);

	lr_end_transaction("log_in",LR_AUTO);
	lr_think_time(9);
	lr_start_transaction("check_messages");
	
web_reg_save_param_regexp (
"ParamName=unreadId",
"RegExp=message/(\\d*)/new\" class=\"b-messages__message__link\" aria-label=\".*?\"><span aria-hidden=\"true\" role=\"presentation\"><span class=\"b-messages__subject\"><span>(.*?(test).*?)</",
//"RegExp=message/([0-9]*)/new\" class=\"b-messages__message__link\" aria-label=\"[^\"]*?\"><span aria-hidden=\"true\" role=\"presentation\"><span class=\"b-messages__prefix\">Re: </span><span class=\"b-messages__subject\"><span>(.*?(test).*?)",
"Notfound=warning",
SEARCH_FILTERS,
"Group=1",
// "RequestUrl=*/files/index.html",
LAST );	
	web_url("unread_2", 
		"URL=https://mail.yandex.ru/lite/unread", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/lite/inbox?ncrnd=2629", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);

leng=strlen(lr_eval_string("{unreadId}"));
if (leng == 0) {
lr_error_message("Новые сообщения с темой test не найдены");
lr_exit(LR_EXIT_VUSER, LR_FAIL);
return(0);}
else {
lr_output_message("Найдены новые сообщения.");
}

lr_end_transaction("check_messages",LR_AUTO);
	lr_think_time(13);

	lr_start_transaction("reply_for_message");

		  web_reg_save_param_ex(
    "ParamName=markIds", 
    "LB/IC=<input type=\"hidden\" name=\"ids\" value=\"",
    "RB/IC=\"",
    //"Ordinal=all",
   // "SaveLen=-1",
   // "DFEs=UrlEncoding",
    SEARCH_FILTERS,
        "Scope=body",
        LAST);
		  web_reg_save_param_ex(
    "ParamName=composeCheck", 
    "LB/IC=<input type=\"hidden\" name=\"compose_check\" value=\"",
    "RB/IC=\"",
    //"Ordinal=all",
   // "SaveLen=-1",
   // "DFEs=UrlEncoding",
    SEARCH_FILTERS,
        "Scope=body",
        LAST);
	
		  web_reg_save_param_ex(
    "ParamName=c_Key", 
    "LB/IC=<input type=\"hidden\" name=\"_ckey\" value=\"",
    "RB/IC=\"",
    //"Ordinal=all",
   // "SaveLen=-1",
   // "DFEs=UrlEncoding",
    SEARCH_FILTERS,
        "Scope=body",
        LAST);
		  web_reg_save_param_ex(
    "ParamName=senderName", 
    "LB/IC=<input type=\"hidden\" name=\"from_name\" value=\"",
    "RB/IC=\"",
    //"Ordinal=all",
   // "SaveLen=-1",
   // "DFEs=UrlEncoding",
    SEARCH_FILTERS,
        "Scope=body",
        LAST);
	web_reg_save_param_ex(
"ParamName=toName",
"LB/IC=to\" value='\"",
"RB/IC=\"",
SEARCH_FILTERS,
"Scope=body",
LAST);
	web_reg_save_param_ex(
		"ParamName=toMail",
		"LB/IC=&lt;",
		"RB/IC=&gt;, '>",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);
		web_reg_save_param_ex(
		"ParamName=refs",
		"LB/IC=<input type=\"hidden\" name=\"references\" value=\"",
		"RB/IC=\"",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);
		web_reg_save_param_ex(
		"ParamName=repTo",
		"LB/IC=<input type=\"hidden\" name=\"inreplyto\" value=\"",
		"RB/IC=\"",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);
	web_reg_save_param_ex(
		"ParamName=doIt",
		"LB/IC=input name=\"doit\" value=\"",
		"RB/IC=\"",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);
	web_url("new",
		"URL=https://{HOST}/lite/message/{unreadId}/new",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{HOST}/lite/inbox",
		"Snapshot=t475.inf",
		"Mode=HTML",
		LAST);
	web_submit_data("compose-action.xml",
		"Action=https://{HOST}/lite/compose-action.xml",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://{HOST}/lite/message/{toName}/new",
		"Snapshot=t478.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=ttype", "Value=plain", ENDITEM,
		"Name=oper", "Value=reply", ENDITEM,
		"Name=mark_as", "Value=replied", ENDITEM,
		"Name=mark_ids", "Value={markIds}", ENDITEM,
		"Name=inreplyto", "Value={refs}", ENDITEM,
		"Name=references", "Value={repTo}", ENDITEM,
		"Name=overwrite", "Value=", ENDITEM,
		"Name=from_mailbox", "Value={login}", ENDITEM,
		"Name=from_name", "Value={senderName}", ENDITEM,
		"Name=to", "Value=\"{toName}\" <{toMail}>", ENDITEM,
		"Name=cc", "Value=", ENDITEM,
		"Name=subj", "Value={subject}", ENDITEM,
		"Name=_handlers", "Value=do-send", ENDITEM,
		"Name=compose_check", "Value={composeCheck}", ENDITEM,
		"Name=_ckey", "Value={c_Key}", ENDITEM,
		"Name=style", "Value=lite", ENDITEM,
		"Name=retpath", "Value=inbox", ENDITEM,
		"Name=send", "Value={letter}", ENDITEM,
		"Name=doit", "Value={doIt}", ENDITEM,
		LAST);

	web_submit_data("92550_5",
		"Action=https://mc.yandex.ru/watch/92550?cnt-class=1&page-ref=https%3A%2F%2F{HOST}%2Flite%2Fmessage%2F161566636631916607%2Fnew&page-url=https%3A%2F%2F{HOST}%2Flite%2Finbox%3Fids%3D%26executed_action%3Dmessage_send&ut=noindex&browser-info=j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A1%3Aw%3A1536x745%3Az%3A180%3Ai%3A20170310160429%3Aet%3A1489151070%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apv%3A1%3Als%3A415075616486%3Arqn%3A8%3Arn%3A759557812%3Ahid%3A136907421%3Ads%3A0%2C0%2C148%2C4%2C6670%2C6645%2C%2C%2C%2C%2C%2C%2C%3Arqnl%3A1%3Ast%3A1489151070%3Au%3A%3At%3A%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20(%D0%BD%D0%B5%D1%82%20%D0%BD%D0%BE%D0%B2%D1%8B%D1%85%20%D0%BF%D0%B8%D1%81%D0%B5%D0%BC)%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0",
		"Method=POST",
		"RecContentType=image/gif",
		"Referer=https://{HOST}/lite/inbox?ids=&executed_action=message_send",
		"Snapshot=t479.inf",
		"Mode=HTML",
		ITEMDATA,
		EXTRARES,
		"URL=https://www.tns-counter.ru/V13a****yandex_ru/ru/CP1251/tmsec=yandex_mail/?id1164509919989", "Referer=https://{HOST}/lite/inbox?ids=&executed_action=message_send", ENDITEM,
		LAST);


	web_submit_data("16082914_6",
		"Action=https://mc.yandex.ru/watch/16082914?page-url=https%3A%2F%2F{HOST}%2Flite%2Finbox%3Fids%3D%26executed_action%3Dmessage_send&ut=noindex&browser-info=j%3A1%3As%3A1536x864x24%3Ask%3A1.25%3Aadb%3A2%3Af%3A24.0.0.221%3Afpr%3A331856404701%3Acn%3A2%3Az%3A180%3Ai%3A20170310160431%3Aet%3A1489151072%3Aen%3Autf-8%3Av%3A785%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apa%3A1%3Als%3A304057826452%3Arqn%3A20%3Arn%3A942955836%3Ahid%3A136907421%3Ads%3A%2C%2C%2C%2C%2C%2C%2C320%2C8%2C8520%2C8520%2C7%2C7141%3Afp%3A7153%3Arqnl%3A1%3Ast%3A1489151072%3Au%3A1488658405454999924",
		"Method=POST",
		"RecContentType=image/gif",
		"Referer=https://{HOST}/lite/inbox?ids=&executed_action=message_send",
		"Snapshot=t481.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=site-info", "Value={\"logjam\":\"show\"}", ENDITEM,
		EXTRARES,
		"URL=https://an.yandex.ru/count/TnJIm_ik7sm40000Zhj5Aem5XPQO5fuEaRUm-u8FauKDfD00000z2G6kuxA14VVhAlcxyhud-L-mxYK1mV__________3-u1xm7Rylw0R6UmxYK1wWxrtoj09JMo0VRHhga60APKUWi0=1E5QDfK2cm5kGxS2YR1iEVW3c8mdYhDXprq5lRyiK0q5fQrL7GY8lRoAe0EyhpBH1wOvdQzWGmNT0TwG9FJvuxA14VVhAlcPDA2Kcewpb44ahvF0PhIO7nhPa0kGsf2V9AU5NwYrnWDp1q6am00003q9iG6oi5800a2vhs131SMF3ysoOSzT1Swm22WP1zB__________m_J__________yFmW3VXGtk0UMGyYljWoXy5G00?test-tag=265532376886273&stat-id=14&wmode=0", "Referer=https://{HOST}/lite/inbox?ids=&executed_action=message_send", ENDITEM,
		LAST);

	lr_end_transaction("reply_for_message",LR_AUTO);

	return 0;
}