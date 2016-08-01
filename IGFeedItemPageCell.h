
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPageMediaViewDelegate.h>
#import <Instagram/IGPageCellIndicatorControllerDelegate.h>
#import <Instagram/IGHeartAnimatable.h>
#import <Instagram/IGFeedVideoCell.h>
#import <Instagram/IGFeedItemZoomControllerZoomingDelegate.h>

@protocol IGFeedItemPageCellDelegate, IGFeedVideoCellInteractionDelegate, IGFeedItemZoomControllerZoomingDelegate, IGFeedVideoCellPlayerDelegate, IGFeedItemLoggingProviderDelegate;
@class IGFeedItem, IGFeedItemPageCellState, IGMediaOverlayIndicator, IGPageMediaView, IGPageCellIndicatorController, NSString;

@interface IGFeedItemPageCell : UICollectionViewCell <IGPageMediaViewDelegate, IGPageCellIndicatorControllerDelegate, IGHeartAnimatable, IGFeedVideoCell, IGFeedItemZoomControllerZoomingDelegate> {

	IGFeedItem* _feedItem;
	IGFeedItemPageCellState* _pageCellState;
	float _percentVisible;
	id<IGFeedItemPageCellDelegate> _delegate;
	id<IGFeedVideoCellInteractionDelegate> _interactionDelegate;
	id<IGFeedItemZoomControllerZoomingDelegate> _zoomingDelegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	IGMediaOverlayIndicator* _indicatorView;
	IGPageMediaView* _pageMediaView;
	IGPageCellIndicatorController* _indicatorController;

}

@property (nonatomic,retain) IGMediaOverlayIndicator * indicatorView;                                         //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) IGPageMediaView * pageMediaView;                                                 //@synthesize pageMediaView=_pageMediaView - In the implementation block
@property (nonatomic,readonly) IGPageCellIndicatorController * indicatorController;                           //@synthesize indicatorController=_indicatorController - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                           //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGFeedItemPageCellState * pageCellState;                                         //@synthesize pageCellState=_pageCellState - In the implementation block
@property (assign,nonatomic) float percentVisible;                                                            //@synthesize percentVisible=_percentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPageCellDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellInteractionDelegate> interactionDelegate;               //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomControllerZoomingDelegate> zoomingDelegate;              //@synthesize zoomingDelegate=_zoomingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;                         //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;                    //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setPageCellState:(IGFeedItemPageCellState *)arg1 ;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
-(void)handleDidBeginPlaying;
-(void)handleDidPause;
-(void)handleDidEndPlaying;
-(void)handleDidRequestPlayback;
-(id)contentViewForHeartAnimation;
-(void)setPercentVisible:(float)arg1 ;
-(void)showNUXIfNeededWithPercentVisible:(float)arg1 ;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 ;
-(IGPageMediaView *)pageMediaView;
-(IGPageCellIndicatorController *)indicatorController;
-(IGFeedItemPageCellState *)pageCellState;
-(void)requestVideoPlayback;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(void)feedItemZoomControllerDetectedZoom:(id)arg1 withGestureRecognizer:(id)arg2 ;
-(void)pageMediaViewWillDisplayOverlay:(id)arg1 ;
-(void)pageMediaViewDidInitialSingleTap:(id)arg1 ;
-(void)pageMediaViewDidDoubleTap:(id)arg1 ;
-(void)pageMediaViewDidSingleTap:(id)arg1 ;
-(void)pageMediaViewCurrentVideoCellDidLoadImage:(id)arg1 ;
-(void)pageMediaView:(id)arg1 didToggleVideoAudio:(char)arg2 ;
-(void)pageMediaView:(id)arg1 willScrollToPageIndex:(int)arg2 fromIndex:(int)arg3 ;
-(void)pageMediaView:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3 ;
-(void)pageMediaViewDidScroll:(id)arg1 ;
-(void)pageMediaView:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)pageMediaView:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)pageMediaView:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)pageCellIndicatorControllerDidShowNUX:(id)arg1 ;
-(void)setPageMediaView:(IGPageMediaView *)arg1 ;
-(void)setZoomingDelegate:(id<IGFeedItemZoomControllerZoomingDelegate>)arg1 ;
-(id<IGFeedItemZoomControllerZoomingDelegate>)zoomingDelegate;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(id)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemPageCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemPageCellDelegate>)delegate;
-(void)setInteractionDelegate:(id<IGFeedVideoCellInteractionDelegate>)arg1 ;
-(id<IGFeedVideoCellInteractionDelegate>)interactionDelegate;
-(IGMediaOverlayIndicator *)indicatorView;
-(void)setIndicatorView:(IGMediaOverlayIndicator *)arg1 ;
-(char)isSponsored;
@end

