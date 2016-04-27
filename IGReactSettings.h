

@interface IGReactSettings : NSObject {

	char _enableMinification;
	char _enableDev;

}

@property (assign,nonatomic) char enableMinification;              //@synthesize enableMinification=_enableMinification - In the implementation block
@property (assign,nonatomic) char enableDev;                       //@synthesize enableDev=_enableDev - In the implementation block
+(id)sharedSettings;
-(char)enableDev;
-(char)enableMinification;
-(id)jsBundleURLForBundleRoot:(id)arg1 ;
-(void)setEnableMinification:(char)arg1 ;
-(void)setEnableDev:(char)arg1 ;
@end

