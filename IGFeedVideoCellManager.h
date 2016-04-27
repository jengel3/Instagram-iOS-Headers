
#import <Instagram/IGFeedVideoCellPlayerDelegate.h>

@protocol IGFeedVideoCell;
@class IGFeedItemVideoView, IGVideo, UICollectionViewCell, UICollectionView, IGCollectionViewVisibility, IGFeedPrebufferingHelper, IGVideoPlaybackConfiguration, NSString;

@interface IGFeedVideoCellManager : NSObject <IGFeedVideoCellPlayerDelegate> {

	char _disallowVideoStart;
	char _feedIsScrolling;
	char _supportsAutoplay;
	IGFeedItemVideoView* _currentlyPlayingVideoView;
	IGVideo* _currentlyPlayingVideo;
	UICollectionViewCell*<IGFeedVideoCell> _currentlyPlayingVideoCell;
	UICollectionView* _collectionView;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedPrebufferingHelper* _prebufferingHelper;
	IGVideoPlaybackConfiguration* _defaultPlaybackConfig;

}

@property (nonatomic,retain) IGFeedItemVideoView * currentlyPlayingVideoView;                               //@synthesize currentlyPlayingVideoView=_currentlyPlayingVideoView - In the implementation block
@property (assign,nonatomic) char disallowVideoStart;                                                       //@synthesize disallowVideoStart=_disallowVideoStart - In the implementation block
@property (assign,nonatomic) char feedIsScrolling;                                                          //@synthesize feedIsScrolling=_feedIsScrolling - In the implementation block
@property (nonatomic,retain) IGVideo * currentlyPlayingVideo;                                               //@synthesize currentlyPlayingVideo=_currentlyPlayingVideo - In the implementation block
@property (nonatomic,retain) UICollectionViewCell*<IGFeedVideoCell> currentlyPlayingVideoCell;              //@synthesize currentlyPlayingVideoCell=_currentlyPlayingVideoCell - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;                       //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) char supportsAutoplay;                                                       //@synthesize supportsAutoplay=_supportsAutoplay - In the implementation block
@property (nonatomic,readonly) IGFeedPrebufferingHelper * prebufferingHelper;                               //@synthesize prebufferingHelper=_prebufferingHelper - In the implementation block
@property (nonatomic,readonly) IGVideoPlaybackConfiguration * defaultPlaybackConfig;                        //@synthesize defaultPlaybackConfig=_defaultPlaybackConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItemVideoView *)currentlyPlayingVideoView;
-(void)stopCurrentVideoWithReason:(int)arg1 ;
-(void)feedVideoCellDidRequestCurrentVideoStopWithReason:(int)arg1 ;
-(void)feedVideoCellDidRequestVideoPlayback:(id)arg1 config:(id)arg2 ;
-(void)setDisallowVideoStart:(char)arg1 ;
-(void)startVideoIfAutoplayCellExists;
-(id)initWithCollectionView:(id)arg1 collectionViewVisibility:(id)arg2 prebufferingHelper:(id)arg3 supportsAutoplay:(char)arg4 defaultPlaybackConfiguration:(id)arg5 ;
-(void)setFeedIsScrolling:(char)arg1 ;
-(void)updatePlayingCellScrollViewIsScrolling:(char)arg1 ;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(UICollectionViewCell*<IGFeedVideoCell>)currentlyPlayingVideoCell;
-(char)autoPlayAllowed;
-(char)startVideoForCellIfApplicable:(id)arg1 ;
-(IGFeedPrebufferingHelper *)prebufferingHelper;
-(id)preferredVideoURLForVideo:(id)arg1 ;
-(char)supportsAutoplay;
-(char)feedIsScrolling;
-(IGVideo *)currentlyPlayingVideo;
-(char)isPlayingVideoInCell:(id)arg1 ;
-(void)startVideoForCell:(id)arg1 config:(id)arg2 ;
-(char)disallowVideoStart;
-(void)setCurrentlyPlayingVideoCell:(UICollectionViewCell*<IGFeedVideoCell>)arg1 ;
-(void)setCurrentlyPlayingVideoView:(IGFeedItemVideoView *)arg1 ;
-(void)setCurrentlyPlayingVideo:(IGVideo *)arg1 ;
-(IGVideoPlaybackConfiguration *)defaultPlaybackConfig;
-(void)stopCurrentVideo;
-(id)videoCellForAutoPlay;
-(char)isFirstPost:(id)arg1 ;
-(void)feedVideoCellDidLoadImage:(id)arg1 ;
-(void)feedVideoCellDidPlayToEnd:(id)arg1 ;
-(void)prepareCellToBeDisplayed:(id)arg1 ;
-(void)prepareVideoForPlayback:(id)arg1 ;
-(void)cleanUpVideoForPlayback:(id)arg1 ;
-(void)stopCurrentVideoCellIfNotVisible;
-(UICollectionView *)collectionView;
@end

