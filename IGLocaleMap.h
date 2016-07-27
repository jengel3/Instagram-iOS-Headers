

@class NSArray, NSString;

@interface IGLocaleMap : NSObject {

	NSArray* _fb_preferredLanguages;
	NSString* _preferredFBLocale;

}

@property (nonatomic,copy) NSString * preferredFBLocale;                 //@synthesize preferredFBLocale=_preferredFBLocale - In the implementation block
@property (nonatomic,copy) NSArray * fb_preferredLanguages;              //@synthesize fb_preferredLanguages=_fb_preferredLanguages - In the implementation block
+(id)sharedMap;
-(void)setFb_preferredLanguages:(NSArray *)arg1 ;
-(NSString *)preferredFBLocale;
-(void)setPreferredFBLocale:(NSString *)arg1 ;
-(NSArray *)fb_preferredLanguages;
@end

