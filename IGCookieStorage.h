

@class NSDictionary;

@interface IGCookieStorage : NSObject {

	NSDictionary* _currentCookies;

}

@property (nonatomic,retain) NSDictionary * currentCookies;              //@synthesize currentCookies=_currentCookies - In the implementation block
+(id)sharedInstance;
-(id)keyChainStore;
-(id)cookiePropertiesForKey:(id)arg1 ;
-(id)allCookies;
-(NSDictionary *)currentCookies;
-(void)setCurrentCookies:(NSDictionary *)arg1 ;
-(id)cookiesForKey:(id)arg1 ;
-(void)saveCookieProperties:(id)arg1 forKey:(id)arg2 ;
-(void)saveCookieKeyMap:(id)arg1 ;
-(void)purgeCookiesForKey:(id)arg1 ;
-(void)storeCookies:(id)arg1 forKey:(id)arg2 shouldKeepExistingUserSessionCookies:(char)arg3 ;
-(void)purgeAllCookies;
-(void)migrateCookiesFromKey:(id)arg1 toKey:(id)arg2 ;
@end

