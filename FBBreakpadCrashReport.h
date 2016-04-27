

@class NSMutableDictionary, NSURL, NSString, NSDate;

@interface FBBreakpadCrashReport : NSObject {

	NSMutableDictionary* _parameters;
	NSMutableDictionary* _fileAttachmentData;
	NSURL* _exceptionURL;
	NSString* _minidumpPath;
	NSString* _configPath;
	NSString* _extraPath;
	NSDate* _crashTime;

}

@property (nonatomic,readonly) NSURL * exceptionURL;                      //@synthesize exceptionURL=_exceptionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * minidumpPath;              //@synthesize minidumpPath=_minidumpPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * configPath;                //@synthesize configPath=_configPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * extraPath;                 //@synthesize extraPath=_extraPath - In the implementation block
@property (nonatomic,readonly) NSDate * crashTime;                        //@synthesize crashTime=_crashTime - In the implementation block
+(void)cleanupCorruptedCrashReportWithConfigPath:(id)arg1 ;
+(double)defaultSendCrashReportTimeoutInterval;
-(void)addFileUploadAttachment:(id)arg1 ;
-(char)loadConfigFile:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)sendCrashReport:(id*)arg1 timeoutInterval:(double)arg2 ;
-(id)initWithConfigPath:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)minidumpData;
-(void)addParameter:(id)arg1 forKey:(id)arg2 ;
-(void)removeFileUploadAttachment:(id)arg1 ;
-(id)sendCrashReport:(id*)arg1 ;
-(void)cleanupFiles;
-(NSURL *)exceptionURL;
-(NSString *)minidumpPath;
-(NSString *)configPath;
-(NSString *)extraPath;
-(NSDate *)crashTime;
-(void)removeParameterForKey:(id)arg1 ;
-(id)parameters;
@end

