
#import <Instagram/IGVideoPlaybackControllerDelegate.h>
#import <Instagram/IGFeedVideoCellPlayerDelegate.h>

@protocol IGFeedVideoCell;
@class IGVideoPlaybackController, IGFeedItemVideoView, IGVideo, UICollectionViewCell, IGFeedVideoViewSession, UICollectionView, IGCollectionViewVisibility, IGFeedPrebufferingHelper, IGVideoPlaybackConfiguration, NSMutableDictionary, NSString;

@interface IGFeedVideoCellManager : NSObject <IGVideoPlaybackControllerDelegate, IGFeedVideoCellPlayerDelegate> {

	char _disallowVideoStart;
	char _feedIsScrolling;
	char _supportsAutoplay;
	IGVideoPlaybackController* _videoPlaybackController;
	IGFeedItemVideoView* _currentlyPlayingVideoView;
	IGVideo* _currentlyPlayingVideo;
	UICollectionViewCell*<IGFeedVideoCell> _currentlyPlayingVideoCell;
	IGFeedVideoViewSession* _currentVideoViewSession;
	UICollectionView* _collectionView;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedPrebufferingHelper* _prebufferingHelper;
	IGVideoPlaybackConfiguration* _defaultPlaybackConfig;
	NSMutableDictionary* _videoPlaybackStartTimes;

}

@property (nonatomic,retain) IGVideo * currentlyPlayingVideo;                                               //@synthesize currentlyPlayingVideo=_currentlyPlayingVideo - In the implementation block
@property (nonatomic,retain) IGFeedItemVideoView * currentlyPlayingVideoView;                               //@synthesize currentlyPlayingVideoView=_currentlyPlayingVideoView - In the implementation block
@property (nonatomic,retain) UICollectionViewCell*<IGFeedVideoCell> currentlyPlayingVideoCell;              //@synthesize currentlyPlayingVideoCell=_currentlyPlayingVideoCell - In the implementation block
@property (nonatomic,retain) IGFeedVideoViewSession * currentVideoViewSession;                              //@synthesize currentVideoViewSession=_currentVideoViewSession - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;                       //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) char supportsAutoplay;                                                       //@synthesize supportsAutoplay=_supportsAutoplay - In the implementation block
@property (nonatomic,readonly) IGFeedPrebufferingHelper * prebufferingHelper;                               //@synthesize prebufferingHelper=_prebufferingHelper - In the implementation block
@property (nonatomic,readonly) IGVideoPlaybackConfiguration * defaultPlaybackConfig;                        //@synthesize defaultPlaybackConfig=_defaultPlaybackConfig - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * videoPlaybackStartTimes;                               //@synthesize videoPlaybackStartTimes=_videoPlaybackStartTimes - In the implementation block
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
-(void)feedVideoCellDidRequestCurrentVideoStopWithReason:(int)arg1 ;
-(void)feedVideoCellDidRequestVideoPlayback:(id)arg1 config:(id)arg2 ;
-(char)autoPlayAllowed;
-(id)videoCellForAutoPlay;
-(char)startVideoForCellIfApplicable:(id)arg1 ;
-(char)disallowVideoStart;
-(UICollectionViewCell*<IGFeedVideoCell>)currentlyPlayingVideoCell;
-(char)isPlayingVideoInCell:(id)arg1 ;
-(id)preferredVideoURLForVideo:(id)arg1 ;
-(void)setCurrentlyPlayingVideoCell:(UICollectionViewCell*<IGFeedVideoCell>)arg1 ;
-(void)setCurrentlyPlayingVideoView:(IGFeedItemVideoView *)arg1 ;
-(void)setCurrentlyPlayingVideo:(IGVideo *)arg1 ;
-(void)setCurrentVideoViewSession:(IGFeedVideoViewSession *)arg1 ;
-(void)stopCurrentVideo;
-(IGFeedItemVideoView *)currentlyPlayingVideoView;
-(NSMutableDictionary *)videoPlaybackStartTimes;
-(IGVideo *)currentlyPlayingVideo;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(IGFeedVideoViewSession *)currentVideoViewSession;
-(IGFeedPrebufferingHelper *)prebufferingHelper;
-(char)supportsAutoplay;
-(char)feedIsScrolling;
-(char)isFirstPost:(id)arg1 ;
-(id)getPlaybackStartTimeForKey:(id)arg1 ;
-(IGVideoPlaybackConfiguration *)defaultPlaybackConfig;
-(void)startVideoForCell:(id)arg1 config:(id)arg2 startTime:(float)arg3 ;
-(void)handleFeedVideoCellDidPlayToEnd:(id)arg1 ;
-(char)autoPlayAllowedForVideoCell:(id)arg1 ;
-(void)feedVideoCellDidLoadImage:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 collectionViewVisibility:(id)arg2 prebufferingHelper:(id)arg3 supportsAutoplay:(char)arg4 defaultPlaybackConfiguration:(id)arg5 ;
-(void)startVideoIfAutoplayCellExists;
-(void)stopCurrentVideoCellIfNotVisible;
-(void)updatePlayingCellScrollViewIsScrolling:(char)arg1 ;
-(void)prepareCellToBeDisplayed:(id)arg1 ;
-(void)prepareVideoForPlayback:(id)arg1 ;
-(void)cleanUpVideoForPlayback:(id)arg1 ;
-(void)setDisallowVideoStart:(char)arg1 ;
-(void)setFeedIsScrolling:(char)arg1 ;
-(UICollectionView *)collectionView;
@end

