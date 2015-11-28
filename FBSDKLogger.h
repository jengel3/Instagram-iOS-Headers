

@class NSString, NSMutableString;

@interface FBSDKLogger : NSObject {

	char _isActive;
	unsigned _loggerSerialNumber;
	NSString* _loggingBehavior;
	NSMutableString* _internalContents;

}

@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,readonly) unsigned loggerSerialNumber;                     //@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingBehavior;                 //@synthesize loggingBehavior=_loggingBehavior - In the implementation block
@property (nonatomic,readonly) char isActive;                                   //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) NSMutableString * internalContents;              //@synthesize internalContents=_internalContents - In the implementation block
+(void)singleShotLogEntry:(id)arg1 logEntry:(id)arg2 ;
+(void)singleShotLogEntry:(id)arg1 formatString:(id)arg2 ;
+(unsigned)generateSerialNumber;
+(void)singleShotLogEntry:(id)arg1 timestampTag:(id)arg2 formatString:(id)arg3 ;
+(void)registerCurrentTime:(id)arg1 withTag:(id)arg2 ;
+(void)registerStringToReplace:(id)arg1 replaceWith:(id)arg2 ;
-(NSString *)loggingBehavior;
-(unsigned)loggerSerialNumber;
-(NSMutableString *)internalContents;
-(id)initWithLoggingBehavior:(id)arg1 ;
-(void)emitToNSLog;
-(void)appendKey:(id)arg1 value:(id)arg2 ;
-(char)isActive;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
@end

