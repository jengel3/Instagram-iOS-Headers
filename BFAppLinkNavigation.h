

@class NSDictionary, BFAppLink;

@interface BFAppLinkNavigation : NSObject {

	NSDictionary* _extras;
	NSDictionary* _appLinkData;
	BFAppLink* _appLink;

}

@property (nonatomic,copy) NSDictionary * extras;                   //@synthesize extras=_extras - In the implementation block
@property (nonatomic,copy) NSDictionary * appLinkData;              //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,retain) BFAppLink * appLink;                   //@synthesize appLink=_appLink - In the implementation block
+(id)defaultResolver;
+(id)resolveAppLinkInBackground:(id)arg1 resolver:(id)arg2 ;
+(id)navigateToURLInBackground:(id)arg1 resolver:(id)arg2 ;
+(id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3 ;
+(id)callbackAppLinkDataForAppWithName:(id)arg1 url:(id)arg2 ;
+(id)resolveAppLinkInBackground:(id)arg1 ;
+(id)navigateToURLInBackground:(id)arg1 ;
+(int)navigationTypeForLink:(id)arg1 ;
+(void)setDefaultResolver:(id)arg1 ;
+(int)navigateToAppLink:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)extras;
-(void)setExtras:(NSDictionary *)arg1 ;
-(void)setAppLinkData:(NSDictionary *)arg1 ;
-(NSDictionary *)appLinkData;
-(id)stringByEscapingQueryString:(id)arg1 ;
-(id)appLinkURLWithTargetURL:(id)arg1 error:(id*)arg2 ;
-(void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(int)arg3 ;
-(int)navigate:(id*)arg1 ;
-(void)setAppLink:(BFAppLink *)arg1 ;
-(BFAppLink *)appLink;
-(int)navigationType;
@end

