

@protocol IGVideoProxyProtocol <AVAssetResourceLoaderDelegate>
@property (assign,nonatomic,__weak) id<IGVideoProxyDelegate> delegate; 
@required
-(id)proxyURLForURL:(id)arg1;
-(void)addWhiteListedURL:(id)arg1;
-(void)removeWhiteListedURL:(id)arg1;
-(void)cancelVideoRequestForURL:(id)arg1;
-(void)handlePlaybackErrorForURL:(id)arg1;
-(void)startVideoRequestForURL:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGVideoProxyDelegate>)delegate;
-(id)callbackQueue;

@end

