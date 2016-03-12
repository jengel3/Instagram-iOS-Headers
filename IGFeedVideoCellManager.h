
#import <Instagram/IGFeedVideoCellPlayerDelegate.h>

@protocol IGFeedVideoCell;
@class IGFeedItemVideoView, UICollectionViewCell, UICollectionView, IGCollectionViewVisibility, IGFeedPrebufferingHelper, NSString;

@interface IGFeedVideoCellManager : NSObject <IGFeedVideoCellPlayerDelegate> {

	char _supportsAutoplay;
	IGFeedItemVideoView* _currentlyPlayingVideoView;
	UICollectionViewCell*<IGFeedVideoCell> _currentlyPlayingVideoCell;
	UICollectionView* _collectionView;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedPrebufferingHelper* _prebufferingHelper;

}

@property (nonatomic,retain) IGFeedItemVideoView * currentlyPlayingVideoView;                               //@synthesize currentlyPlayingVideoView=_currentlyPlayingVideoView - In the implementation block
@property (nonatomic,retain) UICollectionViewCell*<IGFeedVideoCell> currentlyPlayingVideoCell;              //@synthesize currentlyPlayingVideoCell=_currentlyPlayingVideoCell - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;                       //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) char supportsAutoplay;                                                       //@synthesize supportsAutoplay=_supportsAutoplay - In the implementation block
@property (nonatomic,readonly) IGFeedPrebufferingHelper * prebufferingHelper;                               //@synthesize prebufferingHelper=_prebufferingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItemVideoView *)currentlyPlayingVideoView;
-(void)startVideoIfAutoplayCellExists;
-(void)stopCurrentVideoWithReason:(int)arg1 ;
-(void)updatePlayingCellScrollViewIsScrolling:(char)arg1 ;
-(id)initWithCollectionView:(id)arg1 collectionViewVisibility:(id)arg2 prebufferingHelper:(id)arg3 supportsAutoplay:(char)arg4 ;
-(void)startVideoForCell:(id)arg1 startTime:(float)arg2 ;
-(void)feedVideoCellDidRequestVideoPlayback:(id)arg1 ;
-(void)feedVideoCellDidLoadImage:(id)arg1 ;
-(void)feedVideoCellDidPlayToEnd:(id)arg1 ;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(UICollectionViewCell*<IGFeedVideoCell>)currentlyPlayingVideoCell;
-(char)supportsAutoplay;
-(char)startVideoForCellIfApplicable:(id)arg1 ;
-(IGFeedPrebufferingHelper *)prebufferingHelper;
-(void)setCurrentlyPlayingVideoCell:(UICollectionViewCell*<IGFeedVideoCell>)arg1 ;
-(void)setCurrentlyPlayingVideoView:(IGFeedItemVideoView *)arg1 ;
-(void)stopCurrentVideo;
-(id)videoCellForAutoPlay;
-(char)isFirstPost:(id)arg1 ;
-(void)prepareCellToBeDisplayed:(id)arg1 ;
-(void)cleanUpDisplayedCell:(id)arg1 ;
-(void)stopCurrentVideoCellIfNotVisible;
-(UICollectionView *)collectionView;
@end

