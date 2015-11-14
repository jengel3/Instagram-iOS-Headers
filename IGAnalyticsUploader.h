/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:08 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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

