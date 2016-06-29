

@class NSString;

@interface RCTBundleURLProvider : NSObject {

	char _enableLiveReload;

}

@property (nonatomic,copy) NSString * jsLocation; 
@property (assign,nonatomic) char enableLiveReload;                //@synthesize enableLiveReload=_enableLiveReload - In the implementation block
@property (assign,nonatomic) char enableMinification; 
@property (assign,nonatomic) char enableDev; 
+(id)sharedSettings;
-(void)settingsUpdated;
-(char)isPackagerRunning:(id)arg1 ;
-(NSString *)jsLocation;
-(id)guessPackagerHost;
-(id)packagerServerRoot;
-(char)enableDev;
-(char)enableMinification;
-(void)updateDefaults:(id)arg1 forKey:(id)arg2 ;
-(id)jsBundleURLForBundleRoot:(id)arg1 fallbackResource:(id)arg2 ;
-(char)enableLiveReload;
-(void)setEnableDev:(char)arg1 ;
-(void)setEnableEnableLiveReload:(char)arg1 ;
-(void)setJsLocation:(NSString *)arg1 ;
-(void)setEnableMinification:(char)arg1 ;
-(void)setEnableLiveReload:(char)arg1 ;
-(id)defaults;
-(void)setDefaults;
@end

