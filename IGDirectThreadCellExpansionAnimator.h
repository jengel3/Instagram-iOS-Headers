

@class UICollectionView, IGDirectThreadTransitionLayout;

@interface IGDirectThreadCellExpansionAnimator : NSObject {

	char _isAnimating;
	UICollectionView* _collectionView;
	IGDirectThreadTransitionLayout* _transitionLayout;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGDirectThreadTransitionLayout * transitionLayout;              //@synthesize transitionLayout=_transitionLayout - In the implementation block
@property (assign,nonatomic) char isAnimating;                                               //@synthesize isAnimating=_isAnimating - In the implementation block
-(void)setIsAnimating:(char)arg1 ;
-(void)animateForSelectionAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IGDirectThreadTransitionLayout *)transitionLayout;
-(void)setTransitionLayout:(IGDirectThreadTransitionLayout *)arg1 ;
-(UICollectionView *)collectionView;
-(char)isAnimating;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
@end

