
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGListCollectionView;

@interface IGHONItemCell : UICollectionViewCell {

	IGListCollectionView* _collectionView;

}

@property (nonatomic,retain) IGListCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
@end

