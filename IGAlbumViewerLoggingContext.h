

@protocol IGAlbumItemType;
@class NSString, NSArray, IGAlbumViewerViewModel;

@interface IGAlbumViewerLoggingContext : NSObject {

	int _entryPoint;
	NSString* _entryTraySessionID;
	int _entryTrayPosition;
	NSArray* _entryTrayOriginalItems;
	char _launchWasLogged;
	char _didLogExit;
	NSString* _sessionID;
	double _startTimestamp;
	NSArray* _albums;
	IGAlbumViewerViewModel* _currentAlbum;
	unsigned _currentAlbumTrayPosition;
	double _currentAlbumStartTimestamp;
	double _currentAlbumTotalPauseDuration;
	id<IGAlbumItemType> _currentAlbumItem;
	double _currentAlbumItemStartTimestamp;
	double _currentAlbumItemTotalPauseDuration;
	int _sessionAlbumCounter;
	int _sessionMediaCounter;
	int _albumPhotoCounter;
	int _albumVideoCounter;
	double _currentPauseEventStartTimestamp;

}
-(void)logEvent:(id)arg1 withExtraDict:(id)arg2 ;
-(id)currentAlbumItemCommonFields;
-(void)updateAlbumDependentFields:(id)arg1 ;
-(void)updateAlbumItemDependentFields:(id)arg1 ;
-(void)logAlbumPlaybackEntry;
-(void)logTimespentForCurrentAlbumItem;
-(void)logAlbumPlaybackNavigationAction:(int)arg1 ;
-(void)logAlbumSessionSummary;
-(void)logImpressionForCurrentAlbumItem;
-(void)logAlbumComposeMessage;
-(void)logAlbumSendMessageWithMessageText:(id)arg1 ;
-(void)logAlbumMoreAction:(int)arg1 ;
-(id)commonEventDict;
-(void)logNotificationNamesForCurrentAlbumItem:(id)arg1 ;
-(id)initWithEntryPoint:(int)arg1 withTraySessionID:(id)arg2 trayPosition:(int)arg3 originalTrayItems:(id)arg4 ;
-(id)module;
-(id)videoViewLoggerForAlbumItem:(id)arg1 ;
-(void)notifyEntryWithAlbums:(id)arg1 currentAlbum:(id)arg2 albumItem:(id)arg3 ;
-(void)notifyAfterEntryUpdateToAlbums:(id)arg1 currentAlbum:(id)arg2 albumItem:(id)arg3 ;
-(void)notifyChangeForAlbum:(id)arg1 albumItem:(id)arg2 playbackNavigationAction:(int)arg3 ;
-(void)notifyStartShowingCurrentAlbumItem:(id)arg1 ;
-(void)notifyExitWithPlaybackNavigationAction:(int)arg1 ;
-(void)notifyPause;
-(void)notifyUnpause;
-(void)notifyMessageCompose;
-(void)notifyMessageSendWithMessageText:(id)arg1 ;
-(void)notifyMoreAction:(int)arg1 ;
-(double)secondsSinceStart;
-(id)notificationUserInfo;
@end

