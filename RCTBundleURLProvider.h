

@class NSString;

@interface RCTBundleURLProvider : NSObject

@property (nonatomic,copy) NSString * jsLocation; 
@property (assign,nonatomic) char enableLiveReload; 
@property (assign,nonatomic) char enableMinification; 
@property (assign,nonatomic) char enableDev; 
+(id)jsBundleURLForBundleRoot:(id)arg1 packagerHost:(id)arg2 enableDev:(char)arg3 enableMinification:(char)arg4 ;
+(id)sharedSettings;
-(void)setEnableDev:(char)arg1 ;
-(void)setEnableMinification:(char)arg1 ;
-(char)enableDev;
-(char)enableMinification;
-(void)settingsUpdated;
-(NSString *)jsLocation;
-(id)packagerServerHost;
-(void)updateValue:(id)arg1 forKey:(id)arg2 ;
-(id)packagerServerURL;
-(id)jsBundleURLForBundleRoot:(id)arg1 fallbackResource:(id)arg2 ;
-(char)enableLiveReload;
-(void)setEnableLiveReload:(char)arg1 ;
-(void)setJsLocation:(NSString *)arg1 ;
-(id)defaults;
-(void)setDefaults;
-(id)init;
-(void)resetToDefaults;
@end

