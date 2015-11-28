
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGCarouselCellCascadeDataSource.h>
#import <Instagram/IGTimerProxyObjectType.h>

@protocol IGExploreCarouselsDataSource, IGExploreCarouselsDelegate;
@class NSMutableArray, NSMutableDictionary, NSTimer, IGTimerProxy, NSString;

@interface IGExploreCarouselsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGCarouselCellCascadeDataSource, IGTimerProxyObjectType> {

	id<IGExploreCarouselsDataSource> _dataSource;
	id<IGExploreCarouselsDelegate> _delegate;
	NSMutableArray* _carouselViews;
	NSMutableDictionary* _imageIndicesForCell;
	NSTimer* _cascadeTimer;
	IGTimerProxy* _timerProxy;

}

@property (assign,nonatomic,__weak) id<IGExploreCarouselsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreCarouselsDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * carouselViews;                                  //@synthesize carouselViews=_carouselViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageIndicesForCell;                       //@synthesize imageIndicesForCell=_imageIndicesForCell - In the implementation block
@property (nonatomic,retain) NSTimer * cascadeTimer;                                          //@synthesize cascadeTimer=_cascadeTimer - In the implementation block
@property (nonatomic,retain) IGTimerProxy * timerProxy;                                       //@synthesize timerProxy=_timerProxy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimerProxy:(IGTimerProxy *)arg1 ;
-(IGTimerProxy *)timerProxy;
-(void)didFireTimer:(id)arg1 ;
-(void)reloadIndexesOfCarousel:(id)arg1 ;
-(void)cascadeImageForCarouselCell:(id)arg1 ;
-(void)cancelTrendingCascade;
-(NSMutableArray *)carouselViews;
-(id)carouselViewAtIndex:(unsigned)arg1 ;
-(char)isCarouselCascading;
-(void)startCascadeTimer;
-(NSTimer *)cascadeTimer;
-(void)setCascadeTimer:(NSTimer *)arg1 ;
-(void)onCarouselButton:(id)arg1 ;
-(unsigned)indexOfCarouselButton:(id)arg1 ;
-(unsigned)indexOfCollectionView:(id)arg1 ;
-(NSMutableDictionary *)imageIndicesForCell;
-(id)carouselViewForScrollView:(id)arg1 ;
-(void)setCarouselViews:(NSMutableArray *)arg1 ;
-(void)setImageIndicesForCell:(NSMutableDictionary *)arg1 ;
-(void)setDataSource:(id<IGExploreCarouselsDataSource>)arg1 ;
-(void)setDelegate:(id<IGExploreCarouselsDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGExploreCarouselsDataSource>)dataSource;
-(id<IGExploreCarouselsDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didMoveToSuperview;
@end

