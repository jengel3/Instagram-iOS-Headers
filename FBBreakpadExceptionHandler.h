

@class NSMutableSet, NSString;

@interface FBBreakpadExceptionHandler : NSObject {

	NSMutableSet* _breakpadExtraParameters;
	int _currentSessionGeneratedStackTracesCount;
	void* _breakpad;
	NSString* _exceptionDirectory;

}

@property (nonatomic,copy,readonly) NSString * exceptionDirectory;              //@synthesize exceptionDirectory=_exceptionDirectory - In the implementation block
+(void)setHandleExcResourceMachException:(char)arg1 ;
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4 exceptionDirectory:(id)arg5 processId:(int)arg6 ;
-(int)crashReportCount;
-(void)setExceptionInfoString:(id)arg1 forKey:(id)arg2 ;
-(id)latestBreakpadCrashReport;
-(void)tearDownExceptionHandlers;
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4 ;
-(id)generateExtraFileName;
-(void)genericSetBreakpadParamValue:(id)arg1 forKey:(id)arg2 ;
-(void)genericSetBreakpadUploadParamValue:(id)arg1 forKey:(id)arg2 ;
-(id)latestBreakpadCrashReportWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_exceptionFilename:(id)arg1 ;
-(void)process:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)processReports:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(int)compareFileByCreationDate:(id)arg1 withFile:(id)arg2 inDirectory:(id)arg3 ;
-(id)genericGetBreakpadParamForKey:(id)arg1 ;
-(void)breakpadCleanExtra:(id)arg1 ;
-(id)breakpadCopyLargeParamsToNewExtraFile;
-(void)incrementGeneratedStackTracesCounter;
-(void)resetGeneratedStackTracesCountFromUserDefaults;
-(NSString *)exceptionDirectory;
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 ;
-(void)setReportUrl:(id)arg1 ;
-(int)crashReportCountExcludingExplicitlyGeneratedStacktraces;
-(void)breakpadGenerateReportWithParams:(id)arg1 isQuickReport:(char)arg2 ;
-(void)registerPostExceptionUnsafeCallback:(/*function pointer*/void*)arg1 ;
-(void)dealloc;
-(void)send;
-(void)process:(id)arg1 ;
@end

