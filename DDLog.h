

@interface DDLog : NSObject
+(void)addLogger:(id)arg1 ;
+(id)loggingQueue;
+(void)lt_addLogger:(id)arg1 ;
+(void)lt_removeLogger:(id)arg1 ;
+(void)lt_removeAllLoggers;
+(void)lt_log:(id)arg1 ;
+(void)log:(char)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(const char*)arg6 className:(const char*)arg7 function:(const char*)arg8 line:(int)arg9 format:(id)arg10 args:(void*)arg11 ;
+(void)queueLogMessage:(id)arg1 asynchronously:(char)arg2 ;
+(void)lt_flush;
+(char)isRegisteredClass:(Class)arg1 ;
+(id)registeredClasses;
+(int)logLevelForClass:(Class)arg1 ;
+(void)setLogLevel:(int)arg1 forClass:(Class)arg2 ;
+(int)logLevelForTag:(id)arg1 ;
+(void)removeLogger:(id)arg1 ;
+(void)removeAllLoggers;
+(void)log:(char)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 className:(const char*)arg6 function:(const char*)arg7 line:(int)arg8 format:(id)arg9 ;
+(void)log:(char)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(const char*)arg6 className:(const char*)arg7 function:(const char*)arg8 line:(int)arg9 format:(id)arg10 ;
+(void)log:(char)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 className:(const char*)arg6 function:(const char*)arg7 line:(int)arg8 format:(id)arg9 args:(void*)arg10 ;
+(id)registeredClassNames;
+(int)logLevelForClassWithName:(id)arg1 ;
+(void)setLogLevel:(int)arg1 forTag:(id)arg2 ;
+(char)logLevel:(int)arg1 enabledForTag:(id)arg2 ;
+(void)applicationWillTerminate:(id)arg1 ;
+(void)initialize;
+(void)flushLog;
+(void)setLogLevel:(int)arg1 forClassWithName:(id)arg2 ;
@end

