

@protocol OS_dispatch_queue;
@class NSObject, IGRaindropActivitySession, NSMutableArray, NSString;

@interface IGAnalyticsRaindrop : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IGRaindropActivitySession* _currentActivitySession;
	unsigned long long _currentActivitySessionTimestamp;
	id _subscriptionDidBecomeActiveNotification;
	NSMutableArray* _loggedEventDictionaries;
	NSString* _deviceID;
	NSString* _deviceSoftwareVersion;
	NSString* _deviceHardwareVersion;
	NSString* _filePath;
	int _toViewType;
	int _toViewSubType;
	int _eventCount;
	long long _beaconCount;
	/*^block*/id _extractUserInfo;
	NSString* _appID;
	NSString* _appVersion;

}

@property (copy) id extractUserInfo;                 //@synthesize extractUserInfo=_extractUserInfo - In the implementation block
@property (copy) NSString * appID;                   //@synthesize appID=_appID - In the implementation block
@property (copy) NSString * appVersion;              //@synthesize appVersion=_appVersion - In the implementation block
+(id)sharedInstance;
-(void)setExtractUserInfo:(id)arg1 ;
-(void)logRaindropCommentEventWithNavState:(id)arg1 mediaId:(id)arg2 mediaOwnerId:(id)arg3 commentText:(id)arg4 ;
-(void)logRaindropMarqueeClickEventWithNavState:(id)arg1 sectionType:(int)arg2 marquee:(id)arg3 sectionNumber:(id)arg4 position:(id)arg5 algorithm:(id)arg6 clusterKey:(id)arg7 targetId:(id)arg8 ;
-(void)logRaindropMarqueeImpressionEventWithNavState:(id)arg1 sectionType:(int)arg2 marquee:(id)arg3 sectionNumber:(id)arg4 position:(id)arg5 algorithm:(id)arg6 viewed:(char)arg7 subImpression:(char)arg8 clusterKey:(id)arg9 targetId:(id)arg10 ;
-(void)logRaindropTagImpressionEventWithNavState:(id)arg1 sectionType:(int)arg2 tag:(id)arg3 sectionNumber:(id)arg4 position:(id)arg5 algorithm:(id)arg6 viewed:(char)arg7 subImpression:(char)arg8 clusterKey:(id)arg9 targetId:(id)arg10 ;
-(void)logRaindropPlaceImpressionEventWithNavState:(id)arg1 place:(id)arg2 placeId:(id)arg3 sectionNumber:(id)arg4 position:(id)arg5 algorithm:(id)arg6 viewed:(char)arg7 subImpression:(char)arg8 clusterKey:(id)arg9 targetId:(id)arg10 ;
-(void)logRaindropTagClickEventWithNavState:(id)arg1 sectionType:(int)arg2 tag:(id)arg3 sectionNumber:(id)arg4 position:(id)arg5 algorithm:(id)arg6 clusterKey:(id)arg7 targetId:(id)arg8 ;
-(void)logRaindropPlaceClickEventWithNavState:(id)arg1 place:(id)arg2 placeId:(id)arg3 sectionNumber:(id)arg4 position:(id)arg5 algorithm:(id)arg6 clusterKey:(id)arg7 targetId:(id)arg8 ;
-(void)logRaindropUserImpressionEventWithNavState:(id)arg1 user:(id)arg2 sectionNumber:(id)arg3 position:(id)arg4 algorithm:(id)arg5 viewed:(char)arg6 subImpression:(char)arg7 clusterKey:(id)arg8 targetId:(id)arg9 ;
-(void)logRaindropUserClickEventWithNavState:(id)arg1 user:(id)arg2 sectionNumber:(id)arg3 position:(id)arg4 algorithm:(id)arg5 clusterKey:(id)arg6 targetId:(id)arg7 ;
-(void)logFollowEventWithNavState:(id)arg1 isFollow:(char)arg2 targetUserId:(id)arg3 position:(id)arg4 algorithm:(id)arg5 clickPoint:(id)arg6 sectionNumber:(id)arg7 clusterKey:(id)arg8 targetId:(id)arg9 ;
-(void)logRaindropPhotoImpressionWithNavState:(id)arg1 sectionType:(int)arg2 media:(id)arg3 sectionNumber:(id)arg4 algorithm:(id)arg5 viewed:(char)arg6 subImpression:(char)arg7 position:(id)arg8 clusterKey:(id)arg9 targetId:(id)arg10 ;
-(void)logRaindropPhotoClickWithNavState:(id)arg1 sectionType:(int)arg2 media:(id)arg3 sectionNumber:(id)arg4 position:(id)arg5 algorithm:(id)arg6 clusterKey:(id)arg7 rankToken:(id)arg8 targetId:(id)arg9 ;
-(void)logRaindropHidePersonWithNavState:(id)arg1 targetUser:(id)arg2 sectionNumber:(id)arg3 position:(id)arg4 algorithm:(id)arg5 clusterkey:(id)arg6 targetId:(id)arg7 ;
-(void)logRaindropShareMediaURLWithNavState:(id)arg1 mediaId:(id)arg2 mediaOwnerId:(id)arg3 ;
-(void)clusterBrowsing:(id)arg1 navState:(id)arg2 ;
-(void)logRaindropViewHashtagPageItemWithNavState:(id)arg1 hashtagText:(id)arg2 mediaId:(id)arg3 mediaOwnerId:(id)arg4 ;
-(void)logRaindropViewSwitchWithToViewType:(int)arg1 toViewSubType:(int)arg2 ;
-(void)logRaindropViewSwitchWithNavState:(id)arg1 fromViewType:(int)arg2 fromViewSubType:(int)arg3 clickPoint:(id)arg4 ;
-(void)logRaindropViewPlacePageItemWithavState:(id)arg1 mediaId:(id)arg2 mediaOwnerId:(id)arg3 place:(id)arg4 ;
-(void)logRaindropExploreSearchViewResultWithNavState:(id)arg1 searchQueryText:(id)arg2 searchType:(int)arg3 selectedUserId:(id)arg4 selectedHashtag:(id)arg5 selectedPlaceId:(id)arg6 numOfViewedResults:(id)arg7 localResult:(char)arg8 cachedSearchedResult:(char)arg9 selectedPlace:(id)arg10 resultsList:(id)arg11 requestId:(id)arg12 selectedPosition:(id)arg13 ;
-(void)logRaindropSearchEventWithNavState:(id)arg1 searchQueryText:(id)arg2 wasSearchButtonTapped:(char)arg3 searchType:(int)arg4 rttInMillis:(id)arg5 ;
-(void)logRaindropAddLocationEventWithNavState:(id)arg1 searchSessionId:(id)arg2 ;
-(void)logRaindropLoadLocationResultsEventWithNavState:(id)arg1 resultList:(id)arg2 searchSessionId:(id)arg3 ;
-(void)logRaindropCancelLocationResultsEventWithNavState:(id)arg1 resultList:(id)arg2 searchSessionId:(id)arg3 ;
-(void)logRaindropTapLocationResultEventWithNavState:(id)arg1 selectedPosition:(id)arg2 placeId:(id)arg3 resultList:(id)arg4 searchSessionId:(id)arg5 ;
-(void)logRaindropSearchCancelEventWithNavState:(id)arg1 requestId:(id)arg2 resultsList:(id)arg3 searchType:(int)arg4 ;
-(void)logRaindropSearchAbandonWithNavState:(id)arg1 isTypeahead:(char)arg2 nullState:(char)arg3 searchQueryText:(id)arg4 ;
-(void)logRaindropSearchQueryWithNavState:(id)arg1 isTypeahead:(char)arg2 nullState:(char)arg3 searchQueryText:(id)arg4 rttInmillis:(id)arg5 totalResults:(id)arg6 numberOfLocalResults:(id)arg7 impression:(id)arg8 ;
-(void)logRaindropSearchBeginEventWithNavState:(id)arg1 isTypeAhead:(char)arg2 ;
-(void)logRaindropSearchTypingWithNavState:(id)arg1 isTypeahead:(char)arg2 nullState:(char)arg3 searchQueries:(id)arg4 ;
-(void)logRaindropSearchBackspaceWithNavState:(id)arg1 isTypeahead:(char)arg2 searchQueryText:(id)arg3 rttInMillis:(id)arg4 ;
-(void)logRaindropLikeEventWithNavState:(id)arg1 isLike:(char)arg2 mediaId:(id)arg3 isDoubleTap:(char)arg4 mediaOwnerId:(id)arg5 isFollow:(char)arg6 algorithm:(id)arg7 position:(id)arg8 rankToken:(id)arg9 targetId:(id)arg10 ;
-(void)logRaindropSharePersonURLWithNavState:(id)arg1 userId:(id)arg2 ;
-(void)logRaindropAppLaunchEvent;
-(void)_updateActivitySession;
-(void)_writeGrobalBeaconToFile;
-(void)_readGlobalBeaconFromFile;
-(id)extractUserInfo;
-(void)addLoggedEvent:(id)arg1 ;
-(void)_logRaindropBeaconEvent;
-(id)_newLogEntryWithNavState:(id)arg1 event:(id)arg2 ;
-(void)_logRaindropEntry:(id)arg1 ;
-(void)logRaindropViewPopularEventWithNavState:(id)arg1 mediaId:(id)arg2 mediaOwnerId:(id)arg3 rankToken:(id)arg4 ;
-(void)logRaindropCreateCustomLocationEventWithNavState:(id)arg1 newLocationName:(id)arg2 searchSessionId:(id)arg3 ;
-(id)getLoggedEvents;
-(void)dealloc;
-(id)init;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appID;
@end

