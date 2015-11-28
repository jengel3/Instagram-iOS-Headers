

@protocol OS_dispatch_queue;
@class NSObject, IGAnalyticsLogFileManager, NSString;

@interface IGAnalyticsUploader : NSObject {

	char _processing;
	unsigned _retryCount;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _backgroundTaskIdentifier;
	IGAnalyticsLogFileManager* _fileManager;
	NSString* _apiKey;
	NSString* _apiSecret;
	char _logOperations;
	NSString* _channelName;

}
-(void)processNextLogFile;
-(void)logUploadAttemptForFileCount:(unsigned)arg1 ;
-(void)logTrimmingFileCount:(unsigned)arg1 ;
-(char)sendAnalyticsLogsInFile:(id)arg1 ;
-(void)logUploadFailure;
-(void)logFileDeletedNotSent;
-(void)scheduleRetry;
-(char)uploadBinary:(id)arg1 withParameters:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)APIRequestParametersForJSONData:(id)arg1 ;
-(char)uploadWithParameters:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(id)signAPIParameters:(id)arg1 withSecret:(id)arg2 ;
-(id)initWithLoggingAPIKey:(id)arg1 APISecret:(id)arg2 queue:(id)arg3 fileManager:(id)arg4 logOperations:(char)arg5 channelName:(id)arg6 ;
-(void)processLogFiles;
@end

