

@protocol RCTImageURLLoader <RCTBridgeModule>
@optional
-(float)loaderPriority;

@required
-(char)canLoadImageURL:(id)arg1;
-(/*^block*/id)loadImageForURL:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6;

@end

