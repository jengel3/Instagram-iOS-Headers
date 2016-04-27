

@protocol RCTBridgeDelegate <NSObject>
@optional
-(void)loadSourceForBridge:(id)arg1 withBlock:(/*^block*/id)arg2;
-(id)extraModulesForBridge:(id)arg1;

@required
-(id)sourceURLForBridge:(id)arg1;

@end

