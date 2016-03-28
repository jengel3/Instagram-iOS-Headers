
#import <Instagram/IGUserSessionClearableObject.h>

@class IGUser, IGNonCurrentUserDefaults, IGAutocompleteHashtagsStore, IGAutocompletePlacesStore, IGAutocompleteUsersStore, IGBlendedSearchRecentItemsOrderStore, IGDirectRecipientManager, IGDirectThreadStore, IGFlaggedCommentLedger, IGHiddenSearchItemStore, IGMediaUploadManager, IGRealtimeClient, IGServiceManager, IGVideoRenderQueue, IGWebViewProcessPoolContainer, NSString;

@interface IGUserSession : NSObject <IGUserSessionClearableObject> {

	IGUser* _user;
	IGNonCurrentUserDefaults* _nonCurrentUserDefaults;
	IGAutocompleteHashtagsStore* _autocompleteHashtagsStore;
	IGAutocompletePlacesStore* _autocompletePlacesStore;
	IGAutocompleteUsersStore* _autocompleteUsersStore;
	IGBlendedSearchRecentItemsOrderStore* _blendedSearchRecentItemsOrderStore;
	IGDirectRecipientManager* _directRecipientManager;
	IGDirectThreadStore* _directThreadStore;
	IGFlaggedCommentLedger* _flaggedCommentLedger;
	IGHiddenSearchItemStore* _frequentHiddenSearchItemStore;
	IGMediaUploadManager* _mediaUploadManager;
	IGRealtimeClient* _realtimeClient;
	IGHiddenSearchItemStore* _recentHiddenSearchItemStore;
	IGServiceManager* _serviceManager;
	IGVideoRenderQueue* _videoRenderQueue;
	IGWebViewProcessPoolContainer* _webViewProcessPool;
	unsigned _backgroundTask;

}

@property (nonatomic,retain) IGUser * user;                                                                          //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * nonCurrentUserDefaults;                                      //@synthesize nonCurrentUserDefaults=_nonCurrentUserDefaults - In the implementation block
@property (nonatomic,retain) IGAutocompleteHashtagsStore * autocompleteHashtagsStore;                                //@synthesize autocompleteHashtagsStore=_autocompleteHashtagsStore - In the implementation block
@property (nonatomic,retain) IGAutocompletePlacesStore * autocompletePlacesStore;                                    //@synthesize autocompletePlacesStore=_autocompletePlacesStore - In the implementation block
@property (nonatomic,retain) IGAutocompleteUsersStore * autocompleteUsersStore;                                      //@synthesize autocompleteUsersStore=_autocompleteUsersStore - In the implementation block
@property (nonatomic,retain) IGBlendedSearchRecentItemsOrderStore * blendedSearchRecentItemsOrderStore;              //@synthesize blendedSearchRecentItemsOrderStore=_blendedSearchRecentItemsOrderStore - In the implementation block
@property (nonatomic,retain) IGDirectRecipientManager * directRecipientManager;                                      //@synthesize directRecipientManager=_directRecipientManager - In the implementation block
@property (nonatomic,retain) IGDirectThreadStore * directThreadStore;                                                //@synthesize directThreadStore=_directThreadStore - In the implementation block
@property (nonatomic,retain) IGFlaggedCommentLedger * flaggedCommentLedger;                                          //@synthesize flaggedCommentLedger=_flaggedCommentLedger - In the implementation block
@property (nonatomic,retain) IGHiddenSearchItemStore * frequentHiddenSearchItemStore;                                //@synthesize frequentHiddenSearchItemStore=_frequentHiddenSearchItemStore - In the implementation block
@property (nonatomic,retain) IGMediaUploadManager * mediaUploadManager;                                              //@synthesize mediaUploadManager=_mediaUploadManager - In the implementation block
@property (nonatomic,retain) IGRealtimeClient * realtimeClient;                                                      //@synthesize realtimeClient=_realtimeClient - In the implementation block
@property (nonatomic,retain) IGHiddenSearchItemStore * recentHiddenSearchItemStore;                                  //@synthesize recentHiddenSearchItemStore=_recentHiddenSearchItemStore - In the implementation block
@property (nonatomic,retain) IGServiceManager * serviceManager;                                                      //@synthesize serviceManager=_serviceManager - In the implementation block
@property (nonatomic,retain) IGVideoRenderQueue * videoRenderQueue;                                                  //@synthesize videoRenderQueue=_videoRenderQueue - In the implementation block
@property (nonatomic,retain) IGWebViewProcessPoolContainer * webViewProcessPool;                                     //@synthesize webViewProcessPool=_webViewProcessPool - In the implementation block
@property (assign,nonatomic) unsigned backgroundTask;                                                                //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)inMemoryStoresThatCacheUserData;
+(id)storesThatCacheUserData;
-(IGBlendedSearchRecentItemsOrderStore *)blendedSearchRecentItemsOrderStore;
-(void)setBlendedSearchRecentItemsOrderStore:(IGBlendedSearchRecentItemsOrderStore *)arg1 ;
-(IGAutocompleteHashtagsStore *)autocompleteHashtagsStore;
-(IGAutocompleteUsersStore *)autocompleteUsersStore;
-(void)willSwitchUsers;
-(void)willLogOut;
-(IGDirectThreadStore *)directThreadStore;
-(IGFlaggedCommentLedger *)flaggedCommentLedger;
-(IGDirectRecipientManager *)directRecipientManager;
-(IGRealtimeClient *)realtimeClient;
-(IGMediaUploadManager *)mediaUploadManager;
-(IGAutocompletePlacesStore *)autocompletePlacesStore;
-(IGWebViewProcessPoolContainer *)webViewProcessPool;
-(IGHiddenSearchItemStore *)frequentHiddenSearchItemStore;
-(IGHiddenSearchItemStore *)recentHiddenSearchItemStore;
-(void)instantiateUserSessionClearableObjects;
-(void)willLogOutPrivate:(id)arg1 ;
-(IGNonCurrentUserDefaults *)nonCurrentUserDefaults;
-(void)archiveInBackground;
-(id)userSessionClearableObjectInstances;
-(unsigned)backgroundTask;
-(void)setNonCurrentUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)setAutocompleteHashtagsStore:(IGAutocompleteHashtagsStore *)arg1 ;
-(void)setAutocompletePlacesStore:(IGAutocompletePlacesStore *)arg1 ;
-(void)setAutocompleteUsersStore:(IGAutocompleteUsersStore *)arg1 ;
-(void)setDirectRecipientManager:(IGDirectRecipientManager *)arg1 ;
-(void)setDirectThreadStore:(IGDirectThreadStore *)arg1 ;
-(void)setFlaggedCommentLedger:(IGFlaggedCommentLedger *)arg1 ;
-(void)setFrequentHiddenSearchItemStore:(IGHiddenSearchItemStore *)arg1 ;
-(void)setMediaUploadManager:(IGMediaUploadManager *)arg1 ;
-(void)setRealtimeClient:(IGRealtimeClient *)arg1 ;
-(void)setRecentHiddenSearchItemStore:(IGHiddenSearchItemStore *)arg1 ;
-(IGVideoRenderQueue *)videoRenderQueue;
-(void)setVideoRenderQueue:(IGVideoRenderQueue *)arg1 ;
-(void)setWebViewProcessPool:(IGWebViewProcessPoolContainer *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)dealloc;
-(void)setServiceManager:(IGServiceManager *)arg1 ;
-(void)setBackgroundTask:(unsigned)arg1 ;
-(IGServiceManager *)serviceManager;
@end

