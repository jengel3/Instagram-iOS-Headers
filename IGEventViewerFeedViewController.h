/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGEventViewerFeedViewControllerDelegate;
@class UICollectionView, IGEventViewerFeedFlowLayout, IGEventViewerCollectionViewDataSource, IGEventViewerCollectionViewCellAnimator, NSIndexPath, NSString;

@interface IGEventViewerFeedViewController : UIViewController <UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {

	UICollectionView* _collectionView;
	id<IGEventViewerFeedViewControllerDelegate> _delegate;
	IGEventViewerFeedFlowLayout* _flowLayout;
	IGEventViewerCollectionViewDataSource* _dataSource;
	IGEventViewerCollectionViewCellAnimator* _cellAnimator;
	NSIndexPath* _centeredIndexPathWhenBeginDragging;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * currentlyCenteredIndexPath; 
@property (nonatomic,readonly) IGFeedItemMediaCell*<IGEventViewerCellType> currentlyCenteredCell; 
@property (nonatomic,__weak,readonly) IGEventViewerFeedFlowLayout * flowLayout;                                //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewDataSource * dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewCellAnimator * cellAnimator;                         //@synthesize cellAnimator=_cellAnimator - In the implementation block
@property (nonatomic,retain) NSIndexPath * centeredIndexPathWhenBeginDragging;                                 //@synthesize centeredIndexPathWhenBeginDragging=_centeredIndexPathWhenBeginDragging - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)currentlyCenteredIndexPath;
-(void)didReceiveScrollViewPanGesture:(id)arg1 ;
-(void)didReceiveTapGesture:(id)arg1 ;
-(IGEventViewerCollectionViewCellAnimator *)cellAnimator;
-(void)setCenteredIndexPathWhenBeginDragging:(NSIndexPath *)arg1 ;
-(void)willScrollToContentOffset:(CGPoint)arg1 ;
-(NSIndexPath *)centeredIndexPathWhenBeginDragging;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)currentlyCenteredCell;
-(id)cellAtIndexPath:(id)arg1 ;
-(void)adjustContentOffsetAfterLoadMoreForIndexPath:(id)arg1 ;
-(void)setDelegate:(id<IGEventViewerFeedViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(IGEventViewerCollectionViewDataSource *)dataSource;
-(id<IGEventViewerFeedViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(IGEventViewerFeedFlowLayout *)flowLayout;
-(void)setupSubviews;
-(id)initWithDataSource:(id)arg1 ;
@end

