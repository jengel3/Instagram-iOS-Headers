

@protocol OS_dispatch_queue;
@class NSObject, IGAnalyticsLogFileManager, NSString, UIApplication;

@interface IGAnalyticsUploader : NSObject {

	char _processing;
	unsigned _retryCount;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _backgroundTaskIdentifier;
	IGAnalyticsLogFileManager* _fileManager;
	NSString* _apiKey;
	NSString* _clientToken;
	char _logOperations;
	NSString* _channelName;
	UIApplication* _application;
	char _aldrinMode;

}
-(void)processNextLogFile;
-(void)logUploadAttemptForFileCount:(unsigned)arg1 ;
-(void)logTrimmingFileCount:(unsigned)arg1 ;
-(char)sendAnalyticsLogsInFile:(id)arg1 ;
-(void)logUploadFailure;
-(void)logFileDeletedNotSent;
-(void)scheduleRetry;
-(char)uploadBinary:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(id)APIRequestParametersForJSONData:(id)arg1 compressed:(char)arg2 ;
-(char)uploadWithParameters:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(id)signedAPIParameters:(id)arg1 ;
-(id)initWithLoggingAPIKey:(id)arg1 clientToken:(id)arg2 queue:(id)arg3 fileManager:(id)arg4 logOperations:(char)arg5 channelName:(id)arg6 application:(id)arg7 aldrinMode:(char)arg8 ;
-(void)processLogFiles;
@end

