

@interface RCTI18nUtil : NSObject
+(id)sharedInstance;
-(char)allowRTL;
-(char)isApplicationPreferredLanguageRTL;
-(void)setAllowRTL:(char)arg1 ;
-(char)isDevicePreferredLanguageRTL;
-(char)isRTL;
@end

