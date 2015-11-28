
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionView.h>

@interface IGCollectionView : UICollectionView {

	char _isBatchUpdating;

}

@property (assign,nonatomic) char isBatchUpdating;              //@synthesize isBatchUpdating=_isBatchUpdating - In the implementation block
-(void)setIsBatchUpdating:(char)arg1 ;
-(char)isBatchUpdating;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

