
#import <Instagram/IGVideoRequestDelegate.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <Instagram/IGVideoProxyProtocol.h>

@protocol IGVideoProxyDelegate;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface IGVideoProxy : NSObject <IGVideoRequestDelegate, AVAssetResourceLoaderDelegate, IGVideoProxyProtocol> {

	NSMutableDictionary* _requestsForURL;
	NSMutableDictionary* _listeners;
	NSMutableSet* _whiteListedRemoteURLs;
	id<IGVideoProxyDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGVideoProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedProxy;
+(id)remoteURLforProxyURL:(id)arg1 ;
+(void)updateContentInformationRequest:(id)arg1 header:(id)arg2 ;
-(void)startVideoRequestForURL:(id)arg1 ;
-(void)cancelVideoRequestForURL:(id)arg1 ;
-(void)onAppDidEnterBackground;
-(void)cancelMediaLoaderRequestForURL:(id)arg1 ;
-(id)videoRequestForURL:(id)arg1 ;
-(void)videoRequestDidEnd:(id)arg1 error:(id)arg2 ;
-(id)proxyURLForURL:(id)arg1 ;
-(void)handlePlaybackErrorForURL:(id)arg1 ;
-(void)addWhiteListedURL:(id)arg1 ;
-(void)removeWhiteListedURL:(id)arg1 ;
-(void)setDelegate:(id<IGVideoProxyDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGVideoProxyDelegate>)delegate;
-(void)stopAllRequests;
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
@end

