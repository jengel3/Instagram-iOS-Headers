
#import <Instagram/IGVideoPlaybackControllerDelegate.h>
#import <Instagram/IGFeedVideoCellPlayerDelegate.h>

@protocol IGFeedVideoCell;
@class IGVideoPlaybackController, IGFeedItemVideoView, IGVideo, UICollectionViewCell, IGFeedVideoViewSession, UICollectionView, IGCollectionViewVisibility, IGFeedPrebufferingHelper, IGVideoPlaybackConfiguration, IGFeedVideoStateManager, NSString;

@interface IGFeedVideoCellManager : NSObject <IGVideoPlaybackControllerDelegate, IGFeedVideoCellPlayerDelegate> {

	char _disallowVideoStart;
	char _feedIsScrolling;
	char _supportsAutoplay;
	IGVideoPlaybackController* _videoPlaybackController;
	IGFeedItemVideoView* _currentlyPlayingVideoView;
	IGVideo* _currentlyPlayingVideo;
	UICollectionViewCell*<IGFeedVideoCell> _currentlyPlayingVideoCell;
	IGFeedVideoViewSession* _currentVideoViewSession50percent;
	IGFeedVideoViewSession* _currentVideoViewSession100percent;
	UICollectionView* _collectionView;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedPrebufferingHelper* _prebufferingHelper;
	IGVideoPlaybackConfiguration* _defaultPlaybackConfig;
	IGFeedVideoStateManager* _videoStateManager;

}

@property (nonatomic,retain) IGVideo * currentlyPlayingVideo;                                               //@synthesize currentlyPlayingVideo=_currentlyPlayingVideo - In the implementation block
@property (nonatomic,retain) IGFeedItemVideoView * currentlyPlayingVideoView;                               //@synthesize currentlyPlayingVideoView=_currentlyPlayingVideoView - In the implementation block
@property (nonatomic,retain) UICollectionViewCell*<IGFeedVideoCell> currentlyPlayingVideoCell;              //@synthesize currentlyPlayingVideoCell=_currentlyPlayingVideoCell - In the implementation block
@property (nonatomic,retain) IGFeedVideoViewSession * currentVideoViewSession50percent;                     //@synthesize currentVideoViewSession50percent=_currentVideoViewSession50percent - In the implementation block
@property (nonatomic,retain) IGFeedVideoViewSession * currentVideoViewSession100percent;                    //@synthesize currentVideoViewSession100percent=_currentVideoViewSession100percent - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;                       //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) char supportsAutoplay;                                                       //@synthesize supportsAutoplay=_supportsAutoplay - In the implementation block
@property (nonatomic,readonly) IGFeedPrebufferingHelper * prebufferingHelper;                               //@synthesize prebufferingHelper=_prebufferingHelper - In the implementation block
@property (nonatomic,readonly) IGVideoPlaybackConfiguration * defaultPlaybackConfig;                        //@synthesize defaultPlaybackConfig=_defaultPlaybackConfig - In the implementation block
@property (nonatomic,readonly) IGFeedVideoStateManager * videoStateManager;                                 //@synthesize videoStateManager=_videoStateManager - In the implementation block
@property (nonatomic,readonly) IGVideoPlaybackController * videoPlaybackController;                         //@synthesize videoPlaybackController=_videoPlaybackController - In the implementation block
@property (assign,nonatomic) char disallowVideoStart;                                                       //@synthesize disallowVideoStart=_disallowVideoStart - In the implementation block
@property (assign,nonatomic) char feedIsScrolling;                                                          //@synthesize feedIsScrolling=_feedIsScrolling - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGVideoPlaybackController *)videoPlaybackController;
-(void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(unsigned)arg3 ;
-(void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didRequestPlaybackItem:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3 ;
-(void)stopCurrentVideoWithReason:(int)arg1 ;
-(char)autoPlayAllowed;
-(id)videoCellForAutoPlay;
-(char)startVideoForCellIfApplicable:(id)arg1 ;
-(char)disallowVideoStart;
-(UICollectionViewCell*<IGFeedVideoCell>)currentlyPlayingVideoCell;
-(char)isPlayingVideoInCell:(id)arg1 ;
-(void)stopCurrentVideoWithReason:(int)arg1 tearDown:(char)arg2 ;
-(id)preferredVideoURLForVideo:(id)arg1 ;
-(void)setCurrentlyPlayingVideoCell:(UICollectionViewCell*<IGFeedVideoCell>)arg1 ;
-(void)setCurrentlyPlayingVideoView:(IGFeedItemVideoView *)arg1 ;
-(void)setCurrentlyPlayingVideo:(IGVideo *)arg1 ;
-(void)setCurrentVideoViewSession50percent:(IGFeedVideoViewSession *)arg1 ;
-(void)setCurrentVideoViewSession100percent:(IGFeedVideoViewSession *)arg1 ;
-(IGFeedVideoStateManager *)videoStateManager;
-(void)timedStopVideo:(id)arg1 ;
-(void)stopVideo:(id)arg1 ;
-(IGVideo *)currentlyPlayingVideo;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(IGFeedVideoViewSession *)currentVideoViewSession50percent;
-(IGFeedVideoViewSession *)currentVideoViewSession100percent;
-(char)hasPausedVideo:(id)arg1 ;
-(IGFeedItemVideoView *)currentlyPlayingVideoView;
-(id)visibleVideoCells;
-(IGFeedPrebufferingHelper *)prebufferingHelper;
-(char)supportsAutoplay;
-(char)feedIsScrolling;
-(char)isFirstPost:(id)arg1 ;
-(IGVideoPlaybackConfiguration *)defaultPlaybackConfig;
-(void)startVideoForCell:(id)arg1 config:(id)arg2 startTime:(float)arg3 ;
-(void)handleFeedVideoCellDidPlayToEnd:(id)arg1 ;
-(char)autoPlayAllowedForVideoCell:(id)arg1 ;
-(void)feedVideoCellDidRequestVideoPlayback:(id)arg1 config:(id)arg2 ;
-(void)feedVideoCellDidRequestCurrentVideoStopWithReason:(int)arg1 ;
-(void)feedVideoCellDidLoadImage:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 collectionViewVisibility:(id)arg2 prebufferingHelper:(id)arg3 supportsAutoplay:(char)arg4 defaultPlaybackConfiguration:(id)arg5 ;
-(void)startVideoIfAutoplayCellExists;
-(void)stopAllVideosWithReason:(int)arg1 ;
-(void)stopCurrentVideoCellIfNotVisible;
-(void)updatePlayingCellScrollViewIsScrolling:(char)arg1 ;
-(void)prepareCellToBeDisplayed:(id)arg1 ;
-(void)prepareVideoForPlayback:(id)arg1 ;
-(void)cleanUpVideoForPlayback:(id)arg1 ;
-(void)setDisallowVideoStart:(char)arg1 ;
-(void)setFeedIsScrolling:(char)arg1 ;
-(void)dealloc;
-(UICollectionView *)collectionView;
-(void)pauseVideo:(id)arg1 ;
@end

