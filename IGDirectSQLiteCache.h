
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectCaching.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString, IGDirectSQLiteThreadsManager, IGDirectSQLiteMessagesManager;

@interface IGDirectSQLiteCache : NSObject <IGDirectCaching, IGUserSessionClearableObject> {

	NSString* _userPK;
	sqlite3Ref _database;
	IGDirectSQLiteThreadsManager* _threadsManager;
	IGDirectSQLiteMessagesManager* _messagesManager;

}

@property (nonatomic,copy,readonly) NSString * userPK;                                     //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,readonly) sqlite3Ref database;                                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) IGDirectSQLiteThreadsManager * threadsManager;                //@synthesize threadsManager=_threadsManager - In the implementation block
@property (nonatomic,retain) IGDirectSQLiteMessagesManager * messagesManager;              //@synthesize messagesManager=_messagesManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)databasePathForUserPK:(id)arg1 ;
+(char)deleteDatabaseForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)storedThreadWithID:(id)arg1 ;
-(void)storeThread:(id)arg1 ;
-(void)fetchThreadsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)threadsWithOptions:(id)arg1 ;
-(id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned)arg2 ;
-(id)storedThreadWithUsers:(id)arg1 ;
-(id)allPendingMessages;
-(void)removePendingMessage:(id)arg1 ;
-(void)removeAllPendingMessages;
-(void)updateOrAddPendingMessage:(id)arg1 ;
-(id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned)arg2 ;
-(void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(char)arg3 ;
-(void)removeThreadWithId:(id)arg1 ;
-(void)addContent:(id)arg1 forThreadId:(id)arg2 ;
-(char)prepareForDatabase:(sqlite3Ref)arg1 ;
-(id)createThreadsManagerForDatabase:(sqlite3Ref)arg1 ;
-(void)setThreadsManager:(IGDirectSQLiteThreadsManager *)arg1 ;
-(IGDirectSQLiteThreadsManager *)threadsManager;
-(id)createMessagesManagerForDatabase:(sqlite3Ref)arg1 ;
-(void)setMessagesManager:(IGDirectSQLiteMessagesManager *)arg1 ;
-(IGDirectSQLiteMessagesManager *)messagesManager;
-(id)initWithUserPK:(id)arg1 ;
-(char)openAndPrepareDatabase;
-(NSString *)userPK;
-(char)closeDatabase;
-(id)databasePath;
-(sqlite3Ref)database;
@end

