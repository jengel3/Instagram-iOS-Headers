

@protocol RCTURLRequestHandler <RCTBridgeModule>
@optional
-(float)handlerPriority;
-(void)cancelRequest:(id)arg1;

@required
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2;
-(char)canHandleRequest:(id)arg1;

@end

