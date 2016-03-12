

@protocol IGVideoProxyProtocol <NSObject>
@property (assign,nonatomic,__weak) id<IGVideoProxyDelegate> delegate; 
@required
+(id)sharedProxy;
-(void)startVideoRequestForURL:(id)arg1;
-(void)cancelVideoRequestForURL:(id)arg1;
-(id)proxyURLForURL:(id)arg1;
-(void)addWhiteListedURL:(id)arg1;
-(void)removeWhiteListedURL:(id)arg1;
-(void)handlePlaybackErrorForURL:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGVideoProxyDelegate>)delegate;

@end

