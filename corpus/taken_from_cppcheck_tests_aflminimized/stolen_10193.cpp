void HttpFileTransfer :: transferTerminated ( bool bSuccess@1 ) {
if ( m_szCompletionCallback . isNull ( ) ) {
KVS_TRIGGER_EVENT ( KviEvent_OnHTTPGetTerminated , out ? out : ( g_pApp . activeConsole ( ) ) , & vParams )
} else {
KviKvsScript :: run ( m_szCompletionCallback , out ? out : ( g_pApp . activeConsole ( ) ) , & vParams ) ;
}
}
