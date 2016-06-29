

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDictionary;

@interface BreakpadController : NSObject {

	NSObject*<OS_dispatch_queue> queue_;
	void* breakpadRef_;
	NSMutableDictionary* configuration_;
	char enableUploads_;
	char started_;
	int uploadIntervalInSeconds_;
	NSDictionary* uploadTimeParameters_;

}
+(id)sharedInstance;
-(void)sendStoredCrashReports;
-(void)setUploadInterval:(int)arg1 ;
-(void)setParametersToAddAtUploadTime:(id)arg1 ;
-(int)sendDelay;
-(void)reportWillBeSent;
-(void)threadUnsafeSendReportWithConfiguration:(id)arg1 withBreakpadRef:(void*)arg2 ;
-(void)setUploadingEnabled:(char)arg1 ;
-(void)setUploadingURL:(id)arg1 ;
-(void)addUploadParameter:(id)arg1 forKey:(id)arg2 ;
-(void)removeUploadParameterForKey:(id)arg1 ;
-(void)withBreakpadRef:(/*^block*/id)arg1 ;
-(void)hasReportToUpload:(/*^block*/id)arg1 ;
-(void)getCrashReportCount:(/*^block*/id)arg1 ;
-(void)getNextReportConfigurationOrSendDelay:(/*^block*/id)arg1 ;
-(void)updateConfiguration:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start:(char)arg1 ;
-(id)initSingleton;
-(void)resetConfiguration;
@end

