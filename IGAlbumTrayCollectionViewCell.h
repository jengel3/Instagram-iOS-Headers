
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGAlbumTrayCollectionViewCellDelegate;
@class IGListCollectionView;

@interface IGAlbumTrayCollectionViewCell : UICollectionViewCell {

	IGListCollectionView* _collectionView;
	id<IGAlbumTrayCollectionViewCellDelegate> _delegate;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumTrayCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumTrayCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumTrayCollectionViewCellDelegate>)delegate;
-(void)willMoveToWindow:(id)arg1 ;
-(IGListCollectionView *)collectionView;
@end

