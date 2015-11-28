
#import <Instagram/GCDAsyncSocketDelegate.h>
#import <Instagram/IGVideoRequestDelegate.h>

@protocol IGVideoProxyDelegate;
@class GCDAsyncSocket, NSMutableDictionary, NSMutableSet, NSString;

@interface IGVideoProxy : NSObject <GCDAsyncSocketDelegate, IGVideoRequestDelegate> {

	GCDAsyncSocket* _listenSocket;
	NSMutableDictionary* _requestsForURL;
	NSMutableDictionary* _requestsForSocket;
	NSMutableDictionary* _listeners;
	NSMutableSet* _sockets;
	unsigned _listeningPort;
	NSMutableSet* _whiteListedRemoteURLs;
	id<IGVideoProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGVideoProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProxy;
-(void)startVideoRequestForURL:(id)arg1 ;
-(void)cancelVideoRequestForURL:(id)arg1 ;
-(id)proxyURLForURL:(id)arg1 ;
-(void)addWhiteListedURL:(id)arg1 ;
-(void)removeWhiteListedURL:(id)arg1 ;
-(void)handlePlaybackErrorForURL:(id)arg1 ;
-(void)onAppWillEnterForeground;
-(void)onAppDidEnterBackground;
-(void)cancelMediaLoaderRequestForURL:(id)arg1 ;
-(id)videoRequestForURL:(id)arg1 ;
-(unsigned)randomPortNumber;
-(id)CRLFCRLFData;
-(id)remoteURLforProxyURL:(id)arg1 ;
-(void)socket:(id)arg1 didAcceptNewSocket:(id)arg2 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3 ;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(void)videoRequestDidEnd:(id)arg1 error:(id)arg2 ;
-(void)setDelegate:(id<IGVideoProxyDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGVideoProxyDelegate>)delegate;
-(void)listen;
-(void)stopAllRequests;
@end

