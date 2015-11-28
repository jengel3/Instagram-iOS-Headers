

@interface IGWatchKitExtensionHelper : NSObject {

	char _watchKitExtensionPresent;

}

@property (assign,getter=isWatchKitExtensionPresent,nonatomic) char watchKitExtensionPresent;              //@synthesize watchKitExtensionPresent=_watchKitExtensionPresent - In the implementation block
+(id)sharedWatchKitExtensionHelper;
-(char)isWatchKitExtensionPresent;
-(void)setWatchKitExtensionPresent:(char)arg1 ;
-(void)handleWatchKitExtensionRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

