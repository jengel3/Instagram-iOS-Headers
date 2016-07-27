

@protocol RCTBridgeDelegate <NSObject>
@optional
-(id)fallbackSourceURLForBridge:(id)arg1;
-(id)extraModulesForBridge:(id)arg1;
-(void)loadSourceForBridge:(id)arg1 withBlock:(/*^block*/id)arg2;

@required
-(id)sourceURLForBridge:(id)arg1;

@end

