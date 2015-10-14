/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:07 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/NSURLSessionTaskDelegate.h>
#import <Instagram/NSURLSessionDataDelegate.h>
#import <Instagram/NSURLSessionDownloadDelegate.h>

@class AFURLSessionManager, NSMutableData, NSProgress, NSURL, NSString;

@interface AFURLSessionManagerTaskDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {

	AFURLSessionManager* _manager;
	NSMutableData* _mutableData;
	NSProgress* _uploadProgress;
	NSProgress* _downloadProgress;
	NSURL* _downloadFileURL;
	/*^block*/id _downloadTaskDidFinishDownloading;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic,__weak) AFURLSessionManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableData;                       //@synthesize mutableData=_mutableData - In the implementation block
@property (nonatomic,retain) NSProgress * uploadProgress;                       //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (nonatomic,retain) NSProgress * downloadProgress;                     //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) NSURL * downloadFileURL;                             //@synthesize downloadFileURL=_downloadFileURL - In the implementation block
@property (nonatomic,copy) id downloadTaskDidFinishDownloading;                 //@synthesize downloadTaskDidFinishDownloading=_downloadTaskDidFinishDownloading - In the implementation block
@property (nonatomic,copy) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateForManager:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUploadProgress:(NSProgress *)arg1 ;
-(NSProgress *)uploadProgress;
-(id)downloadTaskDidFinishDownloading;
-(void)setDownloadTaskDidFinishDownloading:(id)arg1 ;
-(void)setDownloadFileURL:(NSURL *)arg1 ;
-(NSURL *)downloadFileURL;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(AFURLSessionManager *)manager;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setManager:(AFURLSessionManager *)arg1 ;
-(NSProgress *)downloadProgress;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(NSMutableData *)mutableData;
-(void)setMutableData:(NSMutableData *)arg1 ;
@end

