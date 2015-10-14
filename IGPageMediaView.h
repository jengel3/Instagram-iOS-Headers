/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:58 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGItemVisibilityTrackerDelegate.h>

@protocol IGPageMediaViewDelegate;
@class NSArray, UICollectionView, IGMediaActionView, IGBulkMediaRequestManager, IGItemVisibilityTracker, IGImagePreparer, NSString;

@interface IGPageMediaView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, IGFeedPhotoViewDelegate, IGItemVisibilityTrackerDelegate> {

	char _showActionAtEndOfScrollView;
	char _didNotifyDisplayEvent;
	char _onScreen;
	char _actionEngaged;
	NSArray* _items;
	float _percentVisible;
	id<IGPageMediaViewDelegate> _delegate;
	UICollectionView* _collectionView;
	IGMediaActionView* _actionView;
	IGBulkMediaRequestManager* _requestManager;
	IGItemVisibilityTracker* _itemVisibilityTracker;
	float _currentActionEngageOffset;
	IGImagePreparer* _imagePreparer;

}

@property (nonatomic,retain) NSArray * items;                                              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) char showActionAtEndOfScrollView;                             //@synthesize showActionAtEndOfScrollView=_showActionAtEndOfScrollView - In the implementation block
@property (assign,nonatomic) float percentVisible;                                         //@synthesize percentVisible=_percentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<IGPageMediaViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int currentItemIndex; 
@property (nonatomic,retain) UICollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGMediaActionView * actionView;                               //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) IGBulkMediaRequestManager * requestManager;                   //@synthesize requestManager=_requestManager - In the implementation block
@property (assign,nonatomic) char didNotifyDisplayEvent;                                   //@synthesize didNotifyDisplayEvent=_didNotifyDisplayEvent - In the implementation block
@property (nonatomic,retain) IGItemVisibilityTracker * itemVisibilityTracker;              //@synthesize itemVisibilityTracker=_itemVisibilityTracker - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) char onScreen;                              //@synthesize onScreen=_onScreen - In the implementation block
@property (assign,nonatomic) float currentActionEngageOffset;                              //@synthesize currentActionEngageOffset=_currentActionEngageOffset - In the implementation block
@property (assign,getter=isActionEngaged,nonatomic) char actionEngaged;                    //@synthesize actionEngaged=_actionEngaged - In the implementation block
@property (nonatomic,retain) IGImagePreparer * imagePreparer;                              //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGBulkMediaRequestManager *)requestManager;
-(void)setRequestManager:(IGBulkMediaRequestManager *)arg1 ;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(int)currentItemIndex;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 ;
-(void)setShowActionAtEndOfScrollView:(char)arg1 ;
-(void)setPercentVisible:(float)arg1 ;
-(float)percentVisible;
-(void)setOnScreen:(char)arg1 ;
-(IGItemVisibilityTracker *)itemVisibilityTracker;
-(char)showActionAtEndOfScrollView;
-(float)actionViewContentOffset;
-(void)handleDidEndScrolling:(id)arg1 ;
-(void)updateItemVisibility;
-(void)prefetchMedia;
-(IGImagePreparer *)imagePreparer;
-(void)setActionEngaged:(char)arg1 ;
-(char)didNotifyDisplayEvent;
-(void)setDidNotifyDisplayEvent:(char)arg1 ;
-(char)isActionEngaged;
-(void)setCurrentActionEngageOffset:(float)arg1 ;
-(float)currentActionEngageOffset;
-(void)updateCollectionViewCellTransform:(CGAffineTransform)arg1 ;
-(float)percentVisibleForCell:(id)arg1 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)setItemVisibilityTracker:(IGItemVisibilityTracker *)arg1 ;
-(void)setImagePreparer:(IGImagePreparer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGPageMediaViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<IGPageMediaViewDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(char)isOnScreen;
-(IGMediaActionView *)actionView;
-(void)setActionView:(IGMediaActionView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

