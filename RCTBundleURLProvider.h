

@class NSString;

@interface RCTBundleURLProvider : NSObject

@property (nonatomic,copy) NSString * jsLocation; 
@property (assign,nonatomic) char enableLiveReload; 
@property (assign,nonatomic) char enableMinification; 
@property (assign,nonatomic) char enableDev; 
+(id)sharedSettings;
-(void)setEnableDev:(char)arg1 ;
-(void)setEnableMinification:(char)arg1 ;
-(char)enableDev;
-(char)enableMinification;
-(void)settingsUpdated;
-(char)isPackagerRunning:(id)arg1 ;
-(NSString *)jsLocation;
-(id)guessPackagerHost;
-(id)packagerServerRoot;
-(void)updateDefaults:(id)arg1 forKey:(id)arg2 ;
-(id)packagerServerURL;
-(id)jsBundleURLForBundleRoot:(id)arg1 fallbackResource:(id)arg2 ;
-(char)enableLiveReload;
-(void)setEnableLiveReload:(char)arg1 ;
-(void)setJsLocation:(NSString *)arg1 ;
-(id)defaults;
-(void)setDefaults;
-(void)resetToDefaults;
@end

