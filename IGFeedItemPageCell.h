
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPageMediaViewDelegate.h>
#import <Instagram/IGDismissableOverlay.h>
#import <Instagram/IGHeartAnimatable.h>
#import <Instagram/IGFeedVideoCell.h>

@protocol IGFeedItemPageCellDelegate, IGFeedVideoCellPlayerDelegate;
@class IGFeedItem, IGFeedItemPageCellState, IGMediaOverlayIndicator, IGPageMediaView, NSString;

@interface IGFeedItemPageCell : UICollectionViewCell <IGPageMediaViewDelegate, IGDismissableOverlay, IGHeartAnimatable, IGFeedVideoCell> {

	char _hasShownNUX;
	IGFeedItem* _feedItem;
	IGFeedItemPageCellState* _pageCellState;
	float _percentVisible;
	id<IGFeedItemPageCellDelegate> _delegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	IGMediaOverlayIndicator* _nuxOverlayView;
	IGPageMediaView* _pageMediaView;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGFeedItemPageCellState * pageCellState;                              //@synthesize pageCellState=_pageCellState - In the implementation block
@property (assign,nonatomic) float percentVisible;                                                 //@synthesize percentVisible=_percentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPageCellDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;              //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (nonatomic,retain) IGMediaOverlayIndicator * nuxOverlayView;                             //@synthesize nuxOverlayView=_nuxOverlayView - In the implementation block
@property (nonatomic,retain) IGPageMediaView * pageMediaView;                                      //@synthesize pageMediaView=_pageMediaView - In the implementation block
@property (assign,nonatomic) char hasShownNUX;                                                     //@synthesize hasShownNUX=_hasShownNUX - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(void)setPageCellState:(IGFeedItemPageCellState *)arg1 ;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
-(id)contentViewForHeartAnimation;
-(IGPageMediaView *)pageMediaView;
-(IGMediaOverlayIndicator *)nuxOverlayView;
-(char)hasShownNUX;
-(IGFeedItemPageCellState *)pageCellState;
-(void)setHasShownNUX:(char)arg1 ;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 ;
-(void)setPercentVisible:(float)arg1 ;
-(void)requestVideoPlaybackIfNeeded;
-(void)pageMediaViewWillDisplayOverlay:(id)arg1 ;
-(void)pageMediaViewDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)pageMediaViewDidDoubleTap:(id)arg1 ;
-(void)pageMediaViewCurrentVideoCellDidLoadImage:(id)arg1 ;
-(void)pageMediaViewDidRequestVideoPlayback:(id)arg1 ;
-(void)pageMediaView:(id)arg1 didScrollToPageIndex:(int)arg2 ;
-(void)pageMediaViewDidScroll:(id)arg1 ;
-(void)pageMediaView:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)pageMediaView:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)pageMediaView:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)showNUXIfNeeded;
-(void)setNuxOverlayView:(IGMediaOverlayIndicator *)arg1 ;
-(void)setPageMediaView:(IGPageMediaView *)arg1 ;
-(id)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemPageCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemPageCellDelegate>)delegate;
-(char)isSponsored;
@end

