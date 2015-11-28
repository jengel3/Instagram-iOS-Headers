

@class NSDictionary;

@interface IGCookieStorage : NSObject {

	NSDictionary* _currentCookies;

}

@property (nonatomic,retain) NSDictionary * currentCookies;              //@synthesize currentCookies=_currentCookies - In the implementation block
+(id)sharedInstance;
-(void)storeCookies:(id)arg1 forKey:(id)arg2 shouldKeepExistingUserSessionCookies:(char)arg3 ;
-(void)purgeAllCookies;
-(id)cookiesForKey:(id)arg1 ;
-(void)purgeCookiesForKey:(id)arg1 ;
-(id)cookiePropertiesForKey:(id)arg1 ;
-(id)allCookies;
-(NSDictionary *)currentCookies;
-(id)keyChainStore;
-(void)setCurrentCookies:(NSDictionary *)arg1 ;
-(void)saveCookieProperties:(id)arg1 forKey:(id)arg2 ;
-(void)saveCookieKeyMap:(id)arg1 ;
-(void)migrateCookiesFromKey:(id)arg1 toKey:(id)arg2 ;
@end

