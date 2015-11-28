
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol IGExploreJumbotronDataSource, IGExploreJumbotronDelegate;
@class IGMarqueeCollectionView, IGMarqueeLayout, IGMarqueeViewLayoutSpec, CALayer, NSTimer, IGMarqueeTimerProxy, NSString;

@interface IGExploreJumbotronView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	id<IGExploreJumbotronDataSource> _dataSource;
	id<IGExploreJumbotronDelegate> _delegate;
	IGMarqueeCollectionView* _marqueeCollectionView;
	IGMarqueeLayout* _marqueeLayout;
	IGMarqueeViewLayoutSpec* _marqueeLayoutSpec;
	CALayer* _marqueeSeparatorLayer;
	NSTimer* _marqueeTimer;
	IGMarqueeTimerProxy* _timerProxy;

}

@property (assign,nonatomic,__weak) id<IGExploreJumbotronDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreJumbotronDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGMarqueeCollectionView * marqueeCollectionView;                 //@synthesize marqueeCollectionView=_marqueeCollectionView - In the implementation block
@property (nonatomic,retain) IGMarqueeLayout * marqueeLayout;                                 //@synthesize marqueeLayout=_marqueeLayout - In the implementation block
@property (nonatomic,retain) IGMarqueeViewLayoutSpec * marqueeLayoutSpec;                     //@synthesize marqueeLayoutSpec=_marqueeLayoutSpec - In the implementation block
@property (nonatomic,retain) CALayer * marqueeSeparatorLayer;                                 //@synthesize marqueeSeparatorLayer=_marqueeSeparatorLayer - In the implementation block
@property (nonatomic,retain) NSTimer * marqueeTimer;                                          //@synthesize marqueeTimer=_marqueeTimer - In the implementation block
@property (nonatomic,retain) IGMarqueeTimerProxy * timerProxy;                                //@synthesize timerProxy=_timerProxy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimerProxy:(IGMarqueeTimerProxy *)arg1 ;
-(IGMarqueeTimerProxy *)timerProxy;
-(CGPoint)marqueeViewCenter;
-(void)startMarqueePaging;
-(void)cancelMarqueePaging;
-(void)reloadMarquee;
-(char)isMarqueePaging;
-(void)didFireMarqueeTimer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 marqueeLayoutSpec:(id)arg2 ;
-(float)marqueeHeightForWidth:(float)arg1 ;
-(IGMarqueeCollectionView *)marqueeCollectionView;
-(CALayer *)marqueeSeparatorLayer;
-(NSTimer *)marqueeTimer;
-(IGMarqueeViewLayoutSpec *)marqueeLayoutSpec;
-(unsigned)numberOfMarqueeItems;
-(IGMarqueeLayout *)marqueeLayout;
-(id)correctedIndexPathForMarqueeAtIndexPath:(id)arg1 ;
-(void)setMarqueeTimer:(NSTimer *)arg1 ;
-(void)setMarqueeCollectionView:(IGMarqueeCollectionView *)arg1 ;
-(void)setMarqueeLayout:(IGMarqueeLayout *)arg1 ;
-(void)setMarqueeLayoutSpec:(IGMarqueeViewLayoutSpec *)arg1 ;
-(void)setMarqueeSeparatorLayer:(CALayer *)arg1 ;
-(void)setDataSource:(id<IGExploreJumbotronDataSource>)arg1 ;
-(void)setDelegate:(id<IGExploreJumbotronDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGExploreJumbotronDataSource>)dataSource;
-(id<IGExploreJumbotronDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didMoveToSuperview;
@end

