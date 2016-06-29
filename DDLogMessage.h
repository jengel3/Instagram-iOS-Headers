

@class NSString, NSDate;

@interface DDLogMessage : NSObject {

	int logLevel;
	int logFlag;
	int logContext;
	NSString* logMsg;
	NSDate* timestamp;
	const char* file;
	const char* className;
	const char* function;
	int lineNumber;
	unsigned machThreadID;
	char threadName[65];
	NSString* logTag;
	char* queueLabel;
	NSString* threadID;
	NSString* fileName;
	NSString* methodName;
	NSString* classNameNSString;
	NSString* threadNameNSString;

}
-(id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(const char*)arg6 className:(const char*)arg7 function:(const char*)arg8 line:(int)arg9 ;
-(id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 className:(const char*)arg6 function:(const char*)arg7 line:(int)arg8 ;
-(id)methodName;
-(void)dealloc;
-(id)className;
-(id)threadName;
-(id)threadID;
-(id)fileName;
@end

