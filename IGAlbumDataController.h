
#import <Instagram/IGUserSessionClearableObject.h>

@class IGUser, IGService, IGReelSeenStateStore, IGAnnouncer, IGReel, NSMutableDictionary, NSArray, NSMutableSet, NSString;

@interface IGAlbumDataController : NSObject <IGUserSessionClearableObject> {

	IGUser* _user;
	IGService* _service;
	IGReelSeenStateStore* _reelSeenStateStore;
	IGAnnouncer* _announcer;
	IGReel* _currentUserReel;
	NSMutableDictionary* _itemAnnouncers;
	NSArray* _traySortDescriptors;
	NSMutableSet* _loadingReelPKs;
	NSArray* _trayReels;
	NSArray* _sortedPKs;
	NSString* _serializedItemsPath;

}

@property (nonatomic,readonly) IGUser * user;                                          //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGService * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IGReelSeenStateStore * reelSeenStateStore;              //@synthesize reelSeenStateStore=_reelSeenStateStore - In the implementation block
@property (nonatomic,readonly) IGAnnouncer * announcer;                                //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) IGReel * currentUserReel;                               //@synthesize currentUserReel=_currentUserReel - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemAnnouncers;                   //@synthesize itemAnnouncers=_itemAnnouncers - In the implementation block
@property (nonatomic,readonly) NSArray * traySortDescriptors;                          //@synthesize traySortDescriptors=_traySortDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableSet * loadingReelPKs;                            //@synthesize loadingReelPKs=_loadingReelPKs - In the implementation block
@property (nonatomic,retain) NSArray * trayReels;                                      //@synthesize trayReels=_trayReels - In the implementation block
@property (nonatomic,retain) NSArray * sortedPKs;                                      //@synthesize sortedPKs=_sortedPKs - In the implementation block
@property (nonatomic,readonly) NSString * serializedItemsPath;                         //@synthesize serializedItemsPath=_serializedItemsPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(char)needsFetchForReelPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)updateCurrentUserPendingItems;
-(void)uploadsDidUnarchive:(id)arg1 ;
-(void)albumUploadDidStart:(id)arg1 ;
-(void)albumUploadDidFinish:(id)arg1 ;
-(void)albumUploadCancelled:(id)arg1 ;
-(void)albumItemDeleted:(id)arg1 ;
-(void)albumItemHidden:(id)arg1 ;
-(void)deserializeTray;
-(void)resortTrayAndAnnounceUpdatedWithRefreshType:(int)arg1 updateDuration:(double)arg2 ;
-(id)reelsFromTrayResponse:(id)arg1 ;
-(void)serializeLatestTrayResponse:(id)arg1 ;
-(IGReelSeenStateStore *)reelSeenStateStore;
-(void)setTrayReels:(NSArray *)arg1 ;
-(IGAnnouncer *)announcer;
-(NSMutableDictionary *)itemAnnouncers;
-(NSArray *)trayReels;
-(IGReel *)currentUserReel;
-(NSArray *)sortedPKs;
-(NSArray *)traySortDescriptors;
-(void)setSortedPKs:(NSArray *)arg1 ;
-(NSMutableSet *)loadingReelPKs;
-(void)announceUpdatedWithReel:(id)arg1 refreshType:(int)arg2 updateDuration:(double)arg3 ;
-(void)removeItemFromReelAndAnnounce:(id)arg1 ;
-(NSString *)serializedItemsPath;
-(id)initWithUser:(id)arg1 service:(id)arg2 reelSeenStateStore:(id)arg3 ;
-(void)fetchTrayWithTraySessionID:(id)arg1 ;
-(void)setLoadingReelPKs:(NSMutableSet *)arg1 ;
-(void)addListener:(id)arg1 forUserPKs:(id)arg2 ;
-(void)fetchItemsForReelsWithUserPKs:(id)arg1 ;
-(void)removeListener:(id)arg1 forUserPKs:(id)arg2 ;
-(id)allViewModels;
-(IGUser *)user;
-(void)dealloc;
-(IGService *)service;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

