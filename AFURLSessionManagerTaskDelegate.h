
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

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
-(void)setManager:(AFURLSessionManager *)arg1 ;
-(AFURLSessionManager *)manager;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(NSMutableData *)mutableData;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(NSProgress *)downloadProgress;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(void)setMutableData:(NSMutableData *)arg1 ;
@end

