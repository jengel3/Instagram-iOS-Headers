
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol IGExploreCarouselsDataSource, IGExploreCarouselsDelegate;
@class NSMutableArray, NSMutableDictionary, NSString;

@interface IGExploreCarouselsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	id<IGExploreCarouselsDataSource> _dataSource;
	id<IGExploreCarouselsDelegate> _delegate;
	NSMutableArray* _carouselViews;
	NSMutableDictionary* _imageIndicesForCell;

}

@property (nonatomic,retain) NSMutableArray * carouselViews;                                  //@synthesize carouselViews=_carouselViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageIndicesForCell;                       //@synthesize imageIndicesForCell=_imageIndicesForCell - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreCarouselsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreCarouselsDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadIndexesOfCarousel:(id)arg1 ;
-(NSMutableArray *)carouselViews;
-(id)carouselViewAtIndex:(unsigned)arg1 ;
-(void)onCarouselButton:(id)arg1 ;
-(unsigned)indexOfCarouselButton:(id)arg1 ;
-(unsigned)indexOfCollectionView:(id)arg1 ;
-(NSMutableDictionary *)imageIndicesForCell;
-(id)carouselViewForScrollView:(id)arg1 ;
-(void)setCarouselViews:(NSMutableArray *)arg1 ;
-(void)setImageIndicesForCell:(NSMutableDictionary *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<IGExploreCarouselsDataSource>)arg1 ;
-(void)setDelegate:(id<IGExploreCarouselsDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGExploreCarouselsDataSource>)dataSource;
-(id<IGExploreCarouselsDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didMoveToSuperview;
@end

