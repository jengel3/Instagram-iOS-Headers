
#import <Instagram/IGAutocompleteAbstractStore.h>
#import <Instagram/IGAutocompleteAbstractStoreProtocol.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface IGAutocompleteUsersStore : IGAutocompleteAbstractStore <IGAutocompleteAbstractStoreProtocol> {

	NSMutableDictionary* _users;
	NSMutableDictionary* _buckets;
	NSMutableArray* _recentUserPKs;

}

@property (nonatomic,retain) NSMutableDictionary * users;                 //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * buckets;               //@synthesize buckets=_buckets - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentUserPKs;              //@synthesize recentUserPKs=_recentUserPKs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)archiveURLForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)loadUsers;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(id)archiveURL;
-(void)loadUsersFromNotification:(id)arg1 ;
-(void)onFriendStatusReceived:(id)arg1 ;
-(void)onUserChanged:(id)arg1 ;
-(NSMutableArray *)recentUserPKs;
-(void)setBuckets:(NSMutableDictionary *)arg1 ;
-(void)bucketUser:(id)arg1 ;
-(void)loadFromNetwork;
-(void)setRecentUserPKs:(NSMutableArray *)arg1 ;
-(void)addUser:(id)arg1 addToRecent:(char)arg2 ;
-(void)logStoreLoaded;
-(void)unbucketUser:(id)arg1 ;
-(void)updateUser:(id)arg1 ;
-(id)usersFromResponse:(id)arg1 ;
-(id)regexPattern;
-(id)storedUsersForKeys:(id)arg1 fromSet:(int)arg2 ;
-(id)usersInBucket:(id)arg1 ;
-(id)allUsers;
-(id)recentUsers;
-(id)followingUsers;
-(void)addUsers:(id)arg1 addToRecent:(char)arg2 ;
-(void)archive;
-(NSMutableDictionary *)buckets;
-(void)dealloc;
-(void)clearHistory;
-(NSMutableDictionary *)users;
-(void)removeUser:(id)arg1 ;
-(void)setUsers:(NSMutableDictionary *)arg1 ;
@end

