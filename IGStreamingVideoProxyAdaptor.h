
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoProxyProtocol.h>

@protocol OS_dispatch_queue, IGVideoProxyDelegate;
@class NSObject, NSMutableDictionary, NSString;

@interface IGStreamingVideoProxyAdaptor : NSObject <IGVideoProxyProtocol> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableDictionary* _urlToRequests;
	id<IGVideoProxyDelegate> _proxyDelegate;
	mutex _mutex;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGVideoProxyDelegate> delegate; 
+(id)sharedProxy;
-(id)proxyURLForURL:(id)arg1 ;
-(void)addWhiteListedURL:(id)arg1 ;
-(void)removeWhiteListedURL:(id)arg1 ;
-(void)cancelVideoRequestForURL:(id)arg1 ;
-(void)handlePlaybackErrorForURL:(id)arg1 ;
-(id)requestArrayForUrl:(id)arg1 ;
-(void)startVideoRequestForURL:(id)arg1 ;
-(void)setDelegate:(id<IGVideoProxyDelegate>)arg1 ;
-(id)init;
-(id<IGVideoProxyDelegate>)delegate;
-(id)callbackQueue;
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
@end

