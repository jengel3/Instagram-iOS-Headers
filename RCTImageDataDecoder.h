

@protocol RCTImageDataDecoder <RCTBridgeModule>
@optional
-(float)decoderPriority;

@required
-(char)canDecodeImageData:(id)arg1;
-(/*^block*/id)decodeImageData:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 completionHandler:(/*^block*/id)arg5;

@end

