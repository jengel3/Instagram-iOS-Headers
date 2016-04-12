
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString, IGNonCurrentUserDefaults, NSMutableOrderedSet, NSSet;

@interface IGHiddenSearchItemStore : NSObject <IGUserSessionClearableObject> {

	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSMutableOrderedSet* _store;
	NSString* _defaultsKey;

}

@property (nonatomic,readonly) NSSet * itemIds; 
@property (nonatomic,retain) NSString * userSessionPK;                                    //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * store;                                 //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) NSString * defaultsKey;                                        //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(void)clearForUserDefaults:(id)arg1 key:(id)arg2 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(NSSet *)itemIds;
-(void)addItemId:(id)arg1 ;
-(NSString *)defaultsKey;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 defaultsKey:(id)arg3 ;
-(void)setDefaultsKey:(NSString *)arg1 ;
-(NSMutableOrderedSet *)store;
-(void)setStore:(NSMutableOrderedSet *)arg1 ;
@end

