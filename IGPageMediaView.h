
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGItemVisibilityTrackerDelegate.h>
#import <Instagram/IGPhotoCellDelegate.h>
#import <Instagram/IGVideoCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGDismissableOverlay.h>

@protocol IGPageMediaViewDelegate;
@class NSArray, IGFeedItemPageCellState, IGVideoViewLogger, UICollectionView, IGBulkMediaRequestManager, IGItemVisibilityTracker, IGImagePreparer, IGFeedItemVideoView, NSString;

@interface IGPageMediaView : UIView <IGItemVisibilityTrackerDelegate, IGPhotoCellDelegate, IGVideoCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, IGDismissableOverlay> {

	char _onScreen;
	NSArray* _items;
	IGFeedItemPageCellState* _pageCellState;
	float _percentVisible;
	id<IGPageMediaViewDelegate> _delegate;
	IGVideoViewLogger* _videoLogger;
	UICollectionView* _collectionView;
	IGBulkMediaRequestManager* _requestManager;
	IGItemVisibilityTracker* _itemVisibilityTracker;
	IGImagePreparer* _imagePreparer;

}

@property (nonatomic,retain) NSArray * items;                                              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) IGFeedItemPageCellState * pageCellState;                      //@synthesize pageCellState=_pageCellState - In the implementation block
@property (assign,nonatomic) float percentVisible;                                         //@synthesize percentVisible=_percentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<IGPageMediaViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeedItemVideoView * videoView; 
@property (nonatomic,retain) IGVideoViewLogger * videoLogger;                              //@synthesize videoLogger=_videoLogger - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGBulkMediaRequestManager * requestManager;                   //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,retain) IGItemVisibilityTracker * itemVisibilityTracker;              //@synthesize itemVisibilityTracker=_itemVisibilityTracker - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) char onScreen;                              //@synthesize onScreen=_onScreen - In the implementation block
@property (nonatomic,retain) IGImagePreparer * imagePreparer;                              //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPageCellState:(IGFeedItemPageCellState *)arg1 ;
-(IGBulkMediaRequestManager *)requestManager;
-(void)setRequestManager:(IGBulkMediaRequestManager *)arg1 ;
-(void)prefetchMedia;
-(IGImagePreparer *)imagePreparer;
-(void)photoCellDidInitialSingleTap:(id)arg1 ;
-(void)photoCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)photoCellDidDoubleTapToLike:(id)arg1 ;
-(void)photoCellImageDidLoadImage:(id)arg1 ;
-(void)videoCellDidRequestVideoPlayback:(id)arg1 ;
-(void)videoCellDidLoadImage:(id)arg1 ;
-(void)videoCellDidPlayToEnd:(id)arg1 ;
-(void)videoCellDidDoubleTap:(id)arg1 ;
-(float)percentVisible;
-(IGFeedItemPageCellState *)pageCellState;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 ;
-(void)setVideoLogger:(IGVideoViewLogger *)arg1 ;
-(void)setPercentVisible:(float)arg1 ;
-(void)setOnScreen:(char)arg1 ;
-(IGItemVisibilityTracker *)itemVisibilityTracker;
-(void)dismissCurrentPhotoCellOverlayAnimated:(char)arg1 ;
-(void)updateItemVisibility;
-(IGVideoViewLogger *)videoLogger;
-(void)handleIndexingForDidScroll:(id)arg1 ;
-(float)percentVisibleForCell:(id)arg1 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)updateCollectionViewCellTransform:(CGAffineTransform)arg1 ;
-(void)setItemVisibilityTracker:(IGItemVisibilityTracker *)arg1 ;
-(void)setImagePreparer:(IGImagePreparer *)arg1 ;
-(IGFeedItemVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGPageMediaViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGPageMediaViewDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(char)isOnScreen;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

