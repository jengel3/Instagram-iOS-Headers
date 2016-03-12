
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>

@class IGFeedItemPivotCellDataSource, IGFeedItem, IGPivotCarouselView, UIViewController, NSString;

@interface IGFeedItemPivotCell : UICollectionViewCell <UICollectionViewDelegate> {

	IGFeedItemPivotCellDataSource* _pivotDataSource;
	IGFeedItem* _post;
	IGPivotCarouselView* _carousel;
	UIViewController* _baseController;

}

@property (nonatomic,retain) IGFeedItem * post;                                     //@synthesize post=_post - In the implementation block
@property (nonatomic,readonly) IGPivotCarouselView * carousel;                      //@synthesize carousel=_carousel - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * baseController;              //@synthesize baseController=_baseController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForWidth:(float)arg1 ;
-(IGFeedItem *)post;
-(void)setPost:(IGFeedItem *)arg1 ;
-(void)setupCellWithItem:(id)arg1 underController:(id)arg2 ;
-(void)onCarouselButton:(id)arg1 ;
-(void)setBaseController:(UIViewController *)arg1 ;
-(void)segueToFullPage:(int)arg1 ;
-(UIViewController *)baseController;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)prepareForReuse;
-(IGPivotCarouselView *)carousel;
@end

