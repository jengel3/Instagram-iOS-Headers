
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGListCollectionView;

@interface IGChannelHomeCarouselCell : UICollectionViewCell {

	IGListCollectionView* _collectionView;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
+(float)heightFromViewWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGListCollectionView *)collectionView;
@end

